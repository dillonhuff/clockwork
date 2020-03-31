#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#include "jacobi2d_unrolled_1_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-1, 1024], [-1, 1024]}
	// Capacity: 2054
	// # of read delays: 6
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  t1_t1_update_0_write0_merged_banks_5_store[1052676];

#else
  hw_uint<32> * t1_t1_update_0_write0_merged_banks_5_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return t1_t1_update_0_write0_merged_banks_5_store[(d0 + d1*1026)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    t1_t1_update_0_write0_merged_banks_5_store[(d0 + d1*1026)] = value;
  }

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
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
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
		cout << "Error: Unsupported offset in t1_t1_update_0_write0_merged_banks_5: " << offset << endl;
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
  t1_t1_update_0_write0_merged_banks_5_cache t1_t1_update_0_write0_merged_banks_5;
};



inline void t1_t1_update_0_write0_write(hw_uint<32> & t1_t1_update_0_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write0_merged_banks_5.push(t1_t1_update_0_write0);
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd0_select(t1_cache& t1, int d0, int d1) {
  // jacobi2d_unrolled_1_rd0 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[-1 + d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1028();
	return value_t1_t1_update_0_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd1_select(t1_cache& t1, int d0, int d1) {
  // jacobi2d_unrolled_1_rd1 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_2053();
	return value_t1_t1_update_0_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd2_select(t1_cache& t1, int d0, int d1) {
  // jacobi2d_unrolled_1_rd2 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1027();
	return value_t1_t1_update_0_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd3_select(t1_cache& t1, int d0, int d1) {
  // jacobi2d_unrolled_1_rd3 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1();
	return value_t1_t1_update_0_write0;
}

inline hw_uint<32>  jacobi2d_unrolled_1_rd4_select(t1_cache& t1, int d0, int d1) {
  // jacobi2d_unrolled_1_rd4 read pattern: { jacobi2d_unrolled_1_update_0[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 1023 and 0 <= d1 <= 1023 }
	auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1026();
	return value_t1_t1_update_0_write0;
}

// # of bundles = 2
// jacobi2d_unrolled_1_update_0_read
//	jacobi2d_unrolled_1_rd0
//	jacobi2d_unrolled_1_rd1
//	jacobi2d_unrolled_1_rd2
//	jacobi2d_unrolled_1_rd3
//	jacobi2d_unrolled_1_rd4
inline hw_uint<160> t1_jacobi2d_unrolled_1_update_0_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<160> result;
	hw_uint<32>  jacobi2d_unrolled_1_rd0_res = jacobi2d_unrolled_1_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, jacobi2d_unrolled_1_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd1_res = jacobi2d_unrolled_1_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, jacobi2d_unrolled_1_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd2_res = jacobi2d_unrolled_1_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, jacobi2d_unrolled_1_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd3_res = jacobi2d_unrolled_1_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, jacobi2d_unrolled_1_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_1_rd4_res = jacobi2d_unrolled_1_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, jacobi2d_unrolled_1_rd4_res);
	return result;
}

// t1_update_0_write
//	t1_t1_update_0_write0
inline void t1_t1_update_0_write_bundle_write(hw_uint<32>& t1_update_0_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_update_0_write0_res = t1_update_0_write.extract<0, 31>();
	t1_t1_update_0_write0_write(t1_t1_update_0_write0_res, t1, d0, d1);
}



// Operation logic
inline void t1_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_update_0_write_bundle_write(compute_result, t1, d0, d1);
  *global_debug_handle << "t1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
}

inline void jacobi2d_unrolled_1_update_0(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */jacobi2d_unrolled_1, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_1_update_0_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_1
	jacobi2d_unrolled_1.write(compute_result);
  *global_debug_handle << "jacobi2d_unrolled_1_update_0," << d0<< "," << d1<< "," <<  compute_result << endl;
}

// Driver function
void jacobi2d_unrolled_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */jacobi2d_unrolled_1) {

  ofstream debug_file("jacobi2d_unrolled_1_opt_debug.csv");
  global_debug_handle = &debug_file;
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

	  int c0 = -1;
	  int c1 = -1;
	  int global_time = 0;
	#ifdef __VIVADO_SYNTH__
	  while(true) {
	#else
	  while(global_time < 1052676) {
	#endif // __VIVADO_SYNTH__
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS dependence inter false
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-1 <= c1 && c1 <= 1024) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1024) && ((c0 - 0) % 1 == 0)) {
	t1_update_0(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((1 <= c1 && c1 <= 1024) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1024) && ((c0 - 1) % 1 == 0)) {
	jacobi2d_unrolled_1_update_0(t1, jacobi2d_unrolled_1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	    bool c0_at_max = c0 == 1024;
	    bool c1_at_max = c1 == 1024;
	    if (1 && c1_at_max) {
	      if (c0_at_max) {
	        c0 = -1;
	      } else {
	        c0++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c0 = " << c0 << endl;
	#endif //__VIVADO_SYNTH__
	    if (1) {
	      if (c1_at_max) {
	        c1 = -1;
	      } else {
	        c1++;
	      }
	    }
	#ifndef __VIVADO_SYNTH__
	    cout << "c1 = " << c1 << endl;
	#endif //__VIVADO_SYNTH__
	    global_time++;
	  }
	
  debug_file.close();
}
