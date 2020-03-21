#include "level_2_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_comp_write0_merged_banks_9_cache {
	// Capacity: 529
	// # of read delays: 9
	// read delays: 0, 1, 2, 263, 264, 265, 526, 527, 528
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 263) capacity = 260
	fifo<hw_uint<32> , 260> f5;
	// Parition [263, 264) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [264, 265) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [265, 266) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [266, 526) capacity = 260
	fifo<hw_uint<32> , 260> f11;
	// Parition [526, 527) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [527, 528) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [528, 528] capacity = 1
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

	inline hw_uint<32>  peek_262() {
		return f5.back();
	}

	inline hw_uint<32>  peek_263() {
		return f6.back();
	}

	inline hw_uint<32>  peek_264() {
		return f8.back();
	}

	inline hw_uint<32>  peek_265() {
		return f10.back();
	}

	inline hw_uint<32>  peek_525() {
		return f11.back();
	}

	inline hw_uint<32>  peek_526() {
		return f12.back();
	}

	inline hw_uint<32>  peek_527() {
		return f14.back();
	}

	inline hw_uint<32>  peek_528() {
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
		if (offset == 262) {
			return f5.back();
		}
		if (offset == 263) {
			return f6.back();
		}
		if (offset == 264) {
			return f8.back();
		}
		if (offset == 265) {
			return f10.back();
		}
		if (offset == 525) {
			return f11.back();
		}
		if (offset == 526) {
			return f12.back();
		}
		if (offset == 527) {
			return f14.back();
		}
		if (offset == 528) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_merged_banks_9: " << offset << endl;
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

struct in_cache {
  in_in_comp_write0_merged_banks_9_cache in_in_comp_write0_merged_banks_9;
};



inline void in_in_comp_write0_write(hw_uint<32> & in_in_comp_write0, in_cache& in, int d0, int d1) {
  in.in_in_comp_write0_merged_banks_9.push(in_in_comp_write0);
}

inline hw_uint<32>  level_0_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd0 read pattern: { level_0_comp[d0, d1] -> in[2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_528();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd1_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd1 read pattern: { level_0_comp[d0, d1] -> in[2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_265();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd2_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd2 read pattern: { level_0_comp[d0, d1] -> in[2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_2();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd3_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd3 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_527();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd4_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd4 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_264();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd5_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd5 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_1();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd6_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd6 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_526();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd7_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd7 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_263();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd8_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd8 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.in_in_comp_write0_merged_banks_9.peek_0();
	return value_in_in_comp_write0;
}

// # of bundles = 2
// in_comp_write
//	in_in_comp_write0
inline void in_in_comp_write_bundle_write(hw_uint<32>& in_comp_write, in_cache& in, int d0, int d1) {
	hw_uint<32>  in_in_comp_write0_res = in_comp_write.extract<0, 31>();
	in_in_comp_write0_write(in_in_comp_write0_res, in, d0, d1);
}

// level_0_comp_read
//	level_0_rd0
//	level_0_rd1
//	level_0_rd2
//	level_0_rd3
//	level_0_rd4
//	level_0_rd5
//	level_0_rd6
//	level_0_rd7
//	level_0_rd8
inline hw_uint<288> in_level_0_comp_read_bundle_read(in_cache& in, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  level_0_rd0_res = level_0_rd0_select(in, d0, d1);
	set_at<0, 288>(result, level_0_rd0_res);
	hw_uint<32>  level_0_rd1_res = level_0_rd1_select(in, d0, d1);
	set_at<32, 288>(result, level_0_rd1_res);
	hw_uint<32>  level_0_rd2_res = level_0_rd2_select(in, d0, d1);
	set_at<64, 288>(result, level_0_rd2_res);
	hw_uint<32>  level_0_rd3_res = level_0_rd3_select(in, d0, d1);
	set_at<96, 288>(result, level_0_rd3_res);
	hw_uint<32>  level_0_rd4_res = level_0_rd4_select(in, d0, d1);
	set_at<128, 288>(result, level_0_rd4_res);
	hw_uint<32>  level_0_rd5_res = level_0_rd5_select(in, d0, d1);
	set_at<160, 288>(result, level_0_rd5_res);
	hw_uint<32>  level_0_rd6_res = level_0_rd6_select(in, d0, d1);
	set_at<192, 288>(result, level_0_rd6_res);
	hw_uint<32>  level_0_rd7_res = level_0_rd7_select(in, d0, d1);
	set_at<224, 288>(result, level_0_rd7_res);
	hw_uint<32>  level_0_rd8_res = level_0_rd8_select(in, d0, d1);
	set_at<256, 288>(result, level_0_rd8_res);
	return result;
}



#include "hw_classes.h"

struct level_0_level_0_comp_write0_merged_banks_9_cache {
	// Capacity: 265
	// # of read delays: 9
	// read delays: 0, 1, 2, 131, 132, 133, 262, 263, 264
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 131) capacity = 128
	fifo<hw_uint<32> , 128> f5;
	// Parition [131, 132) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [132, 133) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [133, 134) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [134, 262) capacity = 128
	fifo<hw_uint<32> , 128> f11;
	// Parition [262, 263) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [263, 264) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [264, 264] capacity = 1
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

	inline hw_uint<32>  peek_130() {
		return f5.back();
	}

	inline hw_uint<32>  peek_131() {
		return f6.back();
	}

	inline hw_uint<32>  peek_132() {
		return f8.back();
	}

	inline hw_uint<32>  peek_133() {
		return f10.back();
	}

	inline hw_uint<32>  peek_261() {
		return f11.back();
	}

	inline hw_uint<32>  peek_262() {
		return f12.back();
	}

	inline hw_uint<32>  peek_263() {
		return f14.back();
	}

	inline hw_uint<32>  peek_264() {
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
		if (offset == 130) {
			return f5.back();
		}
		if (offset == 131) {
			return f6.back();
		}
		if (offset == 132) {
			return f8.back();
		}
		if (offset == 133) {
			return f10.back();
		}
		if (offset == 261) {
			return f11.back();
		}
		if (offset == 262) {
			return f12.back();
		}
		if (offset == 263) {
			return f14.back();
		}
		if (offset == 264) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_merged_banks_9: " << offset << endl;
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

struct level_0_cache {
  level_0_level_0_comp_write0_merged_banks_9_cache level_0_level_0_comp_write0_merged_banks_9;
};



inline void level_0_level_0_comp_write0_write(hw_uint<32> & level_0_level_0_comp_write0, level_0_cache& level_0, int d0, int d1) {
  level_0.level_0_level_0_comp_write0_merged_banks_9.push(level_0_level_0_comp_write0);
}

inline hw_uint<32>  level_1_rd0_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd0 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_264();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd1_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd1 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_133();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd2_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd2 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_2();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd3_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd3 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_263();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd4_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd4 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_132();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd5_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd5 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_1();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd6_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd6 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_262();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd7_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd7 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_131();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd8_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd8 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.level_0_level_0_comp_write0_merged_banks_9.peek_0();
	return value_level_0_level_0_comp_write0;
}

// # of bundles = 2
// level_0_comp_write
//	level_0_level_0_comp_write0
inline void level_0_level_0_comp_write_bundle_write(hw_uint<32>& level_0_comp_write, level_0_cache& level_0, int d0, int d1) {
	hw_uint<32>  level_0_level_0_comp_write0_res = level_0_comp_write.extract<0, 31>();
	level_0_level_0_comp_write0_write(level_0_level_0_comp_write0_res, level_0, d0, d1);
}

// level_1_comp_read
//	level_1_rd0
//	level_1_rd1
//	level_1_rd2
//	level_1_rd3
//	level_1_rd4
//	level_1_rd5
//	level_1_rd6
//	level_1_rd7
//	level_1_rd8
inline hw_uint<288> level_0_level_1_comp_read_bundle_read(level_0_cache& level_0, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  level_1_rd0_res = level_1_rd0_select(level_0, d0, d1);
	set_at<0, 288>(result, level_1_rd0_res);
	hw_uint<32>  level_1_rd1_res = level_1_rd1_select(level_0, d0, d1);
	set_at<32, 288>(result, level_1_rd1_res);
	hw_uint<32>  level_1_rd2_res = level_1_rd2_select(level_0, d0, d1);
	set_at<64, 288>(result, level_1_rd2_res);
	hw_uint<32>  level_1_rd3_res = level_1_rd3_select(level_0, d0, d1);
	set_at<96, 288>(result, level_1_rd3_res);
	hw_uint<32>  level_1_rd4_res = level_1_rd4_select(level_0, d0, d1);
	set_at<128, 288>(result, level_1_rd4_res);
	hw_uint<32>  level_1_rd5_res = level_1_rd5_select(level_0, d0, d1);
	set_at<160, 288>(result, level_1_rd5_res);
	hw_uint<32>  level_1_rd6_res = level_1_rd6_select(level_0, d0, d1);
	set_at<192, 288>(result, level_1_rd6_res);
	hw_uint<32>  level_1_rd7_res = level_1_rd7_select(level_0, d0, d1);
	set_at<224, 288>(result, level_1_rd7_res);
	hw_uint<32>  level_1_rd8_res = level_1_rd8_select(level_0, d0, d1);
	set_at<256, 288>(result, level_1_rd8_res);
	return result;
}



#include "hw_classes.h"

struct level_1_level_1_comp_write0_merged_banks_9_cache {
	// Capacity: 133
	// # of read delays: 9
	// read delays: 0, 1, 2, 65, 66, 67, 130, 131, 132
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 65) capacity = 62
	fifo<hw_uint<32> , 62> f5;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [66, 67) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [67, 68) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [68, 130) capacity = 62
	fifo<hw_uint<32> , 62> f11;
	// Parition [130, 131) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [131, 132) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [132, 132] capacity = 1
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

	inline hw_uint<32>  peek_64() {
		return f5.back();
	}

	inline hw_uint<32>  peek_65() {
		return f6.back();
	}

	inline hw_uint<32>  peek_66() {
		return f8.back();
	}

	inline hw_uint<32>  peek_67() {
		return f10.back();
	}

	inline hw_uint<32>  peek_129() {
		return f11.back();
	}

	inline hw_uint<32>  peek_130() {
		return f12.back();
	}

	inline hw_uint<32>  peek_131() {
		return f14.back();
	}

	inline hw_uint<32>  peek_132() {
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
		if (offset == 64) {
			return f5.back();
		}
		if (offset == 65) {
			return f6.back();
		}
		if (offset == 66) {
			return f8.back();
		}
		if (offset == 67) {
			return f10.back();
		}
		if (offset == 129) {
			return f11.back();
		}
		if (offset == 130) {
			return f12.back();
		}
		if (offset == 131) {
			return f14.back();
		}
		if (offset == 132) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_merged_banks_9: " << offset << endl;
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

struct level_1_cache {
  level_1_level_1_comp_write0_merged_banks_9_cache level_1_level_1_comp_write0_merged_banks_9;
};



inline void level_1_level_1_comp_write0_write(hw_uint<32> & level_1_level_1_comp_write0, level_1_cache& level_1, int d0, int d1) {
  level_1.level_1_level_1_comp_write0_merged_banks_9.push(level_1_level_1_comp_write0);
}

inline hw_uint<32>  level_2_rd0_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd0 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_132();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd1_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd1 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_67();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd2_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd2 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_2();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd3_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd3 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_131();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd4_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd4 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_66();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd5_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd5 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_1();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd6_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd6 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_130();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd7_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd7 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_65();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd8_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd8 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.level_1_level_1_comp_write0_merged_banks_9.peek_0();
	return value_level_1_level_1_comp_write0;
}

// # of bundles = 2
// level_1_comp_write
//	level_1_level_1_comp_write0
inline void level_1_level_1_comp_write_bundle_write(hw_uint<32>& level_1_comp_write, level_1_cache& level_1, int d0, int d1) {
	hw_uint<32>  level_1_level_1_comp_write0_res = level_1_comp_write.extract<0, 31>();
	level_1_level_1_comp_write0_write(level_1_level_1_comp_write0_res, level_1, d0, d1);
}

// level_2_comp_read
//	level_2_rd0
//	level_2_rd1
//	level_2_rd2
//	level_2_rd3
//	level_2_rd4
//	level_2_rd5
//	level_2_rd6
//	level_2_rd7
//	level_2_rd8
inline hw_uint<288> level_1_level_2_comp_read_bundle_read(level_1_cache& level_1, int d0, int d1) {
	hw_uint<288> result;
	hw_uint<32>  level_2_rd0_res = level_2_rd0_select(level_1, d0, d1);
	set_at<0, 288>(result, level_2_rd0_res);
	hw_uint<32>  level_2_rd1_res = level_2_rd1_select(level_1, d0, d1);
	set_at<32, 288>(result, level_2_rd1_res);
	hw_uint<32>  level_2_rd2_res = level_2_rd2_select(level_1, d0, d1);
	set_at<64, 288>(result, level_2_rd2_res);
	hw_uint<32>  level_2_rd3_res = level_2_rd3_select(level_1, d0, d1);
	set_at<96, 288>(result, level_2_rd3_res);
	hw_uint<32>  level_2_rd4_res = level_2_rd4_select(level_1, d0, d1);
	set_at<128, 288>(result, level_2_rd4_res);
	hw_uint<32>  level_2_rd5_res = level_2_rd5_select(level_1, d0, d1);
	set_at<160, 288>(result, level_2_rd5_res);
	hw_uint<32>  level_2_rd6_res = level_2_rd6_select(level_1, d0, d1);
	set_at<192, 288>(result, level_2_rd6_res);
	hw_uint<32>  level_2_rd7_res = level_2_rd7_select(level_1, d0, d1);
	set_at<224, 288>(result, level_2_rd7_res);
	hw_uint<32>  level_2_rd8_res = level_2_rd8_select(level_1, d0, d1);
	set_at<256, 288>(result, level_2_rd8_res);
	return result;
}





// Operation logic
inline void in_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_comp_write_bundle_write(compute_result, in, d0, d1);
}

inline void level_0_comp(in_cache& in, level_0_cache& level_0, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_level_0_comp_read_bundle_read(in/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(in_0_c__0_value);
	// Produce: level_0
	level_0_level_0_comp_write_bundle_write(compute_result, level_0, d0, d1);
}

inline void level_1_comp(level_0_cache& level_0, level_1_cache& level_1, int d0, int d1) {
	// Consume: level_0
	auto level_0_0_c__0_value = level_0_level_1_comp_read_bundle_read(level_0/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_comp_write_bundle_write(compute_result, level_1, d0, d1);
}

inline void level_2_comp(level_1_cache& level_1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */level_2, int d0, int d1) {
	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_comp_read_bundle_read(level_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(level_1_0_c__0_value);
	// Produce: level_2
	level_2.write(compute_result);
}

// Driver function
void level_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 1 */level_2) {
  in_cache in;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=in inter false
#endif // __VIVADO_SYNTH__

  level_0_cache level_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=level_0 inter false
#endif // __VIVADO_SYNTH__

  level_1_cache level_1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=level_1 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 262; c0 += 1)
	  for (int c1 = 0; c1 <= 262; c1 += 1) {
	    in_comp(in_off_chip, in, c1, c0);
	    if (c0 >= 2 && c1 >= 2 && c0 % 2 == 0 && c1 % 2 == 0) {
	      level_0_comp(in, level_0, (c1 / 2) - 1, (c0 / 2) - 1);
	      if (c0 >= 6 && c1 >= 6 && (c0 + 2) % 4 == 0 && (c1 + 2) % 4 == 0) {
	        level_1_comp(level_0, level_1, (c1 - 6) / 4, (c0 - 6) / 4);
	        if (c0 >= 14 && c1 >= 14 && (c0 + 2) % 8 == 0 && (c1 + 2) % 8 == 0)
	          level_2_comp(level_1, level_2, (c1 - 14) / 8, (c0 - 14) / 8);
	      }
	    }
	  }
	
}
