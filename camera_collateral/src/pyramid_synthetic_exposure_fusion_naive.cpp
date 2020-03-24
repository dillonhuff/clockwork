#include "conv_3x3.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_11_cache {
	// Capacity: 2529
	// # of read delays: 9
	fifo<hw_uint<32> , 2529> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_11_cache bright_bright_update_0_write0_merged_banks_11;
};



inline void bright_bright_update_0_write0_write(hw_uint<32> & bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_11.push(bright_bright_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2528) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1265) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2527) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1264) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2526) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((1266 + d0)) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1263) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_1_update_0[d0, d1] -> bright_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek(/* Needs general delay string */ 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_0_update_0[d0, d1] -> bright_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1249 - d0 >= 0 && d1 >= 0 && 1249 - d1 >= 0) ? (2528) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_weights_update_0[d0, d1] -> bright_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek(/* Needs general delay string */ 0);
	return value_bright_bright_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_1_update_0_read
//	bright_gauss_blur_1_rd0
//	bright_gauss_blur_1_rd1
//	bright_gauss_blur_1_rd2
//	bright_gauss_blur_1_rd3
//	bright_gauss_blur_1_rd4
//	bright_gauss_blur_1_rd5
//	bright_gauss_blur_1_rd6
//	bright_gauss_blur_1_rd7
//	bright_gauss_blur_1_rd8
inline hw_uint<288> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<32>  bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<32>  bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<32>  bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<32>  bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<32>  bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<32>  bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<32>  bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<32>  bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_1_rd8_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<32> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
inline void bright_bright_update_0_write_bundle_write(hw_uint<32>& bright_update_0_write, bright_cache& bright, int d0, int d1) {
	hw_uint<32>  bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 31>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1);
}

