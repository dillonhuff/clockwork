#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_2_cache {
	// Capacity: 1024
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_cache {
  I_store_I_from_in_2_cache I_store_I_from_in_2;
};



inline void I_store_I_from_in_2_write(hw_uint<32> & I_store_I_from_in_2, I_cache& I) {
	I.I_store_I_from_in_2.push(I_store_I_from_in_2);
}

inline hw_uint<32>  I_I_blr_conv_3_30_10_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((989 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (960 - 32 * I_blr_r) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 29 - I_blr_r >= 0 && I_blr_c >= 0 && 28 - I_blr_c >= 0) ? (((989 - 32 * I_blr_r) - I_blr_c)) : (-29 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 29 - I_blr_r >= 0) ? ((960 - 32 * I_blr_r)) : 0);
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_11_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((959 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 28 and 0 <= I_blr_c <= 29; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (31 - I_blr_c) : root = 0 and I_blr_r = 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 28 - I_blr_r >= 0 && I_blr_c >= 0 && 29 - I_blr_c >= 0) ? (((959 - 32 * I_blr_r) - I_blr_c)) : (-29 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 29 - I_blr_c >= 0) ? ((31 - I_blr_c)) : 0);
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_12_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((958 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 28 and 0 <= I_blr_c <= 29; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (30 - I_blr_c) : root = 0 and I_blr_r = 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 28 - I_blr_r >= 0 && I_blr_c >= 0 && 29 - I_blr_c >= 0) ? (((958 - 32 * I_blr_r) - I_blr_c)) : (-29 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 29 - I_blr_c >= 0) ? ((30 - I_blr_c)) : 0);
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_13_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((957 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 28 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (928 - 32 * I_blr_r) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (29 - I_blr_c) : root = 0 and I_blr_r = 29 and 0 <= I_blr_c <= 28 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 28 - I_blr_r >= 0 && I_blr_c >= 0 && 28 - I_blr_c >= 0) ? (((957 - 32 * I_blr_r) - I_blr_c)) : (-29 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 28 - I_blr_r >= 0) ? ((928 - 32 * I_blr_r)) : (-29 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 28 - I_blr_c >= 0) ? ((29 - I_blr_c)) : 0);
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_5_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((1023 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* is one piece but not a number */((1023 - 32 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_6_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((1022 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* is one piece but not a number */((1022 - 32 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_7_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((1021 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (992 - 32 * I_blr_r) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 29 - I_blr_r >= 0 && I_blr_c >= 0 && 28 - I_blr_c >= 0) ? (((1021 - 32 * I_blr_r) - I_blr_c)) : (-29 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 29 - I_blr_r >= 0) ? ((992 - 32 * I_blr_r)) : 0);
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_8_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((991 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* is one piece but not a number */((991 - 32 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_2;
}

inline hw_uint<32>  I_I_blr_conv_3_30_9_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // qpd = { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> ((990 - 32 * I_blr_r) - I_blr_c) : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
	hw_uint<32>  value_I_store_I_from_in_2 = I.I_store_I_from_in_2.peek(/* is one piece but not a number */((990 - 32 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_2;
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_5
//	I_I_blr_conv_3_30_6
//	I_I_blr_conv_3_30_7
//	I_I_blr_conv_3_30_8
//	I_I_blr_conv_3_30_9
//	I_I_blr_conv_3_30_10
//	I_I_blr_conv_3_30_11
//	I_I_blr_conv_3_30_12
//	I_I_blr_conv_3_30_13
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_5_res = I_I_blr_conv_3_30_5_select(I, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_5_res);
	hw_uint<32>  I_I_blr_conv_3_30_6_res = I_I_blr_conv_3_30_6_select(I, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_6_res);
	hw_uint<32>  I_I_blr_conv_3_30_7_res = I_I_blr_conv_3_30_7_select(I, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_7_res);
	hw_uint<32>  I_I_blr_conv_3_30_8_res = I_I_blr_conv_3_30_8_select(I, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_8_res);
	hw_uint<32>  I_I_blr_conv_3_30_9_res = I_I_blr_conv_3_30_9_select(I, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_9_res);
	hw_uint<32>  I_I_blr_conv_3_30_10_res = I_I_blr_conv_3_30_10_select(I, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_10_res);
	hw_uint<32>  I_I_blr_conv_3_30_11_res = I_I_blr_conv_3_30_11_select(I, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_11_res);
	hw_uint<32>  I_I_blr_conv_3_30_12_res = I_I_blr_conv_3_30_12_select(I, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_12_res);
	hw_uint<32>  I_I_blr_conv_3_30_13_res = I_I_blr_conv_3_30_13_select(I, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_13_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_2
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I) {
	hw_uint<32>  I_store_I_from_in_2_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_2_write(I_store_I_from_in_2_res, I);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_4_cache {
	// Capacity: 900
	fifo<hw_uint<32> , 900> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(899 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_4_cache I_blr_I_blr_conv_3_30_4;
};



inline void I_blr_I_blr_conv_3_30_4_write(hw_uint<32> & I_blr_I_blr_conv_3_30_4, I_blr_cache& I_blr) {
	I_blr.I_blr_I_blr_conv_3_30_4.push(I_blr_I_blr_conv_3_30_4);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_25_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
  // qpd = { I_blr_ds_id0[root, I_blr_ds_r, I_blr_ds_c] -> ((899 - 60 * I_blr_ds_r) - 2 * I_blr_ds_c) : root = 0 and 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
	hw_uint<32>  value_I_blr_I_blr_conv_3_30_4 = I_blr.I_blr_I_blr_conv_3_30_4.peek(/* is one piece but not a number */((899 - 60 * I_blr_ds_r) - 2 * I_blr_ds_c));
	return value_I_blr_I_blr_conv_3_30_4;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_4
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_4_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_4_write(I_blr_I_blr_conv_3_30_4_res, I_blr);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_25
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_25_res = I_blr_I_blr_ds_id0_25_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_25_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_24_cache {
	// Capacity: 225
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_24_cache I_blr_ds_I_blr_ds_id0_24;
};



inline void I_blr_ds_I_blr_ds_id0_24_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_24, I_blr_ds_cache& I_blr_ds) {
	I_blr_ds.I_blr_ds_I_blr_ds_id0_24.push(I_blr_ds_I_blr_ds_id0_24);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((224 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* is one piece but not a number */((224 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((223 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* is one piece but not a number */((223 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((222 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (210 - 15 * I_blr_ds_blr_r) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 12 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 11 - I_blr_ds_blr_c >= 0) ? (((222 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-12 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 12 - I_blr_ds_blr_r >= 0) ? ((210 - 15 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((209 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* is one piece but not a number */((209 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((208 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* is one piece but not a number */((208 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((207 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (195 - 15 * I_blr_ds_blr_r) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 12 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 11 - I_blr_ds_blr_c >= 0) ? (((207 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-12 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 12 - I_blr_ds_blr_r >= 0) ? ((195 - 15 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((194 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 11 and 0 <= I_blr_ds_blr_c <= 12; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (14 - I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_r = 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 11 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 12 - I_blr_ds_blr_c >= 0) ? (((194 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-12 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 12 - I_blr_ds_blr_c >= 0) ? ((14 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((193 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 11 and 0 <= I_blr_ds_blr_c <= 12; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (13 - I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_r = 12 and 0 <= I_blr_ds_blr_c <= 12 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 11 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 12 - I_blr_ds_blr_c >= 0) ? (((193 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-12 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 12 - I_blr_ds_blr_c >= 0) ? ((13 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_24;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // qpd = { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> ((192 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c) : root = 0 and 0 <= I_blr_ds_blr_r <= 11 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (180 - 15 * I_blr_ds_blr_r) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (12 - I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_r = 12 and 0 <= I_blr_ds_blr_c <= 11 }
	hw_uint<32>  value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 11 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 11 - I_blr_ds_blr_c >= 0) ? (((192 - 15 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-12 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 11 - I_blr_ds_blr_r >= 0) ? ((180 - 15 * I_blr_ds_blr_r)) : (-12 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 11 - I_blr_ds_blr_c >= 0) ? ((12 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_24;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_15
//	I_blr_ds_I_blr_ds_blr_conv_3_30_16
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
//	I_blr_ds_I_blr_ds_blr_conv_3_30_18
//	I_blr_ds_I_blr_ds_blr_conv_3_30_19
//	I_blr_ds_I_blr_ds_blr_conv_3_30_20
//	I_blr_ds_I_blr_ds_blr_conv_3_30_21
//	I_blr_ds_I_blr_ds_blr_conv_3_30_22
//	I_blr_ds_I_blr_ds_blr_conv_3_30_23
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_res = I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_15_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_res = I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_16_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_res = I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_18_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_res = I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_19_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_res = I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_20_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_res = I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_21_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_res = I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_22_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_res = I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_23_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_24
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_24_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_24_write(I_blr_ds_I_blr_ds_id0_24_res, I_blr_ds);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache {
	// Capacity: 169
	fifo<hw_uint<32> , 169> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(168 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_cache {
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_cache& I_blr_ds_blr) {
	I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  // qpd = { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((168 - 26 * I_blr_ds_blr_ds_r) - 2 * I_blr_ds_blr_ds_c) : root = 0 and 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
	hw_uint<32>  value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14.peek(/* is one piece but not a number */((168 - 26 * I_blr_ds_blr_ds_r) - 2 * I_blr_ds_blr_ds_c));
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_res, I_blr_ds_blr);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_27
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_select(I_blr_ds_blr, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_cache {
	// Capacity: 36
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_ds_cache {
  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26;
};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds) {
	I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_select(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
  // qpd = { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> ((35 - 6 * I_blr_ds_blr_ds_out_r) - I_blr_ds_blr_ds_out_c) : root = 0 and 0 <= I_blr_ds_blr_ds_out_r <= 4 and 0 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (30 - 6 * I_blr_ds_blr_ds_out_r) : root = 0 and I_blr_ds_blr_ds_out_c = 5 and 0 <= I_blr_ds_blr_ds_out_r <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (5 - I_blr_ds_blr_ds_out_c) : root = 0 and I_blr_ds_blr_ds_out_r = 5 and 0 <= I_blr_ds_blr_ds_out_c <= 4 }
	hw_uint<32>  value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26 = I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? (((35 - 6 * I_blr_ds_blr_ds_out_r) - I_blr_ds_blr_ds_out_c)) : (-5 + I_blr_ds_blr_ds_out_c == 0 && root == 0 && I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0) ? ((30 - 6 * I_blr_ds_blr_ds_out_r)) : (-5 + I_blr_ds_blr_ds_out_r == 0 && root == 0 && I_blr_ds_blr_ds_out_c >= 0 && 4 - I_blr_ds_blr_ds_out_c >= 0) ? ((5 - I_blr_ds_blr_ds_out_c)) : 0);
	return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26;
}

// # of bundles = 2
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds) {
	hw_uint<32>  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_res = I_blr_ds_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_res, I_blr_ds_blr_ds);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_select(I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_res);
	return result;
}





// Operation logic
inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);
}

inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I);
}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c);
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr);
}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr);
}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds);
}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_cache& I_blr_ds_blr, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds_blr_ds);
}

// Driver function
void unoptimized_gaussian_pyramid(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_ds_out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

  I_blr_cache I_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_cache I_blr_ds;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_blr_cache I_blr_ds_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds_blr inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_blr_ds_cache I_blr_ds_blr_ds;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds_blr_ds inter false
#endif // __VIVADO_SYNTH__

	{
	  for (int c3 = 0; c3 <= 31; c3 += 1)
	    for (int c5 = 0; c5 <= 31; c5 += 1)
	      store_I_from_in(in, I, 0, c3, c5);
	  for (int c3 = 0; c3 <= 29; c3 += 1)
	    for (int c5 = 0; c5 <= 29; c5 += 1)
	      I_blr_conv_3_30(I, I_blr, 0, c3, c5);
	  for (int c3 = 0; c3 <= 14; c3 += 1)
	    for (int c5 = 0; c5 <= 14; c5 += 1)
	      I_blr_ds_id0(I_blr, I_blr_ds, 0, c3, c5);
	  for (int c3 = 0; c3 <= 12; c3 += 1)
	    for (int c5 = 0; c5 <= 12; c5 += 1)
	      I_blr_ds_blr_conv_3_30(I_blr_ds, I_blr_ds_blr, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      I_blr_ds_blr_ds_id0(I_blr_ds_blr, I_blr_ds_blr_ds, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds, I_blr_ds_blr_ds_out, 0, c3, c5);
	}
	
}
