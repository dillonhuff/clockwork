#include "mismatched_stencils_opt_compute_units.h"

#include "hw_classes.h"

struct img0_img0_update_0_write0_merged_banks_3_cache {
	// Capacity: 3
	// # of read delays: 3
	// read delays: 0, 1, 2
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
		cout << "Error: Unsupported offset in img0_img0_update_0_write0_merged_banks_3: " << offset << endl;
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

struct img0_cache {
  img0_img0_update_0_write0_merged_banks_3_cache img0_img0_update_0_write0_merged_banks_3;
};



inline void img0_img0_update_0_write0_write(hw_uint<32> & img0_img0_update_0_write0, img0_cache& img0, int d0, int d1) {
  img0.img0_img0_update_0_write0_merged_banks_3.push(img0_img0_update_0_write0);
}

inline hw_uint<32>  mismatched_stencils_rd0_select(img0_cache& img0, int d0, int d1) {
	// lexmax events: { mismatched_stencils_update_0[d0, d1 = 0] -> img0_update_0[d0' = d0, d1' = 0] : 0 <= d0 <= 9 }
  // mismatched_stencils_rd0 read pattern: { mismatched_stencils_update_0[d0, d1 = 0] -> img0[d0, 0] : 0 <= d0 <= 9 }
	auto value_img0_img0_update_0_write0 = img0.img0_img0_update_0_write0_merged_banks_3.peek_2();
	return value_img0_img0_update_0_write0;
}

inline hw_uint<32>  mismatched_stencils_rd1_select(img0_cache& img0, int d0, int d1) {
	// lexmax events: { mismatched_stencils_update_0[d0, d1 = 0] -> img0_update_0[d0' = 1 + d0, d1' = 0] : 0 <= d0 <= 9 }
  // mismatched_stencils_rd1 read pattern: { mismatched_stencils_update_0[d0, d1 = 0] -> img0[1 + d0, 0] : 0 <= d0 <= 9 }
	auto value_img0_img0_update_0_write0 = img0.img0_img0_update_0_write0_merged_banks_3.peek_1();
	return value_img0_img0_update_0_write0;
}

inline hw_uint<32>  mismatched_stencils_rd2_select(img0_cache& img0, int d0, int d1) {
	// lexmax events: { mismatched_stencils_update_0[d0, d1 = 0] -> img0_update_0[d0' = 2 + d0, d1' = 0] : 0 <= d0 <= 9 }
  // mismatched_stencils_rd2 read pattern: { mismatched_stencils_update_0[d0, d1 = 0] -> img0[2 + d0, 0] : 0 <= d0 <= 9 }
	auto value_img0_img0_update_0_write0 = img0.img0_img0_update_0_write0_merged_banks_3.peek_0();
	return value_img0_img0_update_0_write0;
}

// # of bundles = 2
// img0_update_0_write
//	img0_img0_update_0_write0
inline void img0_img0_update_0_write_bundle_write(hw_uint<32>& img0_update_0_write, img0_cache& img0, int d0, int d1) {
	hw_uint<32>  img0_img0_update_0_write0_res = img0_update_0_write.extract<0, 31>();
	img0_img0_update_0_write0_write(img0_img0_update_0_write0_res, img0, d0, d1);
}

// mismatched_stencils_update_0_read
//	mismatched_stencils_rd0
//	mismatched_stencils_rd1
//	mismatched_stencils_rd2
inline hw_uint<96> img0_mismatched_stencils_update_0_read_bundle_read(img0_cache& img0, int d0, int d1) {
	hw_uint<96> result;
	hw_uint<32>  mismatched_stencils_rd0_res = mismatched_stencils_rd0_select(img0, d0, d1);
	set_at<0, 96>(result, mismatched_stencils_rd0_res);
	hw_uint<32>  mismatched_stencils_rd1_res = mismatched_stencils_rd1_select(img0, d0, d1);
	set_at<32, 96>(result, mismatched_stencils_rd1_res);
	hw_uint<32>  mismatched_stencils_rd2_res = mismatched_stencils_rd2_select(img0, d0, d1);
	set_at<64, 96>(result, mismatched_stencils_rd2_res);
	return result;
}



#include "hw_classes.h"

struct img1_img1_update_0_write0_merged_banks_2_cache {
	// Capacity: 2
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
		cout << "Error: Unsupported offset in img1_img1_update_0_write0_merged_banks_2: " << offset << endl;
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

struct img1_cache {
  img1_img1_update_0_write0_merged_banks_2_cache img1_img1_update_0_write0_merged_banks_2;
};



inline void img1_img1_update_0_write0_write(hw_uint<32> & img1_img1_update_0_write0, img1_cache& img1, int d0, int d1) {
  img1.img1_img1_update_0_write0_merged_banks_2.push(img1_img1_update_0_write0);
}

inline hw_uint<32>  mismatched_stencils_rd0_select(img1_cache& img1, int d0, int d1) {
	// lexmax events: { mismatched_stencils_update_0[d0, d1 = 0] -> img1_update_0[d0' = d0, d1' = 0] : 0 <= d0 <= 9 }
  // mismatched_stencils_rd0 read pattern: { mismatched_stencils_update_0[d0, d1 = 0] -> img1[d0, 0] : 0 <= d0 <= 9 }
	auto value_img1_img1_update_0_write0 = img1.img1_img1_update_0_write0_merged_banks_2.peek_1();
	return value_img1_img1_update_0_write0;
}

inline hw_uint<32>  mismatched_stencils_rd1_select(img1_cache& img1, int d0, int d1) {
	// lexmax events: { mismatched_stencils_update_0[d0, d1 = 0] -> img1_update_0[d0' = 1 + d0, d1' = 0] : 0 <= d0 <= 9 }
  // mismatched_stencils_rd1 read pattern: { mismatched_stencils_update_0[d0, d1 = 0] -> img1[1 + d0, 0] : 0 <= d0 <= 9 }
	auto value_img1_img1_update_0_write0 = img1.img1_img1_update_0_write0_merged_banks_2.peek_0();
	return value_img1_img1_update_0_write0;
}

// # of bundles = 2
// img1_update_0_write
//	img1_img1_update_0_write0
inline void img1_img1_update_0_write_bundle_write(hw_uint<32>& img1_update_0_write, img1_cache& img1, int d0, int d1) {
	hw_uint<32>  img1_img1_update_0_write0_res = img1_update_0_write.extract<0, 31>();
	img1_img1_update_0_write0_write(img1_img1_update_0_write0_res, img1, d0, d1);
}

// mismatched_stencils_update_0_read
//	mismatched_stencils_rd0
//	mismatched_stencils_rd1
inline hw_uint<64> img1_mismatched_stencils_update_0_read_bundle_read(img1_cache& img1, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  mismatched_stencils_rd0_res = mismatched_stencils_rd0_select(img1, d0, d1);
	set_at<0, 64>(result, mismatched_stencils_rd0_res);
	hw_uint<32>  mismatched_stencils_rd1_res = mismatched_stencils_rd1_select(img1, d0, d1);
	set_at<32, 64>(result, mismatched_stencils_rd1_res);
	return result;
}





// Operation logic
inline void img0_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img0, img0_cache& img0, int d0, int d1) {
	// Consume: off_chip_img0
	auto off_chip_img0_0_c__0_value = off_chip_img0.read();
	auto compute_result = id(off_chip_img0_0_c__0_value);
	// Produce: img0
	img0_img0_update_0_write_bundle_write(compute_result, img0, d0, d1);
}

inline void img1_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img1, img1_cache& img1, int d0, int d1) {
	// Consume: off_chip_img1
	auto off_chip_img1_0_c__0_value = off_chip_img1.read();
	auto compute_result = id(off_chip_img1_0_c__0_value);
	// Produce: img1
	img1_img1_update_0_write_bundle_write(compute_result, img1, d0, d1);
}

inline void mismatched_stencils_update_0(img0_cache& img0, img1_cache& img1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mismatched_stencils, int d0, int d1) {
	// Consume: img0
	auto img0_0_c__0_value = img0_mismatched_stencils_update_0_read_bundle_read(img0/* source_delay */, d0, d1);
	// Consume: img1
	auto img1_0_c__0_value = img1_mismatched_stencils_update_0_read_bundle_read(img1/* source_delay */, d0, d1);
	auto compute_result = contrived(img0_0_c__0_value, img1_0_c__0_value);
	// Produce: mismatched_stencils
	mismatched_stencils.write(compute_result);
}

// Driver function
void mismatched_stencils_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img0, HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img1, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mismatched_stencils) {
  img0_cache img0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img0 inter false
#endif // __VIVADO_SYNTH__

  img1_cache img1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img1 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c1 = 0; c1 <= 11; c1 += 1) {
	  if (c1 >= 1)
	    img1_update_0(off_chip_img1, img1, c1 - 1, 0);
	  img0_update_0(off_chip_img0, img0, c1, 0);
	  if (c1 >= 2)
	    mismatched_stencils_update_0(img0, img1, mismatched_stencils, c1 - 2, 0);
	}
	
}
