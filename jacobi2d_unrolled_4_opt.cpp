#include "jacobi2d_unrolled_4_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_comp_write0_merged_banks_4_cache {
	// Capacity: 518
	// # of read delays: 5
	// read delays: 0, 1, 258, 259, 517
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 258) capacity = 256
	fifo<hw_uint<32> , 256> f3;
	// Parition [258, 259) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [260, 517) capacity = 257
	fifo<hw_uint<32> , 257> f7;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_257() {
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4.back();
	}

	inline hw_uint<32>  peek_259() {
		return f6.back();
	}

	inline hw_uint<32>  peek_516() {
		return f7.back();
	}

	inline hw_uint<32>  peek_517() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 257) {
			return f3.back();
		}
		if (offset == 258) {
			return f4.back();
		}
		if (offset == 259) {
			return f6.back();
		}
		if (offset == 516) {
			return f7.back();
		}
		if (offset == 517) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_merged_banks_4: " << offset << endl;
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
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write1_merged_banks_3_cache {
	// Capacity: 518
	// # of read delays: 4
	// read delays: 0, 1, 259, 517
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 259) capacity = 257
	fifo<hw_uint<32> , 257> f3;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [260, 517) capacity = 257
	fifo<hw_uint<32> , 257> f5;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f6;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_258() {
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4.back();
	}

	inline hw_uint<32>  peek_516() {
		return f5.back();
	}

	inline hw_uint<32>  peek_517() {
		return f6.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 258) {
			return f3.back();
		}
		if (offset == 259) {
			return f4.back();
		}
		if (offset == 516) {
			return f5.back();
		}
		if (offset == 517) {
			return f6.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write1_merged_banks_3: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write2_merged_banks_3_cache {
	// Capacity: 518
	// # of read delays: 4
	// read delays: 0, 1, 259, 517
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 259) capacity = 257
	fifo<hw_uint<32> , 257> f3;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [260, 517) capacity = 257
	fifo<hw_uint<32> , 257> f5;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f6;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_258() {
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4.back();
	}

	inline hw_uint<32>  peek_516() {
		return f5.back();
	}

	inline hw_uint<32>  peek_517() {
		return f6.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 258) {
			return f3.back();
		}
		if (offset == 259) {
			return f4.back();
		}
		if (offset == 516) {
			return f5.back();
		}
		if (offset == 517) {
			return f6.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write2_merged_banks_3: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write3_merged_banks_4_cache {
	// Capacity: 518
	// # of read delays: 5
	// read delays: 0, 1, 259, 260, 517
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 259) capacity = 257
	fifo<hw_uint<32> , 257> f3;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [260, 261) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [261, 517) capacity = 256
	fifo<hw_uint<32> , 256> f7;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_258() {
		return f3.back();
	}

	inline hw_uint<32>  peek_259() {
		return f4.back();
	}

	inline hw_uint<32>  peek_260() {
		return f6.back();
	}

	inline hw_uint<32>  peek_516() {
		return f7.back();
	}

	inline hw_uint<32>  peek_517() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 258) {
			return f3.back();
		}
		if (offset == 259) {
			return f4.back();
		}
		if (offset == 260) {
			return f6.back();
		}
		if (offset == 516) {
			return f7.back();
		}
		if (offset == 517) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write3_merged_banks_4: " << offset << endl;
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
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_cache {
  t1_t1_comp_write0_merged_banks_4_cache t1_t1_comp_write0_merged_banks_4;
  t1_t1_comp_write1_merged_banks_3_cache t1_t1_comp_write1_merged_banks_3;
  t1_t1_comp_write2_merged_banks_3_cache t1_t1_comp_write2_merged_banks_3;
  t1_t1_comp_write3_merged_banks_4_cache t1_t1_comp_write3_merged_banks_4;
};



inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write0_merged_banks_4.push(t1_t1_comp_write0);
}

inline void t1_t1_comp_write1_write(hw_uint<32> & t1_t1_comp_write1, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write1_merged_banks_3.push(t1_t1_comp_write1);
}

inline void t1_t1_comp_write2_write(hw_uint<32> & t1_t1_comp_write2, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write2_merged_banks_3.push(t1_t1_comp_write2);
}

