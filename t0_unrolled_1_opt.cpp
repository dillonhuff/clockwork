#include "t0_unrolled_1_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_comp_write0_cache {
	// Capacity: 2054
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 1026) capacity = 1024
	fifo<hw_uint<32> , 1024> f3;
	// Parition [1026, 1027) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [1027, 1028) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [1028, 1029) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [1029, 2053) capacity = 1024
	fifo<hw_uint<32> , 1024> f9;
	// Parition [2053, 2053] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_1025() {
		return f3.back();
	}

	inline hw_uint<32>  peek_1026() {
		return f4.back();
	}

	inline hw_uint<32>  peek_1027() {
		return f6.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f8.back();
	}

	inline hw_uint<32>  peek_2052() {
		return f9.back();
	}

	inline hw_uint<32>  peek_2053() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 1025) {
			return f3.back();
		}
		if (offset == 1026) {
			return f4.back();
		}
		if (offset == 1027) {
			return f6.back();
		}
		if (offset == 1028) {
			return f8.back();
		}
		if (offset == 2052) {
			return f9.back();
		}
		if (offset == 2053) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
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

struct t1_cache {
  t1_t1_comp_write0_cache t1_t1_comp_write0;
};



inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1, int d0, int d1) {
	t1.t1_t1_comp_write0.push(t1_t1_comp_write0);
}

inline hw_uint<32>  t0_unrolled_1_rd0_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_unrolled_1_comp[d0, d1] -> 1028 : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1028();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_unrolled_1_rd1_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_unrolled_1_comp[d0, d1] -> 2053 : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_2053();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_unrolled_1_rd2_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_unrolled_1_comp[d0, d1] -> 1027 : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1027();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_unrolled_1_rd3_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_unrolled_1_comp[d0, d1] -> 1 : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_unrolled_1_rd4_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_unrolled_1_comp[d0, d1] -> 1026 : 0 <= d0 <= 1022 and 0 <= d1 <= 1023; t0_unrolled_1_comp[d0, d1] -> (3 + d0) : d0 = 1023 and 0 <= d1 <= 1023 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1026();
	return value_t1_t1_comp_write0;
}

// # of bundles = 2
// t0_unrolled_1_comp_read
//	t0_unrolled_1_rd0
//	t0_unrolled_1_rd1
//	t0_unrolled_1_rd2
//	t0_unrolled_1_rd3
//	t0_unrolled_1_rd4
inline hw_uint<160> t1_t0_unrolled_1_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<160> result;
	hw_uint<32>  t0_unrolled_1_rd0_res = t0_unrolled_1_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, t0_unrolled_1_rd0_res);
	hw_uint<32>  t0_unrolled_1_rd1_res = t0_unrolled_1_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, t0_unrolled_1_rd1_res);
	hw_uint<32>  t0_unrolled_1_rd2_res = t0_unrolled_1_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, t0_unrolled_1_rd2_res);
	hw_uint<32>  t0_unrolled_1_rd3_res = t0_unrolled_1_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, t0_unrolled_1_rd3_res);
	hw_uint<32>  t0_unrolled_1_rd4_res = t0_unrolled_1_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, t0_unrolled_1_rd4_res);
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

inline void t0_unrolled_1_comp(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t0_unrolled_1, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_unrolled_1_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
	// Produce: t0_unrolled_1
	t0_unrolled_1.write(compute_result);
}

// Driver function
void t0_unrolled_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */t0_unrolled_1) {
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

	for (int c0 = -1; c0 <= 1024; c0 += 1)
	  for (int c1 = -1; c1 <= 1024; c1 += 1) {
	    t1_comp(t1_arg, t1, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	      t0_unrolled_1_comp(t1, t0_unrolled_1, c1 - 1, c0 - 1);
	  }
	
}
