#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gp_fpga_1_opt_compute_units.h
#include "gp_fpga_1_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-7, 1919], [-7, 1079]}
	// Capacity: 3857
	// # of read delays: 9
  // 0, 1, 2, 1927, 1928, 1929, 3854, 3855, 3856
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1924> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1924> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_1926() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}

	inline hw_uint<16> peek_3853() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_3854() {
		return f12;
	}

	inline hw_uint<16> peek_3855() {
		return f14;
	}

	inline hw_uint<16> peek_3856() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1924
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1924 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1924
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1924 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // Reader addrs...
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // # of banks: 1
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_9.push(in_in_update_0_write0);
}

inline hw_uint<16> in_gauss_blur_1_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_3856();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1929();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_2();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_3855();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1928();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, -1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_3854();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1927();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + d0, 1 + d1] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_read
//	in_gauss_blur_1_rd0
//	in_gauss_blur_1_rd1
//	in_gauss_blur_1_rd2
//	in_gauss_blur_1_rd3
//	in_gauss_blur_1_rd4
//	in_gauss_blur_1_rd5
//	in_gauss_blur_1_rd6
//	in_gauss_blur_1_rd7
//	in_gauss_blur_1_rd8
inline hw_uint<144> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // in_gauss_blur_1_rd0
    // in_gauss_blur_1_rd1
    // in_gauss_blur_1_rd2
    // in_gauss_blur_1_rd3
    // in_gauss_blur_1_rd4
    // in_gauss_blur_1_rd5
    // in_gauss_blur_1_rd6
    // in_gauss_blur_1_rd7
    // in_gauss_blur_1_rd8

	hw_uint<144> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 144>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 144>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 144>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 144>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 144>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 144>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 144>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 144>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 144>(result, in_gauss_blur_1_rd8_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
}

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1918], [-6, 1078]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct in_gauss_blur_1_cache {
  // Reader addrs...
    // { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // # of banks: 1
  in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0;
};



inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write0, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write0);
}

inline hw_uint<16> in_gauss_ds_1_rd0_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_write
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write0
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<16>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res = in_gauss_blur_1_update_0_write.extract<0, 15>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res, in_gauss_blur_1, d0, d1, dynamic_address);
}

// in_gauss_ds_1_update_0_read
//	in_gauss_ds_1_rd0
inline hw_uint<16> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_1_rd0_res);
	return result;
}

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 958], [-2, 538]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct in_gauss_blur_2_cache {
  // Reader addrs...
    // { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // # of banks: 1
  in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_write
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write0
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res = in_gauss_blur_2_update_0_write.extract<0, 15>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
inline hw_uint<16> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_2_rd0_res);
	return result;
}

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct in_gauss_blur_3_cache {
  // Reader addrs...
    // { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // # of banks: 1
  in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0;
};



inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write0, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
inline hw_uint<16> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_3_rd0_res);
	return result;
}

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 959], [-3, 539]}
	// Capacity: 1929
	// # of read delays: 9
  // 0, 1, 2, 963, 964, 965, 1926, 1927, 1928
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_962() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 960 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 960 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_gauss_ds_1_cache {
  // Reader addrs...
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // # of banks: 1
  in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1928();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_965();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1927();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_964();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1926();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_963();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_read
//	in_gauss_blur_2_rd0
//	in_gauss_blur_2_rd1
//	in_gauss_blur_2_rd2
//	in_gauss_blur_2_rd3
//	in_gauss_blur_2_rd4
//	in_gauss_blur_2_rd5
//	in_gauss_blur_2_rd6
//	in_gauss_blur_2_rd7
//	in_gauss_blur_2_rd8
inline hw_uint<144> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // in_gauss_blur_2_rd0
    // in_gauss_blur_2_rd1
    // in_gauss_blur_2_rd2
    // in_gauss_blur_2_rd3
    // in_gauss_blur_2_rd4
    // in_gauss_blur_2_rd5
    // in_gauss_blur_2_rd6
    // in_gauss_blur_2_rd7
    // in_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, in_gauss_blur_2_rd8_res);
	return result;
}

