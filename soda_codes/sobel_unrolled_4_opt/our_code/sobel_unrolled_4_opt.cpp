#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sobel_unrolled_4_opt_compute_units.h
#include "sobel_unrolled_4_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 6
  // 0, 1, 482, 483, 964, 965
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 480> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 480> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_481() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_482() {
		return f4;
	}

	inline hw_uint<32>  peek_483() {
		return f6;
	}

	inline hw_uint<32>  peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_964() {
		return f8;
	}

	inline hw_uint<32>  peek_965() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
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
	// RAM Box: {[1, 1917], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 4
  // 0, 1, 483, 965
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 481> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 481> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_483() {
		return f4;
	}

	inline hw_uint<32>  peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_965() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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
	// RAM Box: {[2, 1918], [-1, 1080]}
	// Capacity: 966
	// # of read delays: 4
  // 0, 1, 483, 965
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 481> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 481> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_483() {
		return f4;
	}

	inline hw_uint<32>  peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_965() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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
	// RAM Box: {[-1, 1919], [-1, 1080]}
	// Capacity: 967
	// # of read delays: 7
  // 0, 1, 2, 483, 484, 965, 966
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 480> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 480> f9;
	hw_uint<32>  f10;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_482() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_483() {
		return f6;
	}

	inline hw_uint<32>  peek_484() {
		return f8;
	}

	inline hw_uint<32>  peek_964() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_965() {
		return f10;
	}

	inline hw_uint<32>  peek_966() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
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
  // # of banks: 4
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
  img_img_update_0_write2_merged_banks_12_cache img_img_update_0_write2_merged_banks_12;
  img_img_update_0_write3_merged_banks_12_cache img_img_update_0_write3_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<32> & img_img_update_0_write1, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline void img_img_update_0_write2_write(hw_uint<32> & img_img_update_0_write2, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write2_merged_banks_12.push(img_img_update_0_write2);
}

inline void img_img_update_0_write3_write(hw_uint<32> & img_img_update_0_write3, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write3_merged_banks_12.push(img_img_update_0_write3);
}

