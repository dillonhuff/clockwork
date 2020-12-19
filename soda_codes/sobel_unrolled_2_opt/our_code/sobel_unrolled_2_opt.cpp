#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sobel_unrolled_2_opt_compute_units.h
#include "sobel_unrolled_2_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [-1, 1080]}
	// Capacity: 1926
	// # of read delays: 6
  // 0, 1, 962, 963, 1924, 1925
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 960> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 960> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_962() {
		return f4;
	}

	inline hw_uint<32>  peek_963() {
		return f6;
	}

	inline hw_uint<32>  peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1924() {
		return f8;
	}

	inline hw_uint<32>  peek_1925() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
	// RAM Box: {[-1, 1919], [-1, 1080]}
	// Capacity: 1927
	// # of read delays: 7
  // 0, 1, 2, 963, 964, 1925, 1926
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 960> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 960> f9;
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

	inline hw_uint<32>  peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_963() {
		return f6;
	}

	inline hw_uint<32>  peek_964() {
		return f8;
	}

	inline hw_uint<32>  peek_1924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_1925() {
		return f10;
	}

	inline hw_uint<32>  peek_1926() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
  // # of banks: 2
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<32> & img_img_update_0_write1, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline hw_uint<32>  mag_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1926();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_964();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_962();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_2();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1925();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_963();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_x_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1925();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_963();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1924();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1926();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_2();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1924();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1925();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1925();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1925();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_y_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 2d0, -1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1925();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<32>  mag_y_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 2d0, 1 + d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
inline void img_img_update_0_write_bundle_write(hw_uint<64>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
	hw_uint<32>  img_img_update_0_write1_res = img_update_0_write.extract<32, 63>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1, dynamic_address);
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
inline hw_uint<384> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 12
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

	hw_uint<384> result;
	hw_uint<32>  mag_x_rd0_res = mag_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 384>(result, mag_x_rd0_res);
	hw_uint<32>  mag_x_rd1_res = mag_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 384>(result, mag_x_rd1_res);
	hw_uint<32>  mag_x_rd2_res = mag_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 384>(result, mag_x_rd2_res);
	hw_uint<32>  mag_x_rd3_res = mag_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 384>(result, mag_x_rd3_res);
	hw_uint<32>  mag_x_rd4_res = mag_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 384>(result, mag_x_rd4_res);
	hw_uint<32>  mag_x_rd5_res = mag_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 384>(result, mag_x_rd5_res);
	hw_uint<32>  mag_x_rd6_res = mag_x_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 384>(result, mag_x_rd6_res);
	hw_uint<32>  mag_x_rd7_res = mag_x_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 384>(result, mag_x_rd7_res);
	hw_uint<32>  mag_x_rd8_res = mag_x_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 384>(result, mag_x_rd8_res);
	hw_uint<32>  mag_x_rd9_res = mag_x_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 384>(result, mag_x_rd9_res);
	hw_uint<32>  mag_x_rd10_res = mag_x_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 384>(result, mag_x_rd10_res);
	hw_uint<32>  mag_x_rd11_res = mag_x_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 384>(result, mag_x_rd11_res);
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
inline hw_uint<384> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 12
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

	hw_uint<384> result;
	hw_uint<32>  mag_y_rd0_res = mag_y_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 384>(result, mag_y_rd0_res);
	hw_uint<32>  mag_y_rd1_res = mag_y_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 384>(result, mag_y_rd1_res);
	hw_uint<32>  mag_y_rd2_res = mag_y_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 384>(result, mag_y_rd2_res);
	hw_uint<32>  mag_y_rd3_res = mag_y_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 384>(result, mag_y_rd3_res);
	hw_uint<32>  mag_y_rd4_res = mag_y_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 384>(result, mag_y_rd4_res);
	hw_uint<32>  mag_y_rd5_res = mag_y_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 384>(result, mag_y_rd5_res);
	hw_uint<32>  mag_y_rd6_res = mag_y_rd6_select(img, d0, d1, dynamic_address);
	set_at<192, 384>(result, mag_y_rd6_res);
	hw_uint<32>  mag_y_rd7_res = mag_y_rd7_select(img, d0, d1, dynamic_address);
	set_at<224, 384>(result, mag_y_rd7_res);
	hw_uint<32>  mag_y_rd8_res = mag_y_rd8_select(img, d0, d1, dynamic_address);
	set_at<256, 384>(result, mag_y_rd8_res);
	hw_uint<32>  mag_y_rd9_res = mag_y_rd9_select(img, d0, d1, dynamic_address);
	set_at<288, 384>(result, mag_y_rd9_res);
	hw_uint<32>  mag_y_rd10_res = mag_y_rd10_select(img, d0, d1, dynamic_address);
	set_at<320, 384>(result, mag_y_rd10_res);
	hw_uint<32>  mag_y_rd11_res = mag_y_rd11_select(img, d0, d1, dynamic_address);
	set_at<352, 384>(result, mag_y_rd11_res);
	return result;
}

