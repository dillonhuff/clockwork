#include "denoise2d_opt_compute_units.h"

#include "hw_classes.h"

struct diff_d_diff_d_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_d_cache {
  diff_d_diff_d_comp_write0_merged_banks_1_cache diff_d_diff_d_comp_write0_merged_banks_1;
};



inline void diff_d_diff_d_comp_write0_write(hw_uint<32> & diff_d_diff_d_comp_write0, diff_d_cache& diff_d, int d0, int d1) {
  diff_d.diff_d_diff_d_comp_write0_merged_banks_1.push(diff_d_diff_d_comp_write0);
}

inline hw_uint<32>  g_rd0_select(diff_d_cache& diff_d, int d0, int d1) {
	// lexmax events: { g_comp[d0, d1] -> diff_d_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // g_rd0 read pattern: { g_comp[d0, d1] -> diff_d[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_diff_d_diff_d_comp_write0 = diff_d.diff_d_diff_d_comp_write0_merged_banks_1.peek_0();
	return value_diff_d_diff_d_comp_write0;
}

// # of bundles = 2
// diff_d_comp_write
//	diff_d_diff_d_comp_write0
inline void diff_d_diff_d_comp_write_bundle_write(hw_uint<32>& diff_d_comp_write, diff_d_cache& diff_d, int d0, int d1) {
	hw_uint<32>  diff_d_diff_d_comp_write0_res = diff_d_comp_write.extract<0, 31>();
	diff_d_diff_d_comp_write0_write(diff_d_diff_d_comp_write0_res, diff_d, d0, d1);
}

// g_comp_read
//	g_rd0
inline hw_uint<32> diff_d_g_comp_read_bundle_read(diff_d_cache& diff_d, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_d, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}



#include "hw_classes.h"

struct diff_l_diff_l_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_l_cache {
  diff_l_diff_l_comp_write0_merged_banks_1_cache diff_l_diff_l_comp_write0_merged_banks_1;
};



inline void diff_l_diff_l_comp_write0_write(hw_uint<32> & diff_l_diff_l_comp_write0, diff_l_cache& diff_l, int d0, int d1) {
  diff_l.diff_l_diff_l_comp_write0_merged_banks_1.push(diff_l_diff_l_comp_write0);
}

inline hw_uint<32>  g_rd0_select(diff_l_cache& diff_l, int d0, int d1) {
	// lexmax events: { g_comp[d0, d1] -> diff_l_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // g_rd0 read pattern: { g_comp[d0, d1] -> diff_l[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_diff_l_diff_l_comp_write0 = diff_l.diff_l_diff_l_comp_write0_merged_banks_1.peek_0();
	return value_diff_l_diff_l_comp_write0;
}

// # of bundles = 2
// diff_l_comp_write
//	diff_l_diff_l_comp_write0
inline void diff_l_diff_l_comp_write_bundle_write(hw_uint<32>& diff_l_comp_write, diff_l_cache& diff_l, int d0, int d1) {
	hw_uint<32>  diff_l_diff_l_comp_write0_res = diff_l_comp_write.extract<0, 31>();
	diff_l_diff_l_comp_write0_write(diff_l_diff_l_comp_write0_res, diff_l, d0, d1);
}

// g_comp_read
//	g_rd0
inline hw_uint<32> diff_l_g_comp_read_bundle_read(diff_l_cache& diff_l, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_l, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}



#include "hw_classes.h"

struct diff_qwe_diff_qwe_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_qwe_cache {
  diff_qwe_diff_qwe_comp_write0_merged_banks_1_cache diff_qwe_diff_qwe_comp_write0_merged_banks_1;
};



inline void diff_qwe_diff_qwe_comp_write0_write(hw_uint<32> & diff_qwe_diff_qwe_comp_write0, diff_qwe_cache& diff_qwe, int d0, int d1) {
  diff_qwe.diff_qwe_diff_qwe_comp_write0_merged_banks_1.push(diff_qwe_diff_qwe_comp_write0);
}