inline hw_uint<32>  mag_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_966();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_484();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_483();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd12 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd13 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_483();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd14 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd15 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd16 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_483();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd17 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd18 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd19 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_483();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_2();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_x_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd20 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_x_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd21 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_964();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd22 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_482();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd23 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_483();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_483();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_966();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_2();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd12 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd13 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd14 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd15 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd16 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd17 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd18 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_965();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd19 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<32>  mag_y_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd20 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_965();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd21 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<32>  mag_y_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd22 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_964();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd23 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_965();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, -1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_965();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 4d0, 1 + d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
//	img_img_update_0_write2
//	img_img_update_0_write3
inline void img_img_update_0_write_bundle_write(hw_uint<128>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write1_res = img_update_0_write.extract<32, 63>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write2_res = img_update_0_write.extract<64, 95>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write3_res = img_update_0_write.extract<96, 127>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1, dynamic_address);
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
inline hw_uint<768> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
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

	hw_uint<768> result;
	hw_uint<32>  mag_x_rd0_res = mag_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 768>(result, mag_x_rd0_res);
	hw_uint<32>  mag_x_rd1_res = mag_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 768>(result, mag_x_rd1_res);
	hw_uint<32>  mag_x_rd2_res = mag_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 768>(result, mag_x_rd2_res);
	hw_uint<32>  mag_x_rd3_res = mag_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 768>(result, mag_x_rd3_res);
	hw_uint<32>  mag_x_rd4_res = mag_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 768>(result, mag_x_rd4_res);
	hw_uint<32>  mag_x_rd5_res = mag_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 768>(result, mag_x_rd5_res);
	hw_uint<32>  mag_x_rd6_res = mag_x_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 768>(result, mag_x_rd6_res);
	hw_uint<32>  mag_x_rd7_res = mag_x_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 768>(result, mag_x_rd7_res);
	hw_uint<32>  mag_x_rd8_res = mag_x_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 768>(result, mag_x_rd8_res);
	hw_uint<32>  mag_x_rd9_res = mag_x_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 768>(result, mag_x_rd9_res);
	hw_uint<32>  mag_x_rd10_res = mag_x_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 768>(result, mag_x_rd10_res);
	hw_uint<32>  mag_x_rd11_res = mag_x_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 768>(result, mag_x_rd11_res);
	hw_uint<32>  mag_x_rd12_res = mag_x_rd12_select(img, d0, d1, dynamic_address);
	set_at<384, 768>(result, mag_x_rd12_res);
	hw_uint<32>  mag_x_rd13_res = mag_x_rd13_select(img, d0, d1, dynamic_address);
	set_at<416, 768>(result, mag_x_rd13_res);
	hw_uint<32>  mag_x_rd14_res = mag_x_rd14_select(img, d0, d1, dynamic_address);
	set_at<448, 768>(result, mag_x_rd14_res);
	hw_uint<32>  mag_x_rd15_res = mag_x_rd15_select(img, d0, d1, dynamic_address);
	set_at<480, 768>(result, mag_x_rd15_res);
	hw_uint<32>  mag_x_rd16_res = mag_x_rd16_select(img, d0, d1, dynamic_address);
	set_at<512, 768>(result, mag_x_rd16_res);
	hw_uint<32>  mag_x_rd17_res = mag_x_rd17_select(img, d0, d1, dynamic_address);
	set_at<544, 768>(result, mag_x_rd17_res);
	hw_uint<32>  mag_x_rd18_res = mag_x_rd18_select(img, d0, d1, dynamic_address);
	set_at<576, 768>(result, mag_x_rd18_res);
	hw_uint<32>  mag_x_rd19_res = mag_x_rd19_select(img, d0, d1, dynamic_address);
	set_at<608, 768>(result, mag_x_rd19_res);
	hw_uint<32>  mag_x_rd20_res = mag_x_rd20_select(img, d0, d1, dynamic_address);
	set_at<640, 768>(result, mag_x_rd20_res);
	hw_uint<32>  mag_x_rd21_res = mag_x_rd21_select(img, d0, d1, dynamic_address);
	set_at<672, 768>(result, mag_x_rd21_res);
	hw_uint<32>  mag_x_rd22_res = mag_x_rd22_select(img, d0, d1, dynamic_address);
	set_at<704, 768>(result, mag_x_rd22_res);
	hw_uint<32>  mag_x_rd23_res = mag_x_rd23_select(img, d0, d1, dynamic_address);
	set_at<736, 768>(result, mag_x_rd23_res);
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
inline hw_uint<768> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
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

	hw_uint<768> result;
	hw_uint<32>  mag_y_rd0_res = mag_y_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 768>(result, mag_y_rd0_res);
	hw_uint<32>  mag_y_rd1_res = mag_y_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 768>(result, mag_y_rd1_res);
	hw_uint<32>  mag_y_rd2_res = mag_y_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 768>(result, mag_y_rd2_res);
	hw_uint<32>  mag_y_rd3_res = mag_y_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 768>(result, mag_y_rd3_res);
	hw_uint<32>  mag_y_rd4_res = mag_y_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 768>(result, mag_y_rd4_res);
	hw_uint<32>  mag_y_rd5_res = mag_y_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 768>(result, mag_y_rd5_res);
	hw_uint<32>  mag_y_rd6_res = mag_y_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 768>(result, mag_y_rd6_res);
	hw_uint<32>  mag_y_rd7_res = mag_y_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 768>(result, mag_y_rd7_res);
	hw_uint<32>  mag_y_rd8_res = mag_y_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 768>(result, mag_y_rd8_res);
	hw_uint<32>  mag_y_rd9_res = mag_y_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 768>(result, mag_y_rd9_res);
	hw_uint<32>  mag_y_rd10_res = mag_y_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 768>(result, mag_y_rd10_res);
	hw_uint<32>  mag_y_rd11_res = mag_y_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 768>(result, mag_y_rd11_res);
	hw_uint<32>  mag_y_rd12_res = mag_y_rd12_select(img, d0, d1, dynamic_address);
	set_at<384, 768>(result, mag_y_rd12_res);
	hw_uint<32>  mag_y_rd13_res = mag_y_rd13_select(img, d0, d1, dynamic_address);
	set_at<416, 768>(result, mag_y_rd13_res);
	hw_uint<32>  mag_y_rd14_res = mag_y_rd14_select(img, d0, d1, dynamic_address);
	set_at<448, 768>(result, mag_y_rd14_res);
	hw_uint<32>  mag_y_rd15_res = mag_y_rd15_select(img, d0, d1, dynamic_address);
	set_at<480, 768>(result, mag_y_rd15_res);
	hw_uint<32>  mag_y_rd16_res = mag_y_rd16_select(img, d0, d1, dynamic_address);
	set_at<512, 768>(result, mag_y_rd16_res);
	hw_uint<32>  mag_y_rd17_res = mag_y_rd17_select(img, d0, d1, dynamic_address);
	set_at<544, 768>(result, mag_y_rd17_res);
	hw_uint<32>  mag_y_rd18_res = mag_y_rd18_select(img, d0, d1, dynamic_address);
	set_at<576, 768>(result, mag_y_rd18_res);
	hw_uint<32>  mag_y_rd19_res = mag_y_rd19_select(img, d0, d1, dynamic_address);
	set_at<608, 768>(result, mag_y_rd19_res);
	hw_uint<32>  mag_y_rd20_res = mag_y_rd20_select(img, d0, d1, dynamic_address);
	set_at<640, 768>(result, mag_y_rd20_res);
	hw_uint<32>  mag_y_rd21_res = mag_y_rd21_select(img, d0, d1, dynamic_address);
	set_at<672, 768>(result, mag_y_rd21_res);
	hw_uint<32>  mag_y_rd22_res = mag_y_rd22_select(img, d0, d1, dynamic_address);
	set_at<704, 768>(result, mag_y_rd22_res);
	hw_uint<32>  mag_y_rd23_res = mag_y_rd23_select(img, d0, d1, dynamic_address);
	set_at<736, 768>(result, mag_y_rd23_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_to_sobel_unrolled_4_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write1_to_sobel_unrolled_4_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write2_to_sobel_unrolled_4_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_mag_x_update_0_write3_to_sobel_unrolled_4_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_x_cache {
  // # of banks: 4
  mag_x_mag_x_update_0_write0_to_sobel_unrolled_4_rd0_cache mag_x_mag_x_update_0_write0_to_sobel_unrolled_4_rd0;
  mag_x_mag_x_update_0_write1_to_sobel_unrolled_4_rd1_cache mag_x_mag_x_update_0_write1_to_sobel_unrolled_4_rd1;
  mag_x_mag_x_update_0_write2_to_sobel_unrolled_4_rd2_cache mag_x_mag_x_update_0_write2_to_sobel_unrolled_4_rd2;
  mag_x_mag_x_update_0_write3_to_sobel_unrolled_4_rd3_cache mag_x_mag_x_update_0_write3_to_sobel_unrolled_4_rd3;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<32> & mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_4_rd0.push(mag_x_mag_x_update_0_write0);
}

inline void mag_x_mag_x_update_0_write1_write(hw_uint<32> & mag_x_mag_x_update_0_write1, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_4_rd1.push(mag_x_mag_x_update_0_write1);
}

inline void mag_x_mag_x_update_0_write2_write(hw_uint<32> & mag_x_mag_x_update_0_write2, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write2_to_sobel_unrolled_4_rd2.push(mag_x_mag_x_update_0_write2);
}

inline void mag_x_mag_x_update_0_write3_write(hw_uint<32> & mag_x_mag_x_update_0_write3, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write3_to_sobel_unrolled_4_rd3.push(mag_x_mag_x_update_0_write3);
}

inline hw_uint<32>  sobel_unrolled_4_rd0_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd0 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_x[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_4_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd1_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd1 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_x[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_4_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd2_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd2 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_x[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write2 = mag_x.mag_x_mag_x_update_0_write2_to_sobel_unrolled_4_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write2;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd3_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd3 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_x[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write3 = mag_x.mag_x_mag_x_update_0_write3_to_sobel_unrolled_4_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write3;
  return 0;
}

// # of bundles = 2
// mag_x_update_0_write
//	mag_x_mag_x_update_0_write0
//	mag_x_mag_x_update_0_write1
//	mag_x_mag_x_update_0_write2
//	mag_x_mag_x_update_0_write3
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<128>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 31>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<32, 63>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write2_res = mag_x_update_0_write.extract<64, 95>();
	mag_x_mag_x_update_0_write2_write(mag_x_mag_x_update_0_write2_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write3_res = mag_x_update_0_write.extract<96, 127>();
	mag_x_mag_x_update_0_write3_write(mag_x_mag_x_update_0_write3_res, mag_x, d0, d1, dynamic_address);
}

// sobel_unrolled_4_update_0_read
//	sobel_unrolled_4_rd0
//	sobel_unrolled_4_rd1
//	sobel_unrolled_4_rd2
//	sobel_unrolled_4_rd3
inline hw_uint<128> mag_x_sobel_unrolled_4_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // sobel_unrolled_4_rd0
    // sobel_unrolled_4_rd1
    // sobel_unrolled_4_rd2
    // sobel_unrolled_4_rd3

	hw_uint<128> result;
	hw_uint<32>  sobel_unrolled_4_rd0_res = sobel_unrolled_4_rd0_select(mag_x, d0, d1, dynamic_address);
	set_at<0, 128>(result, sobel_unrolled_4_rd0_res);
	hw_uint<32>  sobel_unrolled_4_rd1_res = sobel_unrolled_4_rd1_select(mag_x, d0, d1, dynamic_address);
	set_at<32, 128>(result, sobel_unrolled_4_rd1_res);
	hw_uint<32>  sobel_unrolled_4_rd2_res = sobel_unrolled_4_rd2_select(mag_x, d0, d1, dynamic_address);
	set_at<64, 128>(result, sobel_unrolled_4_rd2_res);
	hw_uint<32>  sobel_unrolled_4_rd3_res = sobel_unrolled_4_rd3_select(mag_x, d0, d1, dynamic_address);
	set_at<96, 128>(result, sobel_unrolled_4_rd3_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_to_sobel_unrolled_4_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write1_to_sobel_unrolled_4_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write2_to_sobel_unrolled_4_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_mag_y_update_0_write3_to_sobel_unrolled_4_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct mag_y_cache {
  // # of banks: 4
  mag_y_mag_y_update_0_write0_to_sobel_unrolled_4_rd0_cache mag_y_mag_y_update_0_write0_to_sobel_unrolled_4_rd0;
  mag_y_mag_y_update_0_write1_to_sobel_unrolled_4_rd1_cache mag_y_mag_y_update_0_write1_to_sobel_unrolled_4_rd1;
  mag_y_mag_y_update_0_write2_to_sobel_unrolled_4_rd2_cache mag_y_mag_y_update_0_write2_to_sobel_unrolled_4_rd2;
  mag_y_mag_y_update_0_write3_to_sobel_unrolled_4_rd3_cache mag_y_mag_y_update_0_write3_to_sobel_unrolled_4_rd3;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<32> & mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_4_rd0.push(mag_y_mag_y_update_0_write0);
}

inline void mag_y_mag_y_update_0_write1_write(hw_uint<32> & mag_y_mag_y_update_0_write1, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_4_rd1.push(mag_y_mag_y_update_0_write1);
}

inline void mag_y_mag_y_update_0_write2_write(hw_uint<32> & mag_y_mag_y_update_0_write2, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write2_to_sobel_unrolled_4_rd2.push(mag_y_mag_y_update_0_write2);
}

inline void mag_y_mag_y_update_0_write3_write(hw_uint<32> & mag_y_mag_y_update_0_write3, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write3_to_sobel_unrolled_4_rd3.push(mag_y_mag_y_update_0_write3);
}

inline hw_uint<32>  sobel_unrolled_4_rd0_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd0 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_y[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_4_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd1_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd1 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_y[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_4_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd2_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd2 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_y[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write2 = mag_y.mag_y_mag_y_update_0_write2_to_sobel_unrolled_4_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write2;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_4_rd3_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_4_rd3 read pattern: { sobel_unrolled_4_update_0[d0, d1] -> mag_y[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write3 = mag_y.mag_y_mag_y_update_0_write3_to_sobel_unrolled_4_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write3;
  return 0;
}

// # of bundles = 2
// mag_y_update_0_write
//	mag_y_mag_y_update_0_write0
//	mag_y_mag_y_update_0_write1
//	mag_y_mag_y_update_0_write2
//	mag_y_mag_y_update_0_write3
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<128>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 31>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<32, 63>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write2_res = mag_y_update_0_write.extract<64, 95>();
	mag_y_mag_y_update_0_write2_write(mag_y_mag_y_update_0_write2_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write3_res = mag_y_update_0_write.extract<96, 127>();
	mag_y_mag_y_update_0_write3_write(mag_y_mag_y_update_0_write3_res, mag_y, d0, d1, dynamic_address);
}

// sobel_unrolled_4_update_0_read
//	sobel_unrolled_4_rd0
//	sobel_unrolled_4_rd1
//	sobel_unrolled_4_rd2
//	sobel_unrolled_4_rd3
inline hw_uint<128> mag_y_sobel_unrolled_4_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // sobel_unrolled_4_rd0
    // sobel_unrolled_4_rd1
    // sobel_unrolled_4_rd2
    // sobel_unrolled_4_rd3

	hw_uint<128> result;
	hw_uint<32>  sobel_unrolled_4_rd0_res = sobel_unrolled_4_rd0_select(mag_y, d0, d1, dynamic_address);
	set_at<0, 128>(result, sobel_unrolled_4_rd0_res);
	hw_uint<32>  sobel_unrolled_4_rd1_res = sobel_unrolled_4_rd1_select(mag_y, d0, d1, dynamic_address);
	set_at<32, 128>(result, sobel_unrolled_4_rd1_res);
	hw_uint<32>  sobel_unrolled_4_rd2_res = sobel_unrolled_4_rd2_select(mag_y, d0, d1, dynamic_address);
	set_at<64, 128>(result, sobel_unrolled_4_rd2_res);
	hw_uint<32>  sobel_unrolled_4_rd3_res = sobel_unrolled_4_rd3_select(mag_y, d0, d1, dynamic_address);
	set_at<96, 128>(result, sobel_unrolled_4_rd3_res);
	return result;
}

// Total re-use buffer capacity: 123552 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */off_chip_img, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = id_unrolled_4(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0(img_cache& img, mag_y_cache& mag_y, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sobel_my_unrolled_4(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(/* arg names */compute_result, mag_y, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sobel_mx_unrolled_4(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(/* arg names */compute_result, mag_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sobel_unrolled_4_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */sobel_unrolled_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sobel_unrolled_4_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sobel_unrolled_4_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_cu_unrolled_4(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sobel_unrolled_4
	sobel_unrolled_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sobel_unrolled_4_opt(HWStream<hw_uint<128> >& /* get_args num ports = 4 */off_chip_img, HWStream<hw_uint<128> >& /* get_args num ports = 4 */sobel_unrolled_4) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sobel_unrolled_4_opt_debug.csv");
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

// schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080; sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
//   { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 480 and -1 <= d1 <= 1080 }
// Condition for img_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (480 - i1 >= 0) && (1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { sobel_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for sobel_unrolled_4_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (480 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for mag_y_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (480 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for mag_x_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (480 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))

  /*
for (int c0 = -1; c0 <= 1080; c0 += 1)
  for (int c1 = -1; c1 <= 480; c1 += 1) {
    img_update_0(c1, c0);
    if (c0 >= 1 && c1 >= 1) {
      mag_y_update_0(c1 - 1, c0 - 1);
      mag_x_update_0(c1 - 1, c0 - 1);
      sobel_unrolled_4_update_0(c1 - 1, c0 - 1);
    }
  }

  */
	for (int c0 = -1; c0 <= 1080; c0 += 1)
	  for (int c1 = -1; c1 <= 480; c1 += 1) {
	    img_update_0(off_chip_img /* buf name */, img, c1, c0);
	    if (c0 >= 1 && c1 >= 1) {
	      mag_y_update_0(img /* buf name */, mag_y, c1 - 1, c0 - 1);
	      mag_x_update_0(img /* buf name */, mag_x, c1 - 1, c0 - 1);
	      sobel_unrolled_4_update_0(mag_x /* buf name */, mag_y /* buf name */, sobel_unrolled_4, c1 - 1, c0 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sobel_unrolled_4_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 4 */off_chip_img, HWStream<hw_uint<128> >& /* get_args num ports = 4 */sobel_unrolled_4, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sobel_unrolled_4_opt(off_chip_img, sobel_unrolled_4);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 480 and -1 <= img_1 <= 1080 }
const int img_update_0_read_pipe0_num_transfers = 521524;
  // { sobel_unrolled_4_update_0[root = 0, sobel_unrolled_4_0, sobel_unrolled_4_1] -> sobel_unrolled_4[0, 0] : 0 <= sobel_unrolled_4_0 <= 479 and 0 <= sobel_unrolled_4_1 <= 1079 }
const int sobel_unrolled_4_update_0_write_pipe0_num_transfers = 518400;


extern "C" {

void sobel_unrolled_4_opt_accel(hw_uint<128>* img_update_0_read_pipe0, hw_uint<128>* sobel_unrolled_4_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sobel_unrolled_4_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sobel_unrolled_4_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > sobel_unrolled_4_update_0_write_pipe0_channel;

  burst_read<128>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  sobel_unrolled_4_opt_wrapper(img_update_0_read_pipe0_channel, sobel_unrolled_4_update_0_write_pipe0_channel, size);

  burst_write<128>(sobel_unrolled_4_update_0_write_pipe0, sobel_unrolled_4_update_0_write_pipe0_channel, sobel_unrolled_4_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sobel_unrolled_4_opt_rdai(HWStream<hw_uint<128> >& img_update_0_read_pipe0, HWStream<hw_uint<128> >&  sobel_unrolled_4_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sobel_unrolled_4_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sobel_unrolled_4_opt(img_update_0_read_pipe0, sobel_unrolled_4_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

