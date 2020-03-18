#include "level_2_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_comp_write0_to_level_0_rd0_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 528) capacity = 527
	fifo<hw_uint<32> , 527> f1;
	// Parition [528, 528] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_527() {
		return f1.back();
	}

	inline hw_uint<32>  peek_528() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 527) {
			return f1.back();
		}
		if (offset == 528) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd0_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd1_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 265) capacity = 264
	fifo<hw_uint<32> , 264> f1;
	// Parition [265, 265] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_264() {
		return f1.back();
	}

	inline hw_uint<32>  peek_265() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 264) {
			return f1.back();
		}
		if (offset == 265) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd2_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd2_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd3_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 527) capacity = 526
	fifo<hw_uint<32> , 526> f1;
	// Parition [527, 527] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_526() {
		return f1.back();
	}

	inline hw_uint<32>  peek_527() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 526) {
			return f1.back();
		}
		if (offset == 527) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd4_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 264) capacity = 263
	fifo<hw_uint<32> , 263> f1;
	// Parition [264, 264] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_263() {
		return f1.back();
	}

	inline hw_uint<32>  peek_264() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 263) {
			return f1.back();
		}
		if (offset == 264) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd4_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd5_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd6_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 526) capacity = 525
	fifo<hw_uint<32> , 525> f1;
	// Parition [526, 526] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_525() {
		return f1.back();
	}

	inline hw_uint<32>  peek_526() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 525) {
			return f1.back();
		}
		if (offset == 526) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd6_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd7_cache {
	// Capacity: 529
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 263) capacity = 262
	fifo<hw_uint<32> , 262> f1;
	// Parition [263, 263] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_262() {
		return f1.back();
	}

	inline hw_uint<32>  peek_263() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 262) {
			return f1.back();
		}
		if (offset == 263) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd7_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct in_in_comp_write0_to_level_0_rd8_cache {
	// Capacity: 529
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
		cout << "Error: Unsupported offset in in_in_comp_write0_to_level_0_rd8_cache: " << offset << endl;
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
  in_in_comp_write0_to_level_0_rd0_cache bank_in_in_comp_write0_to_level_0_rd0;
  in_in_comp_write0_to_level_0_rd1_cache bank_in_in_comp_write0_to_level_0_rd1;
  in_in_comp_write0_to_level_0_rd2_cache bank_in_in_comp_write0_to_level_0_rd2;
  in_in_comp_write0_to_level_0_rd3_cache bank_in_in_comp_write0_to_level_0_rd3;
  in_in_comp_write0_to_level_0_rd4_cache bank_in_in_comp_write0_to_level_0_rd4;
  in_in_comp_write0_to_level_0_rd5_cache bank_in_in_comp_write0_to_level_0_rd5;
  in_in_comp_write0_to_level_0_rd6_cache bank_in_in_comp_write0_to_level_0_rd6;
  in_in_comp_write0_to_level_0_rd7_cache bank_in_in_comp_write0_to_level_0_rd7;
  in_in_comp_write0_to_level_0_rd8_cache bank_in_in_comp_write0_to_level_0_rd8;
};



inline void in_in_comp_write0_write(hw_uint<32> & in_in_comp_write0, in_cache& in, int d0, int d1) {
  in.bank_in_in_comp_write0_to_level_0_rd0.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd1.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd2.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd3.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd4.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd5.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd6.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd7.push(in_in_comp_write0);
  in.bank_in_in_comp_write0_to_level_0_rd8.push(in_in_comp_write0);
}