inline hw_uint<32>  g_rd0_select(diff_qwe_cache& diff_qwe, int d0, int d1) {
	// lexmax events: { g_comp[d0, d1] -> diff_qwe_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // g_rd0 read pattern: { g_comp[d0, d1] -> diff_qwe[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_diff_qwe_diff_qwe_comp_write0 = diff_qwe.diff_qwe_diff_qwe_comp_write0_merged_banks_1.peek_0();
	return value_diff_qwe_diff_qwe_comp_write0;
}

// # of bundles = 2
// diff_qwe_comp_write
//	diff_qwe_diff_qwe_comp_write0
inline void diff_qwe_diff_qwe_comp_write_bundle_write(hw_uint<32>& diff_qwe_comp_write, diff_qwe_cache& diff_qwe, int d0, int d1) {
	hw_uint<32>  diff_qwe_diff_qwe_comp_write0_res = diff_qwe_comp_write.extract<0, 31>();
	diff_qwe_diff_qwe_comp_write0_write(diff_qwe_diff_qwe_comp_write0_res, diff_qwe, d0, d1);
}

// g_comp_read
//	g_rd0
inline hw_uint<32> diff_qwe_g_comp_read_bundle_read(diff_qwe_cache& diff_qwe, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_qwe, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}



#include "hw_classes.h"

struct diff_r_diff_r_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct diff_r_cache {
  diff_r_diff_r_comp_write0_merged_banks_1_cache diff_r_diff_r_comp_write0_merged_banks_1;
};



inline void diff_r_diff_r_comp_write0_write(hw_uint<32> & diff_r_diff_r_comp_write0, diff_r_cache& diff_r, int d0, int d1) {
  diff_r.diff_r_diff_r_comp_write0_merged_banks_1.push(diff_r_diff_r_comp_write0);
}

inline hw_uint<32>  g_rd0_select(diff_r_cache& diff_r, int d0, int d1) {
	// lexmax events: { g_comp[d0, d1] -> diff_r_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // g_rd0 read pattern: { g_comp[d0, d1] -> diff_r[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_diff_r_diff_r_comp_write0 = diff_r.diff_r_diff_r_comp_write0_merged_banks_1.peek_0();
	return value_diff_r_diff_r_comp_write0;
}

// # of bundles = 2
// diff_r_comp_write
//	diff_r_diff_r_comp_write0
inline void diff_r_diff_r_comp_write_bundle_write(hw_uint<32>& diff_r_comp_write, diff_r_cache& diff_r, int d0, int d1) {
	hw_uint<32>  diff_r_diff_r_comp_write0_res = diff_r_comp_write.extract<0, 31>();
	diff_r_diff_r_comp_write0_write(diff_r_diff_r_comp_write0_res, diff_r, d0, d1);
}

// g_comp_read
//	g_rd0
inline hw_uint<32> diff_r_g_comp_read_bundle_read(diff_r_cache& diff_r, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  g_rd0_res = g_rd0_select(diff_r, d0, d1);
	set_at<0, 32>(result, g_rd0_res);
	return result;
}



#include "hw_classes.h"

struct f_f_comp_write0_merged_banks_2_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
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
		cout << "Error: Unsupported offset in f_f_comp_write0_merged_banks_2: " << offset << endl;
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

struct f_cache {
  f_f_comp_write0_merged_banks_2_cache f_f_comp_write0_merged_banks_2;
};



