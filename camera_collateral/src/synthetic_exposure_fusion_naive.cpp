#include "conv_3x3.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_2_cache {
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

struct bright_cache {
  bright_bright_update_0_write0_merged_banks_2_cache bright_bright_update_0_write0_merged_banks_2;
};



inline void bright_bright_update_0_write0_write(hw_uint<32> & bright_bright_update_0_write0, bright_cache& bright, int d0, int d1) {
  bright.bright_bright_update_0_write0_merged_banks_2.push(bright_bright_update_0_write0);
}

inline hw_uint<32>  bright_weights_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { bright_weights_update_0[d0, d1] -> bright_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_bright_bright_update_0_write0;
}

inline hw_uint<32>  merged_rd0_select(bright_cache& bright, int d0, int d1) {
	// lexmax events: { merged_update_0[d0, d1] -> bright_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // merged_rd0 read pattern: { merged_update_0[d0, d1] -> bright[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_bright_bright_update_0_write0;
}

// # of bundles = 3
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

// merged_update_0_read
//	merged_rd0
inline hw_uint<32> bright_merged_update_0_read_bundle_read(bright_cache& bright, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  merged_rd0_res = merged_rd0_select(bright, d0, d1);
	set_at<0, 32>(result, merged_rd0_res);
	return result;
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
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> bright_weights_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_bright_weights_bright_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> bright_weights_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
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

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_1_cache {
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

struct bright_weights_normed_cache {
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_1_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_1;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<32> & bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_1.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline hw_uint<32>  merged_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	// lexmax events: { merged_update_0[d0, d1] -> bright_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // merged_rd0 read pattern: { merged_update_0[d0, d1] -> bright_weights_normed[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_bright_weights_normed_bright_weights_normed_update_0_write0;
}

// # of bundles = 2
// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32>  bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1);
}

// merged_update_0_read
//	merged_rd0
inline hw_uint<32> bright_weights_normed_merged_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  merged_rd0_res = merged_rd0_select(bright_weights_normed, d0, d1);
	set_at<0, 32>(result, merged_rd0_res);
	return result;
}



#include "hw_classes.h"

struct dark_dark_update_0_write0_merged_banks_2_cache {
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

struct dark_cache {
  dark_dark_update_0_write0_merged_banks_2_cache dark_dark_update_0_write0_merged_banks_2;
};



inline void dark_dark_update_0_write0_write(hw_uint<32> & dark_dark_update_0_write0, dark_cache& dark, int d0, int d1) {
  dark.dark_dark_update_0_write0_merged_banks_2.push(dark_dark_update_0_write0);
}

inline hw_uint<32>  dark_weights_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { dark_weights_update_0[d0, d1] -> dark_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_dark_dark_update_0_write0;
}

inline hw_uint<32>  merged_rd0_select(dark_cache& dark, int d0, int d1) {
	// lexmax events: { merged_update_0[d0, d1] -> dark_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // merged_rd0 read pattern: { merged_update_0[d0, d1] -> dark[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_dark_dark_update_0_write0;
}

// # of bundles = 3
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

// merged_update_0_read
//	merged_rd0
inline hw_uint<32> dark_merged_update_0_read_bundle_read(dark_cache& dark, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  merged_rd0_res = merged_rd0_select(dark, d0, d1);
	set_at<0, 32>(result, merged_rd0_res);
	return result;
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
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> dark_weights_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_dark_weights_dark_weights_update_0_write0;
}

inline hw_uint<32>  weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1) {
	// lexmax events: { weight_sums_update_0[d0, d1] -> dark_weights_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
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

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_1_cache {
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

struct dark_weights_normed_cache {
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_1_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_1;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<32> & dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_1.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline hw_uint<32>  merged_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// lexmax events: { merged_update_0[d0, d1] -> dark_weights_normed_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // merged_rd0 read pattern: { merged_update_0[d0, d1] -> dark_weights_normed[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_dark_weights_normed_dark_weights_normed_update_0_write0;
}

// # of bundles = 2
// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32>  dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1);
}

// merged_update_0_read
//	merged_rd0
inline hw_uint<32> dark_weights_normed_merged_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  merged_rd0_res = merged_rd0_select(dark_weights_normed, d0, d1);
	set_at<0, 32>(result, merged_rd0_res);
	return result;
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
	// lexmax events: { bright_update_0[d0, d1] -> in_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_in_in_update_0_write0;
}

