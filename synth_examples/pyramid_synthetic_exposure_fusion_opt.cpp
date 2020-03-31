#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "pyramid_synthetic_exposure_fusion_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_bright_update_0_write0_merged_banks_10_store[42849];

#else
  hw_uint<32> * bright_bright_update_0_write0_merged_banks_10_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_bright_update_0_write0_merged_banks_10_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_bright_update_0_write0_merged_banks_10_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 207) capacity = 204
	fifo<hw_uint<32> , 204> f5;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [208, 209) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [209, 210) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [210, 414) capacity = 204
	fifo<hw_uint<32> , 204> f11;
	// Parition [414, 415) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [415, 416) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [416, 416] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_206() {
		return f5.back();
	}

	inline hw_uint<32>  peek_207() {
		return f6.back();
	}

	inline hw_uint<32>  peek_208() {
		return f8.back();
	}

	inline hw_uint<32>  peek_209() {
		return f10.back();
	}

	inline hw_uint<32>  peek_413() {
		return f11.back();
	}

	inline hw_uint<32>  peek_414() {
		return f12.back();
	}

	inline hw_uint<32>  peek_415() {
		return f14.back();
	}

	inline hw_uint<32>  peek_416() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 206) {
			return f5.back();
		}
		if (offset == 207) {
			return f6.back();
		}
		if (offset == 208) {
			return f8.back();
		}
		if (offset == 209) {
			return f10.back();
		}
		if (offset == 413) {
			return f11.back();
		}
		if (offset == 414) {
			return f12.back();
		}
		if (offset == 415) {
			return f14.back();
		}
		if (offset == 416) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_bright_update_0_write0_merged_banks_10: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 2913
	// # of read delays: 1458
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store[42849];

#else
  hw_uint<32> * bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_store[(d0 + d1*207)] = value;
  }

	fifo<hw_uint<32> , 2913> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2912 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_10_cache bright_bright_update_0_write0_merged_banks_10;
  bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0;
};



inline void bright_bright_update_0_write0_write(hw_uint<32> & bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_10.push(bright_bright_update_0_write0);
  bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_bright_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_416();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_209();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_2();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_415();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_208();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_1();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_414();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_207();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1) {
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1) {
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* one reader or all rams */ (-193 + d0 == 0 && 192 - d1 >= 0) ? (2911) : (192 - d1 >= 0 && 192 - d0 >= 0) ? (2912) : (-193 + d1 == 0) ? ((2897 - d0)) : (-194 + d0 >= 0 && 192 - d1 >= 0) ? ((3104 - d0)) : (-194 + d1 >= 0) ? (((42848 - d0) - 207 * d1)) : 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_10.peek_0();
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
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store[42025];

#else
  hw_uint<32> * bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)] = value;
  }

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
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
	auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store[10201];

#else
  hw_uint<32> * bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)] = value;
  }

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
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
	auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store[2401];

#else
  hw_uint<32> * bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)] = value;
  }

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
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store[10609];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 103) capacity = 100
	fifo<hw_uint<32> , 100> f5;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [104, 105) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [105, 106) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [106, 206) capacity = 100
	fifo<hw_uint<32> , 100> f11;
	// Parition [206, 207) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [208, 208] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_102() {
		return f5.back();
	}

	inline hw_uint<32>  peek_103() {
		return f6.back();
	}

	inline hw_uint<32>  peek_104() {
		return f8.back();
	}

	inline hw_uint<32>  peek_105() {
		return f10.back();
	}

	inline hw_uint<32>  peek_205() {
		return f11.back();
	}

	inline hw_uint<32>  peek_206() {
		return f12.back();
	}

	inline hw_uint<32>  peek_207() {
		return f14.back();
	}

	inline hw_uint<32>  peek_208() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 102) {
			return f5.back();
		}
		if (offset == 103) {
			return f6.back();
		}
		if (offset == 104) {
			return f8.back();
		}
		if (offset == 105) {
			return f10.back();
		}
		if (offset == 205) {
			return f11.back();
		}
		if (offset == 206) {
			return f12.back();
		}
		if (offset == 207) {
			return f14.back();
		}
		if (offset == 208) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 625
	// # of read delays: 314
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store[10609];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_store[(d0 + d1*103)] = value;
  }

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

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 721
	// # of read delays: 462
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store[10609];

#else
  hw_uint<32> * bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_store[(d0 + d1*103)] = value;
  }

	fifo<hw_uint<32> , 721> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(720 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_cache {
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_208();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_105();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_207();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_104();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_206();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_103();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* one reader or all rams */ (-97 + d0 == 0 && 96 - d1 >= 0) ? (623) : (96 - d1 >= 0 && 96 - d0 >= 0) ? (624) : (-97 + d1 == 0) ? ((617 - d0)) : (-98 + d0 >= 0 && 96 - d1 >= 0) ? ((720 - d0)) : (-98 + d1 >= 0) ? (((10608 - d0) - 103 * d1)) : 0);
	return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((d1 == 0 && -194 + d0 >= 0) || (-1 + d1 == 0)) ? ((720 - floord(d0, 2))) : (d1 == 0 && 193 - d0 >= 0) ? (624) : (((-d1) % 2 == 0 && -194 + d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 193 - d1 >= 0)) ? ((720 - floord(d0, 2))) : (-194 + d1 >= 0) ? (((10608 - floord(d0, 2)) - 103 * floord(d1, 2))) : ((-d1) % 2 == 0 && 193 - d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) ? (624) : 0);
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

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store[2601];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 51) capacity = 48
	fifo<hw_uint<32> , 48> f5;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [53, 54) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [54, 102) capacity = 48
	fifo<hw_uint<32> , 48> f11;
	// Parition [102, 103) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [104, 104] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_50() {
		return f5.back();
	}

	inline hw_uint<32>  peek_51() {
		return f6.back();
	}

	inline hw_uint<32>  peek_52() {
		return f8.back();
	}

	inline hw_uint<32>  peek_53() {
		return f10.back();
	}

	inline hw_uint<32>  peek_101() {
		return f11.back();
	}

	inline hw_uint<32>  peek_102() {
		return f12.back();
	}

	inline hw_uint<32>  peek_103() {
		return f14.back();
	}

	inline hw_uint<32>  peek_104() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 50) {
			return f5.back();
		}
		if (offset == 51) {
			return f6.back();
		}
		if (offset == 52) {
			return f8.back();
		}
		if (offset == 53) {
			return f10.back();
		}
		if (offset == 101) {
			return f11.back();
		}
		if (offset == 102) {
			return f12.back();
		}
		if (offset == 103) {
			return f14.back();
		}
		if (offset == 104) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store[2601];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 105> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 153
	// # of read delays: 103
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store[2601];

