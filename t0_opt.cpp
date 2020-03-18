#include "t0_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_comp_write0_to_t0_rd0_cache {
	// Capacity: 70
	// # of read delays: 2
	// read delays: 0, 36
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 36) capacity = 35
	fifo<hw_uint<32> , 35> f1;
	// Parition [36, 36] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_35() {
		return f1.back();
	}

	inline hw_uint<32>  peek_36() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 35) {
			return f1.back();
		}
		if (offset == 36) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd0: " << offset << endl;
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

struct t1_t1_comp_write0_to_t0_rd1_cache {
	// Capacity: 70
	// # of read delays: 2
	// read delays: 0, 69
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 69) capacity = 68
	fifo<hw_uint<32> , 68> f1;
	// Parition [69, 69] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_68() {
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 68) {
			return f1.back();
		}
		if (offset == 69) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd1: " << offset << endl;
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

struct t1_t1_comp_write0_to_t0_rd2_cache {
	// Capacity: 70
	// # of read delays: 2
	// read delays: 0, 35
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 35) capacity = 34
	fifo<hw_uint<32> , 34> f1;
	// Parition [35, 35] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_34() {
		return f1.back();
	}

	inline hw_uint<32>  peek_35() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 34) {
			return f1.back();
		}
		if (offset == 35) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd2: " << offset << endl;
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

struct t1_t1_comp_write0_to_t0_rd3_cache {
	// Capacity: 70
	// # of read delays: 2
	// read delays: 0, 1
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
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd3: " << offset << endl;
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

struct t1_t1_comp_write0_to_t0_rd4_cache {
	// Capacity: 70
	// # of read delays: 2
	// read delays: 0, 34
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 34) capacity = 33
	fifo<hw_uint<32> , 33> f1;
	// Parition [34, 34] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_33() {
		return f1.back();
	}

	inline hw_uint<32>  peek_34() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 33) {
			return f1.back();
		}
		if (offset == 34) {
			return f2.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd4: " << offset << endl;
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

struct t1_cache {
  t1_t1_comp_write0_to_t0_rd0_cache t1_t1_comp_write0_to_t0_rd0;
  t1_t1_comp_write0_to_t0_rd1_cache t1_t1_comp_write0_to_t0_rd1;
  t1_t1_comp_write0_to_t0_rd2_cache t1_t1_comp_write0_to_t0_rd2;
  t1_t1_comp_write0_to_t0_rd3_cache t1_t1_comp_write0_to_t0_rd3;
  t1_t1_comp_write0_to_t0_rd4_cache t1_t1_comp_write0_to_t0_rd4;
};



inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write0_to_t0_rd0.push(t1_t1_comp_write0);
  t1.t1_t1_comp_write0_to_t0_rd1.push(t1_t1_comp_write0);
  t1.t1_t1_comp_write0_to_t0_rd2.push(t1_t1_comp_write0);
  t1.t1_t1_comp_write0_to_t0_rd3.push(t1_t1_comp_write0);
  t1.t1_t1_comp_write0_to_t0_rd4.push(t1_t1_comp_write0);
}

inline hw_uint<32>  t0_rd0_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd0 read pattern: { t0_comp[d0, d1] -> t1[-1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_to_t0_rd0.peek_36();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd1_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd1 read pattern: { t0_comp[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_to_t0_rd1.peek_69();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd2_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd2 read pattern: { t0_comp[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_to_t0_rd2.peek_35();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd3_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd3 read pattern: { t0_comp[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_to_t0_rd3.peek_1();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd4_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd4 read pattern: { t0_comp[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_to_t0_rd4.peek_34();
	return value_t1_t1_comp_write0;
}

// # of bundles = 2
// t0_comp_read
//	t0_rd0
//	t0_rd1
//	t0_rd2
//	t0_rd3
//	t0_rd4
inline hw_uint<160> t1_t0_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<160> result;
	hw_uint<32>  t0_rd0_res = t0_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, t0_rd0_res);
	hw_uint<32>  t0_rd1_res = t0_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, t0_rd1_res);
	hw_uint<32>  t0_rd2_res = t0_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, t0_rd2_res);
	hw_uint<32>  t0_rd3_res = t0_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, t0_rd3_res);
	hw_uint<32>  t0_rd4_res = t0_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, t0_rd4_res);
	return result;
}

// t1_comp_write
//	t1_t1_comp_write0
inline void t1_t1_comp_write_bundle_write(hw_uint<32>& t1_comp_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_comp_write0_res = t1_comp_write.extract<0, 31>();
	t1_t1_comp_write0_write(t1_t1_comp_write0_res, t1, d0, d1);
}





// Operation logic
inline void t1_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1, d0, d1);
}

inline void t0_comp(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t0, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
	// Produce: t0
	t0.write(compute_result);
}

// Driver function
void t0_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */t0) {
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING
for (int c0 = -1; c0 <= 28; c0++) {
  for (int c1 = -1; c1 <= 32; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 28) && ((c0 - 0) % 1 == 0)) {
      t1_comp((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 28) && ((c0 - 1) % 1 == 0)) {
      t0_comp((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

*/
	for (int c0 = -1; c0 <= 28; c0 += 1)
	  for (int c1 = -1; c1 <= 32; c1 += 1) {
	    t1_comp(t1_arg, t1, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	      t0_comp(t1, t0, c1 - 1, c0 - 1);
	  }
	
}