inline hw_uint<32>  dark_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { dark_update_0[d0, d1] -> in_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
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

struct merged_merged_update_0_write0_merged_banks_1_cache {
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

struct merged_cache {
  merged_merged_update_0_write0_merged_banks_1_cache merged_merged_update_0_write0_merged_banks_1;
};



inline void merged_merged_update_0_write0_write(hw_uint<32> & merged_merged_update_0_write0, merged_cache& merged, int d0, int d1) {
  merged.merged_merged_update_0_write0_merged_banks_1.push(merged_merged_update_0_write0);
}

inline hw_uint<32>  synthetic_exposure_fusion_rd0_select(merged_cache& merged, int d0, int d1) {
	// lexmax events: { synthetic_exposure_fusion_update_0[d0, d1] -> merged_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // synthetic_exposure_fusion_rd0 read pattern: { synthetic_exposure_fusion_update_0[d0, d1] -> merged[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_merged_merged_update_0_write0 = merged.merged_merged_update_0_write0_merged_banks_1.peek(/* Needs general delay string */ 0);
	return value_merged_merged_update_0_write0;
}

// # of bundles = 2
// merged_update_0_write
//	merged_merged_update_0_write0
inline void merged_merged_update_0_write_bundle_write(hw_uint<32>& merged_update_0_write, merged_cache& merged, int d0, int d1) {
	hw_uint<32>  merged_merged_update_0_write0_res = merged_update_0_write.extract<0, 31>();
	merged_merged_update_0_write0_write(merged_merged_update_0_write0_res, merged, d0, d1);
}

// synthetic_exposure_fusion_update_0_read
//	synthetic_exposure_fusion_rd0
inline hw_uint<32> merged_synthetic_exposure_fusion_update_0_read_bundle_read(merged_cache& merged, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  synthetic_exposure_fusion_rd0_res = synthetic_exposure_fusion_rd0_select(merged, d0, d1);
	set_at<0, 32>(result, synthetic_exposure_fusion_rd0_res);
	return result;
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
	// lexmax events: { bright_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
	auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek(/* Needs general delay string */ 0);
	return value_weight_sums_weight_sums_update_0_write0;
}

inline hw_uint<32>  dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1) {
	// lexmax events: { dark_weights_normed_update_0[d0, d1] -> weight_sums_update_0[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[d0, d1] : 0 <= d0 <= 1249 and 0 <= d1 <= 1249 }
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
inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);
}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = scale_exposure(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(compute_result, dark, d0, d1);
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

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	auto compute_result = exposure_weight(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(compute_result, dark_weights, d0, d1);
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

inline void synthetic_exposure_fusion_update_0(merged_cache& merged, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */synthetic_exposure_fusion, int d0, int d1) {
	// Consume: merged
	auto merged_0_c__0_value = merged_synthetic_exposure_fusion_update_0_read_bundle_read(merged/* source_delay */, d0, d1);
	auto compute_result = id(merged_0_c__0_value);
	// Produce: synthetic_exposure_fusion
	synthetic_exposure_fusion.write(compute_result);
}

inline void merged_update_0(bright_cache& bright, dark_cache& dark, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, merged_cache& merged, int d0, int d1) {
	// Consume: bright
	auto bright_0_c__0_value = bright_merged_update_0_read_bundle_read(bright/* source_delay */, d0, d1);
	// Consume: dark
	auto dark_0_c__0_value = dark_merged_update_0_read_bundle_read(dark/* source_delay */, d0, d1);
	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_merged_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1);
	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_merged_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1);
  //assert(false);
	auto compute_result = merge_exposures(bright_0_c__0_value, dark_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: merged
	merged_merged_update_0_write_bundle_write(compute_result, merged, d0, d1);
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

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1);
	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1);
	auto compute_result = f_divide(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(compute_result, dark_weights_normed, d0, d1);
}

// Driver function
void synthetic_exposure_fusion_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */synthetic_exposure_fusion) {
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright inter false
#endif // __VIVADO_SYNTH__

  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights inter false
#endif // __VIVADO_SYNTH__

  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=bright_weights_normed inter false
#endif // __VIVADO_SYNTH__

  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark inter false
#endif // __VIVADO_SYNTH__

  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights inter false
#endif // __VIVADO_SYNTH__

  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=dark_weights_normed inter false
#endif // __VIVADO_SYNTH__

  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif // __VIVADO_SYNTH__

  merged_cache merged;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=merged inter false
#endif // __VIVADO_SYNTH__

  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=weight_sums inter false
#endif // __VIVADO_SYNTH__

// arg list for in_update_0 = in_off_chip, in
// arg list for dark_update_0 = in, dark
// arg list for weight_sums_update_0 = dark_weights, bright_weights, weight_sums
// arg list for dark_weights_update_0 = dark, dark_weights
// arg list for bright_weights_normed_update_0 = bright_weights, weight_sums, bright_weights_normed
// arg list for synthetic_exposure_fusion_update_0 = merged, synthetic_exposure_fusion
// arg list for merged_update_0 = bright, dark, bright_weights_normed, dark_weights_normed, merged
// arg list for bright_update_0 = in, bright
// arg list for bright_weights_update_0 = bright, bright_weights
// arg list for dark_weights_normed_update_0 = dark_weights, weight_sums, dark_weights_normed
/* ISL CODE STRING
for (int c0 = 0; c0 <= 1249; c0 += 1)
  for (int c1 = 0; c1 <= 1249; c1 += 1) {
    in_update_0(c1, c0);
    dark_update_0(c1, c0);
    bright_update_0(c1, c0);
    bright_weights_update_0(c1, c0);
    dark_weights_update_0(c1, c0);
    weight_sums_update_0(c1, c0);
    bright_weights_normed_update_0(c1, c0);
    dark_weights_normed_update_0(c1, c0);
    merged_update_0(c1, c0);
    synthetic_exposure_fusion_update_0(c1, c0);
  }

*/
/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 1249; c0 += 1)
	  for (int c1 = 0; c1 <= 1249; c1 += 1) {
      //assert(false);
	in_update_0(in_off_chip, in, c1, c0);
	dark_update_0(in, dark, c1, c0);
	bright_update_0(in, bright, c1, c0);
	bright_weights_update_0(bright, bright_weights, c1, c0);
	dark_weights_update_0(dark, dark_weights, c1, c0);
	weight_sums_update_0(dark_weights, bright_weights, weight_sums, c1, c0);
	bright_weights_normed_update_0(bright_weights, weight_sums, bright_weights_normed, c1, c0);
	dark_weights_normed_update_0(dark_weights, weight_sums, dark_weights_normed, c1, c0);
	merged_update_0(bright, dark, bright_weights_normed, dark_weights_normed, merged, c1, c0);
	synthetic_exposure_fusion_update_0(merged, synthetic_exposure_fusion, c1, c0);
	  }
	
}
