#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "sblr30_4_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[-4, 1920], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 480> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 480> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_482() {
		return f4;
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write1_merged_banks_12_cache {
	// RAM Box: {[-3, 1921], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 481> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write2_merged_banks_12_cache {
	// RAM Box: {[-2, 1922], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 481> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 481> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_483() {
		return f4;
	}

	inline hw_uint<16> peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 481
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 481 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write3_merged_banks_12_cache {
	// RAM Box: {[-1, 1923], [-1, 1080]}
	// Capacity: 967
	// # of read delays: 7
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 480> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 480> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_483() {
		return f6;
	}

	inline hw_uint<16> peek_484() {
		return f8;
	}

	inline hw_uint<16> peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_966() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 480
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 480 reading from capacity: 1
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
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
  img_img_update_0_write2_merged_banks_12_cache img_img_update_0_write2_merged_banks_12;
  img_img_update_0_write3_merged_banks_12_cache img_img_update_0_write3_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<16>& img_img_update_0_write1, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline void img_img_update_0_write2_write(hw_uint<16>& img_img_update_0_write2, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write2_merged_banks_12.push(img_img_update_0_write2);
}

inline void img_img_update_0_write3_write(hw_uint<16>& img_img_update_0_write3, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write3_merged_banks_12.push(img_img_update_0_write3);
}

inline hw_uint<16> mag_x_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 966 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_966();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 484 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_484();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_483();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd11_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd12_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd12 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd13_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd13 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_483();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd14_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd14 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd15_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd15 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd16_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd16 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_483();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd17_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd17 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd18_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd18 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd19_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd19 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_483();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 2 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_2();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd20_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd20 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd21_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd21 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (485 + d0) : d0 = 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_964();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd22_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd22 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 482 : 0 <= d0 <= 478 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (3 + d0) : d0 = 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_482();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd23 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
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
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_483();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd6_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd7_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 483 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_483();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd8_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd9_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 966 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_966();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 2 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_2();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd11_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd12_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd12 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd13_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd13 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd14_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd14 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd15_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd15 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd16_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd16 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd17_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd17 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd18_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd18 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd19_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd19 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd20_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd20 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd21_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd21 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd22_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd22 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 964 : 0 <= d0 <= 478 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> (485 + d0) : d0 = 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_964();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd23 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
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
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
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
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd6_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd7_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd8_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 965 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd9_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
//	img_img_update_0_write2
//	img_img_update_0_write3
inline void img_img_update_0_write_bundle_write(hw_uint<64>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write1_res = img_update_0_write.extract<16, 31>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write2_res = img_update_0_write.extract<32, 47>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write3_res = img_update_0_write.extract<48, 63>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1);
}

