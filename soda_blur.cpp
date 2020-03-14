#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<16>, 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [17, 32) capacity = 15
	fifo<hw_uint<16>, 15> f3;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_15() {
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2.back();
	}

	inline hw_uint<16> peek_31() {
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 15) {
			return f1.back();
		}
		if (offset == 16) {
			return f2.back();
		}
		if (offset == 31) {
			return f3.back();
		}
		if (offset == 32) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_I_id1_2_cache {
	// Capacity: 33
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<16>, 1> f0;
	// Parition [1, 16) capacity = 15
	fifo<hw_uint<16>, 15> f1;
	// Parition [16, 17) capacity = 1
	fifo<hw_uint<16>, 1> f2;
	// Parition [17, 32) capacity = 15
	fifo<hw_uint<16>, 15> f3;
	// Parition [32, 32] capacity = 1
	fifo<hw_uint<16>, 1> f4;


	inline hw_uint<16> peek_0() {
		return f0.back();
	}

	inline hw_uint<16> peek_15() {
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2.back();
	}

	inline hw_uint<16> peek_31() {
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4.back();
	}



	inline hw_uint<16> peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 15) {
			return f1.back();
		}
		if (offset == 16) {
			return f2.back();
		}
		if (offset == 31) {
			return f3.back();
		}
		if (offset == 32) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct I_cache {
  I_I_id0_0_cache I_I_id0_0;
  I_I_id1_2_cache I_I_id1_2;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I) {
	I.I_I_id0_0.push(I_I_id0_0);
}

inline void I_I_id1_2_write(hw_uint<16>& I_I_id1_2, I_cache& I) {
	I.I_I_id1_2.push(I_I_id1_2);
}

inline hw_uint<16> I_out_0_blur_30_5_select(I_cache& I, int root, int xr, int xc) {
  // qpd = { out_0_blur_30[root, xr, xc] -> 32 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_0_blur_30[root, xr, xc] -> (17 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_0_blur_30[root, xr, xc] -> 32 : root = 0 and xc = 0 and 0 <= xr <= 29 }
	// lexmax events: { out_0_blur_30[root = 0, xr, xc] -> I_id0[root' = 0, ir = xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_0_blur_30_5 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 29 and 0 <= i1 <= 30 }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_I_id0_0 = I.I_I_id0_0.peek_32();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_0_blur_30_6_select(I_cache& I, int root, int xr, int xc) {
  // qpd = { out_0_blur_30[root, xr, xc] -> 16 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_0_blur_30[root, xr, xc] -> (1 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_0_blur_30[root, xr, xc] -> 16 : root = 0 and xc = 0 and 0 <= xr <= 29 }
	// lexmax events: { out_0_blur_30[root = 0, xr, xc] -> I_id0[root' = 0, ir = 1 + xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_0_blur_30_6 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[1 + xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : { I[i0, i1] : (i1) mod 2 = 0 and 0 < i0 <= 30 and 0 <= i1 <= 30 }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_I_id0_0 = I.I_I_id0_0.peek_16();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_0_blur_30_7_select(I_cache& I, int root, int xr, int xc) {
  // qpd = {  }
	// lexmax events: { out_0_blur_30[root = 0, xr, xc] -> I_id0[root' = 0, ir = 2 + xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_0_blur_30_7 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[2 + xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : { I[i0, i1] : (i1) mod 2 = 0 and 2 <= i0 <= 31 and 0 <= i1 <= 30 }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : {  }
	auto value_I_I_id0_0 = I.I_I_id0_0.peek_0();
	return value_I_I_id0_0;
}

inline hw_uint<16> I_out_1_blur_31_10_select(I_cache& I, int root, int xr, int xc) {
  // qpd = {  }
	// lexmax events: { out_1_blur_31[root = 0, xr, xc] -> I_id1[root' = 0, ir = 1 + xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_1_blur_31_10 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[1 + xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : {  }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 < i0 <= 30 and 0 < i1 <= 31 }
	auto value_I_I_id1_2 = I.I_I_id1_2.peek_16();
	return value_I_I_id1_2;
}

inline hw_uint<16> I_out_1_blur_31_11_select(I_cache& I, int root, int xr, int xc) {
  // qpd = {  }
	// lexmax events: { out_1_blur_31[root = 0, xr, xc] -> I_id1[root' = 0, ir = 2 + xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_1_blur_31_11 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[2 + xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : {  }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i1) mod 2 = 0 and 2 <= i0 <= 31 and 0 < i1 <= 31 }
	auto value_I_I_id1_2 = I.I_I_id1_2.peek_0();
	return value_I_I_id1_2;
}

