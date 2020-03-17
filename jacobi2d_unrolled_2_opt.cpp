#include "jacobi2d_unrolled_2_opt_compute_units.h"

#include "hw_classes.h"

  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd0
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd1
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd2
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd3
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd4
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd5
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd6
  // bank_t1_t1_comp_write0_to_jacobi2d_unrolled_2_rd7
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd0
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd1
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd2
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd3
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd4
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd5
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd6
  // bank_t1_t1_comp_write1_to_jacobi2d_unrolled_2_rd7
struct t1_t1_comp_write0_cache {
	// Capacity: 1030
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 514) capacity = 512
	fifo<hw_uint<32> , 512> f3;
	// Parition [514, 515) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [515, 516) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [516, 517) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [517, 1029) capacity = 512
	fifo<hw_uint<32> , 512> f9;
	// Parition [1029, 1029] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_513() {
		return f3.back();
	}

	inline hw_uint<32>  peek_514() {
		return f4.back();
	}

	inline hw_uint<32>  peek_515() {
		return f6.back();
	}

	inline hw_uint<32>  peek_516() {
		return f8.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f9.back();
	}

	inline hw_uint<32>  peek_1029() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 513) {
			return f3.back();
		}
		if (offset == 514) {
			return f4.back();
		}
		if (offset == 515) {
			return f6.back();
		}
		if (offset == 516) {
			return f8.back();
		}
		if (offset == 1028) {
			return f9.back();
		}
		if (offset == 1029) {
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

struct t1_t1_comp_write1_cache {
	// Capacity: 1030
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 514) capacity = 512
	fifo<hw_uint<32> , 512> f3;
	// Parition [514, 515) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [515, 516) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [516, 517) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [517, 1029) capacity = 512
	fifo<hw_uint<32> , 512> f9;
	// Parition [1029, 1029] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_513() {
		return f3.back();
	}

	inline hw_uint<32>  peek_514() {
		return f4.back();
	}

	inline hw_uint<32>  peek_515() {
		return f6.back();
	}

	inline hw_uint<32>  peek_516() {
		return f8.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f9.back();
	}

	inline hw_uint<32>  peek_1029() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 513) {
			return f3.back();
		}
		if (offset == 514) {
			return f4.back();
		}
		if (offset == 515) {
			return f6.back();
		}
		if (offset == 516) {
			return f8.back();
		}
		if (offset == 1028) {
			return f9.back();
		}
		if (offset == 1029) {
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
  t1_t1_comp_write1_cache t1_t1_comp_write1;
};



inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1, int d0, int d1) {
	t1.t1_t1_comp_write0.push(t1_t1_comp_write0);
}