#else
  hw_uint<32> * bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 153> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(152 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_cache {
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
	return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ (d1 == 0 && -98 + d0 >= 0) ? (103) : (-98 + d1 >= 0) ? ((101 - floord(d0, 2))) : (-1 + d1 == 0) ? ((152 - floord(d0, 2))) : (d1 == 0 && 97 - d0 >= 0) ? (104) : ((-d1) % 2 == 0 && -98 + d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (103) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 97 - d1 >= 0) ? ((152 - floord(d0, 2))) : ((-d1) % 2 == 0 && 97 - d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (104) : 0);
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
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_store[625];

#else
  hw_uint<32> * bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_store[(d0 + d1*25)] = value;
  }

	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_store[625];

#else
  hw_uint<32> * bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)] = value;
  }

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

struct bright_gauss_ds_3_cache {
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<32> & bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
	return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store[10000];

#else
  hw_uint<32> * bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)] = value;
  }

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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store[2500];

#else
  hw_uint<32> * bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)] = value;
  }

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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store[10000];

#else
  hw_uint<32> * bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)] = value;
  }

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
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store[2500];

#else
  hw_uint<32> * bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)] = value;
  }

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
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_bright_weights_update_0_write0_merged_banks_2_store[42849];

#else
  hw_uint<32> * bright_weights_bright_weights_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_bright_weights_update_0_write0_merged_banks_2_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_bright_weights_update_0_write0_merged_banks_2_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_bright_weights_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct bright_weights_cache {
  bright_weights_bright_weights_update_0_write0_merged_banks_2_cache bright_weights_bright_weights_update_0_write0_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<32> & bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
	return value_bright_weights_bright_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
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

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store[42849];

#else
  hw_uint<32> * bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 207) capacity = 204
	fifo<hw_uint<32> , 204> f5;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [208, 209) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [209, 210) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [210, 414) capacity = 204
	fifo<hw_uint<32> , 204> f11;
	// Parition [414, 415) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [415, 416) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [416, 416] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_206() {
		return f5.back();
	}

	inline hw_uint<32>  peek_207() {
		return f6.back();
	}

	inline hw_uint<32>  peek_208() {
		return f8.back();
	}

	inline hw_uint<32>  peek_209() {
		return f10.back();
	}

	inline hw_uint<32>  peek_413() {
		return f11.back();
	}

	inline hw_uint<32>  peek_414() {
		return f12.back();
	}

	inline hw_uint<32>  peek_415() {
		return f14.back();
	}

	inline hw_uint<32>  peek_416() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 206) {
			return f5.back();
		}
		if (offset == 207) {
			return f6.back();
		}
		if (offset == 208) {
			return f8.back();
		}
		if (offset == 209) {
			return f10.back();
		}
		if (offset == 413) {
			return f11.back();
		}
		if (offset == 414) {
			return f12.back();
		}
		if (offset == 415) {
			return f14.back();
		}
		if (offset == 416) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 2913
	// # of read delays: 1458
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store[42849];

#else
  hw_uint<32> * bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_store[(d0 + d1*207)] = value;
  }

	fifo<hw_uint<32> , 2913> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2912 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9;
  bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0_cache bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<32> & bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.push(bright_weights_normed_bright_weights_normed_update_0_write0);
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_416();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_209();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_415();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_208();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_414();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_207();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ (-193 + d0 == 0 && 192 - d1 >= 0) ? (2911) : (192 - d1 >= 0 && 192 - d0 >= 0) ? (2912) : (-193 + d1 == 0) ? ((2897 - d0)) : (-194 + d0 >= 0 && 192 - d1 >= 0) ? ((3104 - d0)) : (-194 + d1 >= 0) ? (((42848 - d0) - 207 * d1)) : 0);
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
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[42025];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)] = value;
  }

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
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
	auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[10201];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)] = value;
  }

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
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
	auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[2401];

#else
  hw_uint<32> * bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)] = value;
  }

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
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[10609];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 103) capacity = 100
	fifo<hw_uint<32> , 100> f5;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [104, 105) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [105, 106) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [106, 206) capacity = 100
	fifo<hw_uint<32> , 100> f11;
	// Parition [206, 207) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [208, 208] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_102() {
		return f5.back();
	}

	inline hw_uint<32>  peek_103() {
		return f6.back();
	}

	inline hw_uint<32>  peek_104() {
		return f8.back();
	}

	inline hw_uint<32>  peek_105() {
		return f10.back();
	}

	inline hw_uint<32>  peek_205() {
		return f11.back();
	}

	inline hw_uint<32>  peek_206() {
		return f12.back();
	}

	inline hw_uint<32>  peek_207() {
		return f14.back();
	}

	inline hw_uint<32>  peek_208() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 102) {
			return f5.back();
		}
		if (offset == 103) {
			return f6.back();
		}
		if (offset == 104) {
			return f8.back();
		}
		if (offset == 105) {
			return f10.back();
		}
		if (offset == 205) {
			return f11.back();
		}
		if (offset == 206) {
			return f12.back();
		}
		if (offset == 207) {
			return f14.back();
		}
		if (offset == 208) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 625
	// # of read delays: 314
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[10609];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[(d0 + d1*103)] = value;
  }

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