inline hw_uint<32>  level_0_rd0_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd0 read pattern: { level_0_comp[d0, d1] -> in[2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd0.peek_528();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd1_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd1 read pattern: { level_0_comp[d0, d1] -> in[2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd1.peek_265();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd2_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd2 read pattern: { level_0_comp[d0, d1] -> in[2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd2.peek_2();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd3_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd3 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd3.peek_527();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd4_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd4 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd4.peek_264();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd5_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd5 read pattern: { level_0_comp[d0, d1] -> in[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd5.peek_1();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd6_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd6 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd6.peek_526();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd7_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd7 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd7.peek_263();
	return value_in_in_comp_write0;
}

inline hw_uint<32>  level_0_rd8_select(in_cache& in, int d0, int d1) {
	// lexmax events: { level_0_comp[d0, d1] -> in_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
  // level_0_rd8 read pattern: { level_0_comp[d0, d1] -> in[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 130 }
	auto value_in_in_comp_write0 = in.bank_in_in_comp_write0_to_level_0_rd8.peek_0();
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

struct level_0_level_0_comp_write0_to_level_1_rd0_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 264) capacity = 263
	fifo<hw_uint<32> , 263> f1;
	// Parition [264, 264] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_263() {
		return f1.back();
	}

	inline hw_uint<32>  peek_264() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 263) {
			return f1.back();
		}
		if (offset == 264) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd0_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd1_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 133) capacity = 132
	fifo<hw_uint<32> , 132> f1;
	// Parition [133, 133] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_132() {
		return f1.back();
	}

	inline hw_uint<32>  peek_133() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 132) {
			return f1.back();
		}
		if (offset == 133) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd2_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd2_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd3_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 263) capacity = 262
	fifo<hw_uint<32> , 262> f1;
	// Parition [263, 263] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_262() {
		return f1.back();
	}

	inline hw_uint<32>  peek_263() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 262) {
			return f1.back();
		}
		if (offset == 263) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd4_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 132) capacity = 131
	fifo<hw_uint<32> , 131> f1;
	// Parition [132, 132] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_131() {
		return f1.back();
	}

	inline hw_uint<32>  peek_132() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 131) {
			return f1.back();
		}
		if (offset == 132) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd4_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd5_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd6_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 262) capacity = 261
	fifo<hw_uint<32> , 261> f1;
	// Parition [262, 262] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_261() {
		return f1.back();
	}

	inline hw_uint<32>  peek_262() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 261) {
			return f1.back();
		}
		if (offset == 262) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd6_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd7_cache {
	// Capacity: 265
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 131) capacity = 130
	fifo<hw_uint<32> , 130> f1;
	// Parition [131, 131] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_130() {
		return f1.back();
	}

	inline hw_uint<32>  peek_131() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 130) {
			return f1.back();
		}
		if (offset == 131) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd7_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_0_level_0_comp_write0_to_level_1_rd8_cache {
	// Capacity: 265
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
		cout << "Error: Unsupported offset in level_0_level_0_comp_write0_to_level_1_rd8_cache: " << offset << endl;
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

struct level_0_cache {
  level_0_level_0_comp_write0_to_level_1_rd0_cache bank_level_0_level_0_comp_write0_to_level_1_rd0;
  level_0_level_0_comp_write0_to_level_1_rd1_cache bank_level_0_level_0_comp_write0_to_level_1_rd1;
  level_0_level_0_comp_write0_to_level_1_rd2_cache bank_level_0_level_0_comp_write0_to_level_1_rd2;
  level_0_level_0_comp_write0_to_level_1_rd3_cache bank_level_0_level_0_comp_write0_to_level_1_rd3;
  level_0_level_0_comp_write0_to_level_1_rd4_cache bank_level_0_level_0_comp_write0_to_level_1_rd4;
  level_0_level_0_comp_write0_to_level_1_rd5_cache bank_level_0_level_0_comp_write0_to_level_1_rd5;
  level_0_level_0_comp_write0_to_level_1_rd6_cache bank_level_0_level_0_comp_write0_to_level_1_rd6;
  level_0_level_0_comp_write0_to_level_1_rd7_cache bank_level_0_level_0_comp_write0_to_level_1_rd7;
  level_0_level_0_comp_write0_to_level_1_rd8_cache bank_level_0_level_0_comp_write0_to_level_1_rd8;
};



inline void level_0_level_0_comp_write0_write(hw_uint<32> & level_0_level_0_comp_write0, level_0_cache& level_0, int d0, int d1) {
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd0.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd1.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd2.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd3.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd4.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd5.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd6.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd7.push(level_0_level_0_comp_write0);
  level_0.bank_level_0_level_0_comp_write0_to_level_1_rd8.push(level_0_level_0_comp_write0);
}

inline hw_uint<32>  level_1_rd0_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd0 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd0.peek_264();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd1_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd1 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd1.peek_133();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd2_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd2 read pattern: { level_1_comp[d0, d1] -> level_0[2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd2.peek_2();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd3_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd3 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd3.peek_263();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd4_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd4 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd4.peek_132();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd5_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd5 read pattern: { level_1_comp[d0, d1] -> level_0[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd5.peek_1();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd6_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd6 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd6.peek_262();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd7_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd7 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd7.peek_131();
	return value_level_0_level_0_comp_write0;
}

inline hw_uint<32>  level_1_rd8_select(level_0_cache& level_0, int d0, int d1) {
	// lexmax events: { level_1_comp[d0, d1] -> level_0_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
  // level_1_rd8 read pattern: { level_1_comp[d0, d1] -> level_0[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 64 and 0 <= d1 <= 64 }
	auto value_level_0_level_0_comp_write0 = level_0.bank_level_0_level_0_comp_write0_to_level_1_rd8.peek_0();
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

struct level_1_level_1_comp_write0_to_level_2_rd0_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 132) capacity = 131
	fifo<hw_uint<32> , 131> f1;
	// Parition [132, 132] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_131() {
		return f1.back();
	}

	inline hw_uint<32>  peek_132() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 131) {
			return f1.back();
		}
		if (offset == 132) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd0_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd1_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 67) capacity = 66
	fifo<hw_uint<32> , 66> f1;
	// Parition [67, 67] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_66() {
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 66) {
			return f1.back();
		}
		if (offset == 67) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd1_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd2_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f1;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f1.back();
	}

	inline hw_uint<32>  peek_2() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f1.back();
		}
		if (offset == 2) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd2_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd3_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 131) capacity = 130
	fifo<hw_uint<32> , 130> f1;
	// Parition [131, 131] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_130() {
		return f1.back();
	}

	inline hw_uint<32>  peek_131() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 130) {
			return f1.back();
		}
		if (offset == 131) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd4_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 66) capacity = 65
	fifo<hw_uint<32> , 65> f1;
	// Parition [66, 66] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_65() {
		return f1.back();
	}

	inline hw_uint<32>  peek_66() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 65) {
			return f1.back();
		}
		if (offset == 66) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd4_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd5_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd5_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd6_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 130) capacity = 129
	fifo<hw_uint<32> , 129> f1;
	// Parition [130, 130] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_129() {
		return f1.back();
	}

	inline hw_uint<32>  peek_130() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 129) {
			return f1.back();
		}
		if (offset == 130) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd6_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd7_cache {
	// Capacity: 133
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 65) capacity = 64
	fifo<hw_uint<32> , 64> f1;
	// Parition [65, 65] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_64() {
		return f1.back();
	}

	inline hw_uint<32>  peek_65() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 64) {
			return f1.back();
		}
		if (offset == 65) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd7_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct level_1_level_1_comp_write0_to_level_2_rd8_cache {
	// Capacity: 133
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
		cout << "Error: Unsupported offset in level_1_level_1_comp_write0_to_level_2_rd8_cache: " << offset << endl;
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

struct level_1_cache {
  level_1_level_1_comp_write0_to_level_2_rd0_cache bank_level_1_level_1_comp_write0_to_level_2_rd0;
  level_1_level_1_comp_write0_to_level_2_rd1_cache bank_level_1_level_1_comp_write0_to_level_2_rd1;
  level_1_level_1_comp_write0_to_level_2_rd2_cache bank_level_1_level_1_comp_write0_to_level_2_rd2;
  level_1_level_1_comp_write0_to_level_2_rd3_cache bank_level_1_level_1_comp_write0_to_level_2_rd3;
  level_1_level_1_comp_write0_to_level_2_rd4_cache bank_level_1_level_1_comp_write0_to_level_2_rd4;
  level_1_level_1_comp_write0_to_level_2_rd5_cache bank_level_1_level_1_comp_write0_to_level_2_rd5;
  level_1_level_1_comp_write0_to_level_2_rd6_cache bank_level_1_level_1_comp_write0_to_level_2_rd6;
  level_1_level_1_comp_write0_to_level_2_rd7_cache bank_level_1_level_1_comp_write0_to_level_2_rd7;
  level_1_level_1_comp_write0_to_level_2_rd8_cache bank_level_1_level_1_comp_write0_to_level_2_rd8;
};



inline void level_1_level_1_comp_write0_write(hw_uint<32> & level_1_level_1_comp_write0, level_1_cache& level_1, int d0, int d1) {
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd0.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd1.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd2.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd3.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd4.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd5.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd6.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd7.push(level_1_level_1_comp_write0);
  level_1.bank_level_1_level_1_comp_write0_to_level_2_rd8.push(level_1_level_1_comp_write0);
}

inline hw_uint<32>  level_2_rd0_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd0 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd0.peek_132();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd1_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd1 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd1.peek_67();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd2_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd2 read pattern: { level_2_comp[d0, d1] -> level_1[2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd2.peek_2();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd3_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd3 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd3.peek_131();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd4_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd4 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd4.peek_66();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd5_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 1 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd5 read pattern: { level_2_comp[d0, d1] -> level_1[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd5.peek_1();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd6_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd6 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd6.peek_130();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd7_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd7 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd7.peek_65();
	return value_level_1_level_1_comp_write0;
}

inline hw_uint<32>  level_2_rd8_select(level_1_cache& level_1, int d0, int d1) {
	// lexmax events: { level_2_comp[d0, d1] -> level_1_comp[d0' = 2 + 2d0, d1' = 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // level_2_rd8 read pattern: { level_2_comp[d0, d1] -> level_1[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_level_1_level_1_comp_write0 = level_1.bank_level_1_level_1_comp_write0_to_level_2_rd8.peek_0();
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

inline void level_2_comp(level_1_cache& level_1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */level_2, int d0, int d1) {
	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_comp_read_bundle_read(level_1/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(level_1_0_c__0_value);
	// Produce: level_2
	level_2.write(compute_result);
}

inline void level_1_comp(level_0_cache& level_0, level_1_cache& level_1, int d0, int d1) {
	// Consume: level_0
	auto level_0_0_c__0_value = level_0_level_1_comp_read_bundle_read(level_0/* source_delay */, d0, d1);
	auto compute_result = reduce_gauss(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_comp_write_bundle_write(compute_result, level_1, d0, d1);
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
for (int c0 = 0; c0 <= 262; c0++) {
  for (int c1 = 0; c1 <= 262; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 262) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 262) && ((c0 - 0) % 1 == 0)) {
      in_comp((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 262) && ((c1 - 2) % 2 == 0) && (2 <= c0 && c0 <= 262) && ((c0 - 2) % 2 == 0)) {
      level_0_comp((c1 - 2) / 2, (c0 - 2) / 2);
    }

    if ((6 <= c1 && c1 <= 262) && ((c1 - 6) % 4 == 0) && (6 <= c0 && c0 <= 262) && ((c0 - 6) % 4 == 0)) {
      level_1_comp((c1 - 6) / 4, (c0 - 6) / 4);
    }

    if ((14 <= c1 && c1 <= 262) && ((c1 - 14) % 8 == 0) && (14 <= c0 && c0 <= 262) && ((c0 - 14) % 8 == 0)) {
      level_2_comp((c1 - 14) / 8, (c0 - 14) / 8);
    }

  }
}

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