inline void f_f_comp_write0_write(hw_uint<32> & f_f_comp_write0, f_cache& f, int d0, int d1) {
  f.f_f_comp_write0_merged_banks_2.push(f_f_comp_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(f_cache& f, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> f_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd0 read pattern: { denoise2d_comp[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_f_f_comp_write0 = f.f_f_comp_write0_merged_banks_2.peek_0();
	return value_f_f_comp_write0;
}

inline hw_uint<32>  r0_rd0_select(f_cache& f, int d0, int d1) {
	// lexmax events: { r0_comp[d0, d1] -> f_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // r0_rd0 read pattern: { r0_comp[d0, d1] -> f[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_f_f_comp_write0 = f.f_f_comp_write0_merged_banks_2.peek_0();
	return value_f_f_comp_write0;
}

// # of bundles = 3
// denoise2d_comp_read
//	denoise2d_rd0
inline hw_uint<32> f_denoise2d_comp_read_bundle_read(f_cache& f, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(f, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// f_comp_write
//	f_f_comp_write0
inline void f_f_comp_write_bundle_write(hw_uint<32>& f_comp_write, f_cache& f, int d0, int d1) {
	hw_uint<32>  f_f_comp_write0_res = f_comp_write.extract<0, 31>();
	f_f_comp_write0_write(f_f_comp_write0_res, f, d0, d1);
}

// r0_comp_read
//	r0_rd0
inline hw_uint<32> f_r0_comp_read_bundle_read(f_cache& f, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(f, d0, d1);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}



#include "hw_classes.h"

struct g_g_comp_write0_merged_banks_4_cache {
	// Capacity: 66
	// # of read delays: 5
	// read delays: 0, 1, 32, 34, 65
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 32) capacity = 30
	fifo<hw_uint<32> , 30> f3;
	// Parition [32, 33) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [33, 34) capacity = 1
	fifo<hw_uint<32> , 1> f5;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [35, 65) capacity = 30
	fifo<hw_uint<32> , 30> f7;
	// Parition [65, 65] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_31() {
		return f3.back();
	}

	inline hw_uint<32>  peek_32() {
		return f4.back();
	}

	inline hw_uint<32>  peek_33() {
		return f5.back();
	}

	inline hw_uint<32>  peek_34() {
		return f6.back();
	}

	inline hw_uint<32>  peek_64() {
		return f7.back();
	}

	inline hw_uint<32>  peek_65() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 31) {
			return f3.back();
		}
		if (offset == 32) {
			return f4.back();
		}
		if (offset == 33) {
			return f5.back();
		}
		if (offset == 34) {
			return f6.back();
		}
		if (offset == 64) {
			return f7.back();
		}
		if (offset == 65) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in g_g_comp_write0_merged_banks_4: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f7.back());
		f7.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct g_cache {
  g_g_comp_write0_merged_banks_4_cache g_g_comp_write0_merged_banks_4;
};



inline void g_g_comp_write0_write(hw_uint<32> & g_g_comp_write0, g_cache& g, int d0, int d1) {
  g.g_g_comp_write0_merged_banks_4.push(g_g_comp_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(g_cache& g, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> g_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd0 read pattern: { denoise2d_comp[d0, d1] -> g[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_g_g_comp_write0 = g.g_g_comp_write0_merged_banks_4.peek_34();
	return value_g_g_comp_write0;
}

inline hw_uint<32>  denoise2d_rd1_select(g_cache& g, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> g_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd1 read pattern: { denoise2d_comp[d0, d1] -> g[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_g_g_comp_write0 = g.g_g_comp_write0_merged_banks_4.peek_65();
	return value_g_g_comp_write0;
}

inline hw_uint<32>  denoise2d_rd2_select(g_cache& g, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> g_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd2 read pattern: { denoise2d_comp[d0, d1] -> g[d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_g_g_comp_write0 = g.g_g_comp_write0_merged_banks_4.peek_1();
	return value_g_g_comp_write0;
}

inline hw_uint<32>  denoise2d_rd3_select(g_cache& g, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> g_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd3 read pattern: { denoise2d_comp[d0, d1] -> g[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_g_g_comp_write0 = g.g_g_comp_write0_merged_banks_4.peek_32();
	return value_g_g_comp_write0;
}

// # of bundles = 2
// denoise2d_comp_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> g_denoise2d_comp_read_bundle_read(g_cache& g, int d0, int d1) {
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

// g_comp_write
//	g_g_comp_write0
inline void g_g_comp_write_bundle_write(hw_uint<32>& g_comp_write, g_cache& g, int d0, int d1) {
	hw_uint<32>  g_g_comp_write0_res = g_comp_write.extract<0, 31>();
	g_g_comp_write0_write(g_g_comp_write0_res, g, d0, d1);
}



#include "hw_classes.h"

struct r0_r0_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r0_cache {
  r0_r0_comp_write0_merged_banks_1_cache r0_r0_comp_write0_merged_banks_1;
};



inline void r0_r0_comp_write0_write(hw_uint<32> & r0_r0_comp_write0, r0_cache& r0, int d0, int d1) {
  r0.r0_r0_comp_write0_merged_banks_1.push(r0_r0_comp_write0);
}

inline hw_uint<32>  r1_rd0_select(r0_cache& r0, int d0, int d1) {
	// lexmax events: { r1_comp[d0, d1] -> r0_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // r1_rd0 read pattern: { r1_comp[d0, d1] -> r0[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_r0_r0_comp_write0 = r0.r0_r0_comp_write0_merged_banks_1.peek_0();
	return value_r0_r0_comp_write0;
}

// # of bundles = 2
// r0_comp_write
//	r0_r0_comp_write0
inline void r0_r0_comp_write_bundle_write(hw_uint<32>& r0_comp_write, r0_cache& r0, int d0, int d1) {
	hw_uint<32>  r0_r0_comp_write0_res = r0_comp_write.extract<0, 31>();
	r0_r0_comp_write0_write(r0_r0_comp_write0_res, r0, d0, d1);
}

// r1_comp_read
//	r1_rd0
inline hw_uint<32> r0_r1_comp_read_bundle_read(r0_cache& r0, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  r1_rd0_res = r1_rd0_select(r0, d0, d1);
	set_at<0, 32>(result, r1_rd0_res);
	return result;
}



#include "hw_classes.h"

struct r1_r1_comp_write0_merged_banks_1_cache {
	// Capacity: 1
	// # of read delays: 1
	// read delays: 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct r1_cache {
  r1_r1_comp_write0_merged_banks_1_cache r1_r1_comp_write0_merged_banks_1;
};



inline void r1_r1_comp_write0_write(hw_uint<32> & r1_r1_comp_write0, r1_cache& r1, int d0, int d1) {
  r1.r1_r1_comp_write0_merged_banks_1.push(r1_r1_comp_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(r1_cache& r1, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> r1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd0 read pattern: { denoise2d_comp[d0, d1] -> r1[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_r1_r1_comp_write0 = r1.r1_r1_comp_write0_merged_banks_1.peek_0();
	return value_r1_r1_comp_write0;
}

// # of bundles = 2
// denoise2d_comp_read
//	denoise2d_rd0
inline hw_uint<32> r1_denoise2d_comp_read_bundle_read(r1_cache& r1, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(r1, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// r1_comp_write
//	r1_r1_comp_write0
inline void r1_r1_comp_write_bundle_write(hw_uint<32>& r1_comp_write, r1_cache& r1, int d0, int d1) {
	hw_uint<32>  r1_r1_comp_write0_res = r1_comp_write.extract<0, 31>();
	r1_r1_comp_write0_write(r1_r1_comp_write0_res, r1, d0, d1);
}



#include "hw_classes.h"

struct u_u_comp_write0_merged_banks_13_cache {
	// Capacity: 105
	// # of read delays: 9
	// read delays: 0, 1, 34, 35, 36, 69, 70, 71, 104
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 34) capacity = 32
	fifo<hw_uint<32> , 32> f3;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [35, 36) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [36, 37) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [37, 69) capacity = 32
	fifo<hw_uint<32> , 32> f9;
	// Parition [69, 70) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [70, 71) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [71, 72) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [72, 104) capacity = 32
	fifo<hw_uint<32> , 32> f15;
	// Parition [104, 104] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_33() {
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4.back();
	}

	inline hw_uint<32>  peek_35() {
		return f6.back();
	}

	inline hw_uint<32>  peek_36() {
		return f8.back();
	}

	inline hw_uint<32>  peek_68() {
		return f9.back();
	}

	inline hw_uint<32>  peek_69() {
		return f10.back();
	}

	inline hw_uint<32>  peek_70() {
		return f12.back();
	}

	inline hw_uint<32>  peek_71() {
		return f14.back();
	}

	inline hw_uint<32>  peek_103() {
		return f15.back();
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
		if (offset == 33) {
			return f3.back();
		}
		if (offset == 34) {
			return f4.back();
		}
		if (offset == 35) {
			return f6.back();
		}
		if (offset == 36) {
			return f8.back();
		}
		if (offset == 68) {
			return f9.back();
		}
		if (offset == 69) {
			return f10.back();
		}
		if (offset == 70) {
			return f12.back();
		}
		if (offset == 71) {
			return f14.back();
		}
		if (offset == 103) {
			return f15.back();
		}
		if (offset == 104) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in u_u_comp_write0_merged_banks_13: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f15.back());
		f15.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f9.back());
		f9.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct u_cache {
  u_u_comp_write0_merged_banks_13_cache u_u_comp_write0_merged_banks_13;
};



inline void u_u_comp_write0_write(hw_uint<32> & u_u_comp_write0, u_cache& u, int d0, int d1) {
  u.u_u_comp_write0_merged_banks_13.push(u_u_comp_write0);
}

inline hw_uint<32>  denoise2d_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> u_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd0 read pattern: { denoise2d_comp[d0, d1] -> u[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_71();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  denoise2d_rd1_select(u_cache& u, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> u_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd1 read pattern: { denoise2d_comp[d0, d1] -> u[d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_104();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  denoise2d_rd2_select(u_cache& u, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd2 read pattern: { denoise2d_comp[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_70();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  denoise2d_rd3_select(u_cache& u, int d0, int d1) {
	// lexmax events: { denoise2d_comp[d0, d1] -> u_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // denoise2d_rd3 read pattern: { denoise2d_comp[d0, d1] -> u[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_69();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_d_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_d_rd0 read pattern: { diff_d_comp[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_35();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_d_comp[d0, d1] -> u_comp[d0' = d0, d1' = 1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_d_rd1 read pattern: { diff_d_comp[d0, d1] -> u[d0, 1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_1();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_l_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_l_comp[d0, d1] -> u_comp[d0' = -1 + d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_l_rd0 read pattern: { diff_l_comp[d0, d1] -> u[-1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_36();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_l_rd1_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_l_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_l_rd1 read pattern: { diff_l_comp[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_35();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_qwe_comp[d0, d1] -> u_comp[d0' = d0, d1' = -1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_qwe_rd0 read pattern: { diff_qwe_comp[d0, d1] -> u[d0, -1 + d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_69();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_qwe_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_qwe_rd1 read pattern: { diff_qwe_comp[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_35();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_r_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_r_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_r_rd0 read pattern: { diff_r_comp[d0, d1] -> u[d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_35();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  diff_r_rd1_select(u_cache& u, int d0, int d1) {
	// lexmax events: { diff_r_comp[d0, d1] -> u_comp[d0' = 1 + d0, d1' = d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // diff_r_rd1 read pattern: { diff_r_comp[d0, d1] -> u[1 + d0, d1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_34();
	return value_u_u_comp_write0;
}

inline hw_uint<32>  r0_rd0_select(u_cache& u, int d0, int d1) {
	// lexmax events: { r0_comp[d0, d1] -> u_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // r0_rd0 read pattern: { r0_comp[d0, d1] -> u[d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
	auto value_u_u_comp_write0 = u.u_u_comp_write0_merged_banks_13.peek_70();
	return value_u_u_comp_write0;
}

// # of bundles = 7
// denoise2d_comp_read
//	denoise2d_rd0
//	denoise2d_rd1
//	denoise2d_rd2
//	denoise2d_rd3
inline hw_uint<128> u_denoise2d_comp_read_bundle_read(u_cache& u, int d0, int d1) {
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

// diff_d_comp_read
//	diff_d_rd0
//	diff_d_rd1
inline hw_uint<64> u_diff_d_comp_read_bundle_read(u_cache& u, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_d_rd0_res = diff_d_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_d_rd0_res);
	hw_uint<32>  diff_d_rd1_res = diff_d_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_d_rd1_res);
	return result;
}

// diff_l_comp_read
//	diff_l_rd0
//	diff_l_rd1
inline hw_uint<64> u_diff_l_comp_read_bundle_read(u_cache& u, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_l_rd0_res = diff_l_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_l_rd0_res);
	hw_uint<32>  diff_l_rd1_res = diff_l_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_l_rd1_res);
	return result;
}

// diff_qwe_comp_read
//	diff_qwe_rd0
//	diff_qwe_rd1
inline hw_uint<64> u_diff_qwe_comp_read_bundle_read(u_cache& u, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_qwe_rd0_res = diff_qwe_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_qwe_rd0_res);
	hw_uint<32>  diff_qwe_rd1_res = diff_qwe_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_qwe_rd1_res);
	return result;
}

// diff_r_comp_read
//	diff_r_rd0
//	diff_r_rd1
inline hw_uint<64> u_diff_r_comp_read_bundle_read(u_cache& u, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_r_rd0_res = diff_r_rd0_select(u, d0, d1);
	set_at<0, 64>(result, diff_r_rd0_res);
	hw_uint<32>  diff_r_rd1_res = diff_r_rd1_select(u, d0, d1);
	set_at<32, 64>(result, diff_r_rd1_res);
	return result;
}

// r0_comp_read
//	r0_rd0
inline hw_uint<32> u_r0_comp_read_bundle_read(u_cache& u, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  r0_rd0_res = r0_rd0_select(u, d0, d1);
	set_at<0, 32>(result, r0_rd0_res);
	return result;
}

// u_comp_write
//	u_u_comp_write0
inline void u_u_comp_write_bundle_write(hw_uint<32>& u_comp_write, u_cache& u, int d0, int d1) {
	hw_uint<32>  u_u_comp_write0_res = u_comp_write.extract<0, 31>();
	u_u_comp_write0_write(u_u_comp_write0_res, u, d0, d1);
}





// Operation logic
inline void f_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */f_off_chip, f_cache& f, int d0, int d1) {
	// Consume: f_off_chip
	auto f_off_chip_0_c__0_value = f_off_chip.read();
	auto compute_result = id(f_off_chip_0_c__0_value);
	// Produce: f
	f_f_comp_write_bundle_write(compute_result, f, d0, d1);
}

inline void u_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */u_off_chip, u_cache& u, int d0, int d1) {
	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id(u_off_chip_0_c__0_value);
	// Produce: u
	u_u_comp_write_bundle_write(compute_result, u, d0, d1);
}

inline void r0_comp(u_cache& u, f_cache& f, r0_cache& r0, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_r0_comp_read_bundle_read(u/* source_delay */, d0, d1);
	// Consume: f
	auto f_0_c__0_value = f_r0_comp_read_bundle_read(f/* source_delay */, d0, d1);
	auto compute_result = comp_r0(u_0_c__0_value, f_0_c__0_value);
	// Produce: r0
	r0_r0_comp_write_bundle_write(compute_result, r0, d0, d1);
}

inline void diff_r_comp(u_cache& u, diff_r_cache& diff_r, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_r_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_r
	diff_r_diff_r_comp_write_bundle_write(compute_result, diff_r, d0, d1);
}

inline void diff_qwe_comp(u_cache& u, diff_qwe_cache& diff_qwe, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_qwe_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_qwe
	diff_qwe_diff_qwe_comp_write_bundle_write(compute_result, diff_qwe, d0, d1);
}

inline void diff_l_comp(u_cache& u, diff_l_cache& diff_l, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_l_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_l
	diff_l_diff_l_comp_write_bundle_write(compute_result, diff_l, d0, d1);
}

inline void r1_comp(r0_cache& r0, r1_cache& r1, int d0, int d1) {
	// Consume: r0
	auto r0_0_c__0_value = r0_r1_comp_read_bundle_read(r0/* source_delay */, d0, d1);
	auto compute_result = r1_comp(r0_0_c__0_value);
	// Produce: r1
	r1_r1_comp_write_bundle_write(compute_result, r1, d0, d1);
}

inline void diff_d_comp(u_cache& u, diff_d_cache& diff_d, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_d_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_d
	diff_d_diff_d_comp_write_bundle_write(compute_result, diff_d, d0, d1);
}

inline void g_comp(diff_qwe_cache& diff_qwe, diff_d_cache& diff_d, diff_l_cache& diff_l, diff_r_cache& diff_r, g_cache& g, int d0, int d1) {
	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_g_comp_read_bundle_read(diff_qwe/* source_delay */, d0, d1);
	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_g_comp_read_bundle_read(diff_d/* source_delay */, d0, d1);
	// Consume: diff_l
	auto diff_l_0_c__0_value = diff_l_g_comp_read_bundle_read(diff_l/* source_delay */, d0, d1);
	// Consume: diff_r
	auto diff_r_0_c__0_value = diff_r_g_comp_read_bundle_read(diff_r/* source_delay */, d0, d1);
	auto compute_result = mag_dn2(diff_qwe_0_c__0_value, diff_d_0_c__0_value, diff_l_0_c__0_value, diff_r_0_c__0_value);
	// Produce: g
	g_g_comp_write_bundle_write(compute_result, g, d0, d1);
}

inline void denoise2d_comp(r1_cache& r1, f_cache& f, u_cache& u, g_cache& g, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */denoise2d, int d0, int d1) {
	// Consume: r1
	auto r1_0_c__0_value = r1_denoise2d_comp_read_bundle_read(r1/* source_delay */, d0, d1);
	// Consume: f
	auto f_0_c__0_value = f_denoise2d_comp_read_bundle_read(f/* source_delay */, d0, d1);
	// Consume: u
	auto u_0_c__0_value = u_denoise2d_comp_read_bundle_read(u/* source_delay */, d0, d1);
	// Consume: g
	auto g_0_c__0_value = g_denoise2d_comp_read_bundle_read(g/* source_delay */, d0, d1);
	auto compute_result = out_comp_dn2d(r1_0_c__0_value, f_0_c__0_value, u_0_c__0_value, g_0_c__0_value);
	// Produce: denoise2d
	denoise2d.write(compute_result);
}

// Driver function
void denoise2d_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */f_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */u_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */denoise2d) {
  diff_d_cache diff_d;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=diff_d inter false
#endif // __VIVADO_SYNTH__

  diff_l_cache diff_l;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=diff_l inter false
#endif // __VIVADO_SYNTH__

  diff_qwe_cache diff_qwe;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=diff_qwe inter false
#endif // __VIVADO_SYNTH__

  diff_r_cache diff_r;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=diff_r inter false
#endif // __VIVADO_SYNTH__

  f_cache f;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif // __VIVADO_SYNTH__

  g_cache g;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=g inter false
#endif // __VIVADO_SYNTH__

  r0_cache r0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=r0 inter false
#endif // __VIVADO_SYNTH__

  r1_cache r1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=r1 inter false
#endif // __VIVADO_SYNTH__

  u_cache u;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=u inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = -2; c0 <= 31; c0 += 1)
	  for (int c1 = -2; c1 <= 31; c1 += 1) {
	    if (c0 >= 2 && c1 >= 2)
	      f_comp(f_off_chip, f, c1 - 2, c0 - 2);
	    u_comp(u_off_chip, u, c1, c0);
	    if (c0 >= 2 && c1 >= 2)
	      r0_comp(u, f, r0, c1 - 2, c0 - 2);
	    if (c0 >= 0 && c1 >= 0) {
	      diff_r_comp(u, diff_r, c1 - 1, c0 - 1);
	      diff_qwe_comp(u, diff_qwe, c1 - 1, c0 - 1);
	      diff_l_comp(u, diff_l, c1 - 1, c0 - 1);
	      diff_d_comp(u, diff_d, c1 - 1, c0 - 1);
	      if (c0 >= 2 && c1 >= 2)
	        r1_comp(r0, r1, c1 - 2, c0 - 2);
	      g_comp(diff_qwe, diff_d, diff_l, diff_r, g, c1 - 1, c0 - 1);
	      if (c0 >= 2 && c1 >= 2)
	        denoise2d_comp(r1, f, u, g, denoise2d, c1 - 2, c0 - 2);
	    }
	  }
	
}
