#include "conv_3x3.h"

#include "hw_classes.h"

struct img0_img0_comp_write0_cache {
	// Capacity: 12
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 11) capacity = 1
	fifo<hw_uint<32> , 1> f20;
	// Parition [11, 11] capacity = 1
	fifo<hw_uint<32> , 1> f22;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
	}

	inline hw_uint<32>  peek_11() {
		return f22.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
		if (offset == 11) {
			return f22.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in img0: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f22.push(f20.back());
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct img0_cache {
  img0_img0_comp_write0_cache img0_img0_comp_write0;
};



inline void img0_img0_comp_write0_write(hw_uint<32> & img0_img0_comp_write0, img0_cache& img0) {
	img0.img0_img0_comp_write0.push(img0_img0_comp_write0);
}

inline hw_uint<32>  mismatched_stencils_rd0_select(img0_cache& img0, int d0, int d1) {
  // qpd = { mismatched_stencils_comp[d0, d1] -> (11 - d0) : d1 = 0 and 0 <= d0 <= 9 }
	hw_uint<32>  value_img0_img0_comp_write0 = img0.img0_img0_comp_write0.peek(/* is one piece but not a number */(11 - d0));
	return value_img0_img0_comp_write0;
}

inline hw_uint<32>  mismatched_stencils_rd1_select(img0_cache& img0, int d0, int d1) {
  // qpd = { mismatched_stencils_comp[d0, d1] -> (10 - d0) : d1 = 0 and 0 <= d0 <= 9 }
	hw_uint<32>  value_img0_img0_comp_write0 = img0.img0_img0_comp_write0.peek(/* is one piece but not a number */(10 - d0));
	return value_img0_img0_comp_write0;
}

inline hw_uint<32>  mismatched_stencils_rd2_select(img0_cache& img0, int d0, int d1) {
  // qpd = { mismatched_stencils_comp[d0, d1] -> (9 - d0) : d1 = 0 and 0 <= d0 <= 8 }
	hw_uint<32>  value_img0_img0_comp_write0 = img0.img0_img0_comp_write0.peek(/* Needs general delay string */ (d1 == 0 && d0 >= 0 && 8 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_img0_img0_comp_write0;
}

// # of bundles = 2
// img0_comp_write
//	img0_img0_comp_write0
inline void img0_img0_comp_write_bundle_write(hw_uint<32>& img0_comp_write, img0_cache& img0) {
	hw_uint<32>  img0_img0_comp_write0_res = img0_comp_write.extract<0, 31>();
	img0_img0_comp_write0_write(img0_img0_comp_write0_res, img0);
}

// mismatched_stencils_comp_read
//	mismatched_stencils_rd0
//	mismatched_stencils_rd1
//	mismatched_stencils_rd2
inline hw_uint<96> img0_mismatched_stencils_comp_read_bundle_read(img0_cache& img0, int d0, int d1) {
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

struct img1_img1_comp_write0_cache {
	// Capacity: 11
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 6) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [6, 7) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [7, 8) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [8, 9) capacity = 1
	fifo<hw_uint<32> , 1> f16;
	// Parition [9, 10) capacity = 1
	fifo<hw_uint<32> , 1> f18;
	// Parition [10, 10] capacity = 1
	fifo<hw_uint<32> , 1> f20;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}

	inline hw_uint<32>  peek_6() {
		return f12.back();
	}

	inline hw_uint<32>  peek_7() {
		return f14.back();
	}

	inline hw_uint<32>  peek_8() {
		return f16.back();
	}

	inline hw_uint<32>  peek_9() {
		return f18.back();
	}

	inline hw_uint<32>  peek_10() {
		return f20.back();
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
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
		if (offset == 6) {
			return f12.back();
		}
		if (offset == 7) {
			return f14.back();
		}
		if (offset == 8) {
			return f16.back();
		}
		if (offset == 9) {
			return f18.back();
		}
		if (offset == 10) {
			return f20.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in img1: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f20.push(f18.back());
		f18.push(f16.back());
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct img1_cache {
  img1_img1_comp_write0_cache img1_img1_comp_write0;
};



inline void img1_img1_comp_write0_write(hw_uint<32> & img1_img1_comp_write0, img1_cache& img1) {
	img1.img1_img1_comp_write0.push(img1_img1_comp_write0);
}

inline hw_uint<32>  mismatched_stencils_rd0_select(img1_cache& img1, int d0, int d1) {
  // qpd = { mismatched_stencils_comp[d0, d1] -> (10 - d0) : d1 = 0 and 0 <= d0 <= 9 }
	hw_uint<32>  value_img1_img1_comp_write0 = img1.img1_img1_comp_write0.peek(/* is one piece but not a number */(10 - d0));
	return value_img1_img1_comp_write0;
}

inline hw_uint<32>  mismatched_stencils_rd1_select(img1_cache& img1, int d0, int d1) {
  // qpd = { mismatched_stencils_comp[d0, d1] -> (9 - d0) : d1 = 0 and 0 <= d0 <= 8 }
	hw_uint<32>  value_img1_img1_comp_write0 = img1.img1_img1_comp_write0.peek(/* Needs general delay string */ (d1 == 0 && d0 >= 0 && 8 - d0 >= 0) ? ((9 - d0)) : 0);
	return value_img1_img1_comp_write0;
}

// # of bundles = 2
// img1_comp_write
//	img1_img1_comp_write0
inline void img1_img1_comp_write_bundle_write(hw_uint<32>& img1_comp_write, img1_cache& img1) {
	hw_uint<32>  img1_img1_comp_write0_res = img1_comp_write.extract<0, 31>();
	img1_img1_comp_write0_write(img1_img1_comp_write0_res, img1);
}

// mismatched_stencils_comp_read
//	mismatched_stencils_rd0
//	mismatched_stencils_rd1
inline hw_uint<64> img1_mismatched_stencils_comp_read_bundle_read(img1_cache& img1, int d0, int d1) {
	hw_uint<64> result;
	hw_uint<32>  mismatched_stencils_rd0_res = mismatched_stencils_rd0_select(img1, d0, d1);
	set_at<0, 64>(result, mismatched_stencils_rd0_res);
	hw_uint<32>  mismatched_stencils_rd1_res = mismatched_stencils_rd1_select(img1, d0, d1);
	set_at<32, 64>(result, mismatched_stencils_rd1_res);
	return result;
}





// Operation logic
inline void img1_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img1, img1_cache& img1, int d0, int d1) {
	// Consume: off_chip_img1
	auto off_chip_img1_0_c__0_value = off_chip_img1.read();
	auto compute_result = id(off_chip_img1_0_c__0_value);
	// Produce: img1
	img1_img1_comp_write_bundle_write(compute_result, img1);
}

inline void img0_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img0, img0_cache& img0, int d0, int d1) {
	// Consume: off_chip_img0
	auto off_chip_img0_0_c__0_value = off_chip_img0.read();
	auto compute_result = id(off_chip_img0_0_c__0_value);
	// Produce: img0
	img0_img0_comp_write_bundle_write(compute_result, img0);
}

inline void mismatched_stencils_comp(img0_cache& img0, img1_cache& img1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mismatched_stencils, int d0, int d1) {
	// Consume: img0
	auto img0_0_c__0_value = img0_mismatched_stencils_comp_read_bundle_read(img0/* source_delay */, d0, d1);
	// Consume: img1
	auto img1_0_c__0_value = img1_mismatched_stencils_comp_read_bundle_read(img1/* source_delay */, d0, d1);
	auto compute_result = contrived(img0_0_c__0_value, img1_0_c__0_value);
	// Produce: mismatched_stencils
	mismatched_stencils.write(compute_result);
}

// Driver function
void mismatched_stencils_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img0, HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img1, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mismatched_stencils) {
  img0_cache img0;
  img1_cache img1;
	{
	  for (int c2 = 0; c2 <= 10; c2 += 1)
	    img1_comp(off_chip_img1, img1, c2, 0);
	  for (int c2 = 0; c2 <= 11; c2 += 1)
	    img0_comp(off_chip_img0, img0, c2, 0);
	  for (int c2 = 2; c2 <= 11; c2 += 1)
	    mismatched_stencils_comp(img0, img1, mismatched_stencils, c2 - 2, 0);
	}
	
}