struct bright_weights_normed_gauss_ds_1_cache {
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_208();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_105();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_207();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_104();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_206();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_103();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (-97 + d0 == 0 && 96 - d1 >= 0) ? (623) : (96 - d1 >= 0 && 96 - d0 >= 0) ? (624) : (-97 + d1 == 0) ? ((617 - d0)) : (-98 + d0 >= 0 && 96 - d1 >= 0) ? ((720 - d0)) : (-98 + d1 >= 0) ? (((10608 - d0) - 103 * d1)) : 0);
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

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[2601];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 51) capacity = 48
	fifo<hw_uint<32> , 48> f5;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [53, 54) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [54, 102) capacity = 48
	fifo<hw_uint<32> , 48> f11;
	// Parition [102, 103) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [104, 104] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_50() {
		return f5.back();
	}

	inline hw_uint<32>  peek_51() {
		return f6.back();
	}

	inline hw_uint<32>  peek_52() {
		return f8.back();
	}

	inline hw_uint<32>  peek_53() {
		return f10.back();
	}

	inline hw_uint<32>  peek_101() {
		return f11.back();
	}

	inline hw_uint<32>  peek_102() {
		return f12.back();
	}

	inline hw_uint<32>  peek_103() {
		return f14.back();
	}

	inline hw_uint<32>  peek_104() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 50) {
			return f5.back();
		}
		if (offset == 51) {
			return f6.back();
		}
		if (offset == 52) {
			return f8.back();
		}
		if (offset == 53) {
			return f10.back();
		}
		if (offset == 101) {
			return f11.back();
		}
		if (offset == 102) {
			return f12.back();
		}
		if (offset == 103) {
			return f14.back();
		}
		if (offset == 104) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[2601];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 105> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_cache {
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
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
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[625];

#else
  hw_uint<32> * bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)] = value;
  }

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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct dark_dark_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_dark_update_0_write0_merged_banks_10_store[42849];

#else
  hw_uint<32> * dark_dark_update_0_write0_merged_banks_10_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_dark_update_0_write0_merged_banks_10_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_dark_update_0_write0_merged_banks_10_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 207) capacity = 204
	fifo<hw_uint<32> , 204> f5;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [208, 209) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [209, 210) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [210, 414) capacity = 204
	fifo<hw_uint<32> , 204> f11;
	// Parition [414, 415) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [415, 416) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [416, 416] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_206() {
		return f5.back();
	}

	inline hw_uint<32>  peek_207() {
		return f6.back();
	}

	inline hw_uint<32>  peek_208() {
		return f8.back();
	}

	inline hw_uint<32>  peek_209() {
		return f10.back();
	}

	inline hw_uint<32>  peek_413() {
		return f11.back();
	}

	inline hw_uint<32>  peek_414() {
		return f12.back();
	}

	inline hw_uint<32>  peek_415() {
		return f14.back();
	}

	inline hw_uint<32>  peek_416() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 206) {
			return f5.back();
		}
		if (offset == 207) {
			return f6.back();
		}
		if (offset == 208) {
			return f8.back();
		}
		if (offset == 209) {
			return f10.back();
		}
		if (offset == 413) {
			return f11.back();
		}
		if (offset == 414) {
			return f12.back();
		}
		if (offset == 415) {
			return f14.back();
		}
		if (offset == 416) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_dark_update_0_write0_merged_banks_10: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 2913
	// # of read delays: 1458
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store[42849];

#else
  hw_uint<32> * dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_store[(d0 + d1*207)] = value;
  }

	fifo<hw_uint<32> , 2913> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2912 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_cache {
  dark_dark_update_0_write0_merged_banks_10_cache dark_dark_update_0_write0_merged_banks_10;
  dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0;
};



inline void dark_dark_update_0_write0_write(hw_uint<32> & dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_10.push(dark_dark_update_0_write0);
  dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_dark_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_416();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_209();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_2();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_415();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_208();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_1();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_414();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_207();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1) {
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1) {
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* one reader or all rams */ (-193 + d0 == 0 && 192 - d1 >= 0) ? (2911) : (192 - d1 >= 0 && 192 - d0 >= 0) ? (2912) : (-193 + d1 == 0) ? ((2897 - d0)) : (-194 + d0 >= 0 && 192 - d1 >= 0) ? ((3104 - d0)) : (-194 + d1 >= 0) ? (((42848 - d0) - 207 * d1)) : 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_10.peek_0();
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
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store[42025];

#else
  hw_uint<32> * dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)] = value;
  }

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
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
	auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store[10201];

#else
  hw_uint<32> * dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)] = value;
  }

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
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
	auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store[2401];

#else
  hw_uint<32> * dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)] = value;
  }

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
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store[10609];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 103) capacity = 100
	fifo<hw_uint<32> , 100> f5;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [104, 105) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [105, 106) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [106, 206) capacity = 100
	fifo<hw_uint<32> , 100> f11;
	// Parition [206, 207) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [208, 208] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_102() {
		return f5.back();
	}

	inline hw_uint<32>  peek_103() {
		return f6.back();
	}

	inline hw_uint<32>  peek_104() {
		return f8.back();
	}

	inline hw_uint<32>  peek_105() {
		return f10.back();
	}

	inline hw_uint<32>  peek_205() {
		return f11.back();
	}

	inline hw_uint<32>  peek_206() {
		return f12.back();
	}

	inline hw_uint<32>  peek_207() {
		return f14.back();
	}

	inline hw_uint<32>  peek_208() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 102) {
			return f5.back();
		}
		if (offset == 103) {
			return f6.back();
		}
		if (offset == 104) {
			return f8.back();
		}
		if (offset == 105) {
			return f10.back();
		}
		if (offset == 205) {
			return f11.back();
		}
		if (offset == 206) {
			return f12.back();
		}
		if (offset == 207) {
			return f14.back();
		}
		if (offset == 208) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 625
	// # of read delays: 314
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store[10609];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_store[(d0 + d1*103)] = value;
  }

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

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 721
	// # of read delays: 462
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store[10609];