// bright_weights_update_0_read
//	bright_weights_rd0
inline hw_uint<32> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1);
	set_at<0, 32>(result, bright_weights_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_1_cache {
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<32> & bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1_update_0[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
	auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 31>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<32> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_2_cache {
  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<32> & bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2_update_0[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
	auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 31>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<32> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_blur_3_cache {
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<32> & bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// lexmax events: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3_update_0[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 31>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<32> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, bright_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// Capacity: 1265
	// # of read delays: 9
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// Capacity: 1265
	// # of read delays: 627
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1264) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (633) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (2) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1263) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (632) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1262) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((634 + d0)) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (631) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 624 - d0 >= 0 && d1 >= 0 && 624 - d1 >= 0) ? (1264) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1_update_0[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 1248 and d1 <= 1248 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 1248 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1249 - d0 >= 0 && -1 + d1 >= 0 && 1249 - d1 >= 0) ? ((630 - floord(2*d0, 4))) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_2_update_0_read
//	bright_gauss_blur_2_rd0
//	bright_gauss_blur_2_rd1
//	bright_gauss_blur_2_rd2
//	bright_gauss_blur_2_rd3
//	bright_gauss_blur_2_rd4
//	bright_gauss_blur_2_rd5
//	bright_gauss_blur_2_rd6
//	bright_gauss_blur_2_rd7
//	bright_gauss_blur_2_rd8
inline hw_uint<288> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<32>  bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<32>  bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<32>  bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<32>  bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<32>  bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<32>  bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<32>  bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<32>  bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 31>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10_cache {
	// Capacity: 633
	// # of read delays: 9
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// Capacity: 633
	// # of read delays: 314
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (317) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (2) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (631) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (316) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (1) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (630) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((318 + d0)) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (315) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2_update_0[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 624 - d0 >= 0 && -1 + d1 >= 0 && 623 - d1 >= 0) ? ((314 - floord(2*d0, 4))) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

// # of bundles = 4
// bright_gauss_blur_3_update_0_read
//	bright_gauss_blur_3_rd0
//	bright_gauss_blur_3_rd1
//	bright_gauss_blur_3_rd2
//	bright_gauss_blur_3_rd3
//	bright_gauss_blur_3_rd4
//	bright_gauss_blur_3_rd5
//	bright_gauss_blur_3_rd6
//	bright_gauss_blur_3_rd7
//	bright_gauss_blur_3_rd8
inline hw_uint<288> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<32>  bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<32>  bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<32>  bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<32>  bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<32>  bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<32>  bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<32>  bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<32>  bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 31>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<32> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<32> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache {
	// Capacity: 157
	// # of read delays: 158
	fifo<hw_uint<32> , 157> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(156 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 157
	// # of read delays: 1
	fifo<hw_uint<32> , 157> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(156 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_cache {
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<32> & bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// lexmax events: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3_update_0[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 311 - d0 >= 0 && -1 + d1 >= 0 && 311 - d1 >= 0) ? ((156 - floord(2*d0, 4))) : 0);
	return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3_update_0[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 31>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<32> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_0_cache {
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<32> & bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 31>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_1_cache {
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<32> & bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 31>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_diff_2_cache {
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<32> & bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	hw_uint<32>  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 31>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_0_cache {
  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<32> & bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
inline hw_uint<32> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 31>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1);
}



#include "hw_classes.h"

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_1_cache {
  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<32> & bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<32> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 31>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1);
}



#include "hw_classes.h"

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_laplace_us_2_cache {
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<32> & bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<32>  bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// lexmax events: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<32> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1);
	set_at<0, 32>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	hw_uint<32>  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 31>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1);
}



#include "hw_classes.h"

struct bright_weights_bright_weights_update_0_write0_merged_banks_2_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_cache {
  bright_weights_bright_weights_update_0_write0_merged_banks_2_cache bright_weights_bright_weights_update_0_write0_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<32> & bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> bright_weights_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_bright_weights_bright_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> bright_weights_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_bright_weights_bright_weights_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<32> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<32>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32>  bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 31>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<32> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1);
	set_at<0, 32>(result, weight_sums_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache {
	// Capacity: 2529
	// # of read delays: 9
	fifo<hw_uint<32> , 2529> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<32> & bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2528) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1265) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2527) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1264) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2526) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((1266 + d0)) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1263) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> bright_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1249 - d0 >= 0 && d1 >= 0 && 1249 - d1 >= 0) ? (2528) : 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_1_update_0_read
//	bright_weights_normed_gauss_blur_1_rd0
//	bright_weights_normed_gauss_blur_1_rd1
//	bright_weights_normed_gauss_blur_1_rd2
//	bright_weights_normed_gauss_blur_1_rd3
//	bright_weights_normed_gauss_blur_1_rd4
//	bright_weights_normed_gauss_blur_1_rd5
//	bright_weights_normed_gauss_blur_1_rd6
//	bright_weights_normed_gauss_blur_1_rd7
//	bright_weights_normed_gauss_blur_1_rd8
inline hw_uint<288> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_1_cache {
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1_update_0[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
	auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_2_cache {
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2_update_0[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
	auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_blur_3_cache {
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3_update_0[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<32> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// Capacity: 1265
	// # of read delays: 9
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1264) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (633) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (2) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1263) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (632) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1262) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((634 + d0)) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (631) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 624 - d0 >= 0 && d1 >= 0 && 624 - d1 >= 0) ? (1264) : 0);
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_2_update_0_read
//	bright_weights_normed_gauss_blur_2_rd0
//	bright_weights_normed_gauss_blur_2_rd1
//	bright_weights_normed_gauss_blur_2_rd2
//	bright_weights_normed_gauss_blur_2_rd3
//	bright_weights_normed_gauss_blur_2_rd4
//	bright_weights_normed_gauss_blur_2_rd5
//	bright_weights_normed_gauss_blur_2_rd6
//	bright_weights_normed_gauss_blur_2_rd7
//	bright_weights_normed_gauss_blur_2_rd8
inline hw_uint<288> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10_cache {
	// Capacity: 633
	// # of read delays: 9
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (317) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (2) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (631) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (316) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (1) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (630) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((318 + d0)) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (315) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (631) : 0);
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_3_update_0_read
//	bright_weights_normed_gauss_blur_3_rd0
//	bright_weights_normed_gauss_blur_3_rd1
//	bright_weights_normed_gauss_blur_3_rd2
//	bright_weights_normed_gauss_blur_3_rd3
//	bright_weights_normed_gauss_blur_3_rd4
//	bright_weights_normed_gauss_blur_3_rd5
//	bright_weights_normed_gauss_blur_3_rd6
//	bright_weights_normed_gauss_blur_3_rd7
//	bright_weights_normed_gauss_blur_3_rd8
inline hw_uint<288> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<32>  bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_3_cache {
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3_update_0[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 31>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_dark_update_0_write0_merged_banks_11_cache {
	// Capacity: 2529
	// # of read delays: 9
	fifo<hw_uint<32> , 2529> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_cache {
  dark_dark_update_0_write0_merged_banks_11_cache dark_dark_update_0_write0_merged_banks_11;
};



inline void dark_dark_update_0_write0_write(hw_uint<32> & dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_11.push(dark_dark_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2528) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1265) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2527) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1264) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2526) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((1266 + d0)) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1263) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_1_update_0[d0, d1] -> dark_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek(/* Needs general delay string */ 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_0_update_0[d0, d1] -> dark_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek( /* is opt const */ (d0 >= 0 && 1249 - d0 >= 0 && d1 >= 0 && 1249 - d1 >= 0) ? (2528) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_weights_update_0[d0, d1] -> dark_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek(/* Needs general delay string */ 0);
	return value_dark_dark_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_1_update_0_read
//	dark_gauss_blur_1_rd0
//	dark_gauss_blur_1_rd1
//	dark_gauss_blur_1_rd2
//	dark_gauss_blur_1_rd3
//	dark_gauss_blur_1_rd4
//	dark_gauss_blur_1_rd5
//	dark_gauss_blur_1_rd6
//	dark_gauss_blur_1_rd7
//	dark_gauss_blur_1_rd8
inline hw_uint<288> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<32>  dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<32>  dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<32>  dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<32>  dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<32>  dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<32>  dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<32>  dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<32>  dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_1_rd8_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<32> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
inline void dark_dark_update_0_write_bundle_write(hw_uint<32>& dark_update_0_write, dark_cache& dark, int d0, int d1) {
	hw_uint<32>  dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 31>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1);
}

// dark_weights_update_0_read
//	dark_weights_rd0
inline hw_uint<32> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1);
	set_at<0, 32>(result, dark_weights_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_1_cache {
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<32> & dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1_update_0[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
	auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 31>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<32> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_2_cache {
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<32> & dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2_update_0[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
	auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 31>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<32> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_blur_3_cache {
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<32> & dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// lexmax events: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3_update_0[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 31>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<32> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, dark_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// Capacity: 1265
	// # of read delays: 9
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// Capacity: 1265
	// # of read delays: 627
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1264) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (633) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (2) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1263) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (632) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1262) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((634 + d0)) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (631) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 624 - d0 >= 0 && d1 >= 0 && 624 - d1 >= 0) ? (1264) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1_update_0[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 1248 and d1 <= 1248 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 1248 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1249 - d0 >= 0 && -1 + d1 >= 0 && 1249 - d1 >= 0) ? ((630 - floord(2*d0, 4))) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_2_update_0_read
//	dark_gauss_blur_2_rd0
//	dark_gauss_blur_2_rd1
//	dark_gauss_blur_2_rd2
//	dark_gauss_blur_2_rd3
//	dark_gauss_blur_2_rd4
//	dark_gauss_blur_2_rd5
//	dark_gauss_blur_2_rd6
//	dark_gauss_blur_2_rd7
//	dark_gauss_blur_2_rd8
inline hw_uint<288> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<32>  dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<32>  dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<32>  dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<32>  dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<32>  dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<32>  dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<32>  dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<32>  dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 31>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10_cache {
	// Capacity: 633
	// # of read delays: 9
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// Capacity: 633
	// # of read delays: 314
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (317) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (2) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (631) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (316) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (1) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (630) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((318 + d0)) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (315) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2_update_0[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 624 - d0 >= 0 && -1 + d1 >= 0 && 623 - d1 >= 0) ? ((314 - floord(2*d0, 4))) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

// # of bundles = 4
// dark_gauss_blur_3_update_0_read
//	dark_gauss_blur_3_rd0
//	dark_gauss_blur_3_rd1
//	dark_gauss_blur_3_rd2
//	dark_gauss_blur_3_rd3
//	dark_gauss_blur_3_rd4
//	dark_gauss_blur_3_rd5
//	dark_gauss_blur_3_rd6
//	dark_gauss_blur_3_rd7
//	dark_gauss_blur_3_rd8
inline hw_uint<288> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<32>  dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<32>  dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<32>  dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<32>  dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<32>  dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<32>  dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<32>  dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<32>  dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 31>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<32> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<32> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache {
	// Capacity: 157
	// # of read delays: 158
	fifo<hw_uint<32> , 157> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(156 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 157
	// # of read delays: 1
	fifo<hw_uint<32> , 157> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(156 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_cache {
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<32> & dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// lexmax events: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3_update_0[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 311 - d0 >= 0 && -1 + d1 >= 0 && 311 - d1 >= 0) ? ((156 - floord(2*d0, 4))) : 0);
	return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3_update_0[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 31>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<32> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_0_cache {
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<32> & dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline hw_uint<32>  fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 31>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_1_cache {
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<32> & dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<32>  fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 31>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_diff_2_cache {
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<32> & dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<32>  fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	hw_uint<32>  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 31>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_0_cache {
  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<32> & dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
inline hw_uint<32> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 31>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1);
}



#include "hw_classes.h"

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_1_cache {
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<32> & dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<32> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 31>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1);
}



#include "hw_classes.h"

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_laplace_us_2_cache {
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<32> & dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<32>  dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// lexmax events: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<32> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1);
	set_at<0, 32>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	hw_uint<32>  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 31>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1);
}



#include "hw_classes.h"

struct dark_weights_dark_weights_update_0_write0_merged_banks_2_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_cache {
  dark_weights_dark_weights_update_0_write0_merged_banks_2_cache dark_weights_dark_weights_update_0_write0_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<32> & dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> dark_weights_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_dark_weights_dark_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> dark_weights_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_dark_weights_dark_weights_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<32> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<32>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32>  dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 31>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1);
}

// weight_sums_update_0_read
//	weight_sums_rd0
inline hw_uint<32> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1);
	set_at<0, 32>(result, weight_sums_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache {
	// Capacity: 2529
	// # of read delays: 9
	fifo<hw_uint<32> , 2529> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2528 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<32> & dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2528) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1265) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2527) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1264) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1260 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (2526) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((1266 + d0)) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1259 - d0 >= 0 && d1 >= 0 && 1260 - d1 >= 0) ? (1263) : (-1260 + d0 == 0 && d1 >= 0 && 1260 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 1260 and 0 <= d1 <= 1260 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { fused_level_0_update_0[d0, d1] -> dark_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 1249 - d0 >= 0 && d1 >= 0 && 1249 - d1 >= 0) ? (2528) : 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_1_update_0_read
//	dark_weights_normed_gauss_blur_1_rd0
//	dark_weights_normed_gauss_blur_1_rd1
//	dark_weights_normed_gauss_blur_1_rd2
//	dark_weights_normed_gauss_blur_1_rd3
//	dark_weights_normed_gauss_blur_1_rd4
//	dark_weights_normed_gauss_blur_1_rd5
//	dark_weights_normed_gauss_blur_1_rd6
//	dark_weights_normed_gauss_blur_1_rd7
//	dark_weights_normed_gauss_blur_1_rd8
inline hw_uint<288> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
inline hw_uint<32> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_1_cache {
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1_update_0[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 630 and 0 <= d1 <= 630 }
	auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_2_cache {
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2_update_0[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 314 and 0 <= d1 <= 314 }
	auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_blur_3_cache {
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3_update_0[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<32> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// Capacity: 1265
	// # of read delays: 9
	fifo<hw_uint<32> , 1265> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1264 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1264) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (633) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (2) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1263) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (632) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 628 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (1262) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((634 + d0)) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 627 - d0 >= 0 && d1 >= 0 && 628 - d1 >= 0) ? (631) : (-628 + d0 == 0 && d1 >= 0 && 628 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 628 and 0 <= d1 <= 628 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// lexmax events: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 624 - d0 >= 0 && d1 >= 0 && 624 - d1 >= 0) ? (1264) : 0);
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_2_update_0_read
//	dark_weights_normed_gauss_blur_2_rd0
//	dark_weights_normed_gauss_blur_2_rd1
//	dark_weights_normed_gauss_blur_2_rd2
//	dark_weights_normed_gauss_blur_2_rd3
//	dark_weights_normed_gauss_blur_2_rd4
//	dark_weights_normed_gauss_blur_2_rd5
//	dark_weights_normed_gauss_blur_2_rd6
//	dark_weights_normed_gauss_blur_2_rd7
//	dark_weights_normed_gauss_blur_2_rd8
inline hw_uint<288> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1);
	set_at<0, 32>(result, fused_level_1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10_cache {
	// Capacity: 633
	// # of read delays: 9
	fifo<hw_uint<32> , 633> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(632 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (317) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (2) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (631) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (316) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (1) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (630) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((318 + d0)) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 311 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (315) : (-312 + d0 == 0 && d1 >= 0 && 312 - d1 >= 0) ? ((3 + d0)) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// lexmax events: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_10.peek( /* is opt const */ (d0 >= 0 && 312 - d0 >= 0 && d1 >= 0 && 312 - d1 >= 0) ? (632) : 0);
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_3_update_0_read
//	dark_weights_normed_gauss_blur_3_rd0
//	dark_weights_normed_gauss_blur_3_rd1
//	dark_weights_normed_gauss_blur_3_rd2
//	dark_weights_normed_gauss_blur_3_rd3
//	dark_weights_normed_gauss_blur_3_rd4
//	dark_weights_normed_gauss_blur_3_rd5
//	dark_weights_normed_gauss_blur_3_rd6
//	dark_weights_normed_gauss_blur_3_rd7
//	dark_weights_normed_gauss_blur_3_rd8
inline hw_uint<288> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<32>  dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1);
	set_at<0, 32>(result, fused_level_2_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_3_cache {
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// lexmax events: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3_update_0[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 156 and 0 <= d1 <= 156 }
	auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 31>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<32> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1);
	set_at<0, 32>(result, fused_level_3_rd0_res);
	return result;
}



#include "hw_classes.h"

struct final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_0_cache {
  final_merged_0_final_merged_0_update_0_write0_merged_banks_1_cache final_merged_0_final_merged_0_update_0_write0_merged_banks_1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<32> & final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.push(final_merged_0_final_merged_0_update_0_write0);
}

inline hw_uint<32>  pyramid_synthetic_exposure_fusion_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1) {
	// lexmax events: { pyramid_synthetic_exposure_fusion_update_0[d0, d1] -> final_merged_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // pyramid_synthetic_exposure_fusion_rd0 read pattern: { pyramid_synthetic_exposure_fusion_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_final_merged_0_final_merged_0_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<32>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<32>  final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 31>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1);
}

// pyramid_synthetic_exposure_fusion_update_0_read
//	pyramid_synthetic_exposure_fusion_rd0
inline hw_uint<32> final_merged_0_pyramid_synthetic_exposure_fusion_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  pyramid_synthetic_exposure_fusion_rd0_res = pyramid_synthetic_exposure_fusion_rd0_select(final_merged_0, d0, d1);
	set_at<0, 32>(result, pyramid_synthetic_exposure_fusion_rd0_res);
	return result;
}



#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// Capacity: 625
	// # of read delays: 626
	fifo<hw_uint<32> , 625> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(624 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_cache {
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<32> & final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
}

inline hw_uint<32>  final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1) {
	// lexmax events: { final_merged_0_update_0[d0, d1] -> final_merged_1_update_0[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 <= 1248 and d1 <= 1248 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d0 <= 1248 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and d1 <= 1248 and 2o0 < d0 and 2o1 >= -1 + d1)); final_merged_0_update_0[d0 = 1249, d1] -> final_merged_1_update_0[624, o1] : (1 + d1) mod 2 = 0 and 0 < d1 <= 1249 and 0 <= o1 <= 624 and -2 + d1 <= 2o1 < d1 }
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 1247 - d0 >= 0 && -1 + d1 >= 0 && 1249 - d1 >= 0) ? ((624 - floord(2*d0, 4))) : 0);
	return value_final_merged_1_final_merged_1_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<32> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<32>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1) {
	hw_uint<32>  final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 31>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1);
}



#include "hw_classes.h"

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// Capacity: 313
	// # of read delays: 314
	fifo<hw_uint<32> , 313> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(312 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_2_cache {
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<32> & final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<32>  final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1) {
	// lexmax events: { final_merged_1_update_0[d0, d1] -> final_merged_2_update_0[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 623 - d0 >= 0 && -1 + d1 >= 0 && 623 - d1 >= 0) ? ((312 - floord(2*d0, 4))) : 0);
	return value_final_merged_2_final_merged_2_update_0_write0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<32> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<32>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1) {
	hw_uint<32>  final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 31>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1);
}



#include "hw_classes.h"

struct fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache {
	// Capacity: 15012
	// # of read delays: 15012
	fifo<hw_uint<32> , 15012> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(15011 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<32> & fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.push(fused_level_0_fused_level_0_update_0_write0);
}

inline hw_uint<32>  final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
	// lexmax events: { final_merged_0_update_0[d0, d1] -> fused_level_0_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 1248 - d0 >= 0 && -1239 + d1 >= 0 && 1248 - d1 >= 0) ? (((1562499 - d0) - 1250 * d1)) : (-1249 + d0 == 0 && -1239 + d1 >= 0 && 1248 - d1 >= 0) ? ((1561250 - 1250 * d1)) : (-1239 + d0 >= 0 && 1248 - d0 >= 0 && d1 >= 0 && 1237 - d1 >= 0) ? ((16249 - d0)) : (-1249 + d0 == 0 && d1 >= 0 && 1237 - d1 >= 0) ? (15000) : (d0 >= 0 && 1238 - d0 >= 0 && d1 >= 0 && 1237 - d1 >= 0) ? (15011) : ((-1238 + d1 == 0 && d0 >= 0 && 1238 - d0 >= 0) || (-1238 + d1 == 0 && -1239 + d0 >= 0 && 1248 - d0 >= 0)) ? ((14999 - d0)) : (-1238 + d1 == 0 && -1249 + d0 == 0) ? (13750) : (-1249 + d1 == 0 && d0 >= 0 && 1248 - d0 >= 0) ? ((1249 - d0)) : 0);
	return value_fused_level_0_fused_level_0_update_0_write0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
inline hw_uint<32> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<32>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1) {
	hw_uint<32>  fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 31>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1);
}



#include "hw_classes.h"

struct fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache {
	// Capacity: 2505
	// # of read delays: 2505
	fifo<hw_uint<32> , 2505> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2504 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<32> & fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<32>  final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
	// lexmax events: { final_merged_1_update_0[d0, d1] -> fused_level_1_update_0[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 624 and 0 <= d1 <= 624 }
	auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* Needs general delay string */ (d0 >= 0 && 623 - d0 >= 0 && -622 + d1 >= 0 && 623 - d1 >= 0) ? (((390624 - d0) - 625 * d1)) : (-624 + d0 == 0 && -622 + d1 >= 0 && 623 - d1 >= 0) ? ((390000 - 625 * d1)) : (-622 + d0 >= 0 && 623 - d0 >= 0 && d1 >= 0 && 620 - d1 >= 0) ? ((3124 - d0)) : (-624 + d0 == 0 && d1 >= 0 && 620 - d1 >= 0) ? (2500) : (d0 >= 0 && 620 - d0 >= 0 && d1 >= 0 && 620 - d1 >= 0) ? (2504) : (-621 + d0 == 0 && d1 >= 0 && 620 - d1 >= 0) ? (2503) : ((-621 + d1 == 0 && -622 + d0 >= 0 && 623 - d0 >= 0) || (-621 + d1 == 0 && d0 >= 0 && 621 - d0 >= 0)) ? ((2499 - d0)) : (-621 + d1 == 0 && -624 + d0 == 0) ? (1875) : (-624 + d1 == 0 && d0 >= 0 && 623 - d0 >= 0) ? ((624 - d0)) : 0);
	return value_fused_level_1_fused_level_1_update_0_write0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<32> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1);
	set_at<0, 32>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<32>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1) {
	hw_uint<32>  fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 31>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1);
}



#include "hw_classes.h"

struct fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_2_cache {
  fused_level_2_fused_level_2_update_0_write0_merged_banks_1_cache fused_level_2_fused_level_2_update_0_write0_merged_banks_1;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<32> & fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<32>  final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1) {
	// lexmax events: { final_merged_2_update_0[d0, d1] -> fused_level_2_update_0[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 }
	auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_fused_level_2_fused_level_2_update_0_write0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<32> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1);
	set_at<0, 32>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<32>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1) {
	hw_uint<32>  fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 31>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1);
}



