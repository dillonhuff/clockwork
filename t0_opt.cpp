#include "t0_opt_compute_units.h"

#include "hw_classes.h"

  // bank_t1_t1_comp_write0_to_t0_rd0
  // bank_t1_t1_comp_write0_to_t0_rd1
  // bank_t1_t1_comp_write0_to_t0_rd2
  // bank_t1_t1_comp_write0_to_t0_rd3
  // bank_t1_t1_comp_write0_to_t0_rd4
struct t1_t1_comp_write0_cache {
	// Capacity: 70
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
	// Parition [69, 69] capacity = 1
	fifo<hw_uint<32> , 1> f10;


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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset: " << offset << endl;
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

inline hw_uint<32>  t0_rd0_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 36 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_36();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd1_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 69 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_69();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd2_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 35 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_35();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd3_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd4_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 34 : 0 <= d0 <= 30 and 0 <= d1 <= 27; t0_comp[d0, d1] -> (3 + d0) : d0 = 31 and 0 <= d1 <= 27 }
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_34();
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

    if ((-1 <= c1 && c1 <= 32) && (-1 <= c0 && c0 <= 28)) {
      t1_comp(c1, c0);
    }

    if ((1 <= c1 && c1 <= 32) && (1 <= c0 && c0 <= 28)) {
      t0_comp(c1, c0);
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
