#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sbl4_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "sbl4_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_103_sm36_058_28_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_247_sm37_056_26_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_cache {
  // Reader addrs...
    // { load_to_img_to_gp_103_sm36_058[root = 0, img_ld2, img_ld1] -> img[img_ld1, img_ld2] : 0 <= img_ld2 <= 1081 and 0 <= img_ld1 <= 1921 }
    // { load_to_img_to_gp_247_sm37_056[root = 0, img_ld6, img_ld5] -> img[img_ld5, img_ld6] : 0 <= img_ld6 <= 1081 and 0 <= img_ld5 <= 1921 }
  // # of banks: 2
  img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_103_sm36_058_28_cache img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_103_sm36_058_28;
  img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_247_sm37_056_26_cache img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_247_sm37_056_26;
};



inline void img_img_update_0_sm40_046_33_write(hw_uint<16>& img_img_update_0_sm40_046_33, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_103_sm36_058_28.push(img_img_update_0_sm40_046_33);
  img.img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_247_sm37_056_26.push(img_img_update_0_sm40_046_33);
}

inline hw_uint<16> img_load_to_img_to_gp_103_sm36_058_28_select(img_cache& img, int root, int img_ld2, int img_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_load_to_img_to_gp_103_sm36_058_28 read pattern: { load_to_img_to_gp_103_sm36_058[root = 0, img_ld2, img_ld1] -> img[img_ld1, img_ld2] : 0 <= img_ld2 <= 1081 and 0 <= img_ld1 <= 1921 }
  // Read schedule : { load_to_img_to_gp_103_sm36_058[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { img_update_0_sm40_046[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm40_046_33 = img.img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_103_sm36_058_28.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_sm40_046_33;
  return 0;
}

inline hw_uint<16> img_load_to_img_to_gp_247_sm37_056_26_select(img_cache& img, int root, int img_ld6, int img_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_load_to_img_to_gp_247_sm37_056_26 read pattern: { load_to_img_to_gp_247_sm37_056[root = 0, img_ld6, img_ld5] -> img[img_ld5, img_ld6] : 0 <= img_ld6 <= 1081 and 0 <= img_ld5 <= 1921 }
  // Read schedule : { load_to_img_to_gp_247_sm37_056[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { img_update_0_sm40_046[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm40_046_33 = img.img_img_update_0_sm40_046_33_to_img_load_to_img_to_gp_247_sm37_056_26.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_sm40_046_33;
  return 0;
}

// # of bundles = 3
// img_update_0_sm40_046_write
//	img_img_update_0_sm40_046_33
inline void img_img_update_0_sm40_046_write_bundle_write(hw_uint<16>& img_update_0_sm40_046_write, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
	hw_uint<16> img_img_update_0_sm40_046_33_res = img_update_0_sm40_046_write.extract<0, 15>();
	img_img_update_0_sm40_046_33_write(img_img_update_0_sm40_046_33_res, img, root, img_0, img_1, dynamic_address);
}

// load_to_img_to_gp_103_sm36_058_read
//	img_load_to_img_to_gp_103_sm36_058_28
inline hw_uint<16> img_load_to_img_to_gp_103_sm36_058_read_bundle_read(img_cache& img, int root, int img_ld2, int img_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // img_load_to_img_to_gp_103_sm36_058_28

	hw_uint<16> result;
	hw_uint<16> img_load_to_img_to_gp_103_sm36_058_28_res = img_load_to_img_to_gp_103_sm36_058_28_select(img, root, img_ld2, img_ld1, dynamic_address);
	set_at<0, 16>(result, img_load_to_img_to_gp_103_sm36_058_28_res);
	return result;
}

// load_to_img_to_gp_247_sm37_056_read
//	img_load_to_img_to_gp_247_sm37_056_26
inline hw_uint<16> img_load_to_img_to_gp_247_sm37_056_read_bundle_read(img_cache& img, int root, int img_ld6, int img_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // img_load_to_img_to_gp_247_sm37_056_26

	hw_uint<16> result;
	hw_uint<16> img_load_to_img_to_gp_247_sm37_056_26_res = img_load_to_img_to_gp_247_sm37_056_26_select(img, root, img_ld6, img_ld5, dynamic_address);
	set_at<0, 16>(result, img_load_to_img_to_gp_247_sm37_056_26_res);
	return result;
}