// in_gauss_ds_1_update_0_write
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write0
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res = in_gauss_ds_1_update_0_write.extract<0, 15>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 479], [-1, 269]}
	// Capacity: 965
	// # of read delays: 9
  // 0, 1, 2, 481, 482, 483, 962, 963, 964
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_480() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 478 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 478 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_gauss_ds_2_cache {
  // Reader addrs...
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // # of banks: 1
  in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write0, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_read
//	in_gauss_blur_3_rd0
//	in_gauss_blur_3_rd1
//	in_gauss_blur_3_rd2
//	in_gauss_blur_3_rd3
//	in_gauss_blur_3_rd4
//	in_gauss_blur_3_rd5
//	in_gauss_blur_3_rd6
//	in_gauss_blur_3_rd7
//	in_gauss_blur_3_rd8
inline hw_uint<144> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // in_gauss_blur_3_rd0
    // in_gauss_blur_3_rd1
    // in_gauss_blur_3_rd2
    // in_gauss_blur_3_rd3
    // in_gauss_blur_3_rd4
    // in_gauss_blur_3_rd5
    // in_gauss_blur_3_rd6
    // in_gauss_blur_3_rd7
    // in_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, in_gauss_blur_3_rd8_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_1_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct in_gauss_ds_3_cache {
  // Reader addrs...
    // { gp_fpga_1_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // # of banks: 1
  in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_1_rd0_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_1_rd0;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_1_rd0.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> gp_fpga_1_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gp_fpga_1_rd0 read pattern: { gp_fpga_1_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_1_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp_fpga_1_update_0_read
//	gp_fpga_1_rd0
inline hw_uint<16> in_gauss_ds_3_gp_fpga_1_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_fpga_1_rd0

	hw_uint<16> result;
	hw_uint<16> gp_fpga_1_rd0_res = gp_fpga_1_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp_fpga_1_rd0_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 107968 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_1(in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_1_m_in_gauss_blur_1_1__p___m_1_c__1_m_in_gauss_blur_1_0__p___m_1_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_1(in_1_m_in_gauss_blur_1_1__p___m_1_c__1_m_in_gauss_blur_1_0__p___m_1_value);
	// Produce: in_gauss_blur_1
	in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_1, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_1_update_0(in_gauss_blur_1_cache& in_gauss_blur_1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_1
	auto in_gauss_blur_1_2_m_in_gauss_ds_1_1__p__0_c__2_m_in_gauss_ds_1_0__p__0_value = in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_1_2_m_in_gauss_ds_1_1__p__0_c__2_m_in_gauss_ds_1_0__p__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_1_m_in_gauss_blur_2_1__p___m_1_c__1_m_in_gauss_blur_2_0__p___m_1_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_1(in_gauss_ds_1_1_m_in_gauss_blur_2_1__p___m_1_c__1_m_in_gauss_blur_2_0__p___m_1_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_2_m_in_gauss_ds_2_1__p__0_c__2_m_in_gauss_ds_2_0__p__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_2_2_m_in_gauss_ds_2_1__p__0_c__2_m_in_gauss_ds_2_0__p__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_1_m_in_gauss_blur_3_1__p___m_1_c__1_m_in_gauss_blur_3_0__p___m_1_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_1(in_gauss_ds_2_1_m_in_gauss_blur_3_1__p___m_1_c__1_m_in_gauss_blur_3_0__p___m_1_value);
	// Produce: in_gauss_blur_3
	in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_3, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_3_update_0(in_gauss_blur_3_cache& in_gauss_blur_3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_3
	auto in_gauss_blur_3_2_m_in_gauss_ds_3_1__p__0_c__2_m_in_gauss_ds_3_0__p__0_value = in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_3_2_m_in_gauss_ds_3_1__p__0_c__2_m_in_gauss_ds_3_0__p__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void gp_fpga_1_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp_fpga_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_1_m_gp_fpga_1_1__p__0_c__1_m_gp_fpga_1_0__p__0_value = in_gauss_ds_3_gp_fpga_1_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_ds_3_1_m_gp_fpga_1_1__p__0_c__1_m_gp_fpga_1_0__p__0_value);
	// Produce: gp_fpga_1
	gp_fpga_1.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gp_fpga_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga_1) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gp_fpga_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  in_cache in;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_1_cache in_gauss_blur_1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_2_cache in_gauss_blur_2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_3_cache in_gauss_blur_3;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_1_cache in_gauss_ds_1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_2_cache in_gauss_ds_2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_3_cache in_gauss_ds_3;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538; in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268; in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269; gp_fpga_1_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134; in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539; in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078; in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079; in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 3 + 2d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
// Condition for in_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-4 + 1*i2)) == 0) && (((1 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 7 + 4d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for in_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1 + -1*i1 + (4*(((1 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i2)) == 0) && (((-7 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 3 + 4d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
// Condition for in_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1 + -1*i1 + (4*(((1 + 1*i1)) >> 2)))) == 0) && (((-5 + 1*i2)) == 0) && (((1 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { gp_fpga_1_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for gp_fpga_1_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1 + -1*i1 + (8*(((1 + 1*i1)) >> 3)))) == 0) && (((-8 + 1*i2)) == 0) && (((-7 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + 2d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
// Condition for in_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i1 + (2*(((1 + 1*i1)) >> 1)))) == 0) && (((-3 + 1*i2)) == 0) && (((5 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -6 <= d0 <= 1918 and -6 <= d1 <= 1078 }
// Condition for in_gauss_blur_1_update_0(((((-2 + 1*i2)) == 0) && (((5 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -7 <= d0 <= 1919 and -7 <= d1 <= 1079 }
// Condition for in_update_0(((((-1 + 1*i2)) == 0) && (((7 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 7 + 8d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for in_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1 + -1*i1 + (8*(((1 + 1*i1)) >> 3)))) == 0) && (((-7 + 1*i2)) == 0) && (((-7 + 1*i1)) >= 0) && (((1919 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))

	  // Schedules...
	    // gp_fpga_1_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*8 + 1*7,1*8]
	    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*2 + 1*3,1*4]
	    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*4 + 1*7,1*6]
	    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*2 + 1*1,1*3]
	    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*4 + 1*3,1*5]
	    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*8 + 1*7,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -7; c0 <= 1079; c0++) {
	  for (int c1 = -7; c1 <= 1919; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-7 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-5 <= c1 && c1 <= 1919) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-5 <= c1 && c1 <= 1919) && ((c1 - 1) % 2 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, (c1 - 1) / 2, (c0 - 1) / 2);
	    }
	
	    if ((-1 <= c1 && c1 <= 1919) && ((c1 - 3) % 2 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, (c1 - 3) / 2, (c0 - 3) / 2);
	    }
	
	    if ((-1 <= c1 && c1 <= 1919) && ((c1 - 3) % 4 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, (c1 - 3) / 4, (c0 - 3) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 1919) && ((c1 - 7) % 4 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, (c1 - 7) / 4, (c0 - 7) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 1919) && ((c1 - 7) % 8 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, (c1 - 7) / 8, (c0 - 7) / 8);
	    }
	
	    if ((7 <= c1 && c1 <= 1919) && ((c1 - 7) % 8 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      gp_fpga_1_update_0(in_gauss_ds_3 /* buf name */, gp_fpga_1, (c1 - 7) / 8, (c0 - 7) / 8);
	    }
	
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gp_fpga_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_fpga_1_opt(in_off_chip, gp_fpga_1);
  }
}
#ifdef __SYNTHESIS__
  // { gp_fpga_1_update_0[root = 0, gp_fpga_1_0, gp_fpga_1_1] -> gp_fpga_1[gp_fpga_1_1, gp_fpga_1_0] : 0 <= gp_fpga_1_0 <= 134 and 0 <= gp_fpga_1_1 <= 239 }
const int gp_fpga_1_update_0_write_pipe0_num_transfers = 32400;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -7 <= in_0 <= 1079 and -7 <= in_1 <= 1919 }
const int in_update_0_read_pipe0_num_transfers = 2094649;


extern "C" {

void gp_fpga_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* gp_fpga_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_fpga_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_fpga_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp_fpga_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_fpga_1_opt_wrapper(in_update_0_read_pipe0_channel, gp_fpga_1_update_0_write_pipe0_channel, size);

  burst_write<16>(gp_fpga_1_update_0_write_pipe0, gp_fpga_1_update_0_write_pipe0_channel, gp_fpga_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_fpga_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp_fpga_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_fpga_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_fpga_1_opt(in_update_0_read_pipe0, gp_fpga_1_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

