#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "sbl_ur_1_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[-1, 1920], [-1, 1080]}
	// Capacity: 3847
	// # of read delays: 8
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
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline hw_uint<16> mag_x_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 3846 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_3846();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1924 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1924();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 2 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_2();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 3844 : 0 <= d0 <= 1918 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (1925 + d0) : d0 = 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_3844();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1922 : 0 <= d0 <= 1918 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (3 + d0) : d0 = 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1922();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 3846 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_3846();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 2 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_2();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 3845 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_3845();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 3844 : 0 <= d0 <= 1918 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> (1925 + d0) : d0 = 1919 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_3844();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 1920 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
}

// mag_x_update_0_read
//	mag_x_rd0
//	mag_x_rd1
//	mag_x_rd2
//	mag_x_rd3
//	mag_x_rd4
//	mag_x_rd5
inline hw_uint<96> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 6
    // mag_x_rd0
    // mag_x_rd1
    // mag_x_rd2
    // mag_x_rd3
    // mag_x_rd4
    // mag_x_rd5

	hw_uint<96> result;
	hw_uint<16> mag_x_rd0_res = mag_x_rd0_select(img, d0, d1);
	set_at<0, 96>(result, mag_x_rd0_res);
	hw_uint<16> mag_x_rd1_res = mag_x_rd1_select(img, d0, d1);
	set_at<16, 96>(result, mag_x_rd1_res);
	hw_uint<16> mag_x_rd2_res = mag_x_rd2_select(img, d0, d1);
	set_at<32, 96>(result, mag_x_rd2_res);
	hw_uint<16> mag_x_rd3_res = mag_x_rd3_select(img, d0, d1);
	set_at<48, 96>(result, mag_x_rd3_res);
	hw_uint<16> mag_x_rd4_res = mag_x_rd4_select(img, d0, d1);
	set_at<64, 96>(result, mag_x_rd4_res);
	hw_uint<16> mag_x_rd5_res = mag_x_rd5_select(img, d0, d1);
	set_at<80, 96>(result, mag_x_rd5_res);
	return result;
}

// mag_y_update_0_read
//	mag_y_rd0
//	mag_y_rd1
//	mag_y_rd2
//	mag_y_rd3
//	mag_y_rd4
//	mag_y_rd5
inline hw_uint<96> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 6
    // mag_y_rd0
    // mag_y_rd1
    // mag_y_rd2
    // mag_y_rd3
    // mag_y_rd4
    // mag_y_rd5

	hw_uint<96> result;
	hw_uint<16> mag_y_rd0_res = mag_y_rd0_select(img, d0, d1);
	set_at<0, 96>(result, mag_y_rd0_res);
	hw_uint<16> mag_y_rd1_res = mag_y_rd1_select(img, d0, d1);
	set_at<16, 96>(result, mag_y_rd1_res);
	hw_uint<16> mag_y_rd2_res = mag_y_rd2_select(img, d0, d1);
	set_at<32, 96>(result, mag_y_rd2_res);
	hw_uint<16> mag_y_rd3_res = mag_y_rd3_select(img, d0, d1);
	set_at<48, 96>(result, mag_y_rd3_res);
	hw_uint<16> mag_y_rd4_res = mag_y_rd4_select(img, d0, d1);
	set_at<64, 96>(result, mag_y_rd4_res);
	hw_uint<16> mag_y_rd5_res = mag_y_rd5_select(img, d0, d1);
	set_at<80, 96>(result, mag_y_rd5_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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
  mag_x_mag_x_update_0_write0_merged_banks_1_cache mag_x_mag_x_update_0_write0_merged_banks_1;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<16>& mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write0_merged_banks_1.push(mag_x_mag_x_update_0_write0);
}

inline hw_uint<16> sbl_ur_1_rd0_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_1_rd0 read pattern: { sbl_ur_1_update_0[d0, d1] -> mag_x[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// mag_x_update_0_write
//	mag_x_mag_x_update_0_write0
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<16>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1) {
	hw_uint<16> mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 15>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1);
}

// sbl_ur_1_update_0_read
//	sbl_ur_1_rd0
inline hw_uint<16> mag_x_sbl_ur_1_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1) {
  // # of ports in bundle: 1
    // sbl_ur_1_rd0

	hw_uint<16> result;
	hw_uint<16> sbl_ur_1_rd0_res = sbl_ur_1_rd0_select(mag_x, d0, d1);
	set_at<0, 16>(result, sbl_ur_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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
  mag_y_mag_y_update_0_write0_merged_banks_1_cache mag_y_mag_y_update_0_write0_merged_banks_1;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<16>& mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write0_merged_banks_1.push(mag_y_mag_y_update_0_write0);
}

inline hw_uint<16> sbl_ur_1_rd0_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_1_rd0 read pattern: { sbl_ur_1_update_0[d0, d1] -> mag_y[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// mag_y_update_0_write
//	mag_y_mag_y_update_0_write0
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<16>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1) {
	hw_uint<16> mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 15>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1);
}

// sbl_ur_1_update_0_read
//	sbl_ur_1_rd0
inline hw_uint<16> mag_y_sbl_ur_1_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1) {
  // # of ports in bundle: 1
    // sbl_ur_1_rd0

	hw_uint<16> result;
	hw_uint<16> sbl_ur_1_rd0_res = sbl_ur_1_rd0_select(mag_y, d0, d1);
	set_at<0, 16>(result, sbl_ur_1_rd0_res);
	return result;
}



// Operation logic
inline void mag_y_update_0(img_cache& img, mag_y_cache& mag_y, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "mag_y_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(compute_result, mag_y, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "mag_y_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int d0, int d1) {
	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_1(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "img_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "mag_x_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(compute_result, mag_x, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "mag_x_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void sbl_ur_1_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */sbl_ur_1, int d0, int d1) {
	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sbl_ur_1_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sbl_ur_1_update_0_mag_x," << d0<< "," << d1<< "," <<  mag_x_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sbl_ur_1_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sbl_ur_1_update_0_mag_y," << d0<< "," << d1<< "," <<  mag_y_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl_ur_1_generated_compute_unrolled_1(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sbl_ur_1
	sbl_ur_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "sbl_ur_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl_ur_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sbl_ur_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl_ur_1_opt_debug.csv");
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
	
	for (int c0 = -1; c0 <= 1080; c0++) {
	  for (int c1 = -1; c1 <= 1920; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 1920) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1080) && ((c0 - 0) % 1 == 0)) {
	img_update_0(off_chip_img, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1920) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_y_update_0(img, mag_y, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1920) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_x_update_0(img, mag_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1920) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	sbl_ur_1_update_0(mag_x, mag_y, sbl_ur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "sbl_ur_1_opt.h"

#define INPUT_SIZE 2079604
#define OUTPUT_SIZE 2073600
extern "C" {

static void read_input(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_output(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void sbl_ur_1_opt_accel(hw_uint<16>* img_update_0_read, hw_uint<16>* sbl_ur_1_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl_ur_1_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = sbl_ur_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > img_update_0_read_channel;
  static HWStream<hw_uint<16> > sbl_ur_1_update_0_write_channel;

  read_input(img_update_0_read, img_update_0_read_channel, size);

  sbl_ur_1_opt(img_update_0_read_channel, sbl_ur_1_update_0_write_channel);

  write_output(sbl_ur_1_update_0_write, sbl_ur_1_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