inline hw_uint<16> I_out_1_blur_31_9_select(I_cache& I, int root, int xr, int xc) {
  // qpd = {  }
	// lexmax events: { out_1_blur_31[root = 0, xr, xc] -> I_id1[root' = 0, ir = xr, ic = xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_out_1_blur_31_9 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // I_I_id0_0 stores range: { I[i0, i1] : (i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 <= i1 <= 30 }
    // overlap with reads : {  }
  // I_I_id1_2 stores range: { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 31 and 0 < i1 <= 31 }
    // overlap with reads : { I[i0, i1] : (1 + i1) mod 2 = 0 and 0 <= i0 <= 29 and 0 < i1 <= 31 }
	auto value_I_I_id1_2 = I.I_I_id1_2.peek_32();
	return value_I_I_id1_2;
}

// # of bundles = 4
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I);
}

// I_id1_write
//	I_I_id1_2
inline void I_I_id1_write_bundle_write(hw_uint<16>& I_id1_write, I_cache& I) {
	hw_uint<16> I_I_id1_2_res = I_id1_write.extract<0, 15>();
	I_I_id1_2_write(I_I_id1_2_res, I);
}

// out_0_blur_30_read
//	I_out_0_blur_30_5
//	I_out_0_blur_30_6
//	I_out_0_blur_30_7
inline hw_uint<48> I_out_0_blur_30_read_bundle_read(I_cache& I, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_0_blur_30_5_res = I_out_0_blur_30_5_select(I, root, xr, xc);
	set_at<0, 48>(result, I_out_0_blur_30_5_res);
	hw_uint<16> I_out_0_blur_30_6_res = I_out_0_blur_30_6_select(I, root, xr, xc);
	set_at<16, 48>(result, I_out_0_blur_30_6_res);
	hw_uint<16> I_out_0_blur_30_7_res = I_out_0_blur_30_7_select(I, root, xr, xc);
	set_at<32, 48>(result, I_out_0_blur_30_7_res);
	return result;
}

// out_1_blur_31_read
//	I_out_1_blur_31_9
//	I_out_1_blur_31_10
//	I_out_1_blur_31_11
inline hw_uint<48> I_out_1_blur_31_read_bundle_read(I_cache& I, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_1_blur_31_9_res = I_out_1_blur_31_9_select(I, root, xr, xc);
	set_at<0, 48>(result, I_out_1_blur_31_9_res);
	hw_uint<16> I_out_1_blur_31_10_res = I_out_1_blur_31_10_select(I, root, xr, xc);
	set_at<16, 48>(result, I_out_1_blur_31_10_res);
	hw_uint<16> I_out_1_blur_31_11_res = I_out_1_blur_31_11_select(I, root, xr, xc);
	set_at<32, 48>(result, I_out_1_blur_31_11_res);
	return result;
}





// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_0, I_cache& I, int root, int ir, int ic) {
	// Consume: in_0
	auto in_0_ir_c__ic_value = in_0.read();
	auto compute_result = id(in_0_ir_c__ic_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I);
}

inline void I_id1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_1, I_cache& I, int root, int ir, int ic) {
	// Consume: in_1
	auto in_1_ir_c__ic_value = in_1.read();
	auto compute_result = id(in_1_ir_c__ic_value);
	// Produce: I
	I_I_id1_write_bundle_write(compute_result, I);
}

inline void out_0_blur_30(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out_0, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__0__p__0_value = I_out_0_blur_30_read_bundle_read(I/* source_delay */, root, xr, xc);
	auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__0__p__0_value);
	// Produce: out_0
	out_0.write(compute_result);
}

inline void out_1_blur_31(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out_1, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__1__p__0_value = I_out_1_blur_31_read_bundle_read(I/* source_delay */, root, xr, xc);
	auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__1__p__0_value);
	// Produce: out_1
	out_1.write(compute_result);
}

// Driver function
void soda_blur(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_1, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out_0, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out_1) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

	{
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	      I_id0(in_0, I, 0, c1, c2);
	      if (c1 >= 2)
	        out_0_blur_30(I, out_0, 0, c1 - 2, c2);
	    }
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	      I_id1(in_1, I, 0, c1, c2);
	      if (c1 >= 2)
	        out_1_blur_31(I, out_1, 0, c1 - 2, c2);
	    }
	}
	
}