#else
  hw_uint<32> * dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_store[(d0 + d1*103)] = value;
  }

	fifo<hw_uint<32> , 721> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(720 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_cache {
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_208();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_105();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_207();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_104();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_206();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_103();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ (-97 + d0 == 0 && 96 - d1 >= 0) ? (623) : (96 - d1 >= 0 && 96 - d0 >= 0) ? (624) : (-97 + d1 == 0) ? ((617 - d0)) : (-98 + d0 >= 0 && 96 - d1 >= 0) ? ((720 - d0)) : (-98 + d1 >= 0) ? (((10608 - d0) - 103 * d1)) : 0);
	return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((d1 == 0 && -194 + d0 >= 0) || (-1 + d1 == 0)) ? ((720 - floord(d0, 2))) : (d1 == 0 && 193 - d0 >= 0) ? (624) : (((-d1) % 2 == 0 && -194 + d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) || ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 193 - d1 >= 0)) ? ((720 - floord(d0, 2))) : (-194 + d1 >= 0) ? (((10608 - floord(d0, 2)) - 103 * floord(d1, 2))) : ((-d1) % 2 == 0 && 193 - d0 >= 0 && -2 + d1 >= 0 && 192 - d1 >= 0) ? (624) : 0);
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

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store[2601];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 51) capacity = 48
	fifo<hw_uint<32> , 48> f5;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [53, 54) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [54, 102) capacity = 48
	fifo<hw_uint<32> , 48> f11;
	// Parition [102, 103) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [104, 104] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_50() {
		return f5.back();
	}

	inline hw_uint<32>  peek_51() {
		return f6.back();
	}

	inline hw_uint<32>  peek_52() {
		return f8.back();
	}

	inline hw_uint<32>  peek_53() {
		return f10.back();
	}

	inline hw_uint<32>  peek_101() {
		return f11.back();
	}

	inline hw_uint<32>  peek_102() {
		return f12.back();
	}

	inline hw_uint<32>  peek_103() {
		return f14.back();
	}

	inline hw_uint<32>  peek_104() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 50) {
			return f5.back();
		}
		if (offset == 51) {
			return f6.back();
		}
		if (offset == 52) {
			return f8.back();
		}
		if (offset == 53) {
			return f10.back();
		}
		if (offset == 101) {
			return f11.back();
		}
		if (offset == 102) {
			return f12.back();
		}
		if (offset == 103) {
			return f14.back();
		}
		if (offset == 104) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store[2601];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 105> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 153
	// # of read delays: 103
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store[2601];

#else
  hw_uint<32> * dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 153> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(152 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_cache {
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
	return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ (d1 == 0 && -98 + d0 >= 0) ? (103) : (-98 + d1 >= 0) ? ((101 - floord(d0, 2))) : (-1 + d1 == 0) ? ((152 - floord(d0, 2))) : (d1 == 0 && 97 - d0 >= 0) ? (104) : ((-d1) % 2 == 0 && -98 + d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (103) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0 && 97 - d1 >= 0) ? ((152 - floord(d0, 2))) : ((-d1) % 2 == 0 && 97 - d0 >= 0 && -2 + d1 >= 0 && 96 - d1 >= 0) ? (104) : 0);
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
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_store[625];

#else
  hw_uint<32> * dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_store[(d0 + d1*25)] = value;
  }

	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(24 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_store[625];

#else
  hw_uint<32> * dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)] = value;
  }

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

struct dark_gauss_ds_3_cache {
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<32> & dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<32>  dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
	return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
}

inline hw_uint<32>  fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store[10000];

#else
  hw_uint<32> * dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)] = value;
  }

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
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store[2500];

#else
  hw_uint<32> * dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)] = value;
  }

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
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store[10000];

#else
  hw_uint<32> * dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)] = value;
  }

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
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store[2500];

#else
  hw_uint<32> * dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)] = value;
  }

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
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_dark_weights_update_0_write0_merged_banks_2_store[42849];

#else
  hw_uint<32> * dark_weights_dark_weights_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_dark_weights_update_0_write0_merged_banks_2_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_dark_weights_update_0_write0_merged_banks_2_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_dark_weights_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct dark_weights_cache {
  dark_weights_dark_weights_update_0_write0_merged_banks_2_cache dark_weights_dark_weights_update_0_write0_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<32> & dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
	return value_dark_weights_dark_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
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

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 417
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store[42849];

#else
  hw_uint<32> * dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 207) capacity = 204
	fifo<hw_uint<32> , 204> f5;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [208, 209) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [209, 210) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [210, 414) capacity = 204
	fifo<hw_uint<32> , 204> f11;
	// Parition [414, 415) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [415, 416) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [416, 416] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_206() {
		return f5.back();
	}

	inline hw_uint<32>  peek_207() {
		return f6.back();
	}

	inline hw_uint<32>  peek_208() {
		return f8.back();
	}

	inline hw_uint<32>  peek_209() {
		return f10.back();
	}

	inline hw_uint<32>  peek_413() {
		return f11.back();
	}

	inline hw_uint<32>  peek_414() {
		return f12.back();
	}

	inline hw_uint<32>  peek_415() {
		return f14.back();
	}

	inline hw_uint<32>  peek_416() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 206) {
			return f5.back();
		}
		if (offset == 207) {
			return f6.back();
		}
		if (offset == 208) {
			return f8.back();
		}
		if (offset == 209) {
			return f10.back();
		}
		if (offset == 413) {
			return f11.back();
		}
		if (offset == 414) {
			return f12.back();
		}
		if (offset == 415) {
			return f14.back();
		}
		if (offset == 416) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 2913
	// # of read delays: 1458
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store[42849];