#include "hw_classes.h"

struct mag_x_mag_x_update_0_write0_to_sobel_unrolled_2_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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

struct mag_x_mag_x_update_0_write1_to_sobel_unrolled_2_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
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
  // # of banks: 2
  mag_x_mag_x_update_0_write0_to_sobel_unrolled_2_rd0_cache mag_x_mag_x_update_0_write0_to_sobel_unrolled_2_rd0;
  mag_x_mag_x_update_0_write1_to_sobel_unrolled_2_rd1_cache mag_x_mag_x_update_0_write1_to_sobel_unrolled_2_rd1;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<32> & mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_2_rd0.push(mag_x_mag_x_update_0_write0);
}

inline void mag_x_mag_x_update_0_write1_write(hw_uint<32> & mag_x_mag_x_update_0_write1, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_2_rd1.push(mag_x_mag_x_update_0_write1);
}

inline hw_uint<32>  sobel_unrolled_2_rd0_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_2_rd0 read pattern: { sobel_unrolled_2_update_0[d0, d1] -> mag_x[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_to_sobel_unrolled_2_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_2_rd1_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_2_rd1 read pattern: { sobel_unrolled_2_update_0[d0, d1] -> mag_x[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_to_sobel_unrolled_2_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
  return 0;
}

// # of bundles = 2
// mag_x_update_0_write
//	mag_x_mag_x_update_0_write0
//	mag_x_mag_x_update_0_write1
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<64>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 31>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1, dynamic_address);
	hw_uint<32>  mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<32, 63>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1, dynamic_address);
}

// sobel_unrolled_2_update_0_read
//	sobel_unrolled_2_rd0
//	sobel_unrolled_2_rd1
inline hw_uint<64> mag_x_sobel_unrolled_2_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // sobel_unrolled_2_rd0
    // sobel_unrolled_2_rd1

	hw_uint<64> result;
	hw_uint<32>  sobel_unrolled_2_rd0_res = sobel_unrolled_2_rd0_select(mag_x, d0, d1, dynamic_address);
	set_at<0, 64>(result, sobel_unrolled_2_rd0_res);
	hw_uint<32>  sobel_unrolled_2_rd1_res = sobel_unrolled_2_rd1_select(mag_x, d0, d1, dynamic_address);
	set_at<32, 64>(result, sobel_unrolled_2_rd1_res);
	return result;
}

#include "hw_classes.h"

struct mag_y_mag_y_update_0_write0_to_sobel_unrolled_2_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
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

struct mag_y_mag_y_update_0_write1_to_sobel_unrolled_2_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
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
  // # of banks: 2
  mag_y_mag_y_update_0_write0_to_sobel_unrolled_2_rd0_cache mag_y_mag_y_update_0_write0_to_sobel_unrolled_2_rd0;
  mag_y_mag_y_update_0_write1_to_sobel_unrolled_2_rd1_cache mag_y_mag_y_update_0_write1_to_sobel_unrolled_2_rd1;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<32> & mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_2_rd0.push(mag_y_mag_y_update_0_write0);
}

inline void mag_y_mag_y_update_0_write1_write(hw_uint<32> & mag_y_mag_y_update_0_write1, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_2_rd1.push(mag_y_mag_y_update_0_write1);
}

inline hw_uint<32>  sobel_unrolled_2_rd0_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_2_rd0 read pattern: { sobel_unrolled_2_update_0[d0, d1] -> mag_y[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_to_sobel_unrolled_2_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
  return 0;
}

inline hw_uint<32>  sobel_unrolled_2_rd1_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_unrolled_2_rd1 read pattern: { sobel_unrolled_2_update_0[d0, d1] -> mag_y[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_to_sobel_unrolled_2_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
  return 0;
}

// # of bundles = 2
// mag_y_update_0_write
//	mag_y_mag_y_update_0_write0
//	mag_y_mag_y_update_0_write1
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<64>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
	hw_uint<32>  mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 31>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1, dynamic_address);
	hw_uint<32>  mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<32, 63>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1, dynamic_address);
}