inline void t1_t1_comp_write3_write(hw_uint<32> & t1_t1_comp_write3, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write3_merged_banks_4.push(t1_t1_comp_write3);
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd0_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd0 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[-1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3_merged_banks_4.peek_260();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd1_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd1 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_4.peek_517();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd10_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd10 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[3 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3_merged_banks_4.peek_517();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd11_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd11 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[3 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3_merged_banks_4.peek_259();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd12_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd12 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[3 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3_merged_banks_4.peek_1();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd13_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd13 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[4 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_4.peek_258();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd2_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd2 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_4.peek_259();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd3_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd3 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_4.peek_1();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd4_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd4 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[1 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1_merged_banks_3.peek_517();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd5_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd5 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1_merged_banks_3.peek_259();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd6_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd6 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[1 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1_merged_banks_3.peek_1();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd7_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd7 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[2 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2_merged_banks_3.peek_517();
	return value_t1_t1_comp_write2;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd8_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd8 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2_merged_banks_3.peek_259();
	return value_t1_t1_comp_write2;
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd9_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { jacobi2d_unrolled_4_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_4_rd9 read pattern: { jacobi2d_unrolled_4_comp[d0, d1] -> t1[2 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2_merged_banks_3.peek_1();
	return value_t1_t1_comp_write2;
}

// # of bundles = 2
// jacobi2d_unrolled_4_comp_read
//	jacobi2d_unrolled_4_rd0
//	jacobi2d_unrolled_4_rd1
//	jacobi2d_unrolled_4_rd2
//	jacobi2d_unrolled_4_rd3
//	jacobi2d_unrolled_4_rd4
//	jacobi2d_unrolled_4_rd5
//	jacobi2d_unrolled_4_rd6
//	jacobi2d_unrolled_4_rd7
//	jacobi2d_unrolled_4_rd8
//	jacobi2d_unrolled_4_rd9
//	jacobi2d_unrolled_4_rd10
//	jacobi2d_unrolled_4_rd11
//	jacobi2d_unrolled_4_rd12
//	jacobi2d_unrolled_4_rd13
inline hw_uint<448> t1_jacobi2d_unrolled_4_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<448> result;
	hw_uint<32>  jacobi2d_unrolled_4_rd0_res = jacobi2d_unrolled_4_rd0_select(t1, d0, d1);
	set_at<0, 448>(result, jacobi2d_unrolled_4_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd1_res = jacobi2d_unrolled_4_rd1_select(t1, d0, d1);
	set_at<32, 448>(result, jacobi2d_unrolled_4_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd2_res = jacobi2d_unrolled_4_rd2_select(t1, d0, d1);
	set_at<64, 448>(result, jacobi2d_unrolled_4_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd3_res = jacobi2d_unrolled_4_rd3_select(t1, d0, d1);
	set_at<96, 448>(result, jacobi2d_unrolled_4_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd4_res = jacobi2d_unrolled_4_rd4_select(t1, d0, d1);
	set_at<128, 448>(result, jacobi2d_unrolled_4_rd4_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd5_res = jacobi2d_unrolled_4_rd5_select(t1, d0, d1);
	set_at<160, 448>(result, jacobi2d_unrolled_4_rd5_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd6_res = jacobi2d_unrolled_4_rd6_select(t1, d0, d1);
	set_at<192, 448>(result, jacobi2d_unrolled_4_rd6_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd7_res = jacobi2d_unrolled_4_rd7_select(t1, d0, d1);
	set_at<224, 448>(result, jacobi2d_unrolled_4_rd7_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd8_res = jacobi2d_unrolled_4_rd8_select(t1, d0, d1);
	set_at<256, 448>(result, jacobi2d_unrolled_4_rd8_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd9_res = jacobi2d_unrolled_4_rd9_select(t1, d0, d1);
	set_at<288, 448>(result, jacobi2d_unrolled_4_rd9_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd10_res = jacobi2d_unrolled_4_rd10_select(t1, d0, d1);
	set_at<320, 448>(result, jacobi2d_unrolled_4_rd10_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd11_res = jacobi2d_unrolled_4_rd11_select(t1, d0, d1);
	set_at<352, 448>(result, jacobi2d_unrolled_4_rd11_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd12_res = jacobi2d_unrolled_4_rd12_select(t1, d0, d1);
	set_at<384, 448>(result, jacobi2d_unrolled_4_rd12_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd13_res = jacobi2d_unrolled_4_rd13_select(t1, d0, d1);
	set_at<416, 448>(result, jacobi2d_unrolled_4_rd13_res);
	return result;
}

// t1_comp_write
//	t1_t1_comp_write0
//	t1_t1_comp_write1
//	t1_t1_comp_write2
//	t1_t1_comp_write3
inline void t1_t1_comp_write_bundle_write(hw_uint<128>& t1_comp_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_comp_write0_res = t1_comp_write.extract<0, 31>();
	t1_t1_comp_write0_write(t1_t1_comp_write0_res, t1, d0, d1);
	hw_uint<32>  t1_t1_comp_write1_res = t1_comp_write.extract<32, 63>();
	t1_t1_comp_write1_write(t1_t1_comp_write1_res, t1, d0, d1);
	hw_uint<32>  t1_t1_comp_write2_res = t1_comp_write.extract<64, 95>();
	t1_t1_comp_write2_write(t1_t1_comp_write2_res, t1, d0, d1);
	hw_uint<32>  t1_t1_comp_write3_res = t1_comp_write.extract<96, 127>();
	t1_t1_comp_write3_write(t1_t1_comp_write3_res, t1, d0, d1);
}





// Operation logic
inline void t1_comp(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id_unrolled_4(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1, d0, d1);
}

inline void jacobi2d_unrolled_4_comp(t1_cache& t1, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */jacobi2d_unrolled_4, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_4_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute_unrolled_4(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_4
	jacobi2d_unrolled_4.write(compute_result);
}

// Driver function
void jacobi2d_unrolled_4_opt(HWStream<hw_uint<128> >& /* get_args num ports = 4 */t1_arg, HWStream<hw_uint<128> >& /* get_args num ports = 4 */jacobi2d_unrolled_4) {
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING
for (int c0 = -1; c0 <= 1024; c0++) {
  for (int c1 = -1; c1 <= 256; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 256) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1024) && ((c0 - 0) % 1 == 0)) {
      t1_comp((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 256) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1024) && ((c0 - 1) % 1 == 0)) {
      jacobi2d_unrolled_4_comp((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

*/
	for (int c0 = -1; c0 <= 1024; c0++) {
	  for (int c1 = -1; c1 <= 256; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 256) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1024) && ((c0 - 0) % 1 == 0)) {
	      t1_comp(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 256) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1024) && ((c0 - 1) % 1 == 0)) {
	      jacobi2d_unrolled_4_comp(t1, jacobi2d_unrolled_4, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
}