// mag_x_update_0_read
//	mag_x_rd0
//	mag_x_rd1
//	mag_x_rd2
//	mag_x_rd3
//	mag_x_rd4
//	mag_x_rd5
//	mag_x_rd6
//	mag_x_rd7
//	mag_x_rd8
//	mag_x_rd9
//	mag_x_rd10
//	mag_x_rd11
//	mag_x_rd12
//	mag_x_rd13
//	mag_x_rd14
//	mag_x_rd15
//	mag_x_rd16
//	mag_x_rd17
//	mag_x_rd18
//	mag_x_rd19
//	mag_x_rd20
//	mag_x_rd21
//	mag_x_rd22
//	mag_x_rd23
inline hw_uint<384> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 24
    // mag_x_rd0
    // mag_x_rd1
    // mag_x_rd2
    // mag_x_rd3
    // mag_x_rd4
    // mag_x_rd5
    // mag_x_rd6
    // mag_x_rd7
    // mag_x_rd8
    // mag_x_rd9
    // mag_x_rd10
    // mag_x_rd11
    // mag_x_rd12
    // mag_x_rd13
    // mag_x_rd14
    // mag_x_rd15
    // mag_x_rd16
    // mag_x_rd17
    // mag_x_rd18
    // mag_x_rd19
    // mag_x_rd20
    // mag_x_rd21
    // mag_x_rd22
    // mag_x_rd23

	hw_uint<384> result;
	hw_uint<16> mag_x_rd0_res = mag_x_rd0_select(img, d0, d1);
	set_at<0, 384>(result, mag_x_rd0_res);
	hw_uint<16> mag_x_rd1_res = mag_x_rd1_select(img, d0, d1);
	set_at<16, 384>(result, mag_x_rd1_res);
	hw_uint<16> mag_x_rd2_res = mag_x_rd2_select(img, d0, d1);
	set_at<32, 384>(result, mag_x_rd2_res);
	hw_uint<16> mag_x_rd3_res = mag_x_rd3_select(img, d0, d1);
	set_at<48, 384>(result, mag_x_rd3_res);
	hw_uint<16> mag_x_rd4_res = mag_x_rd4_select(img, d0, d1);
	set_at<64, 384>(result, mag_x_rd4_res);
	hw_uint<16> mag_x_rd5_res = mag_x_rd5_select(img, d0, d1);
	set_at<80, 384>(result, mag_x_rd5_res);
	hw_uint<16> mag_x_rd6_res = mag_x_rd6_select(img, d0, d1);
	set_at<96, 384>(result, mag_x_rd6_res);
	hw_uint<16> mag_x_rd7_res = mag_x_rd7_select(img, d0, d1);
	set_at<112, 384>(result, mag_x_rd7_res);
	hw_uint<16> mag_x_rd8_res = mag_x_rd8_select(img, d0, d1);
	set_at<128, 384>(result, mag_x_rd8_res);
	hw_uint<16> mag_x_rd9_res = mag_x_rd9_select(img, d0, d1);
	set_at<144, 384>(result, mag_x_rd9_res);
	hw_uint<16> mag_x_rd10_res = mag_x_rd10_select(img, d0, d1);
	set_at<160, 384>(result, mag_x_rd10_res);
	hw_uint<16> mag_x_rd11_res = mag_x_rd11_select(img, d0, d1);
	set_at<176, 384>(result, mag_x_rd11_res);
	hw_uint<16> mag_x_rd12_res = mag_x_rd12_select(img, d0, d1);
	set_at<192, 384>(result, mag_x_rd12_res);
	hw_uint<16> mag_x_rd13_res = mag_x_rd13_select(img, d0, d1);
	set_at<208, 384>(result, mag_x_rd13_res);
	hw_uint<16> mag_x_rd14_res = mag_x_rd14_select(img, d0, d1);
	set_at<224, 384>(result, mag_x_rd14_res);
	hw_uint<16> mag_x_rd15_res = mag_x_rd15_select(img, d0, d1);
	set_at<240, 384>(result, mag_x_rd15_res);
	hw_uint<16> mag_x_rd16_res = mag_x_rd16_select(img, d0, d1);
	set_at<256, 384>(result, mag_x_rd16_res);
	hw_uint<16> mag_x_rd17_res = mag_x_rd17_select(img, d0, d1);
	set_at<272, 384>(result, mag_x_rd17_res);
	hw_uint<16> mag_x_rd18_res = mag_x_rd18_select(img, d0, d1);
	set_at<288, 384>(result, mag_x_rd18_res);
	hw_uint<16> mag_x_rd19_res = mag_x_rd19_select(img, d0, d1);
	set_at<304, 384>(result, mag_x_rd19_res);
	hw_uint<16> mag_x_rd20_res = mag_x_rd20_select(img, d0, d1);
	set_at<320, 384>(result, mag_x_rd20_res);
	hw_uint<16> mag_x_rd21_res = mag_x_rd21_select(img, d0, d1);
	set_at<336, 384>(result, mag_x_rd21_res);
	hw_uint<16> mag_x_rd22_res = mag_x_rd22_select(img, d0, d1);
	set_at<352, 384>(result, mag_x_rd22_res);
	hw_uint<16> mag_x_rd23_res = mag_x_rd23_select(img, d0, d1);
	set_at<368, 384>(result, mag_x_rd23_res);
	return result;
}

