#include "conv_3x3.h"

#include "hw_classes.h"

struct diff_d_cache {
	// Capacity: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(0 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void diff_d_write(hw_uint<32> & diff_d, diff_d_cache& diff_d_delay) {
	diff_d_delay.push(diff_d);
}

inline hw_uint<32>  denoise2d_rd0_select(diff_d_cache& diff_d_delay
, int d0, int d1) {
	hw_uint<32>  value_diff_d = diff_d_delay.peek_0();
	return value_diff_d;
}

// # of bundles = 2
// denoise2d_comp_read
//	denoise2d_rd0
inline hw_uint<32> diff_d_denoise2d_comp_read_bundle_read(diff_d_cache& diff_d_delay, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(diff_d_delay, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// diff_d_comp_write
//	diff_d
inline void diff_d_diff_d_comp_write_bundle_write(hw_uint<32> & diff_d_comp_write, diff_d_cache& diff_d_delay) {
	diff_d_write(diff_d_comp_write, diff_d_delay);
}



#include "hw_classes.h"

struct diff_qwe_cache {
	// Capacity: 2
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};



inline void diff_qwe_write(hw_uint<32> & diff_qwe, diff_qwe_cache& diff_qwe_delay) {
	diff_qwe_delay.push(diff_qwe);
}

inline hw_uint<32>  denoise2d_rd0_select(diff_qwe_cache& diff_qwe_delay
, int d0, int d1) {
	hw_uint<32>  value_diff_qwe = diff_qwe_delay.peek((d0 >= 0 && 28 - d0 >= 0 && d1 >= 0 && 29 - d1 >= 0) ? (1) : 0);
	return value_diff_qwe;
}

// # of bundles = 2
// denoise2d_comp_read
//	denoise2d_rd0
inline hw_uint<32> diff_qwe_denoise2d_comp_read_bundle_read(diff_qwe_cache& diff_qwe_delay, int d0, int d1) {
	hw_uint<32> result;
	hw_uint<32>  denoise2d_rd0_res = denoise2d_rd0_select(diff_qwe_delay, d0, d1);
	set_at<0, 32>(result, denoise2d_rd0_res);
	return result;
}

// diff_qwe_comp_write
//	diff_qwe
inline void diff_qwe_diff_qwe_comp_write_bundle_write(hw_uint<32> & diff_qwe_comp_write, diff_qwe_cache& diff_qwe_delay) {
	diff_qwe_write(diff_qwe_comp_write, diff_qwe_delay);
}



#include "hw_classes.h"

struct u_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
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
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in u: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void u_write(hw_uint<32> & u, u_cache& u_delay) {
	u_delay.push(u);
}

inline hw_uint<32>  diff_d_rd0_select(u_cache& u_delay
, int d0, int d1) {
	hw_uint<32>  value_u = u_delay.peek_2();
	return value_u;
}

inline hw_uint<32>  diff_d_rd1_select(u_cache& u_delay
, int d0, int d1) {
	hw_uint<32>  value_u = u_delay.peek_0();
	return value_u;
}

inline hw_uint<32>  diff_qwe_rd0_select(u_cache& u_delay
, int d0, int d1) {
	hw_uint<32>  value_u = u_delay.peek_1();
	return value_u;
}

inline hw_uint<32>  diff_qwe_rd1_select(u_cache& u_delay
, int d0, int d1) {
	hw_uint<32>  value_u = u_delay.peek_0();
	return value_u;
}

// # of bundles = 3
// diff_d_comp_read
//	diff_d_rd0
//	diff_d_rd1
inline hw_uint<64> u_diff_d_comp_read_bundle_read(u_cache& u_delay, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_d_rd0_res = diff_d_rd0_select(u_delay, d0, d1);
	set_at<0, 64>(result, diff_d_rd0_res);
	hw_uint<32>  diff_d_rd1_res = diff_d_rd1_select(u_delay, d0, d1);
	set_at<32, 64>(result, diff_d_rd1_res);
	return result;
}

// diff_qwe_comp_read
//	diff_qwe_rd0
//	diff_qwe_rd1
inline hw_uint<64> u_diff_qwe_comp_read_bundle_read(u_cache& u_delay, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  diff_qwe_rd0_res = diff_qwe_rd0_select(u_delay, d0, d1);
	set_at<0, 64>(result, diff_qwe_rd0_res);
	hw_uint<32>  diff_qwe_rd1_res = diff_qwe_rd1_select(u_delay, d0, d1);
	set_at<32, 64>(result, diff_qwe_rd1_res);
	return result;
}

// u_comp_write
//	u
inline void u_u_comp_write_bundle_write(hw_uint<32> & u_comp_write, u_cache& u_delay) {
	u_write(u_comp_write, u_delay);
}





// Operation logic
inline void u_comp(HWStream<hw_uint<32>  >& u_off_chip, u_cache& u, int d0, int d1) {
	// Consume: u_off_chip
	auto u_off_chip_0_c__0_value = u_off_chip.read();
	auto compute_result = id(u_off_chip_0_c__0_value);
	// Produce: u
	// Buffer: u, Op: u_comp
	// Possible ports...
		// u
	u_u_comp_write_bundle_write(compute_result, u /* output src_delay */);
}

inline void diff_qwe_comp(u_cache& u, diff_qwe_cache& diff_qwe, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_qwe_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_qwe
	// Buffer: diff_qwe, Op: diff_qwe_comp
	// Possible ports...
		// diff_qwe
	diff_qwe_diff_qwe_comp_write_bundle_write(compute_result, diff_qwe /* output src_delay */);
}

inline void diff_d_comp(u_cache& u, diff_d_cache& diff_d, int d0, int d1) {
	// Consume: u
	auto u_0_c__0_value = u_diff_d_comp_read_bundle_read(u/* source_delay */, d0, d1);
	auto compute_result = diff_b(u_0_c__0_value);
	// Produce: diff_d
	// Buffer: diff_d, Op: diff_d_comp
	// Possible ports...
		// diff_d
	diff_d_diff_d_comp_write_bundle_write(compute_result, diff_d /* output src_delay */);
}

inline void denoise2d_comp(diff_qwe_cache& diff_qwe, diff_d_cache& diff_d, HWStream<hw_uint<32>  >& denoise2d, int d0, int d1) {
	// Consume: diff_d
	auto diff_d_0_c__0_value = diff_d_denoise2d_comp_read_bundle_read(diff_d/* source_delay */, d0, d1);
	// Consume: diff_qwe
	auto diff_qwe_0_c__0_value = diff_qwe_denoise2d_comp_read_bundle_read(diff_qwe/* source_delay */, d0, d1);
	auto compute_result = diff(diff_d_0_c__0_value, diff_qwe_0_c__0_value);
	// Produce: denoise2d
	denoise2d.write(compute_result);
}

// Driver function
void denoise2d(HWStream<hw_uint<32>  >& u_off_chip, HWStream<hw_uint<32>  >& denoise2d) {
	diff_d_cache diff_d;
	diff_qwe_cache diff_qwe;
	u_cache u;
	for (int c0 = 0; c0 <= 29; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    u_comp(u_off_chip, u, c1, c0);
	    if (c1 >= 1 && c1 <= 30)
	      diff_qwe_comp(u, diff_qwe, c1 - 1, c0);
	    if (c1 >= 2) {
	      diff_d_comp(u, diff_d, c1 - 2, c0);
	      denoise2d_comp(diff_qwe, diff_d, denoise2d, c1 - 2, c0);
	    }
	  }
	
}