struct img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3847
	// # of read delays: 6
  // 0, 2, 1922, 1924, 3844, 3846
	hw_uint<16> f0;
	hw_uint<16> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1919> f3;
	hw_uint<16> f4;
	hw_uint<16> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 1919> f7;
	hw_uint<16> f8;
	hw_uint<16> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f1;
	}

	inline hw_uint<16> peek_2() {
		return f2;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1922() {
		return f4;
	}

	inline hw_uint<16> peek_1923() {
		return f5;
	}

	inline hw_uint<16> peek_1924() {
		return f6;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_3844() {
		return f8;
	}

	inline hw_uint<16> peek_3845() {
		return f9;
	}

	inline hw_uint<16> peek_3846() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f9 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f5 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f1 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_FIFO_buf16_cache {
  // Reader addrs...
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // # of banks: 1
  img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6_cache img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6;
};



inline void img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_write(hw_uint<16>& img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31, img_FIFO_buf16_cache& img_FIFO_buf16, int root, int img_to_gp_10_ld18, int img_to_gp_10_ld17, int dynamic_address) {
  img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.push(img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31);
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_11_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_11 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_3846();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_12_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_12 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_1924();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_13_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_13 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_2();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_14_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_14 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_3844();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_15_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_15 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_1922();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

inline hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_16_select(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf16_mag_x_update_0_sm42_062_16 read pattern: { mag_x_update_0_sm42_062[root = 0, mag_x_0, mag_x_1] -> img_FIFO_buf16[2 + mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31 = img_FIFO_buf16.img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_merged_banks_6.peek_0();
  return value_img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31;
  return 0;
}

// # of bundles = 2
// load_to_img_FIFO_buf1619_sm33_048_write
//	img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31
inline void img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_write_bundle_write(hw_uint<16>& load_to_img_FIFO_buf1619_sm33_048_write, img_FIFO_buf16_cache& img_FIFO_buf16, int root, int img_to_gp_10_ld18, int img_to_gp_10_ld17, int dynamic_address) {
	hw_uint<16> img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_res = load_to_img_FIFO_buf1619_sm33_048_write.extract<0, 15>();
	img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_write(img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_31_res, img_FIFO_buf16, root, img_to_gp_10_ld18, img_to_gp_10_ld17, dynamic_address);
}

// mag_x_update_0_sm42_062_read
//	img_FIFO_buf16_mag_x_update_0_sm42_062_11
//	img_FIFO_buf16_mag_x_update_0_sm42_062_12
//	img_FIFO_buf16_mag_x_update_0_sm42_062_13
//	img_FIFO_buf16_mag_x_update_0_sm42_062_14
//	img_FIFO_buf16_mag_x_update_0_sm42_062_15
//	img_FIFO_buf16_mag_x_update_0_sm42_062_16
inline hw_uint<96> img_FIFO_buf16_mag_x_update_0_sm42_062_read_bundle_read(img_FIFO_buf16_cache& img_FIFO_buf16, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  // # of ports in bundle: 6
    // img_FIFO_buf16_mag_x_update_0_sm42_062_11
    // img_FIFO_buf16_mag_x_update_0_sm42_062_12
    // img_FIFO_buf16_mag_x_update_0_sm42_062_13
    // img_FIFO_buf16_mag_x_update_0_sm42_062_14
    // img_FIFO_buf16_mag_x_update_0_sm42_062_15
    // img_FIFO_buf16_mag_x_update_0_sm42_062_16

	hw_uint<96> result;
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_11_res = img_FIFO_buf16_mag_x_update_0_sm42_062_11_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<0, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_11_res);
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_12_res = img_FIFO_buf16_mag_x_update_0_sm42_062_12_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<16, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_12_res);
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_13_res = img_FIFO_buf16_mag_x_update_0_sm42_062_13_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<32, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_13_res);
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_14_res = img_FIFO_buf16_mag_x_update_0_sm42_062_14_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<48, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_14_res);
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_15_res = img_FIFO_buf16_mag_x_update_0_sm42_062_15_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<64, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_15_res);
	hw_uint<16> img_FIFO_buf16_mag_x_update_0_sm42_062_16_res = img_FIFO_buf16_mag_x_update_0_sm42_062_16_select(img_FIFO_buf16, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<80, 96>(result, img_FIFO_buf16_mag_x_update_0_sm42_062_16_res);
	return result;
}

struct img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3847
	// # of read delays: 6
  // 0, 1, 2, 3844, 3845, 3846
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 3841> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_3844() {
		return f6;
	}

	inline hw_uint<16> peek_3845() {
		return f8;
	}

	inline hw_uint<16> peek_3846() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3841
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3841 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_FIFO_buf20_cache {
  // Reader addrs...
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[1 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[1 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[2 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[2 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // # of banks: 1
  img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6_cache img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6;
};



inline void img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_write(hw_uint<16>& img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29, img_FIFO_buf20_cache& img_FIFO_buf20, int root, int img_to_gp_24_ld22, int img_to_gp_24_ld21, int dynamic_address) {
  img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.push(img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29);
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_4_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_4 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_3846();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_5_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_5 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_2();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_6_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_6 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[1 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_3845();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_7_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_7 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[1 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_1();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_8_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_8 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[2 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_3844();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

inline hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_9_select(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_FIFO_buf20_mag_y_update_0_sm41_050_9 read pattern: { mag_y_update_0_sm41_050[root = 0, mag_y_0, mag_y_1] -> img_FIFO_buf20[2 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29 = img_FIFO_buf20.img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_merged_banks_6.peek_0();
  return value_img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29;
  return 0;
}

// # of bundles = 2
// load_to_img_FIFO_buf2023_sm32_066_write
//	img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29
inline void img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_write_bundle_write(hw_uint<16>& load_to_img_FIFO_buf2023_sm32_066_write, img_FIFO_buf20_cache& img_FIFO_buf20, int root, int img_to_gp_24_ld22, int img_to_gp_24_ld21, int dynamic_address) {
	hw_uint<16> img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_res = load_to_img_FIFO_buf2023_sm32_066_write.extract<0, 15>();
	img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_write(img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_29_res, img_FIFO_buf20, root, img_to_gp_24_ld22, img_to_gp_24_ld21, dynamic_address);
}

// mag_y_update_0_sm41_050_read
//	img_FIFO_buf20_mag_y_update_0_sm41_050_4
//	img_FIFO_buf20_mag_y_update_0_sm41_050_5
//	img_FIFO_buf20_mag_y_update_0_sm41_050_6
//	img_FIFO_buf20_mag_y_update_0_sm41_050_7
//	img_FIFO_buf20_mag_y_update_0_sm41_050_8
//	img_FIFO_buf20_mag_y_update_0_sm41_050_9
inline hw_uint<96> img_FIFO_buf20_mag_y_update_0_sm41_050_read_bundle_read(img_FIFO_buf20_cache& img_FIFO_buf20, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  // # of ports in bundle: 6
    // img_FIFO_buf20_mag_y_update_0_sm41_050_4
    // img_FIFO_buf20_mag_y_update_0_sm41_050_5
    // img_FIFO_buf20_mag_y_update_0_sm41_050_6
    // img_FIFO_buf20_mag_y_update_0_sm41_050_7
    // img_FIFO_buf20_mag_y_update_0_sm41_050_8
    // img_FIFO_buf20_mag_y_update_0_sm41_050_9

	hw_uint<96> result;
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_4_res = img_FIFO_buf20_mag_y_update_0_sm41_050_4_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<0, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_4_res);
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_5_res = img_FIFO_buf20_mag_y_update_0_sm41_050_5_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<16, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_5_res);
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_6_res = img_FIFO_buf20_mag_y_update_0_sm41_050_6_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<32, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_6_res);
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_7_res = img_FIFO_buf20_mag_y_update_0_sm41_050_7_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<48, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_7_res);
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_8_res = img_FIFO_buf20_mag_y_update_0_sm41_050_8_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<64, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_8_res);
	hw_uint<16> img_FIFO_buf20_mag_y_update_0_sm41_050_9_res = img_FIFO_buf20_mag_y_update_0_sm41_050_9_select(img_FIFO_buf20, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<80, 96>(result, img_FIFO_buf20_mag_y_update_0_sm41_050_9_res);
	return result;
}

struct mag_x_mag_x_update_0_sm42_062_10_to_mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_cache {
  // Reader addrs...
    // { load_to_mag_x_to_gp_3811_sm38_054[root = 0, mag_x_ld10, mag_x_ld9] -> mag_x[mag_x_ld9, mag_x_ld10] : 0 <= mag_x_ld10 <= 1079 and 0 <= mag_x_ld9 <= 1919 }
  // # of banks: 1
  mag_x_mag_x_update_0_sm42_062_10_to_mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_cache mag_x_mag_x_update_0_sm42_062_10_to_mag_x_load_to_mag_x_to_gp_3811_sm38_054_22;
};



inline void mag_x_mag_x_update_0_sm42_062_10_write(hw_uint<16>& mag_x_mag_x_update_0_sm42_062_10, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_sm42_062_10_to_mag_x_load_to_mag_x_to_gp_3811_sm38_054_22.push(mag_x_mag_x_update_0_sm42_062_10);
}

inline hw_uint<16> mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_select(mag_x_cache& mag_x, int root, int mag_x_ld10, int mag_x_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_load_to_mag_x_to_gp_3811_sm38_054_22 read pattern: { load_to_mag_x_to_gp_3811_sm38_054[root = 0, mag_x_ld10, mag_x_ld9] -> mag_x[mag_x_ld9, mag_x_ld10] : 0 <= mag_x_ld10 <= 1079 and 0 <= mag_x_ld9 <= 1919 }
  // Read schedule : { load_to_mag_x_to_gp_3811_sm38_054[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_x_mag_x_update_0_sm42_062_10 = mag_x.mag_x_mag_x_update_0_sm42_062_10_to_mag_x_load_to_mag_x_to_gp_3811_sm38_054_22.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_sm42_062_10;
  return 0;
}

// # of bundles = 2
// load_to_mag_x_to_gp_3811_sm38_054_read
//	mag_x_load_to_mag_x_to_gp_3811_sm38_054_22
inline hw_uint<16> mag_x_load_to_mag_x_to_gp_3811_sm38_054_read_bundle_read(mag_x_cache& mag_x, int root, int mag_x_ld10, int mag_x_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_x_load_to_mag_x_to_gp_3811_sm38_054_22

	hw_uint<16> result;
	hw_uint<16> mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_res = mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_select(mag_x, root, mag_x_ld10, mag_x_ld9, dynamic_address);
	set_at<0, 16>(result, mag_x_load_to_mag_x_to_gp_3811_sm38_054_22_res);
	return result;
}

// mag_x_update_0_sm42_062_write
//	mag_x_mag_x_update_0_sm42_062_10
inline void mag_x_mag_x_update_0_sm42_062_write_bundle_write(hw_uint<16>& mag_x_update_0_sm42_062_write, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
	hw_uint<16> mag_x_mag_x_update_0_sm42_062_10_res = mag_x_update_0_sm42_062_write.extract<0, 15>();
	mag_x_mag_x_update_0_sm42_062_10_write(mag_x_mag_x_update_0_sm42_062_10_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
}

struct mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_to_mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_FIFO_buf24_cache {
  // Reader addrs...
    // { sbl4_1_update_0_sm43_064[root = 0, sbl4_1_0, sbl4_1_1] -> mag_x_FIFO_buf24[sbl4_1_1, sbl4_1_0] : 0 <= sbl4_1_0 <= 1079 and 0 <= sbl4_1_1 <= 1919 }
  // # of banks: 1
  mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_to_mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_cache mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_to_mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1;
};



inline void mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_write(hw_uint<16>& mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23, mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, int root, int mag_x_to_gp_38_ld26, int mag_x_to_gp_38_ld25, int dynamic_address) {
  mag_x_FIFO_buf24.mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_to_mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1.push(mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23);
}

inline hw_uint<16> mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_select(mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, int root, int sbl4_1_0, int sbl4_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1 read pattern: { sbl4_1_update_0_sm43_064[root = 0, sbl4_1_0, sbl4_1_1] -> mag_x_FIFO_buf24[sbl4_1_1, sbl4_1_0] : 0 <= sbl4_1_0 <= 1079 and 0 <= sbl4_1_1 <= 1919 }
  // Read schedule : { sbl4_1_update_0_sm43_064[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_mag_x_FIFO_buf2427_sm34_044[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23 = mag_x_FIFO_buf24.mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_to_mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23;
  return 0;
}

// # of bundles = 2
// load_to_mag_x_FIFO_buf2427_sm34_044_write
//	mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23
inline void mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_write_bundle_write(hw_uint<16>& load_to_mag_x_FIFO_buf2427_sm34_044_write, mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, int root, int mag_x_to_gp_38_ld26, int mag_x_to_gp_38_ld25, int dynamic_address) {
	hw_uint<16> mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_res = load_to_mag_x_FIFO_buf2427_sm34_044_write.extract<0, 15>();
	mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_write(mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_23_res, mag_x_FIFO_buf24, root, mag_x_to_gp_38_ld26, mag_x_to_gp_38_ld25, dynamic_address);
}

// sbl4_1_update_0_sm43_064_read
//	mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1
inline hw_uint<16> mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_read_bundle_read(mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, int root, int sbl4_1_0, int sbl4_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1

	hw_uint<16> result;
	hw_uint<16> mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_res = mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_select(mag_x_FIFO_buf24, root, sbl4_1_0, sbl4_1_1, dynamic_address);
	set_at<0, 16>(result, mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_1_res);
	return result;
}

struct mag_y_mag_y_update_0_sm41_050_3_to_mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_cache {
  // Reader addrs...
    // { load_to_mag_y_to_gp_31215_sm39_052[root = 0, mag_y_ld14, mag_y_ld13] -> mag_y[mag_y_ld13, mag_y_ld14] : 0 <= mag_y_ld14 <= 1079 and 0 <= mag_y_ld13 <= 1919 }
  // # of banks: 1
  mag_y_mag_y_update_0_sm41_050_3_to_mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_cache mag_y_mag_y_update_0_sm41_050_3_to_mag_y_load_to_mag_y_to_gp_31215_sm39_052_18;
};



inline void mag_y_mag_y_update_0_sm41_050_3_write(hw_uint<16>& mag_y_mag_y_update_0_sm41_050_3, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_sm41_050_3_to_mag_y_load_to_mag_y_to_gp_31215_sm39_052_18.push(mag_y_mag_y_update_0_sm41_050_3);
}

inline hw_uint<16> mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_select(mag_y_cache& mag_y, int root, int mag_y_ld14, int mag_y_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_load_to_mag_y_to_gp_31215_sm39_052_18 read pattern: { load_to_mag_y_to_gp_31215_sm39_052[root = 0, mag_y_ld14, mag_y_ld13] -> mag_y[mag_y_ld13, mag_y_ld14] : 0 <= mag_y_ld14 <= 1079 and 0 <= mag_y_ld13 <= 1919 }
  // Read schedule : { load_to_mag_y_to_gp_31215_sm39_052[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_y_mag_y_update_0_sm41_050_3 = mag_y.mag_y_mag_y_update_0_sm41_050_3_to_mag_y_load_to_mag_y_to_gp_31215_sm39_052_18.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_sm41_050_3;
  return 0;
}

// # of bundles = 2
// load_to_mag_y_to_gp_31215_sm39_052_read
//	mag_y_load_to_mag_y_to_gp_31215_sm39_052_18
inline hw_uint<16> mag_y_load_to_mag_y_to_gp_31215_sm39_052_read_bundle_read(mag_y_cache& mag_y, int root, int mag_y_ld14, int mag_y_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_y_load_to_mag_y_to_gp_31215_sm39_052_18

	hw_uint<16> result;
	hw_uint<16> mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_res = mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_select(mag_y, root, mag_y_ld14, mag_y_ld13, dynamic_address);
	set_at<0, 16>(result, mag_y_load_to_mag_y_to_gp_31215_sm39_052_18_res);
	return result;
}

// mag_y_update_0_sm41_050_write
//	mag_y_mag_y_update_0_sm41_050_3
inline void mag_y_mag_y_update_0_sm41_050_write_bundle_write(hw_uint<16>& mag_y_update_0_sm41_050_write, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
	hw_uint<16> mag_y_mag_y_update_0_sm41_050_3_res = mag_y_update_0_sm41_050_write.extract<0, 15>();
	mag_y_mag_y_update_0_sm41_050_3_write(mag_y_mag_y_update_0_sm41_050_3_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
}

struct mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_to_mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_FIFO_buf28_cache {
  // Reader addrs...
    // { sbl4_1_update_0_sm43_064[root = 0, sbl4_1_0, sbl4_1_1] -> mag_y_FIFO_buf28[sbl4_1_1, sbl4_1_0] : 0 <= sbl4_1_0 <= 1079 and 0 <= sbl4_1_1 <= 1919 }
  // # of banks: 1
  mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_to_mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_cache mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_to_mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2;
};



inline void mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_write(hw_uint<16>& mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19, mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, int root, int mag_y_to_gp_312_ld30, int mag_y_to_gp_312_ld29, int dynamic_address) {
  mag_y_FIFO_buf28.mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_to_mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2.push(mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19);
}

inline hw_uint<16> mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_select(mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, int root, int sbl4_1_0, int sbl4_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2 read pattern: { sbl4_1_update_0_sm43_064[root = 0, sbl4_1_0, sbl4_1_1] -> mag_y_FIFO_buf28[sbl4_1_1, sbl4_1_0] : 0 <= sbl4_1_0 <= 1079 and 0 <= sbl4_1_1 <= 1919 }
  // Read schedule : { sbl4_1_update_0_sm43_064[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_mag_y_FIFO_buf2831_sm35_060[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19 = mag_y_FIFO_buf28.mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_to_mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2.peek(/* one reader or all rams */ 0);
  return value_mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19;
  return 0;
}

// # of bundles = 2
// load_to_mag_y_FIFO_buf2831_sm35_060_write
//	mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19
inline void mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_write_bundle_write(hw_uint<16>& load_to_mag_y_FIFO_buf2831_sm35_060_write, mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, int root, int mag_y_to_gp_312_ld30, int mag_y_to_gp_312_ld29, int dynamic_address) {
	hw_uint<16> mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_res = load_to_mag_y_FIFO_buf2831_sm35_060_write.extract<0, 15>();
	mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_write(mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_19_res, mag_y_FIFO_buf28, root, mag_y_to_gp_312_ld30, mag_y_to_gp_312_ld29, dynamic_address);
}

// sbl4_1_update_0_sm43_064_read
//	mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2
inline hw_uint<16> mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_read_bundle_read(mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, int root, int sbl4_1_0, int sbl4_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2

	hw_uint<16> result;
	hw_uint<16> mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_res = mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_select(mag_y_FIFO_buf28, root, sbl4_1_0, sbl4_1_1, dynamic_address);
	set_at<0, 16>(result, mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_2_res);
	return result;
}

// Operation logic
inline void load_to_img_to_gp_103_sm36_058(img_cache& img, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_to_gp_10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img
	auto img__lp_1_m_img_ld1__p__0_rp__c____img_ld2_value = img_load_to_img_to_gp_103_sm36_058_read_bundle_read(img/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: img_to_gp_10
	img_to_gp_10.write(img__lp_1_m_img_ld1__p__0_rp__c____img_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void img_update_0_sm40_046(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_1_m__lp__lp_1_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_1(off_chip_img_1_m__lp__lp_1_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value);
	// Produce: img
	img_img_update_0_sm40_046_write_bundle_write(/* arg names */compute_result, img, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_img_to_gp_247_sm37_056(img_cache& img, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_to_gp_24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img
	auto img__lp_1_m_img_ld5__p__0_rp__c____img_ld6_value = img_load_to_img_to_gp_247_sm37_056_read_bundle_read(img/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: img_to_gp_24
	img_to_gp_24.write(img__lp_1_m_img_ld5__p__0_rp__c____img_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_img_0_img_ld2_img_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */img_to_gp_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */img_to_gp_24) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_img_0_img_ld2_img_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_img_to_gp_247_sm37_056[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_img_to_gp_103_sm36_058[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; img_update_0_sm40_046[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { load_to_img_to_gp_247_sm37_056[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_img_to_gp_247_sm37_056(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_img_to_gp_103_sm36_058[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_img_to_gp_103_sm36_058(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { img_update_0_sm40_046[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for img_update_0_sm40_046(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 and 0 <= i3 <= 1; [0, i1, i2, 3] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          img_update_0_sm40_046(off_chip_img /* buf name */, img, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_img_to_gp_103_sm36_058(img /* buf name */, img_to_gp_10, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_img_to_gp_247_sm37_056(img /* buf name */, img_to_gp_24, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void mag_x_update_0_sm42_062(img_FIFO_buf16_cache& img_FIFO_buf16, mag_x_cache& mag_x, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img_FIFO_buf16
	auto img_FIFO_buf16_1_m__lp_1_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value = img_FIFO_buf16_mag_x_update_0_sm42_062_read_bundle_read(img_FIFO_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_1_m__lp_1_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_sm42_062_write_bundle_write(/* arg names */compute_result, mag_x, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_img_FIFO_buf1619_sm33_048(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_to_gp_10, img_FIFO_buf16_cache& img_FIFO_buf16, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img_to_gp_10
	auto img_to_gp_10__lp_1_m_img_to_gp_10_ld17__p__0_rp__c____img_to_gp_10_ld18_value = img_to_gp_10.read();
	// Produce: img_FIFO_buf16
	img_FIFO_buf16_load_to_img_FIFO_buf1619_sm33_048_write_bundle_write(/* arg names */img_to_gp_10__lp_1_m_img_to_gp_10_ld17__p__0_rp__c____img_to_gp_10_ld18_value, img_FIFO_buf16, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_mag_x_to_gp_3811_sm38_054(mag_x_cache& mag_x, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */mag_x_to_gp_38, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x__lp_1_m_mag_x_ld9__p__0_rp__c____mag_x_ld10_value = mag_x_load_to_mag_x_to_gp_3811_sm38_054_read_bundle_read(mag_x/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: mag_x_to_gp_38
	mag_x_to_gp_38.write(mag_x__lp_1_m_mag_x_ld9__p__0_rp__c____mag_x_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_img_to_gp_10_ld18_mag_x_0_mag_x_ld10_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */img_to_gp_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */mag_x_to_gp_38) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_img_to_gp_10_ld18_mag_x_0_mag_x_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_FIFO_buf16_cache img_FIFO_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_x_cache mag_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_mag_x_to_gp_3811_sm38_054[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { mag_x_update_0_sm42_062[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for mag_x_update_0_sm42_062(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_mag_x_to_gp_3811_sm38_054[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_mag_x_to_gp_3811_sm38_054(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_img_FIFO_buf1619_sm33_048[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_img_FIFO_buf1619_sm33_048(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921 and 6 <= i3 <= 7; [0, i1, i2, 2] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_img_FIFO_buf1619_sm33_048(img_to_gp_10 /* buf name */, img_FIFO_buf16, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          mag_x_update_0_sm42_062(img_FIFO_buf16 /* buf name */, mag_x, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_mag_x_to_gp_3811_sm38_054(mag_x /* buf name */, mag_x_to_gp_38, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_img_FIFO_buf2023_sm32_066(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_to_gp_24, img_FIFO_buf20_cache& img_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img_to_gp_24
	auto img_to_gp_24__lp_1_m_img_to_gp_24_ld21__p__0_rp__c____img_to_gp_24_ld22_value = img_to_gp_24.read();
	// Produce: img_FIFO_buf20
	img_FIFO_buf20_load_to_img_FIFO_buf2023_sm32_066_write_bundle_write(/* arg names */img_to_gp_24__lp_1_m_img_to_gp_24_ld21__p__0_rp__c____img_to_gp_24_ld22_value, img_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0_sm41_050(img_FIFO_buf20_cache& img_FIFO_buf20, mag_y_cache& mag_y, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: img_FIFO_buf20
	auto img_FIFO_buf20_1_m__lp_1_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value = img_FIFO_buf20_mag_y_update_0_sm41_050_read_bundle_read(img_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_1_m__lp_1_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_sm41_050_write_bundle_write(/* arg names */compute_result, mag_y, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_mag_y_to_gp_31215_sm39_052(mag_y_cache& mag_y, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */mag_y_to_gp_312, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: mag_y
	auto mag_y__lp_1_m_mag_y_ld13__p__0_rp__c____mag_y_ld14_value = mag_y_load_to_mag_y_to_gp_31215_sm39_052_read_bundle_read(mag_y/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: mag_y_to_gp_312
	mag_y_to_gp_312.write(mag_y__lp_1_m_mag_y_ld13__p__0_rp__c____mag_y_ld14_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_img_to_gp_24_ld22_mag_y_0_mag_y_ld14_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */img_to_gp_24, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */mag_y_to_gp_312) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_img_to_gp_24_ld22_mag_y_0_mag_y_ld14__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_FIFO_buf20_cache img_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_y_cache mag_y;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_mag_y_to_gp_31215_sm39_052[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { mag_y_update_0_sm41_050[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 5] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for mag_y_update_0_sm41_050(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_img_FIFO_buf2023_sm32_066[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_img_FIFO_buf2023_sm32_066(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_mag_y_to_gp_31215_sm39_052[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_mag_y_to_gp_31215_sm39_052(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 8] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921; [0, i1, i2, 5] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921; [0, i1, i2, 4] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_img_FIFO_buf2023_sm32_066(img_to_gp_24 /* buf name */, img_FIFO_buf20, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          mag_y_update_0_sm41_050(img_FIFO_buf20 /* buf name */, mag_y, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_mag_y_to_gp_31215_sm39_052(mag_y /* buf name */, mag_y_to_gp_312, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_mag_y_FIFO_buf2831_sm35_060(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */mag_y_to_gp_312, mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: mag_y_to_gp_312
	auto mag_y_to_gp_312__lp_1_m_mag_y_to_gp_312_ld29__p__0_rp__c____mag_y_to_gp_312_ld30_value = mag_y_to_gp_312.read();
	// Produce: mag_y_FIFO_buf28
	mag_y_FIFO_buf28_load_to_mag_y_FIFO_buf2831_sm35_060_write_bundle_write(/* arg names */mag_y_to_gp_312__lp_1_m_mag_y_to_gp_312_ld29__p__0_rp__c____mag_y_to_gp_312_ld30_value, mag_y_FIFO_buf28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_mag_x_FIFO_buf2427_sm34_044(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */mag_x_to_gp_38, mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: mag_x_to_gp_38
	auto mag_x_to_gp_38__lp_1_m_mag_x_to_gp_38_ld25__p__0_rp__c____mag_x_to_gp_38_ld26_value = mag_x_to_gp_38.read();
	// Produce: mag_x_FIFO_buf24
	mag_x_FIFO_buf24_load_to_mag_x_FIFO_buf2427_sm34_044_write_bundle_write(/* arg names */mag_x_to_gp_38__lp_1_m_mag_x_to_gp_38_ld25__p__0_rp__c____mag_x_to_gp_38_ld26_value, mag_x_FIFO_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sbl4_1_update_0_sm43_064(mag_x_FIFO_buf24_cache& mag_x_FIFO_buf24, mag_y_FIFO_buf28_cache& mag_y_FIFO_buf28, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */sbl4_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: mag_x_FIFO_buf24
	auto mag_x_FIFO_buf24_1_m__lp_1_m_sbl4_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl4_1_0__p__0_p_0_value = mag_x_FIFO_buf24_sbl4_1_update_0_sm43_064_read_bundle_read(mag_x_FIFO_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y_FIFO_buf28
	auto mag_y_FIFO_buf28_1_m__lp_1_m_sbl4_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl4_1_0__p__0_p_0_value = mag_y_FIFO_buf28_sbl4_1_update_0_sm43_064_read_bundle_read(mag_y_FIFO_buf28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl4_1_generated_compute_unrolled_1(mag_x_FIFO_buf24_1_m__lp_1_m_sbl4_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl4_1_0__p__0_p_0_value, mag_y_FIFO_buf28_1_m__lp_1_m_sbl4_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl4_1_0__p__0_p_0_value);
	// Produce: sbl4_1
	sbl4_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_mag_x_to_gp_38_ld26_mag_y_to_gp_312_ld30_sbl4_1_0_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */mag_x_to_gp_38, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */mag_y_to_gp_312, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl4_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_mag_x_to_gp_38_ld26_mag_y_to_gp_312_ld30_sbl4_1_0__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  mag_x_FIFO_buf24_cache mag_x_FIFO_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_y_FIFO_buf28_cache mag_y_FIFO_buf28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_mag_x_FIFO_buf2427_sm34_044[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_mag_y_FIFO_buf2831_sm35_060[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; sbl4_1_update_0_sm43_064[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_mag_x_FIFO_buf2427_sm34_044[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_mag_x_FIFO_buf2427_sm34_044(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { load_to_mag_y_FIFO_buf2831_sm35_060[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_mag_y_FIFO_buf2831_sm35_060(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { sbl4_1_update_0_sm43_064[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for sbl4_1_update_0_sm43_064(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921 and 9 <= i3 <= 11 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1081; i1++) {
	    for (int i2 = 2; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_mag_x_FIFO_buf2427_sm34_044(mag_x_to_gp_38 /* buf name */, mag_x_FIFO_buf24, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_mag_y_FIFO_buf2831_sm35_060(mag_y_to_gp_312 /* buf name */, mag_y_FIFO_buf28, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          sbl4_1_update_0_sm43_064(mag_x_FIFO_buf24 /* buf name */, mag_y_FIFO_buf28 /* buf name */, sbl4_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void sbl4_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl4_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl4_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > img_to_gp_10;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=img_to_gp_10.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > img_to_gp_24;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=img_to_gp_24.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > mag_x_to_gp_38;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=mag_x_to_gp_38.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > mag_y_to_gp_312;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=mag_y_to_gp_312.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_img_0_img_ld2_img_ld6_(off_chip_img, img_to_gp_10, img_to_gp_24);
  Extracted_img_to_gp_10_ld18_mag_x_0_mag_x_ld10_(img_to_gp_10, mag_x_to_gp_38);
  Extracted_img_to_gp_24_ld22_mag_y_0_mag_y_ld14_(img_to_gp_24, mag_y_to_gp_312);
  Extracted_mag_x_to_gp_38_ld26_mag_y_to_gp_312_ld30_sbl4_1_0_(mag_x_to_gp_38, mag_y_to_gp_312, sbl4_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sbl4_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl4_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sbl4_1_opt_d32(off_chip_img, sbl4_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0_sm40_046[root = 0, img_0, img_1] -> off_chip_img[img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 1921 }
const int img_update_0_sm40_046_read_pipe0_num_transfers = 2079604;
  // { sbl4_1_update_0_sm43_064[root = 0, sbl4_1_0, sbl4_1_1] -> sbl4_1[sbl4_1_1, sbl4_1_0] : 0 <= sbl4_1_0 <= 1079 and 0 <= sbl4_1_1 <= 1919 }
const int sbl4_1_update_0_sm43_064_write_pipe0_num_transfers = 2073600;


extern "C" {

void sbl4_1_opt_d32_accel(hw_uint<16>* img_update_0_sm40_046_read_pipe0, hw_uint<16>* sbl4_1_update_0_sm43_064_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_sm40_046_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl4_1_update_0_sm43_064_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_sm40_046_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sbl4_1_update_0_sm43_064_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > img_update_0_sm40_046_read_pipe0_channel;
  static HWStream<hw_uint<16> > sbl4_1_update_0_sm43_064_write_pipe0_channel;

  burst_read<16>(img_update_0_sm40_046_read_pipe0, img_update_0_sm40_046_read_pipe0_channel, img_update_0_sm40_046_read_pipe0_num_transfers*size);

  sbl4_1_opt_d32_wrapper(img_update_0_sm40_046_read_pipe0_channel, sbl4_1_update_0_sm43_064_write_pipe0_channel, size);

  burst_write<16>(sbl4_1_update_0_sm43_064_write_pipe0, sbl4_1_update_0_sm43_064_write_pipe0_channel, sbl4_1_update_0_sm43_064_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sbl4_1_opt_d32_rdai(HWStream<hw_uint<16> >& img_update_0_sm40_046_read_pipe0, HWStream<hw_uint<16> >&  sbl4_1_update_0_sm43_064_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_sm40_046_read_pipe0
#pragma HLS INTERFACE axis register port = sbl4_1_update_0_sm43_064_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sbl4_1_opt_d32(img_update_0_sm40_046_read_pipe0, sbl4_1_update_0_sm43_064_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