#else
  hw_uint<32> * dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_store[(d0 + d1*207)] = value;
  }

	fifo<hw_uint<32> , 2913> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(2912 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9;
  dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0_cache dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<32> & dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.push(dark_weights_normed_dark_weights_normed_update_0_write0);
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_416();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_209();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_415();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_208();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_414();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 1 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_207();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + d0, 2 + d1] : 0 <= d0 <= 204 and 0 <= d1 <= 204 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

inline hw_uint<32>  fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ (-193 + d0 == 0 && 192 - d1 >= 0) ? (2911) : (192 - d1 >= 0 && 192 - d0 >= 0) ? (2912) : (-193 + d1 == 0) ? ((2897 - d0)) : (-194 + d0 >= 0 && 192 - d1 >= 0) ? ((3104 - d0)) : (-194 + d1 >= 0) ? (((42848 - d0) - 207 * d1)) : 0);
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
	// RAM Box: {[0, 204], [0, 204]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[42025];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1_store[(d0 + d1*205)] = value;
  }

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
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 102 and 0 <= d1 <= 102 }
	auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 100], [0, 100]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[10201];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1_store[(d0 + d1*101)] = value;
  }

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
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 50 and 0 <= d1 <= 50 }
	auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 48], [0, 48]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[2401];

#else
  hw_uint<32> * dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1_store[(d0 + d1*49)] = value;
  }

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
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 209
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[10609];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_store[(d0 + d1*103)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 103) capacity = 100
	fifo<hw_uint<32> , 100> f5;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [104, 105) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [105, 106) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [106, 206) capacity = 100
	fifo<hw_uint<32> , 100> f11;
	// Parition [206, 207) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [207, 208) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [208, 208] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_102() {
		return f5.back();
	}

	inline hw_uint<32>  peek_103() {
		return f6.back();
	}

	inline hw_uint<32>  peek_104() {
		return f8.back();
	}

	inline hw_uint<32>  peek_105() {
		return f10.back();
	}

	inline hw_uint<32>  peek_205() {
		return f11.back();
	}

	inline hw_uint<32>  peek_206() {
		return f12.back();
	}

	inline hw_uint<32>  peek_207() {
		return f14.back();
	}

	inline hw_uint<32>  peek_208() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 102) {
			return f5.back();
		}
		if (offset == 103) {
			return f6.back();
		}
		if (offset == 104) {
			return f8.back();
		}
		if (offset == 105) {
			return f10.back();
		}
		if (offset == 205) {
			return f11.back();
		}
		if (offset == 206) {
			return f12.back();
		}
		if (offset == 207) {
			return f14.back();
		}
		if (offset == 208) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 102], [0, 102]}
	// Capacity: 625
	// # of read delays: 314
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[10609];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[(d0 + d1*103)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_store[(d0 + d1*103)] = value;
  }

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

struct dark_weights_normed_gauss_ds_1_cache {
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_208();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_105();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_207();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_104();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_206();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_103();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 100 and 0 <= d1 <= 100 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
}

inline hw_uint<32>  fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ (-97 + d0 == 0 && 96 - d1 >= 0) ? (623) : (96 - d1 >= 0 && 96 - d0 >= 0) ? (624) : (-97 + d1 == 0) ? ((617 - d0)) : (-98 + d0 >= 0 && 96 - d1 >= 0) ? ((720 - d0)) : (-98 + d1 >= 0) ? (((10608 - d0) - 103 * d1)) : 0);
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

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 9
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[2601];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_store[(d0 + d1*51)] = value;
  }

	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 51) capacity = 48
	fifo<hw_uint<32> , 48> f5;
	// Parition [51, 52) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [52, 53) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [53, 54) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [54, 102) capacity = 48
	fifo<hw_uint<32> , 48> f11;
	// Parition [102, 103) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [103, 104) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [104, 104] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_50() {
		return f5.back();
	}

	inline hw_uint<32>  peek_51() {
		return f6.back();
	}

	inline hw_uint<32>  peek_52() {
		return f8.back();
	}

	inline hw_uint<32>  peek_53() {
		return f10.back();
	}

	inline hw_uint<32>  peek_101() {
		return f11.back();
	}

	inline hw_uint<32>  peek_102() {
		return f12.back();
	}

	inline hw_uint<32>  peek_103() {
		return f14.back();
	}

	inline hw_uint<32>  peek_104() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 50) {
			return f5.back();
		}
		if (offset == 51) {
			return f6.back();
		}
		if (offset == 52) {
			return f8.back();
		}
		if (offset == 53) {
			return f10.back();
		}
		if (offset == 101) {
			return f11.back();
		}
		if (offset == 102) {
			return f12.back();
		}
		if (offset == 103) {
			return f14.back();
		}
		if (offset == 104) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 50], [0, 50]}
	// Capacity: 105
	// # of read delays: 54
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[2601];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[(d0 + d1*51)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_store[(d0 + d1*51)] = value;
  }

	fifo<hw_uint<32> , 105> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(104 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_cache {
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<32> & dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_104();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_53();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_103();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_52();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_102();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_51();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 48 and 0 <= d1 <= 48 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
	return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
}

inline hw_uint<32>  fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-49 + d0 == 0 && 48 - d1 >= 0) ? (103) : (48 - d1 >= 0 && 48 - d0 >= 0) ? (104) : (-49 + d1 == 0) ? ((101 - d0)) : 0);
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
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[625];

#else
  hw_uint<32> * dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1_store[(d0 + d1*25)] = value;
  }

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
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 24 and 0 <= d1 <= 24 }
	auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    final_merged_0_final_merged_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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
  // pyramid_synthetic_exposure_fusion_rd0 read pattern: { pyramid_synthetic_exposure_fusion_update_0[d0, d1] -> final_merged_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 100
	// # of read delays: 101
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store[10000];