inline void t1_t1_comp_write1_write(hw_uint<32> & t1_t1_comp_write1, t1_cache& t1, int d0, int d1) {
	t1.t1_t1_comp_write1.push(t1_t1_comp_write1);
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd0_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 516 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd0 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[-1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1021 and 0 <= i1 <= 1023 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_516();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd1_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 1029 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd1 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[2d0, -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 1022 and -1 <= i1 <= 1022 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1029();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd2_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 515 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd2 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 1022 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_515();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd3_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 1 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd3 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[2d0, 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 2 = 0 and 0 <= i0 <= 1022 and 0 < i1 <= 1024 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd4_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 1029 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd4 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[1 + 2d0, -1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 1023 and -1 <= i1 <= 1022 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_1029();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd5_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 515 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd5 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[1 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 1023 and 0 <= i1 <= 1023 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_515();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd6_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 1 : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd6 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[1 + 2d0, 1 + d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 2 = 0 and 0 < i0 <= 1023 and 0 < i1 <= 1024 }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_1();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  jacobi2d_unrolled_2_rd7_select(t1_cache& t1, int d0, int d1) {
  // qpd = { jacobi2d_unrolled_2_comp[d0, d1] -> 514 : 0 <= d0 <= 510 and 0 <= d1 <= 1023; jacobi2d_unrolled_2_comp[d0, d1] -> (3 + d0) : d0 = 511 and 0 <= d1 <= 1023 }
	// lexmax events: { jacobi2d_unrolled_2_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // jacobi2d_unrolled_2_rd7 read pattern: { jacobi2d_unrolled_2_comp[d0, d1] -> t1[2 + 2d0, d1] : 0 <= d0 <= 511 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 2 = 0 and -2 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 2 = 0 and 2 <= i0 <= 1024 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (1 + i0) mod 2 = 0 and -1 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_514();
	return value_t1_t1_comp_write0;
}

// # of bundles = 2
// jacobi2d_unrolled_2_comp_read
//	jacobi2d_unrolled_2_rd0
//	jacobi2d_unrolled_2_rd1
//	jacobi2d_unrolled_2_rd2
//	jacobi2d_unrolled_2_rd3
//	jacobi2d_unrolled_2_rd4
//	jacobi2d_unrolled_2_rd5
//	jacobi2d_unrolled_2_rd6
//	jacobi2d_unrolled_2_rd7
inline hw_uint<256> t1_jacobi2d_unrolled_2_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<256> result;
	hw_uint<32>  jacobi2d_unrolled_2_rd0_res = jacobi2d_unrolled_2_rd0_select(t1, d0, d1);
	set_at<0, 256>(result, jacobi2d_unrolled_2_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd1_res = jacobi2d_unrolled_2_rd1_select(t1, d0, d1);
	set_at<32, 256>(result, jacobi2d_unrolled_2_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd2_res = jacobi2d_unrolled_2_rd2_select(t1, d0, d1);
	set_at<64, 256>(result, jacobi2d_unrolled_2_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd3_res = jacobi2d_unrolled_2_rd3_select(t1, d0, d1);
	set_at<96, 256>(result, jacobi2d_unrolled_2_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd4_res = jacobi2d_unrolled_2_rd4_select(t1, d0, d1);
	set_at<128, 256>(result, jacobi2d_unrolled_2_rd4_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd5_res = jacobi2d_unrolled_2_rd5_select(t1, d0, d1);
	set_at<160, 256>(result, jacobi2d_unrolled_2_rd5_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd6_res = jacobi2d_unrolled_2_rd6_select(t1, d0, d1);
	set_at<192, 256>(result, jacobi2d_unrolled_2_rd6_res);
	hw_uint<32>  jacobi2d_unrolled_2_rd7_res = jacobi2d_unrolled_2_rd7_select(t1, d0, d1);
	set_at<224, 256>(result, jacobi2d_unrolled_2_rd7_res);
	return result;
}

// t1_comp_write
//	t1_t1_comp_write0
//	t1_t1_comp_write1
inline void t1_t1_comp_write_bundle_write(hw_uint<64>& t1_comp_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_comp_write0_res = t1_comp_write.extract<0, 31>();
	t1_t1_comp_write0_write(t1_t1_comp_write0_res, t1, d0, d1);
	hw_uint<32>  t1_t1_comp_write1_res = t1_comp_write.extract<32, 63>();
	t1_t1_comp_write1_write(t1_t1_comp_write1_res, t1, d0, d1);
}





// Operation logic
inline void t1_comp(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id_unrolled_2(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1, d0, d1);
}

inline void jacobi2d_unrolled_2_comp(t1_cache& t1, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */jacobi2d_unrolled_2, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_2_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute_unrolled_2(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_2
	jacobi2d_unrolled_2.write(compute_result);
}

// Driver function
void jacobi2d_unrolled_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */t1_arg, HWStream<hw_uint<64> >& /* get_args num ports = 2 */jacobi2d_unrolled_2) {
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING
for (int c0 = -1; c0 <= 1024; c0++) {
  for (int c1 = -1; c1 <= 512; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 512) && (-1 <= c0 && c0 <= 1024)) {
      t1_comp(c1, c0);
    }

    if ((1 <= c1 && c1 <= 512) && (1 <= c0 && c0 <= 1024)) {
      jacobi2d_unrolled_2_comp(c1, c0);
    }

  }
}

*/
	for (int c0 = -1; c0 <= 1024; c0 += 1)
	  for (int c1 = -1; c1 <= 512; c1 += 1) {
	    t1_comp(t1_arg, t1, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	      jacobi2d_unrolled_2_comp(t1, jacobi2d_unrolled_2, c1 - 1, c0 - 1);
	  }
	
}