#include "hw_classes.h"

struct fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache {
	// Capacity: 157
	// # of read delays: 158
	fifo<hw_uint<32> , 157> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(156 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_3_cache {
  fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<32> & fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1) {
  fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.push(fused_level_3_fused_level_3_update_0_write0);
}

inline hw_uint<32>  final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1) {
	// lexmax events: { final_merged_2_update_0[d0, d1] -> fused_level_3_update_0[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -2 + d0 <= 2o0 <= d0 and -2 + d1 <= 2o1 <= d1 and (((d0) mod 2 = 0 and (d1) mod 2 = 0 and 2o0 >= -1 + d0 and 2o1 >= -1 + d1) or ((1 + d1) mod 2 = 0 and d1 > 0 and 2o0 >= -1 + d0 and 2o1 < d1) or ((1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and d0 > 0 and 2o0 < d0 and 2o1 >= -1 + d1)) }
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 312 and 0 <= d1 <= 312 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* Needs general delay string */ ((-1 - d1) % 2 == 0 && d0 >= 0 && 311 - d0 >= 0 && -1 + d1 >= 0 && 311 - d1 >= 0) ? ((156 - floord(2*d0, 4))) : 0);
	return value_fused_level_3_fused_level_3_update_0_write0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<32> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1);
	set_at<0, 32>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<32>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1) {
	hw_uint<32>  fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 31>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1);
}