// mag_y_update_0_read
//	mag_y_rd0
//	mag_y_rd1
//	mag_y_rd2
//	mag_y_rd3
//	mag_y_rd4
//	mag_y_rd5
//	mag_y_rd6
//	mag_y_rd7
//	mag_y_rd8
//	mag_y_rd9
//	mag_y_rd10
//	mag_y_rd11
//	mag_y_rd12
//	mag_y_rd13
//	mag_y_rd14
//	mag_y_rd15
//	mag_y_rd16
//	mag_y_rd17
//	mag_y_rd18
//	mag_y_rd19
//	mag_y_rd20
//	mag_y_rd21
//	mag_y_rd22
//	mag_y_rd23
inline hw_uint<384> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 24
    // mag_y_rd0
    // mag_y_rd1
    // mag_y_rd2
    // mag_y_rd3
    // mag_y_rd4
    // mag_y_rd5
    // mag_y_rd6
    // mag_y_rd7
    // mag_y_rd8
    // mag_y_rd9
    // mag_y_rd10
    // mag_y_rd11
    // mag_y_rd12
    // mag_y_rd13
    // mag_y_rd14
    // mag_y_rd15
    // mag_y_rd16
    // mag_y_rd17
    // mag_y_rd18
    // mag_y_rd19
    // mag_y_rd20
    // mag_y_rd21
    // mag_y_rd22
    // mag_y_rd23

	hw_uint<384> result;
	hw_uint<16> mag_y_rd0_res = mag_y_rd0_select(img, d0, d1);
	set_at<0, 384>(result, mag_y_rd0_res);
	hw_uint<16> mag_y_rd1_res = mag_y_rd1_select(img, d0, d1);
	set_at<16, 384>(result, mag_y_rd1_res);
	hw_uint<16> mag_y_rd2_res = mag_y_rd2_select(img, d0, d1);
	set_at<32, 384>(result, mag_y_rd2_res);
	hw_uint<16> mag_y_rd3_res = mag_y_rd3_select(img, d0, d1);
	set_at<48, 384>(result, mag_y_rd3_res);
	hw_uint<16> mag_y_rd4_res = mag_y_rd4_select(img, d0, d1);
	set_at<64, 384>(result, mag_y_rd4_res);
	hw_uint<16> mag_y_rd5_res = mag_y_rd5_select(img, d0, d1);
	set_at<80, 384>(result, mag_y_rd5_res);
	hw_uint<16> mag_y_rd6_res = mag_y_rd6_select(img, d0, d1);
	set_at<96, 384>(result, mag_y_rd6_res);
	hw_uint<16> mag_y_rd7_res = mag_y_rd7_select(img, d0, d1);
	set_at<112, 384>(result, mag_y_rd7_res);
	hw_uint<16> mag_y_rd8_res = mag_y_rd8_select(img, d0, d1);
	set_at<128, 384>(result, mag_y_rd8_res);
	hw_uint<16> mag_y_rd9_res = mag_y_rd9_select(img, d0, d1);
	set_at<144, 384>(result, mag_y_rd9_res);
	hw_uint<16> mag_y_rd10_res = mag_y_rd10_select(img, d0, d1);
	set_at<160, 384>(result, mag_y_rd10_res);
	hw_uint<16> mag_y_rd11_res = mag_y_rd11_select(img, d0, d1);
	set_at<176, 384>(result, mag_y_rd11_res);
	hw_uint<16> mag_y_rd12_res = mag_y_rd12_select(img, d0, d1);
	set_at<192, 384>(result, mag_y_rd12_res);
	hw_uint<16> mag_y_rd13_res = mag_y_rd13_select(img, d0, d1);
	set_at<208, 384>(result, mag_y_rd13_res);
	hw_uint<16> mag_y_rd14_res = mag_y_rd14_select(img, d0, d1);
	set_at<224, 384>(result, mag_y_rd14_res);
	hw_uint<16> mag_y_rd15_res = mag_y_rd15_select(img, d0, d1);
	set_at<240, 384>(result, mag_y_rd15_res);
	hw_uint<16> mag_y_rd16_res = mag_y_rd16_select(img, d0, d1);
	set_at<256, 384>(result, mag_y_rd16_res);
	hw_uint<16> mag_y_rd17_res = mag_y_rd17_select(img, d0, d1);
	set_at<272, 384>(result, mag_y_rd17_res);
	hw_uint<16> mag_y_rd18_res = mag_y_rd18_select(img, d0, d1);
	set_at<288, 384>(result, mag_y_rd18_res);
	hw_uint<16> mag_y_rd19_res = mag_y_rd19_select(img, d0, d1);
	set_at<304, 384>(result, mag_y_rd19_res);
	hw_uint<16> mag_y_rd20_res = mag_y_rd20_select(img, d0, d1);
	set_at<320, 384>(result, mag_y_rd20_res);
	hw_uint<16> mag_y_rd21_res = mag_y_rd21_select(img, d0, d1);
	set_at<336, 384>(result, mag_y_rd21_res);
	hw_uint<16> mag_y_rd22_res = mag_y_rd22_select(img, d0, d1);
	set_at<352, 384>(result, mag_y_rd22_res);
	hw_uint<16> mag_y_rd23_res = mag_y_rd23_select(img, d0, d1);
	set_at<368, 384>(result, mag_y_rd23_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct mag_x_mag_x_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct mag_x_mag_x_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct mag_x_mag_x_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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
  mag_x_mag_x_update_0_write1_merged_banks_1_cache mag_x_mag_x_update_0_write1_merged_banks_1;
  mag_x_mag_x_update_0_write2_merged_banks_1_cache mag_x_mag_x_update_0_write2_merged_banks_1;
  mag_x_mag_x_update_0_write3_merged_banks_1_cache mag_x_mag_x_update_0_write3_merged_banks_1;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<16>& mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write0_merged_banks_1.push(mag_x_mag_x_update_0_write0);
}

