#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sbl9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "sbl9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct img_img_update_0_sm0_04_17_merged_banks_12_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3847
	// # of read delays: 8
  // 0, 1, 2, 1922, 1924, 3844, 3845, 3846
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1919> f5;
	hw_uint<16> f6;
	hw_uint<16> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1919> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1922() {
		return f6;
	}

	inline hw_uint<16> peek_1923() {
		return f7;
	}

	inline hw_uint<16> peek_1924() {
		return f8;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_3844() {
		return f10;
	}

	inline hw_uint<16> peek_3845() {
		return f12;
	}

	inline hw_uint<16> peek_3846() {
		return f14;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f7 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
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

struct img_cache {
  // Reader addrs...
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[1 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[1 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[2 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
    // { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[2 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // # of banks: 1
  img_img_update_0_sm0_04_17_merged_banks_12_cache img_img_update_0_sm0_04_17_merged_banks_12;
};



inline void img_img_update_0_sm0_04_17_write(hw_uint<16>& img_img_update_0_sm0_04_17, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_update_0_sm0_04_17_merged_banks_12.push(img_img_update_0_sm0_04_17);
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_11_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_11 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_3846();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_12_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_12 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_1924();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_13_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_13 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_2();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_14_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_14 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_3844();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_15_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_15 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_1922();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_x_update_0_sm2_08_16_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_update_0_sm2_08_16 read pattern: { mag_x_update_0_sm2_08[root = 0, mag_x_0, mag_x_1] -> img[2 + mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 1919 }
  // Read schedule : { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_0();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_4_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_4 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_3846();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_5_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_5 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_2();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_6_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_6 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[1 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_3845();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_7_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_7 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[1 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_1();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_8_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_8 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[2 + mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_3844();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

inline hw_uint<16> img_mag_y_update_0_sm1_06_9_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_update_0_sm1_06_9 read pattern: { mag_y_update_0_sm1_06[root = 0, mag_y_0, mag_y_1] -> img[2 + mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 1919 }
  // Read schedule : { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_img_img_update_0_sm0_04_17 = img.img_img_update_0_sm0_04_17_merged_banks_12.peek_0();
  return value_img_img_update_0_sm0_04_17;
  return 0;
}

// # of bundles = 3
// img_update_0_sm0_04_write
//	img_img_update_0_sm0_04_17
inline void img_img_update_0_sm0_04_write_bundle_write(hw_uint<16>& img_update_0_sm0_04_write, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
	hw_uint<16> img_img_update_0_sm0_04_17_res = img_update_0_sm0_04_write.extract<0, 15>();
	img_img_update_0_sm0_04_17_write(img_img_update_0_sm0_04_17_res, img, root, img_0, img_1, dynamic_address);
}

// mag_x_update_0_sm2_08_read
//	img_mag_x_update_0_sm2_08_11
//	img_mag_x_update_0_sm2_08_12
//	img_mag_x_update_0_sm2_08_13
//	img_mag_x_update_0_sm2_08_14
//	img_mag_x_update_0_sm2_08_15
//	img_mag_x_update_0_sm2_08_16
inline hw_uint<96> img_mag_x_update_0_sm2_08_read_bundle_read(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  // # of ports in bundle: 6
    // img_mag_x_update_0_sm2_08_11
    // img_mag_x_update_0_sm2_08_12
    // img_mag_x_update_0_sm2_08_13
    // img_mag_x_update_0_sm2_08_14
    // img_mag_x_update_0_sm2_08_15
    // img_mag_x_update_0_sm2_08_16

	hw_uint<96> result;
	hw_uint<16> img_mag_x_update_0_sm2_08_11_res = img_mag_x_update_0_sm2_08_11_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<0, 96>(result, img_mag_x_update_0_sm2_08_11_res);
	hw_uint<16> img_mag_x_update_0_sm2_08_12_res = img_mag_x_update_0_sm2_08_12_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<16, 96>(result, img_mag_x_update_0_sm2_08_12_res);
	hw_uint<16> img_mag_x_update_0_sm2_08_13_res = img_mag_x_update_0_sm2_08_13_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<32, 96>(result, img_mag_x_update_0_sm2_08_13_res);
	hw_uint<16> img_mag_x_update_0_sm2_08_14_res = img_mag_x_update_0_sm2_08_14_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<48, 96>(result, img_mag_x_update_0_sm2_08_14_res);
	hw_uint<16> img_mag_x_update_0_sm2_08_15_res = img_mag_x_update_0_sm2_08_15_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<64, 96>(result, img_mag_x_update_0_sm2_08_15_res);
	hw_uint<16> img_mag_x_update_0_sm2_08_16_res = img_mag_x_update_0_sm2_08_16_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<80, 96>(result, img_mag_x_update_0_sm2_08_16_res);
	return result;
}

// mag_y_update_0_sm1_06_read
//	img_mag_y_update_0_sm1_06_4
//	img_mag_y_update_0_sm1_06_5
//	img_mag_y_update_0_sm1_06_6
//	img_mag_y_update_0_sm1_06_7
//	img_mag_y_update_0_sm1_06_8
//	img_mag_y_update_0_sm1_06_9
inline hw_uint<96> img_mag_y_update_0_sm1_06_read_bundle_read(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  // # of ports in bundle: 6
    // img_mag_y_update_0_sm1_06_4
    // img_mag_y_update_0_sm1_06_5
    // img_mag_y_update_0_sm1_06_6
    // img_mag_y_update_0_sm1_06_7
    // img_mag_y_update_0_sm1_06_8
    // img_mag_y_update_0_sm1_06_9

	hw_uint<96> result;
	hw_uint<16> img_mag_y_update_0_sm1_06_4_res = img_mag_y_update_0_sm1_06_4_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<0, 96>(result, img_mag_y_update_0_sm1_06_4_res);
	hw_uint<16> img_mag_y_update_0_sm1_06_5_res = img_mag_y_update_0_sm1_06_5_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<16, 96>(result, img_mag_y_update_0_sm1_06_5_res);
	hw_uint<16> img_mag_y_update_0_sm1_06_6_res = img_mag_y_update_0_sm1_06_6_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<32, 96>(result, img_mag_y_update_0_sm1_06_6_res);
	hw_uint<16> img_mag_y_update_0_sm1_06_7_res = img_mag_y_update_0_sm1_06_7_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<48, 96>(result, img_mag_y_update_0_sm1_06_7_res);
	hw_uint<16> img_mag_y_update_0_sm1_06_8_res = img_mag_y_update_0_sm1_06_8_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<64, 96>(result, img_mag_y_update_0_sm1_06_8_res);
	hw_uint<16> img_mag_y_update_0_sm1_06_9_res = img_mag_y_update_0_sm1_06_9_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<80, 96>(result, img_mag_y_update_0_sm1_06_9_res);
	return result;
}

struct mag_x_mag_x_update_0_sm2_08_10_to_mag_x_sbl9_1_update_0_sm3_010_1_cache {
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
    // { sbl9_1_update_0_sm3_010[root = 0, sbl9_1_0, sbl9_1_1] -> mag_x[sbl9_1_1, sbl9_1_0] : 0 <= sbl9_1_0 <= 1079 and 0 <= sbl9_1_1 <= 1919 }
  // # of banks: 1
  mag_x_mag_x_update_0_sm2_08_10_to_mag_x_sbl9_1_update_0_sm3_010_1_cache mag_x_mag_x_update_0_sm2_08_10_to_mag_x_sbl9_1_update_0_sm3_010_1;
};



inline void mag_x_mag_x_update_0_sm2_08_10_write(hw_uint<16>& mag_x_mag_x_update_0_sm2_08_10, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_sm2_08_10_to_mag_x_sbl9_1_update_0_sm3_010_1.push(mag_x_mag_x_update_0_sm2_08_10);
}

inline hw_uint<16> mag_x_sbl9_1_update_0_sm3_010_1_select(mag_x_cache& mag_x, int root, int sbl9_1_0, int sbl9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_1_update_0_sm3_010_1 read pattern: { sbl9_1_update_0_sm3_010[root = 0, sbl9_1_0, sbl9_1_1] -> mag_x[sbl9_1_1, sbl9_1_0] : 0 <= sbl9_1_0 <= 1079 and 0 <= sbl9_1_1 <= 1919 }
  // Read schedule : { sbl9_1_update_0_sm3_010[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_x_mag_x_update_0_sm2_08_10 = mag_x.mag_x_mag_x_update_0_sm2_08_10_to_mag_x_sbl9_1_update_0_sm3_010_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_sm2_08_10;
  return 0;
}

// # of bundles = 2
// mag_x_update_0_sm2_08_write
//	mag_x_mag_x_update_0_sm2_08_10
inline void mag_x_mag_x_update_0_sm2_08_write_bundle_write(hw_uint<16>& mag_x_update_0_sm2_08_write, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
	hw_uint<16> mag_x_mag_x_update_0_sm2_08_10_res = mag_x_update_0_sm2_08_write.extract<0, 15>();
	mag_x_mag_x_update_0_sm2_08_10_write(mag_x_mag_x_update_0_sm2_08_10_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
}

// sbl9_1_update_0_sm3_010_read
//	mag_x_sbl9_1_update_0_sm3_010_1
inline hw_uint<16> mag_x_sbl9_1_update_0_sm3_010_read_bundle_read(mag_x_cache& mag_x, int root, int sbl9_1_0, int sbl9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_x_sbl9_1_update_0_sm3_010_1

	hw_uint<16> result;
	hw_uint<16> mag_x_sbl9_1_update_0_sm3_010_1_res = mag_x_sbl9_1_update_0_sm3_010_1_select(mag_x, root, sbl9_1_0, sbl9_1_1, dynamic_address);
	set_at<0, 16>(result, mag_x_sbl9_1_update_0_sm3_010_1_res);
	return result;
}

struct mag_y_mag_y_update_0_sm1_06_3_to_mag_y_sbl9_1_update_0_sm3_010_2_cache {
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
    // { sbl9_1_update_0_sm3_010[root = 0, sbl9_1_0, sbl9_1_1] -> mag_y[sbl9_1_1, sbl9_1_0] : 0 <= sbl9_1_0 <= 1079 and 0 <= sbl9_1_1 <= 1919 }
  // # of banks: 1
  mag_y_mag_y_update_0_sm1_06_3_to_mag_y_sbl9_1_update_0_sm3_010_2_cache mag_y_mag_y_update_0_sm1_06_3_to_mag_y_sbl9_1_update_0_sm3_010_2;
};



inline void mag_y_mag_y_update_0_sm1_06_3_write(hw_uint<16>& mag_y_mag_y_update_0_sm1_06_3, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_sm1_06_3_to_mag_y_sbl9_1_update_0_sm3_010_2.push(mag_y_mag_y_update_0_sm1_06_3);
}

inline hw_uint<16> mag_y_sbl9_1_update_0_sm3_010_2_select(mag_y_cache& mag_y, int root, int sbl9_1_0, int sbl9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_1_update_0_sm3_010_2 read pattern: { sbl9_1_update_0_sm3_010[root = 0, sbl9_1_0, sbl9_1_1] -> mag_y[sbl9_1_1, sbl9_1_0] : 0 <= sbl9_1_0 <= 1079 and 0 <= sbl9_1_1 <= 1919 }
  // Read schedule : { sbl9_1_update_0_sm3_010[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_mag_y_mag_y_update_0_sm1_06_3 = mag_y.mag_y_mag_y_update_0_sm1_06_3_to_mag_y_sbl9_1_update_0_sm3_010_2.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_sm1_06_3;
  return 0;
}

// # of bundles = 2
// mag_y_update_0_sm1_06_write
//	mag_y_mag_y_update_0_sm1_06_3
inline void mag_y_mag_y_update_0_sm1_06_write_bundle_write(hw_uint<16>& mag_y_update_0_sm1_06_write, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
	hw_uint<16> mag_y_mag_y_update_0_sm1_06_3_res = mag_y_update_0_sm1_06_write.extract<0, 15>();
	mag_y_mag_y_update_0_sm1_06_3_write(mag_y_mag_y_update_0_sm1_06_3_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
}

// sbl9_1_update_0_sm3_010_read
//	mag_y_sbl9_1_update_0_sm3_010_2
inline hw_uint<16> mag_y_sbl9_1_update_0_sm3_010_read_bundle_read(mag_y_cache& mag_y, int root, int sbl9_1_0, int sbl9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // mag_y_sbl9_1_update_0_sm3_010_2

	hw_uint<16> result;
	hw_uint<16> mag_y_sbl9_1_update_0_sm3_010_2_res = mag_y_sbl9_1_update_0_sm3_010_2_select(mag_y, root, sbl9_1_0, sbl9_1_1, dynamic_address);
	set_at<0, 16>(result, mag_y_sbl9_1_update_0_sm3_010_2_res);
	return result;
}

// Total re-use buffer capacity: 61536 bits


// Operation logic
inline void img_update_0_sm0_04(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int root, int img_0, int img_1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_1_m__lp__lp_1_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_1(off_chip_img_1_m__lp__lp_1_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value);
	// Produce: img
	img_img_update_0_sm0_04_write_bundle_write(/* arg names */compute_result, img, root, img_0, img_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0_sm1_06(img_cache& img, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_1_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value = img_mag_y_update_0_sm1_06_read_bundle_read(img/* source_delay */, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_1(img_1_m__lp_1_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_sm1_06_write_bundle_write(/* arg names */compute_result, mag_y, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0_sm2_08(img_cache& img, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_1_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value = img_mag_x_update_0_sm2_08_read_bundle_read(img/* source_delay */, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_1(img_1_m__lp_1_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_sm2_08_write_bundle_write(/* arg names */compute_result, mag_x, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sbl9_1_update_0_sm3_010(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */sbl9_1, int root, int sbl9_1_0, int sbl9_1_1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_1_m__lp_1_m_sbl9_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_1_0__p__0_p_0_value = mag_x_sbl9_1_update_0_sm3_010_read_bundle_read(mag_x/* source_delay */, root, sbl9_1_0, sbl9_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_1_m__lp_1_m_sbl9_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_1_0__p__0_p_0_value = mag_y_sbl9_1_update_0_sm3_010_read_bundle_read(mag_y/* source_delay */, root, sbl9_1_0, sbl9_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl9_1_generated_compute_unrolled_1(mag_x_1_m__lp_1_m_sbl9_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_1_0__p__0_p_0_value, mag_y_1_m__lp_1_m_sbl9_1_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_1_0__p__0_p_0_value);
	// Produce: sbl9_1
	sbl9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl9_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl9_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_x_cache mag_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_y_cache mag_y;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { sbl9_1_update_0_sm3_010[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { sbl9_1_update_0_sm3_010[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for sbl9_1_update_0_sm3_010(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { mag_y_update_0_sm1_06[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for mag_y_update_0_sm1_06(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { mag_x_update_0_sm2_08[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for mag_x_update_0_sm2_08(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))
//   { img_update_0_sm0_04[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for img_update_0_sm0_04(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1921 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 2 <= i2 <= 1921 and 0 < i3 <= 3; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 1921 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 1921; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          img_update_0_sm0_04(off_chip_img /* buf name */, img, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          mag_y_update_0_sm1_06(img /* buf name */, mag_y, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          mag_x_update_0_sm2_08(img /* buf name */, mag_x, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          sbl9_1_update_0_sm3_010(mag_x /* buf name */, mag_y /* buf name */, sbl9_1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sbl9_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sbl9_1_opt(off_chip_img, sbl9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0_sm0_04[root = 0, img_0, img_1] -> off_chip_img[img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 1921 }
const int img_update_0_sm0_04_read_pipe0_num_transfers = 2079604;
  // { sbl9_1_update_0_sm3_010[root = 0, sbl9_1_0, sbl9_1_1] -> sbl9_1[sbl9_1_1, sbl9_1_0] : 0 <= sbl9_1_0 <= 1079 and 0 <= sbl9_1_1 <= 1919 }
const int sbl9_1_update_0_sm3_010_write_pipe0_num_transfers = 2073600;


extern "C" {

void sbl9_1_opt_accel(hw_uint<16>* img_update_0_sm0_04_read_pipe0, hw_uint<16>* sbl9_1_update_0_sm3_010_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_sm0_04_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl9_1_update_0_sm3_010_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_sm0_04_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sbl9_1_update_0_sm3_010_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > img_update_0_sm0_04_read_pipe0_channel;
  static HWStream<hw_uint<16> > sbl9_1_update_0_sm3_010_write_pipe0_channel;

  burst_read<16>(img_update_0_sm0_04_read_pipe0, img_update_0_sm0_04_read_pipe0_channel, img_update_0_sm0_04_read_pipe0_num_transfers*size);

  sbl9_1_opt_wrapper(img_update_0_sm0_04_read_pipe0_channel, sbl9_1_update_0_sm3_010_write_pipe0_channel, size);

  burst_write<16>(sbl9_1_update_0_sm3_010_write_pipe0, sbl9_1_update_0_sm3_010_write_pipe0_channel, sbl9_1_update_0_sm3_010_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sbl9_1_opt_rdai(HWStream<hw_uint<16> >& img_update_0_sm0_04_read_pipe0, HWStream<hw_uint<16> >&  sbl9_1_update_0_sm3_010_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_sm0_04_read_pipe0
#pragma HLS INTERFACE axis register port = sbl9_1_update_0_sm3_010_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sbl9_1_opt(img_update_0_sm0_04_read_pipe0, sbl9_1_update_0_sm3_010_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