#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline hw_uint<32>  bright_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { bright_update_0[d0, d1] -> in_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_in_in_update_0_write0;
}

inline hw_uint<32>  dark_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { dark_update_0[d0, d1] -> in_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_in_in_update_0_write0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
inline hw_uint<32> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_rd0_res = bright_rd0_select(in, d0, d1);
	set_at<0, 32>(result, bright_rd0_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
inline hw_uint<32> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_rd0_res = dark_rd0_select(in, d0, d1);
	set_at<0, 32>(result, dark_rd0_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
}



#include "hw_classes.h"

struct weight_sums_weight_sums_update_0_write0_merged_banks_2_cache {
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct weight_sums_cache {
  weight_sums_weight_sums_update_0_write0_merged_banks_2_cache weight_sums_weight_sums_update_0_write0_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<32> & weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_weight_sums_weight_sums_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1262 and 0 <= d1 <= 1262 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_weight_sums_weight_sums_update_0_write0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
inline hw_uint<32> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
inline hw_uint<32> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<32>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1) {
	hw_uint<32>  weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 31>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1);
}





// Operation logic
inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
	auto compute_result = f_divide(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);
}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
	auto compute_result = f_divide(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);
}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);
}

inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);
}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = id(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(compute_result, bright, d0, d1);
}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	auto compute_result = exposure_weight(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);
}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_gauss_ds_1, d0, d1);
}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_gauss_ds_1, d0, d1);
}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(compute_result, dark_laplace_us_1, d0, d1);
}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_1, d0, d1);
}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_gauss_ds_2, d0, d1);
}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_1, d0, d1);
}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_gauss_ds_2, d0, d1);
}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_2, d0, d1);
}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_gauss_ds_3, d0, d1);
}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_3, d0, d1);
}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_3, d0, d1);
}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1);
	auto compute_result = diff(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_laplace_diff_2, d0, d1);
}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1);
	auto compute_result = diff(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_laplace_diff_0, d0, d1);
}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(compute_result, bright_laplace_us_2, d0, d1);
}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(compute_result, bright_laplace_us_0, d0, d1);
}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(compute_result, fused_level_0, d0, d1);
}