inline void mag_x_mag_x_update_0_write1_write(hw_uint<16>& mag_x_mag_x_update_0_write1, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write1_merged_banks_1.push(mag_x_mag_x_update_0_write1);
}

inline void mag_x_mag_x_update_0_write2_write(hw_uint<16>& mag_x_mag_x_update_0_write2, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write2_merged_banks_1.push(mag_x_mag_x_update_0_write2);
}

inline void mag_x_mag_x_update_0_write3_write(hw_uint<16>& mag_x_mag_x_update_0_write3, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write3_merged_banks_1.push(mag_x_mag_x_update_0_write3);
}

inline hw_uint<16> sblr30_4_rd0_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd0 read pattern: { sblr30_4_update_0[d0, d1] -> mag_x[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd1_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd1 read pattern: { sblr30_4_update_0[d0, d1] -> mag_x[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd2_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd2 read pattern: { sblr30_4_update_0[d0, d1] -> mag_x[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write2 = mag_x.mag_x_mag_x_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd3_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd3 read pattern: { sblr30_4_update_0[d0, d1] -> mag_x[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write3 = mag_x.mag_x_mag_x_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// mag_x_update_0_write
//	mag_x_mag_x_update_0_write0
//	mag_x_mag_x_update_0_write1
//	mag_x_mag_x_update_0_write2
//	mag_x_mag_x_update_0_write3
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<64>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1) {
	hw_uint<16> mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 15>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<16, 31>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write2_res = mag_x_update_0_write.extract<32, 47>();
	mag_x_mag_x_update_0_write2_write(mag_x_mag_x_update_0_write2_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write3_res = mag_x_update_0_write.extract<48, 63>();
	mag_x_mag_x_update_0_write3_write(mag_x_mag_x_update_0_write3_res, mag_x, d0, d1);
}

// sblr30_4_update_0_read
//	sblr30_4_rd0
//	sblr30_4_rd1
//	sblr30_4_rd2
//	sblr30_4_rd3
inline hw_uint<64> mag_x_sblr30_4_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1) {
  // # of ports in bundle: 4
    // sblr30_4_rd0
    // sblr30_4_rd1
    // sblr30_4_rd2
    // sblr30_4_rd3

	hw_uint<64> result;
	hw_uint<16> sblr30_4_rd0_res = sblr30_4_rd0_select(mag_x, d0, d1);
	set_at<0, 64>(result, sblr30_4_rd0_res);
	hw_uint<16> sblr30_4_rd1_res = sblr30_4_rd1_select(mag_x, d0, d1);
	set_at<16, 64>(result, sblr30_4_rd1_res);
	hw_uint<16> sblr30_4_rd2_res = sblr30_4_rd2_select(mag_x, d0, d1);
	set_at<32, 64>(result, sblr30_4_rd2_res);
	hw_uint<16> sblr30_4_rd3_res = sblr30_4_rd3_select(mag_x, d0, d1);
	set_at<48, 64>(result, sblr30_4_rd3_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct mag_y_mag_y_update_0_write1_merged_banks_1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct mag_y_mag_y_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct mag_y_mag_y_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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
  mag_y_mag_y_update_0_write1_merged_banks_1_cache mag_y_mag_y_update_0_write1_merged_banks_1;
  mag_y_mag_y_update_0_write2_merged_banks_1_cache mag_y_mag_y_update_0_write2_merged_banks_1;
  mag_y_mag_y_update_0_write3_merged_banks_1_cache mag_y_mag_y_update_0_write3_merged_banks_1;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<16>& mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write0_merged_banks_1.push(mag_y_mag_y_update_0_write0);
}

inline void mag_y_mag_y_update_0_write1_write(hw_uint<16>& mag_y_mag_y_update_0_write1, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write1_merged_banks_1.push(mag_y_mag_y_update_0_write1);
}

inline void mag_y_mag_y_update_0_write2_write(hw_uint<16>& mag_y_mag_y_update_0_write2, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write2_merged_banks_1.push(mag_y_mag_y_update_0_write2);
}

inline void mag_y_mag_y_update_0_write3_write(hw_uint<16>& mag_y_mag_y_update_0_write3, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write3_merged_banks_1.push(mag_y_mag_y_update_0_write3);
}

inline hw_uint<16> sblr30_4_rd0_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd0 read pattern: { sblr30_4_update_0[d0, d1] -> mag_y[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd1_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd1 read pattern: { sblr30_4_update_0[d0, d1] -> mag_y[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd2_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd2 read pattern: { sblr30_4_update_0[d0, d1] -> mag_y[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write2 = mag_y.mag_y_mag_y_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sblr30_4_rd3_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sblr30_4_rd3 read pattern: { sblr30_4_update_0[d0, d1] -> mag_y[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sblr30_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write3 = mag_y.mag_y_mag_y_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// mag_y_update_0_write
//	mag_y_mag_y_update_0_write0
//	mag_y_mag_y_update_0_write1
//	mag_y_mag_y_update_0_write2
//	mag_y_mag_y_update_0_write3
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<64>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1) {
	hw_uint<16> mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 15>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<16, 31>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write2_res = mag_y_update_0_write.extract<32, 47>();
	mag_y_mag_y_update_0_write2_write(mag_y_mag_y_update_0_write2_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write3_res = mag_y_update_0_write.extract<48, 63>();
	mag_y_mag_y_update_0_write3_write(mag_y_mag_y_update_0_write3_res, mag_y, d0, d1);
}

// sblr30_4_update_0_read
//	sblr30_4_rd0
//	sblr30_4_rd1
//	sblr30_4_rd2
//	sblr30_4_rd3
inline hw_uint<64> mag_y_sblr30_4_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1) {
  // # of ports in bundle: 4
    // sblr30_4_rd0
    // sblr30_4_rd1
    // sblr30_4_rd2
    // sblr30_4_rd3

	hw_uint<64> result;
	hw_uint<16> sblr30_4_rd0_res = sblr30_4_rd0_select(mag_y, d0, d1);
	set_at<0, 64>(result, sblr30_4_rd0_res);
	hw_uint<16> sblr30_4_rd1_res = sblr30_4_rd1_select(mag_y, d0, d1);
	set_at<16, 64>(result, sblr30_4_rd1_res);
	hw_uint<16> sblr30_4_rd2_res = sblr30_4_rd2_select(mag_y, d0, d1);
	set_at<32, 64>(result, sblr30_4_rd2_res);
	hw_uint<16> sblr30_4_rd3_res = sblr30_4_rd3_select(mag_y, d0, d1);
	set_at<48, 64>(result, sblr30_4_rd3_res);
	return result;
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */off_chip_img, img_cache& img, int d0, int d1) {
	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_4(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0(img_cache& img, mag_y_cache& mag_y, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_4(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(compute_result, mag_y, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_4(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(compute_result, mag_x, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sblr30_4_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */sblr30_4, int d0, int d1) {
	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sblr30_4_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sblr30_4_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sblr30_4_generated_compute_unrolled_4(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sblr30_4
	sblr30_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sblr30_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */off_chip_img, HWStream<hw_uint<64> >& /* get_args num ports = 4 */sblr30_4, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sblr30_4_opt_debug.csv");
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

  for (int epoch = 0; epoch < 30; epoch++) {
	  // Schedules...
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mag_x_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // mag_y_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // off_chip_img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // sblr30_4_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
	for (int c0 = -1; c0 <= 1080; c0++) {
	  for (int c1 = -1; c1 <= 480; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 480) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1080) && ((c0 - 0) % 1 == 0)) {
	img_update_0(off_chip_img, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_y_update_0(img, mag_y, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_x_update_0(img, mag_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 480) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	sblr30_4_update_0(mag_x, mag_y, sblr30_4, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sblr30_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */off_chip_img, HWStream<hw_uint<64> >& /* get_args num ports = 4 */sblr30_4) {

  sblr30_4_opt(off_chip_img, sblr30_4, 1);
}
#ifdef __VIVADO_SYNTH__
#include "sblr30_4_opt.h"

const int img_update_0_read_num_transfers = 521524;
const int sblr30_4_update_0_write_num_transfers = 518400;


extern "C" {

static void read_img_update_0_read(hw_uint<64>* input, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = img_update_0_read_num_transfers*30;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_sblr30_4_update_0_write(hw_uint<64>* output, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = sblr30_4_update_0_write_num_transfers*30;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void sblr30_4_opt_accel(hw_uint<64>* img_update_0_read, hw_uint<64>* sblr30_4_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sblr30_4_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = sblr30_4_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<64> > img_update_0_read_channel;
  static HWStream<hw_uint<64> > sblr30_4_update_0_write_channel;

  read_img_update_0_read(img_update_0_read, img_update_0_read_channel, size);

  sblr30_4_opt(img_update_0_read_channel, sblr30_4_update_0_write_channel, size);

  write_sblr30_4_update_0_write(sblr30_4_update_0_write, sblr30_4_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