#else
  hw_uint<32> * final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_store[(d0 + d1*100)] = value;
  }

	fifo<hw_uint<32> , 100> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(99 - offset);
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
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[o0, o1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 197 - d0 >= 0) ? ((99 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 50
	// # of read delays: 51
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store[2500];

#else
  hw_uint<32> * final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_store[(d0 + d1*50)] = value;
  }

	fifo<hw_uint<32> , 50> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(49 - offset);
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
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 97 - d0 >= 0) ? ((49 - floord(2*d0, 4))) : 0);
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

struct fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 199], [0, 199]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store[40000];

#else
  hw_uint<32> * fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    fused_level_0_fused_level_0_update_0_write0_merged_banks_1_store[(d0 + d1*200)] = value;
  }

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

struct fused_level_0_cache {
  fused_level_0_fused_level_0_update_0_write0_merged_banks_1_cache fused_level_0_fused_level_0_update_0_write0_merged_banks_1;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<32> & fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.push(fused_level_0_fused_level_0_update_0_write0);
}

inline hw_uint<32>  final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1) {
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[d0, d1] : 0 <= d0 <= 199 and 0 <= d1 <= 199 }
	auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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

struct fused_level_1_fused_level_1_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 99], [0, 99]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store[10000];

#else
  hw_uint<32> * fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    fused_level_1_fused_level_1_update_0_write0_merged_banks_1_store[(d0 + d1*100)] = value;
  }

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

struct fused_level_1_cache {
  fused_level_1_fused_level_1_update_0_write0_merged_banks_1_cache fused_level_1_fused_level_1_update_0_write0_merged_banks_1;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<32> & fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_merged_banks_1.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<32>  final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1) {
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 99 and 0 <= d1 <= 99 }
	auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 49], [0, 49]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store[2500];

#else
  hw_uint<32> * fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    fused_level_2_fused_level_2_update_0_write0_merged_banks_1_store[(d0 + d1*50)] = value;
  }

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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 }
	auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
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
	// RAM Box: {[0, 24], [0, 24]}
	// Capacity: 25
	// # of read delays: 26
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_store[625];

#else
  hw_uint<32> * fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_store[(d0 + d1*25)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_store[(d0 + d1*25)] = value;
  }

	fifo<hw_uint<32> , 25> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(24 - offset);
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
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 49 and 0 <= d1 <= 49 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
	auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 47 - d0 >= 0) ? ((24 - floord(2*d0, 4))) : 0);
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
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  in_in_update_0_write0_merged_banks_2_store[42849];

#else
  hw_uint<32> * in_in_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return in_in_update_0_write0_merged_banks_2_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    in_in_update_0_write0_merged_banks_2_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline hw_uint<32>  bright_rd0_select(in_cache& in, int d0, int d1) {
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
	return value_in_in_update_0_write0;
}

inline hw_uint<32>  dark_rd0_select(in_cache& in, int d0, int d1) {
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
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
	// RAM Box: {[0, 206], [0, 206]}
	// Capacity: 1
	// # of read delays: 1
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  weight_sums_weight_sums_update_0_write0_merged_banks_2_store[42849];

#else
  hw_uint<32> * weight_sums_weight_sums_update_0_write0_merged_banks_2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return weight_sums_weight_sums_update_0_write0_merged_banks_2_store[(d0 + d1*207)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    weight_sums_weight_sums_update_0_write0_merged_banks_2_store[(d0 + d1*207)] = value;
  }

	// Parition [0, 0] capacity = 1
	fifo<hw_uint<32> , 1> f1;


	inline hw_uint<32>  peek_0() {
		return f1.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f1.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in weight_sums_weight_sums_update_0_write0_merged_banks_2: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f1.push(value);
	}

};