inline void pyramid_synthetic_exposure_fusion_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */pyramid_synthetic_exposure_fusion, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_pyramid_synthetic_exposure_fusion_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);
	auto compute_result = id(final_merged_0_0_c__0_value);
	// Produce: pyramid_synthetic_exposure_fusion
	pyramid_synthetic_exposure_fusion.write(compute_result);
}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
	auto compute_result = add(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(compute_result, weight_sums, d0, d1);
}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);
}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_gauss_blur_1, d0, d1);
}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_gauss_blur_1, d0, d1);
}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = scale_exposure(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);
}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	auto compute_result = exposure_weight(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);
}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_1, d0, d1);
}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_gauss_blur_2, d0, d1);
}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_gauss_blur_2, d0, d1);
}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_1, d0, d1);
}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_2, d0, d1);
}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_gauss_blur_3, d0, d1);
}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_2, d0, d1);
}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_gauss_blur_3, d0, d1);
}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_3, d0, d1);
}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_2, d0, d1);
}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_gauss_ds_3, d0, d1);
}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(compute_result, dark_laplace_us_2, d0, d1);
}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = id(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(compute_result, dark_laplace_us_0, d0, d1);
}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1);
	auto compute_result = diff(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_laplace_diff_1, d0, d1);
}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
	auto compute_result = id(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_3, d0, d1);
}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	auto compute_result = id(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(compute_result, bright_laplace_us_1, d0, d1);
}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1);
	auto compute_result = diff(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_laplace_diff_2, d0, d1);
}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1);
	auto compute_result = diff(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_laplace_diff_1, d0, d1);
}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1);
	auto compute_result = diff(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_laplace_diff_0, d0, d1);
}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);
	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
	auto compute_result = merge_exposures(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);
}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1);
	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1);
	auto compute_result = add(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(compute_result, final_merged_2, d0, d1);
}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1);
	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1);
	auto compute_result = add(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(compute_result, final_merged_1, d0, d1);
}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1);
	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1);
	auto compute_result = add(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);
}