// sobel_unrolled_2_update_0_read
//	sobel_unrolled_2_rd0
//	sobel_unrolled_2_rd1
inline hw_uint<64> mag_y_sobel_unrolled_2_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // sobel_unrolled_2_rd0
    // sobel_unrolled_2_rd1

	hw_uint<64> result;
	hw_uint<32>  sobel_unrolled_2_rd0_res = sobel_unrolled_2_rd0_select(mag_y, d0, d1, dynamic_address);
	set_at<0, 64>(result, sobel_unrolled_2_rd0_res);
	hw_uint<32>  sobel_unrolled_2_rd1_res = sobel_unrolled_2_rd1_select(mag_y, d0, d1, dynamic_address);
	set_at<32, 64>(result, sobel_unrolled_2_rd1_res);
	return result;
}

// Total re-use buffer capacity: 123232 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */off_chip_img, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = id_unrolled_2(off_chip_img_0_c__0_value);
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

	auto compute_result = sobel_my_unrolled_2(img_0_c__0_value);
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

	auto compute_result = sobel_mx_unrolled_2(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(/* arg names */compute_result, mag_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sobel_unrolled_2_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */sobel_unrolled_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sobel_unrolled_2_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sobel_unrolled_2_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_cu_unrolled_2(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sobel_unrolled_2
	sobel_unrolled_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sobel_unrolled_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */off_chip_img, HWStream<hw_uint<64> >& /* get_args num ports = 2 */sobel_unrolled_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sobel_unrolled_2_opt_debug.csv");
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

// schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080; sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
//   { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 960 and -1 <= d1 <= 1080 }
// Condition for img_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (960 - i1 >= 0) && (1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { sobel_unrolled_2_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for sobel_unrolled_2_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for mag_y_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for mag_x_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))

  /*
for (int c0 = -1; c0 <= 1080; c0 += 1)
  for (int c1 = -1; c1 <= 960; c1 += 1) {
    img_update_0(c1, c0);
    if (c0 >= 1 && c1 >= 1) {
      mag_y_update_0(c1 - 1, c0 - 1);
      mag_x_update_0(c1 - 1, c0 - 1);
      sobel_unrolled_2_update_0(c1 - 1, c0 - 1);
    }
  }

  */
	for (int c0 = -1; c0 <= 1080; c0 += 1)
	  for (int c1 = -1; c1 <= 960; c1 += 1) {
	    img_update_0(off_chip_img /* buf name */, img, c1, c0);
	    if (c0 >= 1 && c1 >= 1) {
	      mag_y_update_0(img /* buf name */, mag_y, c1 - 1, c0 - 1);
	      mag_x_update_0(img /* buf name */, mag_x, c1 - 1, c0 - 1);
	      sobel_unrolled_2_update_0(mag_x /* buf name */, mag_y /* buf name */, sobel_unrolled_2, c1 - 1, c0 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sobel_unrolled_2_opt_wrapper(HWStream<hw_uint<64> >& /* get_args num ports = 2 */off_chip_img, HWStream<hw_uint<64> >& /* get_args num ports = 2 */sobel_unrolled_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sobel_unrolled_2_opt(off_chip_img, sobel_unrolled_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 960 and -1 <= img_1 <= 1080 }
const int img_update_0_read_pipe0_num_transfers = 1040884;
  // { sobel_unrolled_2_update_0[root = 0, sobel_unrolled_2_0, sobel_unrolled_2_1] -> sobel_unrolled_2[0, 0] : 0 <= sobel_unrolled_2_0 <= 959 and 0 <= sobel_unrolled_2_1 <= 1079 }
const int sobel_unrolled_2_update_0_write_pipe0_num_transfers = 1036800;


extern "C" {

void sobel_unrolled_2_opt_accel(hw_uint<64>* img_update_0_read_pipe0, hw_uint<64>* sobel_unrolled_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sobel_unrolled_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sobel_unrolled_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<64> > sobel_unrolled_2_update_0_write_pipe0_channel;

  burst_read<64>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  sobel_unrolled_2_opt_wrapper(img_update_0_read_pipe0_channel, sobel_unrolled_2_update_0_write_pipe0_channel, size);

  burst_write<64>(sobel_unrolled_2_update_0_write_pipe0, sobel_unrolled_2_update_0_write_pipe0_channel, sobel_unrolled_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sobel_unrolled_2_opt_rdai(HWStream<hw_uint<64> >& img_update_0_read_pipe0, HWStream<hw_uint<64> >&  sobel_unrolled_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sobel_unrolled_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sobel_unrolled_2_opt(img_update_0_read_pipe0, sobel_unrolled_2_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

