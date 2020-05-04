#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "sbl_ur_8_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[-8, 1920], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 240> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 240> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_242() {
		return f4;
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}

	inline hw_uint<16> peek_483() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_484() {
		return f8;
	}

	inline hw_uint<16> peek_485() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
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
	// RAM Box: {[-7, 1921], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
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
	// RAM Box: {[-6, 1922], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
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
	// RAM Box: {[-5, 1923], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write4_merged_banks_12_cache {
	// RAM Box: {[-4, 1924], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write5_merged_banks_12_cache {
	// RAM Box: {[-3, 1925], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write6_merged_banks_12_cache {
	// RAM Box: {[-2, 1926], [-1, 1080]}
	// Capacity: 486
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 241> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 241> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_243() {
		return f4;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_485() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 241
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 241 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write7_merged_banks_12_cache {
	// RAM Box: {[-1, 1927], [-1, 1080]}
	// Capacity: 487
	// # of read delays: 7
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 240> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 240> f9;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}

	inline hw_uint<16> peek_244() {
		return f8;
	}

	inline hw_uint<16> peek_484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_485() {
		return f10;
	}

	inline hw_uint<16> peek_486() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 240
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 240 reading from capacity: 1
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
  img_img_update_0_write4_merged_banks_12_cache img_img_update_0_write4_merged_banks_12;
  img_img_update_0_write5_merged_banks_12_cache img_img_update_0_write5_merged_banks_12;
  img_img_update_0_write6_merged_banks_12_cache img_img_update_0_write6_merged_banks_12;
  img_img_update_0_write7_merged_banks_12_cache img_img_update_0_write7_merged_banks_12;
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

inline void img_img_update_0_write4_write(hw_uint<16>& img_img_update_0_write4, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write4_merged_banks_12.push(img_img_update_0_write4);
}

inline void img_img_update_0_write5_write(hw_uint<16>& img_img_update_0_write5, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write5_merged_banks_12.push(img_img_update_0_write5);
}

inline void img_img_update_0_write6_write(hw_uint<16>& img_img_update_0_write6, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write6_merged_banks_12.push(img_img_update_0_write6);
}

inline void img_img_update_0_write7_write(hw_uint<16>& img_img_update_0_write7, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write7_merged_banks_12.push(img_img_update_0_write7);
}

inline hw_uint<16> mag_x_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 486 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_486();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 244 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_244();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_243();
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
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd12 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_485();
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
  // mag_x_rd13 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_243();
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
  // mag_x_rd14 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd15 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_485();
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
  // mag_x_rd16 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_243();
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
  // mag_x_rd17 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd18 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_485();
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
  // mag_x_rd19 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_243();
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
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 2 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_2();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd20_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd20 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd21 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_485();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd22_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd22 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_243();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd23 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd24_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd24 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_485();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd25_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd25 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_243();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd26_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd26 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd27_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd27 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_485();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd28_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd28 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_243();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd29_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd29 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_485();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd30_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd30 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_485();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd31_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd31 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_243();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd32_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd32 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd33_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd33 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_485();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd34_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd34 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_243();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd35_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd35 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd36_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd36 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_485();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd37_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd37 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_243();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd38_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd38 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd39_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd39 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_485();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_243();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd40_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd40 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_243();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd41_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd41 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd42_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd42 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_485();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd43_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd43 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_243();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd44_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd44 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd45_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd45 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 484 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (245 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_484();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd46_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd46 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 242 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> (3 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_242();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_x_rd47_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd47 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
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
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_485();
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
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 243 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_243();
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
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_x_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_485();
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
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 486 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_486();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 2 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_2();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd10_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_485();
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
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd12 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_485();
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
  // mag_y_rd13 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd14 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_485();
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
  // mag_y_rd15 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd16 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_485();
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
  // mag_y_rd17 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd18 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_485();
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
  // mag_y_rd19 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_485();
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
  // mag_y_rd20 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_485();
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
  // mag_y_rd21 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd22 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_485();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd23_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd23 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd24_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd24 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_485();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd25_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd25 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd26_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd26 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_485();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd27_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd27 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd28_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd28 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_485();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd29_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd29 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd30_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd30 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_485();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd31_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd31 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd32_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd32 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_485();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd33_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd33 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd34_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd34 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_485();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd35_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd35 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd36_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd36 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_485();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd37_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd37 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd38_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd38 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_485();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd39_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd39 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_485();
  return value_img_img_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd40_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd40 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_485();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd41_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd41 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd42_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd42 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_485();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd43_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd43 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd44_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd44 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_485();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd45_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd45 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd46_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd46 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 484 : 0 <= d0 <= 238 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> (245 + d0) : d0 = 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_484();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> mag_y_rd47_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd47 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
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
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_485();
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
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, -1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 485 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_485();
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
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 8d0, 1 + d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 240 and -1 <= d1 <= 1080 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
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
//	img_img_update_0_write4
//	img_img_update_0_write5
//	img_img_update_0_write6
//	img_img_update_0_write7
inline void img_img_update_0_write_bundle_write(hw_uint<128>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write1_res = img_update_0_write.extract<16, 31>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write2_res = img_update_0_write.extract<32, 47>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write3_res = img_update_0_write.extract<48, 63>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write4_res = img_update_0_write.extract<64, 79>();
	img_img_update_0_write4_write(img_img_update_0_write4_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write5_res = img_update_0_write.extract<80, 95>();
	img_img_update_0_write5_write(img_img_update_0_write5_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write6_res = img_update_0_write.extract<96, 111>();
	img_img_update_0_write6_write(img_img_update_0_write6_res, img, d0, d1);
	hw_uint<16> img_img_update_0_write7_res = img_update_0_write.extract<112, 127>();
	img_img_update_0_write7_write(img_img_update_0_write7_res, img, d0, d1);
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
//	mag_x_rd24
//	mag_x_rd25
//	mag_x_rd26
//	mag_x_rd27
//	mag_x_rd28
//	mag_x_rd29
//	mag_x_rd30
//	mag_x_rd31
//	mag_x_rd32
//	mag_x_rd33
//	mag_x_rd34
//	mag_x_rd35
//	mag_x_rd36
//	mag_x_rd37
//	mag_x_rd38
//	mag_x_rd39
//	mag_x_rd40
//	mag_x_rd41
//	mag_x_rd42
//	mag_x_rd43
//	mag_x_rd44
//	mag_x_rd45
//	mag_x_rd46
//	mag_x_rd47
inline hw_uint<768> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 48
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
    // mag_x_rd24
    // mag_x_rd25
    // mag_x_rd26
    // mag_x_rd27
    // mag_x_rd28
    // mag_x_rd29
    // mag_x_rd30
    // mag_x_rd31
    // mag_x_rd32
    // mag_x_rd33
    // mag_x_rd34
    // mag_x_rd35
    // mag_x_rd36
    // mag_x_rd37
    // mag_x_rd38
    // mag_x_rd39
    // mag_x_rd40
    // mag_x_rd41
    // mag_x_rd42
    // mag_x_rd43
    // mag_x_rd44
    // mag_x_rd45
    // mag_x_rd46
    // mag_x_rd47

	hw_uint<768> result;
	hw_uint<16> mag_x_rd0_res = mag_x_rd0_select(img, d0, d1);
	set_at<0, 768>(result, mag_x_rd0_res);
	hw_uint<16> mag_x_rd1_res = mag_x_rd1_select(img, d0, d1);
	set_at<16, 768>(result, mag_x_rd1_res);
	hw_uint<16> mag_x_rd2_res = mag_x_rd2_select(img, d0, d1);
	set_at<32, 768>(result, mag_x_rd2_res);
	hw_uint<16> mag_x_rd3_res = mag_x_rd3_select(img, d0, d1);
	set_at<48, 768>(result, mag_x_rd3_res);
	hw_uint<16> mag_x_rd4_res = mag_x_rd4_select(img, d0, d1);
	set_at<64, 768>(result, mag_x_rd4_res);
	hw_uint<16> mag_x_rd5_res = mag_x_rd5_select(img, d0, d1);
	set_at<80, 768>(result, mag_x_rd5_res);
	hw_uint<16> mag_x_rd6_res = mag_x_rd6_select(img, d0, d1);
	set_at<96, 768>(result, mag_x_rd6_res);
	hw_uint<16> mag_x_rd7_res = mag_x_rd7_select(img, d0, d1);
	set_at<112, 768>(result, mag_x_rd7_res);
	hw_uint<16> mag_x_rd8_res = mag_x_rd8_select(img, d0, d1);
	set_at<128, 768>(result, mag_x_rd8_res);
	hw_uint<16> mag_x_rd9_res = mag_x_rd9_select(img, d0, d1);
	set_at<144, 768>(result, mag_x_rd9_res);
	hw_uint<16> mag_x_rd10_res = mag_x_rd10_select(img, d0, d1);
	set_at<160, 768>(result, mag_x_rd10_res);
	hw_uint<16> mag_x_rd11_res = mag_x_rd11_select(img, d0, d1);
	set_at<176, 768>(result, mag_x_rd11_res);
	hw_uint<16> mag_x_rd12_res = mag_x_rd12_select(img, d0, d1);
	set_at<192, 768>(result, mag_x_rd12_res);
	hw_uint<16> mag_x_rd13_res = mag_x_rd13_select(img, d0, d1);
	set_at<208, 768>(result, mag_x_rd13_res);
	hw_uint<16> mag_x_rd14_res = mag_x_rd14_select(img, d0, d1);
	set_at<224, 768>(result, mag_x_rd14_res);
	hw_uint<16> mag_x_rd15_res = mag_x_rd15_select(img, d0, d1);
	set_at<240, 768>(result, mag_x_rd15_res);
	hw_uint<16> mag_x_rd16_res = mag_x_rd16_select(img, d0, d1);
	set_at<256, 768>(result, mag_x_rd16_res);
	hw_uint<16> mag_x_rd17_res = mag_x_rd17_select(img, d0, d1);
	set_at<272, 768>(result, mag_x_rd17_res);
	hw_uint<16> mag_x_rd18_res = mag_x_rd18_select(img, d0, d1);
	set_at<288, 768>(result, mag_x_rd18_res);
	hw_uint<16> mag_x_rd19_res = mag_x_rd19_select(img, d0, d1);
	set_at<304, 768>(result, mag_x_rd19_res);
	hw_uint<16> mag_x_rd20_res = mag_x_rd20_select(img, d0, d1);
	set_at<320, 768>(result, mag_x_rd20_res);
	hw_uint<16> mag_x_rd21_res = mag_x_rd21_select(img, d0, d1);
	set_at<336, 768>(result, mag_x_rd21_res);
	hw_uint<16> mag_x_rd22_res = mag_x_rd22_select(img, d0, d1);
	set_at<352, 768>(result, mag_x_rd22_res);
	hw_uint<16> mag_x_rd23_res = mag_x_rd23_select(img, d0, d1);
	set_at<368, 768>(result, mag_x_rd23_res);
	hw_uint<16> mag_x_rd24_res = mag_x_rd24_select(img, d0, d1);
	set_at<384, 768>(result, mag_x_rd24_res);
	hw_uint<16> mag_x_rd25_res = mag_x_rd25_select(img, d0, d1);
	set_at<400, 768>(result, mag_x_rd25_res);
	hw_uint<16> mag_x_rd26_res = mag_x_rd26_select(img, d0, d1);
	set_at<416, 768>(result, mag_x_rd26_res);
	hw_uint<16> mag_x_rd27_res = mag_x_rd27_select(img, d0, d1);
	set_at<432, 768>(result, mag_x_rd27_res);
	hw_uint<16> mag_x_rd28_res = mag_x_rd28_select(img, d0, d1);
	set_at<448, 768>(result, mag_x_rd28_res);
	hw_uint<16> mag_x_rd29_res = mag_x_rd29_select(img, d0, d1);
	set_at<464, 768>(result, mag_x_rd29_res);
	hw_uint<16> mag_x_rd30_res = mag_x_rd30_select(img, d0, d1);
	set_at<480, 768>(result, mag_x_rd30_res);
	hw_uint<16> mag_x_rd31_res = mag_x_rd31_select(img, d0, d1);
	set_at<496, 768>(result, mag_x_rd31_res);
	hw_uint<16> mag_x_rd32_res = mag_x_rd32_select(img, d0, d1);
	set_at<512, 768>(result, mag_x_rd32_res);
	hw_uint<16> mag_x_rd33_res = mag_x_rd33_select(img, d0, d1);
	set_at<528, 768>(result, mag_x_rd33_res);
	hw_uint<16> mag_x_rd34_res = mag_x_rd34_select(img, d0, d1);
	set_at<544, 768>(result, mag_x_rd34_res);
	hw_uint<16> mag_x_rd35_res = mag_x_rd35_select(img, d0, d1);
	set_at<560, 768>(result, mag_x_rd35_res);
	hw_uint<16> mag_x_rd36_res = mag_x_rd36_select(img, d0, d1);
	set_at<576, 768>(result, mag_x_rd36_res);
	hw_uint<16> mag_x_rd37_res = mag_x_rd37_select(img, d0, d1);
	set_at<592, 768>(result, mag_x_rd37_res);
	hw_uint<16> mag_x_rd38_res = mag_x_rd38_select(img, d0, d1);
	set_at<608, 768>(result, mag_x_rd38_res);
	hw_uint<16> mag_x_rd39_res = mag_x_rd39_select(img, d0, d1);
	set_at<624, 768>(result, mag_x_rd39_res);
	hw_uint<16> mag_x_rd40_res = mag_x_rd40_select(img, d0, d1);
	set_at<640, 768>(result, mag_x_rd40_res);
	hw_uint<16> mag_x_rd41_res = mag_x_rd41_select(img, d0, d1);
	set_at<656, 768>(result, mag_x_rd41_res);
	hw_uint<16> mag_x_rd42_res = mag_x_rd42_select(img, d0, d1);
	set_at<672, 768>(result, mag_x_rd42_res);
	hw_uint<16> mag_x_rd43_res = mag_x_rd43_select(img, d0, d1);
	set_at<688, 768>(result, mag_x_rd43_res);
	hw_uint<16> mag_x_rd44_res = mag_x_rd44_select(img, d0, d1);
	set_at<704, 768>(result, mag_x_rd44_res);
	hw_uint<16> mag_x_rd45_res = mag_x_rd45_select(img, d0, d1);
	set_at<720, 768>(result, mag_x_rd45_res);
	hw_uint<16> mag_x_rd46_res = mag_x_rd46_select(img, d0, d1);
	set_at<736, 768>(result, mag_x_rd46_res);
	hw_uint<16> mag_x_rd47_res = mag_x_rd47_select(img, d0, d1);
	set_at<752, 768>(result, mag_x_rd47_res);
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
//	mag_y_rd24
//	mag_y_rd25
//	mag_y_rd26
//	mag_y_rd27
//	mag_y_rd28
//	mag_y_rd29
//	mag_y_rd30
//	mag_y_rd31
//	mag_y_rd32
//	mag_y_rd33
//	mag_y_rd34
//	mag_y_rd35
//	mag_y_rd36
//	mag_y_rd37
//	mag_y_rd38
//	mag_y_rd39
//	mag_y_rd40
//	mag_y_rd41
//	mag_y_rd42
//	mag_y_rd43
//	mag_y_rd44
//	mag_y_rd45
//	mag_y_rd46
//	mag_y_rd47
inline hw_uint<768> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 48
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
    // mag_y_rd24
    // mag_y_rd25
    // mag_y_rd26
    // mag_y_rd27
    // mag_y_rd28
    // mag_y_rd29
    // mag_y_rd30
    // mag_y_rd31
    // mag_y_rd32
    // mag_y_rd33
    // mag_y_rd34
    // mag_y_rd35
    // mag_y_rd36
    // mag_y_rd37
    // mag_y_rd38
    // mag_y_rd39
    // mag_y_rd40
    // mag_y_rd41
    // mag_y_rd42
    // mag_y_rd43
    // mag_y_rd44
    // mag_y_rd45
    // mag_y_rd46
    // mag_y_rd47

	hw_uint<768> result;
	hw_uint<16> mag_y_rd0_res = mag_y_rd0_select(img, d0, d1);
	set_at<0, 768>(result, mag_y_rd0_res);
	hw_uint<16> mag_y_rd1_res = mag_y_rd1_select(img, d0, d1);
	set_at<16, 768>(result, mag_y_rd1_res);
	hw_uint<16> mag_y_rd2_res = mag_y_rd2_select(img, d0, d1);
	set_at<32, 768>(result, mag_y_rd2_res);
	hw_uint<16> mag_y_rd3_res = mag_y_rd3_select(img, d0, d1);
	set_at<48, 768>(result, mag_y_rd3_res);
	hw_uint<16> mag_y_rd4_res = mag_y_rd4_select(img, d0, d1);
	set_at<64, 768>(result, mag_y_rd4_res);
	hw_uint<16> mag_y_rd5_res = mag_y_rd5_select(img, d0, d1);
	set_at<80, 768>(result, mag_y_rd5_res);
	hw_uint<16> mag_y_rd6_res = mag_y_rd6_select(img, d0, d1);
	set_at<96, 768>(result, mag_y_rd6_res);
	hw_uint<16> mag_y_rd7_res = mag_y_rd7_select(img, d0, d1);
	set_at<112, 768>(result, mag_y_rd7_res);
	hw_uint<16> mag_y_rd8_res = mag_y_rd8_select(img, d0, d1);
	set_at<128, 768>(result, mag_y_rd8_res);
	hw_uint<16> mag_y_rd9_res = mag_y_rd9_select(img, d0, d1);
	set_at<144, 768>(result, mag_y_rd9_res);
	hw_uint<16> mag_y_rd10_res = mag_y_rd10_select(img, d0, d1);
	set_at<160, 768>(result, mag_y_rd10_res);
	hw_uint<16> mag_y_rd11_res = mag_y_rd11_select(img, d0, d1);
	set_at<176, 768>(result, mag_y_rd11_res);
	hw_uint<16> mag_y_rd12_res = mag_y_rd12_select(img, d0, d1);
	set_at<192, 768>(result, mag_y_rd12_res);
	hw_uint<16> mag_y_rd13_res = mag_y_rd13_select(img, d0, d1);
	set_at<208, 768>(result, mag_y_rd13_res);
	hw_uint<16> mag_y_rd14_res = mag_y_rd14_select(img, d0, d1);
	set_at<224, 768>(result, mag_y_rd14_res);
	hw_uint<16> mag_y_rd15_res = mag_y_rd15_select(img, d0, d1);
	set_at<240, 768>(result, mag_y_rd15_res);
	hw_uint<16> mag_y_rd16_res = mag_y_rd16_select(img, d0, d1);
	set_at<256, 768>(result, mag_y_rd16_res);
	hw_uint<16> mag_y_rd17_res = mag_y_rd17_select(img, d0, d1);
	set_at<272, 768>(result, mag_y_rd17_res);
	hw_uint<16> mag_y_rd18_res = mag_y_rd18_select(img, d0, d1);
	set_at<288, 768>(result, mag_y_rd18_res);
	hw_uint<16> mag_y_rd19_res = mag_y_rd19_select(img, d0, d1);
	set_at<304, 768>(result, mag_y_rd19_res);
	hw_uint<16> mag_y_rd20_res = mag_y_rd20_select(img, d0, d1);
	set_at<320, 768>(result, mag_y_rd20_res);
	hw_uint<16> mag_y_rd21_res = mag_y_rd21_select(img, d0, d1);
	set_at<336, 768>(result, mag_y_rd21_res);
	hw_uint<16> mag_y_rd22_res = mag_y_rd22_select(img, d0, d1);
	set_at<352, 768>(result, mag_y_rd22_res);
	hw_uint<16> mag_y_rd23_res = mag_y_rd23_select(img, d0, d1);
	set_at<368, 768>(result, mag_y_rd23_res);
	hw_uint<16> mag_y_rd24_res = mag_y_rd24_select(img, d0, d1);
	set_at<384, 768>(result, mag_y_rd24_res);
	hw_uint<16> mag_y_rd25_res = mag_y_rd25_select(img, d0, d1);
	set_at<400, 768>(result, mag_y_rd25_res);
	hw_uint<16> mag_y_rd26_res = mag_y_rd26_select(img, d0, d1);
	set_at<416, 768>(result, mag_y_rd26_res);
	hw_uint<16> mag_y_rd27_res = mag_y_rd27_select(img, d0, d1);
	set_at<432, 768>(result, mag_y_rd27_res);
	hw_uint<16> mag_y_rd28_res = mag_y_rd28_select(img, d0, d1);
	set_at<448, 768>(result, mag_y_rd28_res);
	hw_uint<16> mag_y_rd29_res = mag_y_rd29_select(img, d0, d1);
	set_at<464, 768>(result, mag_y_rd29_res);
	hw_uint<16> mag_y_rd30_res = mag_y_rd30_select(img, d0, d1);
	set_at<480, 768>(result, mag_y_rd30_res);
	hw_uint<16> mag_y_rd31_res = mag_y_rd31_select(img, d0, d1);
	set_at<496, 768>(result, mag_y_rd31_res);
	hw_uint<16> mag_y_rd32_res = mag_y_rd32_select(img, d0, d1);
	set_at<512, 768>(result, mag_y_rd32_res);
	hw_uint<16> mag_y_rd33_res = mag_y_rd33_select(img, d0, d1);
	set_at<528, 768>(result, mag_y_rd33_res);
	hw_uint<16> mag_y_rd34_res = mag_y_rd34_select(img, d0, d1);
	set_at<544, 768>(result, mag_y_rd34_res);
	hw_uint<16> mag_y_rd35_res = mag_y_rd35_select(img, d0, d1);
	set_at<560, 768>(result, mag_y_rd35_res);
	hw_uint<16> mag_y_rd36_res = mag_y_rd36_select(img, d0, d1);
	set_at<576, 768>(result, mag_y_rd36_res);
	hw_uint<16> mag_y_rd37_res = mag_y_rd37_select(img, d0, d1);
	set_at<592, 768>(result, mag_y_rd37_res);
	hw_uint<16> mag_y_rd38_res = mag_y_rd38_select(img, d0, d1);
	set_at<608, 768>(result, mag_y_rd38_res);
	hw_uint<16> mag_y_rd39_res = mag_y_rd39_select(img, d0, d1);
	set_at<624, 768>(result, mag_y_rd39_res);
	hw_uint<16> mag_y_rd40_res = mag_y_rd40_select(img, d0, d1);
	set_at<640, 768>(result, mag_y_rd40_res);
	hw_uint<16> mag_y_rd41_res = mag_y_rd41_select(img, d0, d1);
	set_at<656, 768>(result, mag_y_rd41_res);
	hw_uint<16> mag_y_rd42_res = mag_y_rd42_select(img, d0, d1);
	set_at<672, 768>(result, mag_y_rd42_res);
	hw_uint<16> mag_y_rd43_res = mag_y_rd43_select(img, d0, d1);
	set_at<688, 768>(result, mag_y_rd43_res);
	hw_uint<16> mag_y_rd44_res = mag_y_rd44_select(img, d0, d1);
	set_at<704, 768>(result, mag_y_rd44_res);
	hw_uint<16> mag_y_rd45_res = mag_y_rd45_select(img, d0, d1);
	set_at<720, 768>(result, mag_y_rd45_res);
	hw_uint<16> mag_y_rd46_res = mag_y_rd46_select(img, d0, d1);
	set_at<736, 768>(result, mag_y_rd46_res);
	hw_uint<16> mag_y_rd47_res = mag_y_rd47_select(img, d0, d1);
	set_at<752, 768>(result, mag_y_rd47_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
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
	// RAM Box: {[0, 1913], [0, 1079]}
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
	// RAM Box: {[0, 1914], [0, 1079]}
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
	// RAM Box: {[0, 1915], [0, 1079]}
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

struct mag_x_mag_x_update_0_write4_merged_banks_1_cache {
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

struct mag_x_mag_x_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[0, 1917], [0, 1079]}
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

struct mag_x_mag_x_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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

struct mag_x_mag_x_update_0_write7_merged_banks_1_cache {
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
  mag_x_mag_x_update_0_write1_merged_banks_1_cache mag_x_mag_x_update_0_write1_merged_banks_1;
  mag_x_mag_x_update_0_write2_merged_banks_1_cache mag_x_mag_x_update_0_write2_merged_banks_1;
  mag_x_mag_x_update_0_write3_merged_banks_1_cache mag_x_mag_x_update_0_write3_merged_banks_1;
  mag_x_mag_x_update_0_write4_merged_banks_1_cache mag_x_mag_x_update_0_write4_merged_banks_1;
  mag_x_mag_x_update_0_write5_merged_banks_1_cache mag_x_mag_x_update_0_write5_merged_banks_1;
  mag_x_mag_x_update_0_write6_merged_banks_1_cache mag_x_mag_x_update_0_write6_merged_banks_1;
  mag_x_mag_x_update_0_write7_merged_banks_1_cache mag_x_mag_x_update_0_write7_merged_banks_1;
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

inline void mag_x_mag_x_update_0_write4_write(hw_uint<16>& mag_x_mag_x_update_0_write4, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write4_merged_banks_1.push(mag_x_mag_x_update_0_write4);
}

inline void mag_x_mag_x_update_0_write5_write(hw_uint<16>& mag_x_mag_x_update_0_write5, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write5_merged_banks_1.push(mag_x_mag_x_update_0_write5);
}

inline void mag_x_mag_x_update_0_write6_write(hw_uint<16>& mag_x_mag_x_update_0_write6, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write6_merged_banks_1.push(mag_x_mag_x_update_0_write6);
}

inline void mag_x_mag_x_update_0_write7_write(hw_uint<16>& mag_x_mag_x_update_0_write7, mag_x_cache& mag_x, int d0, int d1) {
  mag_x.mag_x_mag_x_update_0_write7_merged_banks_1.push(mag_x_mag_x_update_0_write7);
}

inline hw_uint<16> sbl_ur_8_rd0_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd0 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd1_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd1 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd2_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd2 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write2 = mag_x.mag_x_mag_x_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd3_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd3 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write3 = mag_x.mag_x_mag_x_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd4_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd4 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write4 = mag_x.mag_x_mag_x_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd5_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd5 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write5 = mag_x.mag_x_mag_x_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd6_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd6 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write6 = mag_x.mag_x_mag_x_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd7_select(mag_x_cache& mag_x, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd7 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_x[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_x_mag_x_update_0_write7 = mag_x.mag_x_mag_x_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write7;
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
//	mag_x_mag_x_update_0_write4
//	mag_x_mag_x_update_0_write5
//	mag_x_mag_x_update_0_write6
//	mag_x_mag_x_update_0_write7
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<128>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1) {
	hw_uint<16> mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 15>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<16, 31>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write2_res = mag_x_update_0_write.extract<32, 47>();
	mag_x_mag_x_update_0_write2_write(mag_x_mag_x_update_0_write2_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write3_res = mag_x_update_0_write.extract<48, 63>();
	mag_x_mag_x_update_0_write3_write(mag_x_mag_x_update_0_write3_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write4_res = mag_x_update_0_write.extract<64, 79>();
	mag_x_mag_x_update_0_write4_write(mag_x_mag_x_update_0_write4_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write5_res = mag_x_update_0_write.extract<80, 95>();
	mag_x_mag_x_update_0_write5_write(mag_x_mag_x_update_0_write5_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write6_res = mag_x_update_0_write.extract<96, 111>();
	mag_x_mag_x_update_0_write6_write(mag_x_mag_x_update_0_write6_res, mag_x, d0, d1);
	hw_uint<16> mag_x_mag_x_update_0_write7_res = mag_x_update_0_write.extract<112, 127>();
	mag_x_mag_x_update_0_write7_write(mag_x_mag_x_update_0_write7_res, mag_x, d0, d1);
}

// sbl_ur_8_update_0_read
//	sbl_ur_8_rd0
//	sbl_ur_8_rd1
//	sbl_ur_8_rd2
//	sbl_ur_8_rd3
//	sbl_ur_8_rd4
//	sbl_ur_8_rd5
//	sbl_ur_8_rd6
//	sbl_ur_8_rd7
inline hw_uint<128> mag_x_sbl_ur_8_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1) {
  // # of ports in bundle: 8
    // sbl_ur_8_rd0
    // sbl_ur_8_rd1
    // sbl_ur_8_rd2
    // sbl_ur_8_rd3
    // sbl_ur_8_rd4
    // sbl_ur_8_rd5
    // sbl_ur_8_rd6
    // sbl_ur_8_rd7

	hw_uint<128> result;
	hw_uint<16> sbl_ur_8_rd0_res = sbl_ur_8_rd0_select(mag_x, d0, d1);
	set_at<0, 128>(result, sbl_ur_8_rd0_res);
	hw_uint<16> sbl_ur_8_rd1_res = sbl_ur_8_rd1_select(mag_x, d0, d1);
	set_at<16, 128>(result, sbl_ur_8_rd1_res);
	hw_uint<16> sbl_ur_8_rd2_res = sbl_ur_8_rd2_select(mag_x, d0, d1);
	set_at<32, 128>(result, sbl_ur_8_rd2_res);
	hw_uint<16> sbl_ur_8_rd3_res = sbl_ur_8_rd3_select(mag_x, d0, d1);
	set_at<48, 128>(result, sbl_ur_8_rd3_res);
	hw_uint<16> sbl_ur_8_rd4_res = sbl_ur_8_rd4_select(mag_x, d0, d1);
	set_at<64, 128>(result, sbl_ur_8_rd4_res);
	hw_uint<16> sbl_ur_8_rd5_res = sbl_ur_8_rd5_select(mag_x, d0, d1);
	set_at<80, 128>(result, sbl_ur_8_rd5_res);
	hw_uint<16> sbl_ur_8_rd6_res = sbl_ur_8_rd6_select(mag_x, d0, d1);
	set_at<96, 128>(result, sbl_ur_8_rd6_res);
	hw_uint<16> sbl_ur_8_rd7_res = sbl_ur_8_rd7_select(mag_x, d0, d1);
	set_at<112, 128>(result, sbl_ur_8_rd7_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
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
	// RAM Box: {[0, 1913], [0, 1079]}
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
	// RAM Box: {[0, 1914], [0, 1079]}
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
	// RAM Box: {[0, 1915], [0, 1079]}
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

struct mag_y_mag_y_update_0_write4_merged_banks_1_cache {
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

struct mag_y_mag_y_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[0, 1917], [0, 1079]}
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

struct mag_y_mag_y_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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

struct mag_y_mag_y_update_0_write7_merged_banks_1_cache {
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
  mag_y_mag_y_update_0_write1_merged_banks_1_cache mag_y_mag_y_update_0_write1_merged_banks_1;
  mag_y_mag_y_update_0_write2_merged_banks_1_cache mag_y_mag_y_update_0_write2_merged_banks_1;
  mag_y_mag_y_update_0_write3_merged_banks_1_cache mag_y_mag_y_update_0_write3_merged_banks_1;
  mag_y_mag_y_update_0_write4_merged_banks_1_cache mag_y_mag_y_update_0_write4_merged_banks_1;
  mag_y_mag_y_update_0_write5_merged_banks_1_cache mag_y_mag_y_update_0_write5_merged_banks_1;
  mag_y_mag_y_update_0_write6_merged_banks_1_cache mag_y_mag_y_update_0_write6_merged_banks_1;
  mag_y_mag_y_update_0_write7_merged_banks_1_cache mag_y_mag_y_update_0_write7_merged_banks_1;
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

inline void mag_y_mag_y_update_0_write4_write(hw_uint<16>& mag_y_mag_y_update_0_write4, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write4_merged_banks_1.push(mag_y_mag_y_update_0_write4);
}

inline void mag_y_mag_y_update_0_write5_write(hw_uint<16>& mag_y_mag_y_update_0_write5, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write5_merged_banks_1.push(mag_y_mag_y_update_0_write5);
}

inline void mag_y_mag_y_update_0_write6_write(hw_uint<16>& mag_y_mag_y_update_0_write6, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write6_merged_banks_1.push(mag_y_mag_y_update_0_write6);
}

inline void mag_y_mag_y_update_0_write7_write(hw_uint<16>& mag_y_mag_y_update_0_write7, mag_y_cache& mag_y, int d0, int d1) {
  mag_y.mag_y_mag_y_update_0_write7_merged_banks_1.push(mag_y_mag_y_update_0_write7);
}

inline hw_uint<16> sbl_ur_8_rd0_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd0 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd1_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd1 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd2_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd2 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write2 = mag_y.mag_y_mag_y_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd3_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd3 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write3 = mag_y.mag_y_mag_y_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd4_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd4 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write4 = mag_y.mag_y_mag_y_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd5_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd5 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write5 = mag_y.mag_y_mag_y_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd6_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd6 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write6 = mag_y.mag_y_mag_y_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sbl_ur_8_rd7_select(mag_y_cache& mag_y, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ur_8_rd7 read pattern: { sbl_ur_8_update_0[d0, d1] -> mag_y[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ur_8_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_mag_y_mag_y_update_0_write7 = mag_y.mag_y_mag_y_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write7;
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
//	mag_y_mag_y_update_0_write4
//	mag_y_mag_y_update_0_write5
//	mag_y_mag_y_update_0_write6
//	mag_y_mag_y_update_0_write7
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<128>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1) {
	hw_uint<16> mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 15>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<16, 31>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write2_res = mag_y_update_0_write.extract<32, 47>();
	mag_y_mag_y_update_0_write2_write(mag_y_mag_y_update_0_write2_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write3_res = mag_y_update_0_write.extract<48, 63>();
	mag_y_mag_y_update_0_write3_write(mag_y_mag_y_update_0_write3_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write4_res = mag_y_update_0_write.extract<64, 79>();
	mag_y_mag_y_update_0_write4_write(mag_y_mag_y_update_0_write4_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write5_res = mag_y_update_0_write.extract<80, 95>();
	mag_y_mag_y_update_0_write5_write(mag_y_mag_y_update_0_write5_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write6_res = mag_y_update_0_write.extract<96, 111>();
	mag_y_mag_y_update_0_write6_write(mag_y_mag_y_update_0_write6_res, mag_y, d0, d1);
	hw_uint<16> mag_y_mag_y_update_0_write7_res = mag_y_update_0_write.extract<112, 127>();
	mag_y_mag_y_update_0_write7_write(mag_y_mag_y_update_0_write7_res, mag_y, d0, d1);
}

// sbl_ur_8_update_0_read
//	sbl_ur_8_rd0
//	sbl_ur_8_rd1
//	sbl_ur_8_rd2
//	sbl_ur_8_rd3
//	sbl_ur_8_rd4
//	sbl_ur_8_rd5
//	sbl_ur_8_rd6
//	sbl_ur_8_rd7
inline hw_uint<128> mag_y_sbl_ur_8_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1) {
  // # of ports in bundle: 8
    // sbl_ur_8_rd0
    // sbl_ur_8_rd1
    // sbl_ur_8_rd2
    // sbl_ur_8_rd3
    // sbl_ur_8_rd4
    // sbl_ur_8_rd5
    // sbl_ur_8_rd6
    // sbl_ur_8_rd7

	hw_uint<128> result;
	hw_uint<16> sbl_ur_8_rd0_res = sbl_ur_8_rd0_select(mag_y, d0, d1);
	set_at<0, 128>(result, sbl_ur_8_rd0_res);
	hw_uint<16> sbl_ur_8_rd1_res = sbl_ur_8_rd1_select(mag_y, d0, d1);
	set_at<16, 128>(result, sbl_ur_8_rd1_res);
	hw_uint<16> sbl_ur_8_rd2_res = sbl_ur_8_rd2_select(mag_y, d0, d1);
	set_at<32, 128>(result, sbl_ur_8_rd2_res);
	hw_uint<16> sbl_ur_8_rd3_res = sbl_ur_8_rd3_select(mag_y, d0, d1);
	set_at<48, 128>(result, sbl_ur_8_rd3_res);
	hw_uint<16> sbl_ur_8_rd4_res = sbl_ur_8_rd4_select(mag_y, d0, d1);
	set_at<64, 128>(result, sbl_ur_8_rd4_res);
	hw_uint<16> sbl_ur_8_rd5_res = sbl_ur_8_rd5_select(mag_y, d0, d1);
	set_at<80, 128>(result, sbl_ur_8_rd5_res);
	hw_uint<16> sbl_ur_8_rd6_res = sbl_ur_8_rd6_select(mag_y, d0, d1);
	set_at<96, 128>(result, sbl_ur_8_rd6_res);
	hw_uint<16> sbl_ur_8_rd7_res = sbl_ur_8_rd7_select(mag_y, d0, d1);
	set_at<112, 128>(result, sbl_ur_8_rd7_res);
	return result;
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */off_chip_img, img_cache& img, int d0, int d1) {
	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_8(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "img_update_0," << (8*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "img_update_0," << (8*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "mag_x_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_8(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(compute_result, mag_x, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "mag_x_update_0," << (8*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

inline void sbl_ur_8_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */sbl_ur_8, int d0, int d1) {
	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sbl_ur_8_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sbl_ur_8_update_0_mag_x," << d0<< "," << d1<< "," <<  mag_x_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sbl_ur_8_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sbl_ur_8_update_0_mag_y," << d0<< "," << d1<< "," <<  mag_y_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl_ur_8_generated_compute_unrolled_8(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sbl_ur_8
	sbl_ur_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "sbl_ur_8_update_0," << (8*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0(img_cache& img, mag_y_cache& mag_y, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "mag_y_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_8(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(compute_result, mag_y, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<128> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  hw_uint<16> debug_compute_result_lane_4;
  set_at<0, 16, 16>(debug_compute_result_lane_4, debug_compute_result.extract<64, 79>());
  hw_uint<16> debug_compute_result_lane_5;
  set_at<0, 16, 16>(debug_compute_result_lane_5, debug_compute_result.extract<80, 95>());
  hw_uint<16> debug_compute_result_lane_6;
  set_at<0, 16, 16>(debug_compute_result_lane_6, debug_compute_result.extract<96, 111>());
  hw_uint<16> debug_compute_result_lane_7;
  set_at<0, 16, 16>(debug_compute_result_lane_7, debug_compute_result.extract<112, 127>());
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 4) << ", " << d1<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 5) << ", " << d1<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 6) << ", " << d1<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "mag_y_update_0," << (8*d0 + 7) << ", " << d1<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl_ur_8_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */off_chip_img, HWStream<hw_uint<128> >& /* get_args num ports = 8 */sbl_ur_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl_ur_8_opt_debug.csv");
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
	  for (int c1 = -1; c1 <= 240; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 240) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1080) && ((c0 - 0) % 1 == 0)) {
	img_update_0(off_chip_img, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 240) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_y_update_0(img, mag_y, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 240) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	mag_x_update_0(img, mag_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 240) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	sbl_ur_8_update_0(mag_x, mag_y, sbl_ur_8, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
#include "sbl_ur_8_opt.h"

#define INPUT_SIZE 260762
#define OUTPUT_SIZE 259200
extern "C" {

static void read_input(hw_uint<128>* input, HWStream<hw_uint<128> >& v, const int size) {
  for (int i = 0; i < INPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    v.write(input[i]);
  }
}

static void write_output(hw_uint<128>* output, HWStream<hw_uint<128> >& v, const int size) {
  for (int i = 0; i < OUTPUT_SIZE; i++) {
    #pragma HLS pipeline II=1
    output[i] = v.read();
  }
}

void sbl_ur_8_opt_accel(hw_uint<128>* img_update_0_read, hw_uint<128>* sbl_ur_8_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave bundle = gmem
#pragma HLS INTERFACE m_axi port = sbl_ur_8_update_0_write offset = slave bundle = gmem

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = sbl_ur_8_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<128> > img_update_0_read_channel;
  static HWStream<hw_uint<128> > sbl_ur_8_update_0_write_channel;

  read_input(img_update_0_read, img_update_0_read_channel, size);

  sbl_ur_8_opt(img_update_0_read_channel, sbl_ur_8_update_0_write_channel);

  write_output(sbl_ur_8_update_0_write, sbl_ur_8_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