// Driver function
void pyramid_synthetic_exposure_fusion_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */pyramid_synthetic_exposure_fusion) {
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_0 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_1 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_2 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_0 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_1 inter false
#endif // __VIVADO_SYNTH__

  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_0 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_1 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_2 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_0 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_1 inter false
#endif // __VIVADO_SYNTH__

  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_1 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_3 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_1 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_2 inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_3 inter false
#endif // __VIVADO_SYNTH__

  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_0 inter false
#endif // __VIVADO_SYNTH__

  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_1 inter false
#endif // __VIVADO_SYNTH__

  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_2 inter false
#endif // __VIVADO_SYNTH__

  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_0 inter false
#endif // __VIVADO_SYNTH__

  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_1 inter false
#endif // __VIVADO_SYNTH__

  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_2 inter false
#endif // __VIVADO_SYNTH__

  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_3 inter false
#endif // __VIVADO_SYNTH__

  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif // __VIVADO_SYNTH__

  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=weight_sums inter false
#endif // __VIVADO_SYNTH__

// arg list for dark_weights_normed_update_0 = dark_weights, weight_sums, dark_weights_normed
// arg list for bright_weights_normed_update_0 = bright_weights, weight_sums, bright_weights_normed
// arg list for fused_level_2_update_0 = bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2
// arg list for in_update_0 = in_off_chip, in
// arg list for bright_update_0 = in, bright
// arg list for bright_weights_update_0 = bright, bright_weights
// arg list for dark_gauss_ds_1_update_0 = dark_gauss_blur_1, dark_gauss_ds_1
// arg list for bright_gauss_ds_1_update_0 = bright_gauss_blur_1, bright_gauss_ds_1
// arg list for dark_laplace_us_1_update_0 = dark_gauss_ds_2, dark_laplace_us_1
// arg list for dark_weights_normed_gauss_ds_1_update_0 = dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1
// arg list for dark_gauss_ds_2_update_0 = dark_gauss_blur_2, dark_gauss_ds_2
// arg list for bright_weights_normed_gauss_ds_1_update_0 = bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1
// arg list for bright_gauss_ds_2_update_0 = bright_gauss_blur_2, bright_gauss_ds_2
// arg list for dark_weights_normed_gauss_ds_2_update_0 = dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2
// arg list for dark_gauss_ds_3_update_0 = dark_gauss_blur_3, dark_gauss_ds_3
// arg list for bright_weights_normed_gauss_blur_3_update_0 = bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3
// arg list for dark_weights_normed_gauss_ds_3_update_0 = dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3
// arg list for dark_laplace_diff_2_update_0 = dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2
// arg list for dark_laplace_diff_0_update_0 = dark, dark_laplace_us_0, dark_laplace_diff_0
// arg list for bright_laplace_us_2_update_0 = bright_gauss_ds_3, bright_laplace_us_2
// arg list for bright_laplace_us_0_update_0 = bright_gauss_ds_1, bright_laplace_us_0
// arg list for fused_level_0_update_0 = bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0
// arg list for pyramid_synthetic_exposure_fusion_update_0 = final_merged_0, pyramid_synthetic_exposure_fusion
// arg list for weight_sums_update_0 = dark_weights, bright_weights, weight_sums
// arg list for fused_level_3_update_0 = bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3
// arg list for bright_gauss_blur_1_update_0 = bright, bright_gauss_blur_1
// arg list for dark_gauss_blur_1_update_0 = dark, dark_gauss_blur_1
// arg list for dark_update_0 = in, dark
// arg list for dark_weights_update_0 = dark, dark_weights
// arg list for dark_weights_normed_gauss_blur_1_update_0 = dark_weights_normed, dark_weights_normed_gauss_blur_1
// arg list for dark_gauss_blur_2_update_0 = dark_gauss_ds_1, dark_gauss_blur_2
// arg list for bright_gauss_blur_2_update_0 = bright_gauss_ds_1, bright_gauss_blur_2
// arg list for bright_weights_normed_gauss_blur_1_update_0 = bright_weights_normed, bright_weights_normed_gauss_blur_1
// arg list for dark_weights_normed_gauss_blur_2_update_0 = dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2
// arg list for dark_gauss_blur_3_update_0 = dark_gauss_ds_2, dark_gauss_blur_3
// arg list for bright_weights_normed_gauss_blur_2_update_0 = bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2
// arg list for bright_gauss_blur_3_update_0 = bright_gauss_ds_2, bright_gauss_blur_3
// arg list for dark_weights_normed_gauss_blur_3_update_0 = dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3
// arg list for bright_weights_normed_gauss_ds_2_update_0 = bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2
// arg list for bright_gauss_ds_3_update_0 = bright_gauss_blur_3, bright_gauss_ds_3
// arg list for dark_laplace_us_2_update_0 = dark_gauss_ds_3, dark_laplace_us_2
// arg list for dark_laplace_us_0_update_0 = dark_gauss_ds_1, dark_laplace_us_0
// arg list for dark_laplace_diff_1_update_0 = dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1
// arg list for bright_weights_normed_gauss_ds_3_update_0 = bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3
// arg list for bright_laplace_us_1_update_0 = bright_gauss_ds_2, bright_laplace_us_1
// arg list for bright_laplace_diff_2_update_0 = bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2
// arg list for bright_laplace_diff_1_update_0 = bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1
// arg list for bright_laplace_diff_0_update_0 = bright, bright_laplace_us_0, bright_laplace_diff_0
// arg list for fused_level_1_update_0 = bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1
// arg list for final_merged_2_update_0 = fused_level_3, fused_level_2, final_merged_2
// arg list for final_merged_1_update_0 = final_merged_2, fused_level_1, final_merged_1
// arg list for final_merged_0_update_0 = final_merged_1, fused_level_0, final_merged_0
/* ISL CODE STRING
for (int c0 = 0; c0 <= 1263; c0 += 1) {
  if (c0 >= 14) {
    if (c0 <= 1262)
      for (int c1 = 0; c1 <= 13; c1 += 1) {
        in_update_0(c1, c0);
        bright_update_0(c1, c0);
        if (c1 >= 2)
          bright_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        dark_update_0(c1, c0);
        dark_weights_update_0(c1, c0);
        bright_weights_update_0(c1, c0);
        weight_sums_update_0(c1, c0);
        dark_weights_normed_update_0(c1, c0);
        if (c1 >= 2)
          dark_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        bright_weights_normed_update_0(c1, c0);
        if (c1 >= 2) {
          bright_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
          if (c0 % 2 == 0 && c1 % 2 == 0) {
            bright_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
            if (c1 >= 6)
              bright_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            bright_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
            if (c1 >= 6) {
              bright_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
                bright_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
              if (c0 <= 1254) {
                bright_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
                bright_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              }
            }
          }
          dark_gauss_blur_1_update_0(c1 - 2, c0 - 2);
          if (c0 % 2 == 0 && c1 % 2 == 0) {
            dark_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
            if (c1 >= 6) {
              dark_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
                dark_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
            }
            dark_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
            if (c1 >= 6) {
              dark_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
                dark_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
              if (c0 <= 1254) {
                dark_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
                dark_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
                fused_level_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              }
            }
          }
          if (c0 <= 1251) {
            dark_laplace_us_0_update_0(c1 - 2, c0 - 2);
            dark_laplace_diff_0_update_0(c1 - 2, c0 - 2);
          }
          if (c1 >= 6 && (c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
            bright_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
          if (c0 <= 1251) {
            bright_laplace_us_0_update_0(c1 - 2, c0 - 2);
            bright_laplace_diff_0_update_0(c1 - 2, c0 - 2);
            fused_level_0_update_0(c1 - 2, c0 - 2);
          }
        }
      }
    for (int c1 = 14; c1 <= 1263; c1 += 1) {
      if (c0 <= 1262 && c1 <= 1262) {
        in_update_0(c1, c0);
        bright_update_0(c1, c0);
        bright_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        dark_update_0(c1, c0);
        dark_weights_update_0(c1, c0);
        bright_weights_update_0(c1, c0);
        weight_sums_update_0(c1, c0);
        dark_weights_normed_update_0(c1, c0);
        dark_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        bright_weights_normed_update_0(c1, c0);
        bright_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        if (c0 % 2 == 0 && c1 % 2 == 0) {
          bright_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          bright_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          bright_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          bright_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
            bright_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
          if (c0 <= 1254 && c1 <= 1254) {
            bright_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            bright_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          }
        }
        dark_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        if (c0 % 2 == 0 && c1 % 2 == 0) {
          dark_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          dark_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
            dark_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
            dark_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
            if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
              dark_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
            dark_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          }
          dark_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          dark_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
            dark_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
            dark_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          }
          if (c0 <= 1254 && c1 <= 1254) {
            dark_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            dark_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            fused_level_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          }
        }
        if (c0 <= 1251 && c1 <= 1251) {
          dark_laplace_us_0_update_0(c1 - 2, c0 - 2);
          dark_laplace_diff_0_update_0(c1 - 2, c0 - 2);
        }
        if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
          dark_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          bright_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
            bright_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
          bright_laplace_us_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          bright_laplace_diff_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          fused_level_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
            dark_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
          bright_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
          bright_weights_normed_gauss_blur_3_update_0((c1 - 14) / 4, (c0 - 14) / 4);
          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0) {
            bright_weights_normed_gauss_ds_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
            fused_level_3_update_0((c1 - 14) / 8, (c0 - 14) / 8);
          }
          final_merged_2_update_0((c1 - 14) / 4, (c0 - 14) / 4);
        }
        if (c0 % 2 == 0 && c1 % 2 == 0)
          final_merged_1_update_0((c1 / 2) - 7, (c0 / 2) - 7);
      }
      final_merged_0_update_0(c1 - 14, c0 - 14);
      if (c0 <= 1251 && c1 <= 1251) {
        bright_laplace_us_0_update_0(c1 - 2, c0 - 2);
        bright_laplace_diff_0_update_0(c1 - 2, c0 - 2);
        fused_level_0_update_0(c1 - 2, c0 - 2);
      }
      pyramid_synthetic_exposure_fusion_update_0(c1 - 14, c0 - 14);
    }
  } else {
    for (int c1 = 0; c1 <= 1262; c1 += 1) {
      in_update_0(c1, c0);
      bright_update_0(c1, c0);
      if (c0 >= 2 && c1 >= 2)
        bright_gauss_blur_1_update_0(c1 - 2, c0 - 2);
      dark_update_0(c1, c0);
      dark_weights_update_0(c1, c0);
      bright_weights_update_0(c1, c0);
      weight_sums_update_0(c1, c0);
      dark_weights_normed_update_0(c1, c0);
      if (c0 >= 2 && c1 >= 2)
        dark_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
      bright_weights_normed_update_0(c1, c0);
      if (c0 >= 2 && c1 >= 2) {
        bright_weights_normed_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        if (c0 % 2 == 0 && c1 % 2 == 0) {
          bright_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          if (c0 >= 6 && c1 >= 6)
            bright_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
          bright_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          if (c0 >= 6 && c1 >= 6) {
            bright_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
              bright_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
            if (c1 <= 1254) {
              bright_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              bright_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            }
          }
        }
        dark_gauss_blur_1_update_0(c1 - 2, c0 - 2);
        if (c0 % 2 == 0 && c1 % 2 == 0) {
          dark_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          if (c0 >= 6 && c1 >= 6) {
            dark_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
              dark_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
          }
          dark_weights_normed_gauss_ds_1_update_0((c1 / 2) - 1, (c0 / 2) - 1);
          if (c0 >= 6 && c1 >= 6) {
            dark_weights_normed_gauss_blur_2_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
              dark_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
            if (c1 <= 1254) {
              dark_laplace_us_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              dark_laplace_diff_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
              fused_level_1_update_0((c1 / 2) - 3, (c0 / 2) - 3);
            }
          }
        }
        if (c1 <= 1251) {
          dark_laplace_us_0_update_0(c1 - 2, c0 - 2);
          dark_laplace_diff_0_update_0(c1 - 2, c0 - 2);
        }
        if (c0 >= 6 && c1 >= 6 && (c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
          bright_weights_normed_gauss_ds_2_update_0((c1 - 6) / 4, (c0 - 6) / 4);
        if (c1 <= 1251) {
          bright_laplace_us_0_update_0(c1 - 2, c0 - 2);
          bright_laplace_diff_0_update_0(c1 - 2, c0 - 2);
          fused_level_0_update_0(c1 - 2, c0 - 2);
        }
      }
    }
  }
}

*/
/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 1263; c0 += 1) {
	  if (c0 >= 14) {
	    if (c0 <= 1262)
	      for (int c1 = 0; c1 <= 13; c1 += 1) {
	in_update_0(in_off_chip, in, c1, c0);
	bright_update_0(in, bright, c1, c0);
	        if (c1 >= 2)
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, c1 - 2, c0 - 2);
	dark_update_0(in, dark, c1, c0);
	dark_weights_update_0(dark, dark_weights, c1, c0);
	bright_weights_update_0(bright, bright_weights, c1, c0);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c1, c0);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c1, c0);
	        if (c1 >= 2)
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c1, c0);
	        if (c1 >= 2) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	          if (c0 % 2 == 0 && c1 % 2 == 0) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	            if (c1 >= 6)
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	            if (c1 >= 6) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 <= 1254) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	              }
	            }
	          }
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, c1 - 2, c0 - 2);
	          if (c0 % 2 == 0 && c1 % 2 == 0) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	            if (c1 >= 6) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	            }
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	            if (c1 >= 6) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	              if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	              if (c0 <= 1254) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 / 2) - 3, (c0 / 2) - 3);
	              }
	            }
	          }
	          if (c0 <= 1251) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, c1 - 2, c0 - 2);
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, c1 - 2, c0 - 2);
	          }
	          if (c1 >= 6 && (c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	          if (c0 <= 1251) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, c1 - 2, c0 - 2);
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, c1 - 2, c0 - 2);
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, c1 - 2, c0 - 2);
	          }
	        }
	      }
	    for (int c1 = 14; c1 <= 1263; c1 += 1) {
	      if (c0 <= 1262 && c1 <= 1262) {
	in_update_0(in_off_chip, in, c1, c0);
	bright_update_0(in, bright, c1, c0);
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, c1 - 2, c0 - 2);
	dark_update_0(in, dark, c1, c0);
	dark_weights_update_0(dark, dark_weights, c1, c0);
	bright_weights_update_0(bright, bright_weights, c1, c0);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c1, c0);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c1, c0);
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c1, c0);
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	          if (c0 <= 1254 && c1 <= 1254) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	          }
	        }
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	            if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	          }
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	          if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	          }
	          if (c0 <= 1254 && c1 <= 1254) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 / 2) - 3, (c0 / 2) - 3);
	          }
	        }
	        if (c0 <= 1251 && c1 <= 1251) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, c1 - 2, c0 - 2);
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, c1 - 2, c0 - 2);
	        }
	        if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 14) / 4, (c0 - 14) / 4);
	          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	          if ((c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 14) / 8, (c0 - 14) / 8);
	          }
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, (c0 - 14) / 4);
	        }
	        if (c0 % 2 == 0 && c1 % 2 == 0)
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 / 2) - 7, (c0 / 2) - 7);
	      }
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, c1 - 14, c0 - 14);
	      if (c0 <= 1251 && c1 <= 1251) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, c1 - 2, c0 - 2);
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, c1 - 2, c0 - 2);
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, c1 - 2, c0 - 2);
	      }
	pyramid_synthetic_exposure_fusion_update_0(final_merged_0, pyramid_synthetic_exposure_fusion, c1 - 14, c0 - 14);
	    }
	  } else {
	    for (int c1 = 0; c1 <= 1262; c1 += 1) {
	in_update_0(in_off_chip, in, c1, c0);
	bright_update_0(in, bright, c1, c0);
	      if (c0 >= 2 && c1 >= 2)
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, c1 - 2, c0 - 2);
	dark_update_0(in, dark, c1, c0);
	dark_weights_update_0(dark, dark_weights, c1, c0);
	bright_weights_update_0(bright, bright_weights, c1, c0);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c1, c0);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c1, c0);
	      if (c0 >= 2 && c1 >= 2)
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c1, c0);
	      if (c0 >= 2 && c1 >= 2) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6)
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	            if (c1 <= 1254) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	            }
	          }
	        }
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, c1 - 2, c0 - 2);
	        if (c0 % 2 == 0 && c1 % 2 == 0) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	          }
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 / 2) - 1, (c0 / 2) - 1);
	          if (c0 >= 6 && c1 >= 6) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 / 2) - 3, (c0 / 2) - 3);
	            if ((c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	            if (c1 <= 1254) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 / 2) - 3, (c0 / 2) - 3);
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 / 2) - 3, (c0 / 2) - 3);
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 / 2) - 3, (c0 / 2) - 3);
	            }
	          }
	        }
	        if (c1 <= 1251) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, c1 - 2, c0 - 2);
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, c1 - 2, c0 - 2);
	        }
	        if (c0 >= 6 && c1 >= 6 && (c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0)
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	        if (c1 <= 1251) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, c1 - 2, c0 - 2);
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, c1 - 2, c0 - 2);
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, c1 - 2, c0 - 2);
	        }
	      }
	    }
	  }
	}
	
}