struct weight_sums_cache {
  weight_sums_weight_sums_update_0_write0_merged_banks_2_cache weight_sums_weight_sums_update_0_write0_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<32> & weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline hw_uint<32>  bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
	return value_weight_sums_weight_sums_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 206 and 0 <= d1 <= 206 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
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
inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = scale_exposure(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = exposure_weight(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(compute_result, bright_weights, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0_dark_weights_normed," << d0<< "," << d1<< "," <<  dark_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_1_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(compute_result, dark_gauss_blur_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_1_update_0_dark_weights_normed_gauss_blur_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_1_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(compute_result, dark_laplace_us_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_3_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_gauss_blur_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_2_update_0_bright_gauss_blur_2," << d0<< "," << d1<< "," <<  bright_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_gauss_ds_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_3_update_0_dark_gauss_blur_3," << d0<< "," << d1<< "," <<  dark_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_gauss_ds_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_3_update_0_bright_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_3_update_0_bright_gauss_blur_3," << d0<< "," << d1<< "," <<  bright_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_gauss_ds_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_3_update_0_dark_weights_normed_gauss_blur_3," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_2_update_0_dark_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(compute_result, dark_laplace_us_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_0_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(compute_result, dark_laplace_us_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_us_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_2_update_0_dark_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_2_update_0_dark_laplace_us_2," << d0<< "," << d1<< "," <<  dark_laplace_us_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(compute_result, dark_laplace_diff_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_2_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_2_update_0_bright_laplace_us_2," << d0<< "," << d1<< "," <<  bright_laplace_us_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(compute_result, bright_laplace_diff_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_1_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_1_update_0_dark_laplace_us_1," << d0<< "," << d1<< "," <<  dark_laplace_us_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(compute_result, dark_laplace_diff_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_0_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_0_update_0_bright_laplace_us_0," << d0<< "," << d1<< "," <<  bright_laplace_us_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(compute_result, bright_laplace_diff_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_1_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_1_update_0_bright_laplace_us_1," << d0<< "," << d1<< "," <<  bright_laplace_us_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(compute_result, bright_laplace_diff_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_diff_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_bright_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_dark_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_bright_weights_normed_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0_dark_weights_normed_gauss_ds_3," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = merge_exposures(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(compute_result, fused_level_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_bright_laplace_diff_2," << d0<< "," << d1<< "," <<  bright_laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_dark_laplace_diff_2," << d0<< "," << d1<< "," <<  dark_laplace_diff_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_bright_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0_dark_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = merge_exposures(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(compute_result, fused_level_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_bright_laplace_diff_1," << d0<< "," << d1<< "," <<  bright_laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_dark_laplace_diff_1," << d0<< "," << d1<< "," <<  dark_laplace_diff_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_bright_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0_dark_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = merge_exposures(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(compute_result, fused_level_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_bright_laplace_diff_0," << d0<< "," << d1<< "," <<  bright_laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_dark_laplace_diff_0," << d0<< "," << d1<< "," <<  dark_laplace_diff_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_bright_weights_normed," << d0<< "," << d1<< "," <<  bright_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0_dark_weights_normed," << d0<< "," << d1<< "," <<  dark_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = merge_exposures(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(compute_result, fused_level_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "fused_level_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_2_update_0_fused_level_3," << d0<< "," << d1<< "," <<  fused_level_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_2_update_0_fused_level_2," << d0<< "," << d1<< "," <<  fused_level_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = add(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(compute_result, final_merged_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_1_update_0_final_merged_2," << d0<< "," << d1<< "," <<  final_merged_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_1_update_0_fused_level_1," << d0<< "," << d1<< "," <<  fused_level_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = add(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(compute_result, final_merged_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void pyramid_synthetic_exposure_fusion_update_0(final_merged_0_cache& final_merged_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */pyramid_synthetic_exposure_fusion, int d0, int d1) {
	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_pyramid_synthetic_exposure_fusion_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "pyramid_synthetic_exposure_fusion_update_0_final_merged_0," << d0<< "," << d1<< "," <<  final_merged_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(final_merged_0_0_c__0_value);
	// Produce: pyramid_synthetic_exposure_fusion
	pyramid_synthetic_exposure_fusion.write(compute_result);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "pyramid_synthetic_exposure_fusion_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_2_update_0_dark_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_gauss_blur_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_blur_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "in_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(compute_result, bright, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = exposure_weight(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "weight_sums_update_0_dark_weights," << d0<< "," << d1<< "," <<  dark_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "weight_sums_update_0_bright_weights," << d0<< "," << d1<< "," <<  bright_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = add(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(compute_result, weight_sums, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "weight_sums_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_update_0_bright_weights," << d0<< "," << d1<< "," <<  bright_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_update_0_weight_sums," << d0<< "," << d1<< "," <<  weight_sums_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = f_divide(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(compute_result, bright_weights_normed, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_update_0_dark_weights," << d0<< "," << d1<< "," <<  dark_weights_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_update_0_weight_sums," << d0<< "," << d1<< "," <<  weight_sums_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = f_divide(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_1_update_0_dark_gauss_blur_1," << d0<< "," << d1<< "," <<  dark_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(compute_result, dark_gauss_ds_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_1_update_0_bright," << d0<< "," << d1<< "," <<  bright_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_gauss_blur_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_2_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_gauss_blur_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_2_update_0_dark_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_2_update_0_dark_gauss_blur_2," << d0<< "," << d1<< "," <<  dark_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_gauss_ds_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_gauss_ds_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_1_update_0_bright_weights_normed_gauss_blur_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_2_update_0_bright_weights_normed_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_3_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(compute_result, bright_gauss_blur_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_blur_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_2_update_0_dark_weights_normed_gauss_blur_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_ds_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_ds_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_3_update_0_dark_weights_normed_gauss_ds_2," << d0<< "," << d1<< "," <<  dark_weights_normed_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(compute_result, dark_weights_normed_gauss_blur_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_weights_normed_gauss_blur_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_0_update_0_dark," << d0<< "," << d1<< "," <<  dark_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_0_update_0_dark_laplace_us_0," << d0<< "," << d1<< "," <<  dark_laplace_us_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = diff(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(compute_result, dark_laplace_diff_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "dark_laplace_diff_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_2_update_0_bright_weights_normed_gauss_blur_2," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_3_update_0_bright_weights_normed_gauss_blur_3," << d0<< "," << d1<< "," <<  bright_weights_normed_gauss_blur_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_ds_3, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_ds_3_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_1_update_0_bright_gauss_ds_2," << d0<< "," << d1<< "," <<  bright_gauss_ds_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(compute_result, bright_laplace_us_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_2_update_0_bright_gauss_ds_3," << d0<< "," << d1<< "," <<  bright_gauss_ds_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(compute_result, bright_laplace_us_2, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_2_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_0_update_0_bright_gauss_ds_1," << d0<< "," << d1<< "," <<  bright_gauss_ds_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(compute_result, bright_laplace_us_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_laplace_us_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0_bright_weights_normed," << d0<< "," << d1<< "," <<  bright_weights_normed_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = reduce_gauss(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(compute_result, bright_weights_normed_gauss_blur_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_weights_normed_gauss_blur_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_1_update_0_bright_gauss_blur_1," << d0<< "," << d1<< "," <<  bright_gauss_blur_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = id(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(compute_result, bright_gauss_ds_1, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "bright_gauss_ds_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_0_update_0_final_merged_1," << d0<< "," << d1<< "," <<  final_merged_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_0_update_0_fused_level_0," << d0<< "," << d1<< "," <<  fused_level_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = add(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(compute_result, final_merged_0, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "final_merged_0_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void pyramid_synthetic_exposure_fusion_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */pyramid_synthetic_exposure_fusion) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pyramid_synthetic_exposure_fusion_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_0 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_1 inter false
#endif //__VIVADO_SYNTH__
  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_laplace_us_2 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed_gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_0 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_1 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_diff_2 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_0 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_1 inter false
#endif //__VIVADO_SYNTH__
  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_laplace_us_2 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_1 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_2 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_blur_3 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_1 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_2 inter false
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed_gauss_ds_3 inter false
#endif //__VIVADO_SYNTH__
  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_0 inter false
#endif //__VIVADO_SYNTH__
  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_1 inter false
#endif //__VIVADO_SYNTH__
  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=final_merged_2 inter false
#endif //__VIVADO_SYNTH__
  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_0 inter false
#endif //__VIVADO_SYNTH__
  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_1 inter false
#endif //__VIVADO_SYNTH__
  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_2 inter false
#endif //__VIVADO_SYNTH__
  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=fused_level_3 inter false
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif //__VIVADO_SYNTH__
  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=weight_sums inter false
#endif //__VIVADO_SYNTH__
	  int c0 = 0;
	  int c1 = 0;
	  int global_time = 0;
	#ifdef __VIVADO_SYNTH__
	  while(true) {
	#else
	  while(global_time < 45796) {
	#endif // __VIVADO_SYNTH__
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS dependence inter false
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_update_0(in, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_update_0(in, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_weights_update_0(dark, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_weights_update_0(bright, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	dark_gauss_blur_1_update_0(dark, dark_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((0 <= c1 && c1 <= 206) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 206) && ((c0 - 0) % 1 == 0)) {
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	bright_gauss_blur_1_update_0(bright, bright_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed, dark_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	dark_gauss_ds_1_update_0(dark_gauss_blur_1, dark_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	dark_gauss_blur_2_update_0(dark_gauss_ds_1, dark_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 1 == 0)) {
	bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed, bright_weights_normed_gauss_blur_1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	bright_gauss_ds_1_update_0(bright_gauss_blur_1, bright_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	bright_gauss_blur_2_update_0(bright_gauss_ds_1, bright_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	dark_gauss_ds_2_update_0(dark_gauss_blur_2, dark_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	dark_gauss_blur_3_update_0(dark_gauss_ds_2, dark_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((2 <= c1 && c1 <= 206) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 206) && ((c0 - 2) % 2 == 0)) {
	bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1, (c1 - 2) / 2, (c0 - 2) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 2 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 2 == 0)) {
	bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2, (c1 - 6) / 2, (c0 - 6) / 2);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	bright_gauss_ds_2_update_0(bright_gauss_blur_2, bright_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	bright_gauss_blur_3_update_0(bright_gauss_ds_2, bright_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	dark_gauss_ds_3_update_0(dark_gauss_blur_3, dark_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	
	      if ((6 <= c1 && c1 <= 206) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 206) && ((c0 - 6) % 4 == 0)) {
	bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2, (c1 - 6) / 4, (c0 - 6) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 4 == 0)) {
	bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	bright_gauss_ds_3_update_0(bright_gauss_blur_3, bright_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_us_2_update_0(dark_gauss_ds_3, dark_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	dark_laplace_us_1_update_0(dark_gauss_ds_2, dark_laplace_us_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	dark_laplace_us_0_update_0(dark_gauss_ds_1, dark_laplace_us_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	dark_laplace_diff_2_update_0(dark_gauss_ds_2, dark_laplace_us_2, dark_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	dark_laplace_diff_1_update_0(dark_gauss_ds_1, dark_laplace_us_1, dark_laplace_diff_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	dark_laplace_diff_0_update_0(dark, dark_laplace_us_0, dark_laplace_diff_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_us_2_update_0(bright_gauss_ds_3, bright_laplace_us_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	bright_laplace_us_1_update_0(bright_gauss_ds_2, bright_laplace_us_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	bright_laplace_us_0_update_0(bright_gauss_ds_1, bright_laplace_us_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	bright_laplace_diff_2_update_0(bright_gauss_ds_2, bright_laplace_us_2, bright_laplace_diff_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	bright_laplace_diff_1_update_0(bright_gauss_ds_1, bright_laplace_us_1, bright_laplace_diff_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	bright_laplace_diff_0_update_0(bright, bright_laplace_us_0, bright_laplace_diff_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 206) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 206) && ((c0 - 14) % 8 == 0)) {
	fused_level_3_update_0(bright_gauss_ds_3, dark_gauss_ds_3, bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3, fused_level_3, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	fused_level_2_update_0(bright_laplace_diff_2, dark_laplace_diff_2, bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2, fused_level_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	fused_level_1_update_0(bright_laplace_diff_1, dark_laplace_diff_1, bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1, fused_level_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	fused_level_0_update_0(bright_laplace_diff_0, dark_laplace_diff_0, bright_weights_normed, dark_weights_normed, fused_level_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 210) && ((c1 - 14) % 4 == 0) && (14 <= c0 && c0 <= 210) && ((c0 - 14) % 4 == 0)) {
	final_merged_2_update_0(fused_level_3, fused_level_2, final_merged_2, (c1 - 14) / 4, (c0 - 14) / 4);
	      }
	
	      if ((14 <= c1 && c1 <= 212) && ((c1 - 14) % 2 == 0) && (14 <= c0 && c0 <= 212) && ((c0 - 14) % 2 == 0)) {
	final_merged_1_update_0(final_merged_2, fused_level_1, final_merged_1, (c1 - 14) / 2, (c0 - 14) / 2);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	final_merged_0_update_0(final_merged_1, fused_level_0, final_merged_0, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	      if ((14 <= c1 && c1 <= 213) && ((c1 - 14) % 1 == 0) && (14 <= c0 && c0 <= 213) && ((c0 - 14) % 1 == 0)) {
	pyramid_synthetic_exposure_fusion_update_0(final_merged_0, pyramid_synthetic_exposure_fusion, (c1 - 14) / 1, (c0 - 14) / 1);
	      }
	
	    bool c0_at_max = c0 == 213;
	    bool c1_at_max = c1 == 213;
	    if (1 && c1_at_max) {
	      if (c0_at_max) {
	        c0 = 0;
	      } else {
	        c0++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c0 = " << c0 << endl;
	#endif //__VIVADO_SYNTH__
	    if (1) {
	      if (c1_at_max) {
	        c1 = 0;
	      } else {
	        c1++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c1 = " << c1 << endl;
	#endif //__VIVADO_SYNTH__
	    global_time++;
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
