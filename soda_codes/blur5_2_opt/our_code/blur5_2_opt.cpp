#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur5_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_14_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_15_cache {
	// RAM Box: {[2, 1920], [0, 1079]}
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

struct blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_16_cache {
	// RAM Box: {[3, 1921], [0, 1079]}
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

struct blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_17_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_18_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_19_cache {
	// RAM Box: {[2, 1920], [0, 1079]}
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

struct blurx_cache {
  // Reader addrs...
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[1 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[3 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[1 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
    // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // # of banks: 6
  blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_14_cache blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_14;
  blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_15_cache blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_15;
  blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_16_cache blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_16;
  blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_17_cache blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_17;
  blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_18_cache blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_18;
  blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_19_cache blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_19;
};



inline void blurx_blurx_1_merged20_4_write(hw_uint<16>& blurx_blurx_1_merged20_4, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_14.push(blurx_blurx_1_merged20_4);
  blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_16.push(blurx_blurx_1_merged20_4);
  blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_18.push(blurx_blurx_1_merged20_4);
}

inline void blurx_blurx_1_merged20_5_write(hw_uint<16>& blurx_blurx_1_merged20_5, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_15.push(blurx_blurx_1_merged20_5);
  blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_17.push(blurx_blurx_1_merged20_5);
  blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_19.push(blurx_blurx_1_merged20_5);
}

inline hw_uint<16> blurx_blur5_2_1_merged23_14_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_14 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[1 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_4 = blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_14.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged20_4;
  return 0;
}

inline hw_uint<16> blurx_blur5_2_1_merged23_15_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_15 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_5 = blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_15.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged20_5;
  return 0;
}

inline hw_uint<16> blurx_blur5_2_1_merged23_16_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_16 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[3 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_4 = blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_16.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged20_4;
  return 0;
}

inline hw_uint<16> blurx_blur5_2_1_merged23_17_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_17 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_5 = blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_17.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged20_5;
  return 0;
}

inline hw_uint<16> blurx_blur5_2_1_merged23_18_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_18 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[1 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_4 = blurx.blurx_blurx_1_merged20_4_to_blurx_blur5_2_1_merged23_18.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged20_4;
  return 0;
}

inline hw_uint<16> blurx_blur5_2_1_merged23_19_select(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur5_2_1_merged23_19 read pattern: { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blurx[2 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
  // Read schedule : { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
  // Write schedule: { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  auto value_blurx_blurx_1_merged20_5 = blurx.blurx_blurx_1_merged20_5_to_blurx_blur5_2_1_merged23_19.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged20_5;
  return 0;
}

// # of bundles = 2
// blur5_2_1_merged23_read
//	blurx_blur5_2_1_merged23_14
//	blurx_blur5_2_1_merged23_15
//	blurx_blur5_2_1_merged23_16
//	blurx_blur5_2_1_merged23_17
//	blurx_blur5_2_1_merged23_18
//	blurx_blur5_2_1_merged23_19
inline hw_uint<96> blurx_blur5_2_1_merged23_read_bundle_read(blurx_cache& blurx, int root, int blur5_2_0, int blur5_2_1, int dynamic_address) {
  // # of ports in bundle: 6
    // blurx_blur5_2_1_merged23_14
    // blurx_blur5_2_1_merged23_15
    // blurx_blur5_2_1_merged23_16
    // blurx_blur5_2_1_merged23_17
    // blurx_blur5_2_1_merged23_18
    // blurx_blur5_2_1_merged23_19

	hw_uint<96> result;
	hw_uint<16> blurx_blur5_2_1_merged23_14_res = blurx_blur5_2_1_merged23_14_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<0, 96>(result, blurx_blur5_2_1_merged23_14_res);
	hw_uint<16> blurx_blur5_2_1_merged23_15_res = blurx_blur5_2_1_merged23_15_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<16, 96>(result, blurx_blur5_2_1_merged23_15_res);
	hw_uint<16> blurx_blur5_2_1_merged23_16_res = blurx_blur5_2_1_merged23_16_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<32, 96>(result, blurx_blur5_2_1_merged23_16_res);
	hw_uint<16> blurx_blur5_2_1_merged23_17_res = blurx_blur5_2_1_merged23_17_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<48, 96>(result, blurx_blur5_2_1_merged23_17_res);
	hw_uint<16> blurx_blur5_2_1_merged23_18_res = blurx_blur5_2_1_merged23_18_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<64, 96>(result, blurx_blur5_2_1_merged23_18_res);
	hw_uint<16> blurx_blur5_2_1_merged23_19_res = blurx_blur5_2_1_merged23_19_select(blurx, root, blur5_2_0, blur5_2_1, dynamic_address);
	set_at<80, 96>(result, blurx_blur5_2_1_merged23_19_res);
	return result;
}

// blurx_1_merged20_write
//	blurx_blurx_1_merged20_4
//	blurx_blurx_1_merged20_5
inline void blurx_blurx_1_merged20_write_bundle_write(hw_uint<32>& blurx_1_merged20_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_1_merged20_4_res = blurx_1_merged20_write.extract<0, 15>();
	blurx_blurx_1_merged20_4_write(blurx_blurx_1_merged20_4_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged20_5_res = blurx_1_merged20_write.extract<16, 31>();
	blurx_blurx_1_merged20_5_write(blurx_blurx_1_merged20_5_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

struct input_input_1_merged17_0_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 1923
	// # of read delays: 3
  // 0, 961, 1922
	hw_uint<16> f0;
	fifo<hw_uint<16>, 960> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_960() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_961() {
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



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 960
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged17_1_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 1923
	// # of read delays: 3
  // 0, 961, 1922
	hw_uint<16> f0;
	fifo<hw_uint<16>, 960> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 960> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_960() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_961() {
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



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 960
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  // Reader addrs...
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
    // { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // # of banks: 2
  input_input_1_merged17_0_merged_banks_3_cache input_input_1_merged17_0_merged_banks_3;
  input_input_1_merged17_1_merged_banks_3_cache input_input_1_merged17_1_merged_banks_3;
};



inline void input_input_1_merged17_0_write(hw_uint<16>& input_input_1_merged17_0, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged17_0_merged_banks_3.push(input_input_1_merged17_0);
}

inline void input_input_1_merged17_1_write(hw_uint<16>& input_input_1_merged17_1, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged17_1_merged_banks_3.push(input_input_1_merged17_1);
}

inline hw_uint<16> input_blurx_1_merged20_10_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_10 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_1 = input.input_input_1_merged17_1_merged_banks_3.peek_961();
  return value_input_input_1_merged17_1;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged20_11_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_11 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_1 = input.input_input_1_merged17_1_merged_banks_3.peek_0();
  return value_input_input_1_merged17_1;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged20_6_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_6 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_0 = input.input_input_1_merged17_0_merged_banks_3.peek_1922();
  return value_input_input_1_merged17_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged20_7_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_7 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_0 = input.input_input_1_merged17_0_merged_banks_3.peek_961();
  return value_input_input_1_merged17_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged20_8_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_8 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[1 + 2blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_0 = input.input_input_1_merged17_0_merged_banks_3.peek_0();
  return value_input_input_1_merged17_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged20_9_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged20_9 read pattern: { blurx_1_merged20[root = 0, blurx_0, blurx_1] -> input[2blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 960 }
  // Read schedule : { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
  // Write schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
  auto value_input_input_1_merged17_1 = input.input_input_1_merged17_1_merged_banks_3.peek_1922();
  return value_input_input_1_merged17_1;
  return 0;
}

// # of bundles = 2
// blurx_1_merged20_read
//	input_blurx_1_merged20_6
//	input_blurx_1_merged20_7
//	input_blurx_1_merged20_8
//	input_blurx_1_merged20_9
//	input_blurx_1_merged20_10
//	input_blurx_1_merged20_11
inline hw_uint<96> input_blurx_1_merged20_read_bundle_read(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 6
    // input_blurx_1_merged20_6
    // input_blurx_1_merged20_7
    // input_blurx_1_merged20_8
    // input_blurx_1_merged20_9
    // input_blurx_1_merged20_10
    // input_blurx_1_merged20_11

	hw_uint<96> result;
	hw_uint<16> input_blurx_1_merged20_6_res = input_blurx_1_merged20_6_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 96>(result, input_blurx_1_merged20_6_res);
	hw_uint<16> input_blurx_1_merged20_7_res = input_blurx_1_merged20_7_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 96>(result, input_blurx_1_merged20_7_res);
	hw_uint<16> input_blurx_1_merged20_8_res = input_blurx_1_merged20_8_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 96>(result, input_blurx_1_merged20_8_res);
	hw_uint<16> input_blurx_1_merged20_9_res = input_blurx_1_merged20_9_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<48, 96>(result, input_blurx_1_merged20_9_res);
	hw_uint<16> input_blurx_1_merged20_10_res = input_blurx_1_merged20_10_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<64, 96>(result, input_blurx_1_merged20_10_res);
	hw_uint<16> input_blurx_1_merged20_11_res = input_blurx_1_merged20_11_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<80, 96>(result, input_blurx_1_merged20_11_res);
	return result;
}

// input_1_merged17_write
//	input_input_1_merged17_0
//	input_input_1_merged17_1
inline void input_input_1_merged17_write_bundle_write(hw_uint<32>& input_1_merged17_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_1_merged17_0_res = input_1_merged17_write.extract<0, 15>();
	input_input_1_merged17_0_write(input_input_1_merged17_0_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged17_1_res = input_1_merged17_write.extract<16, 31>();
	input_input_1_merged17_1_write(input_input_1_merged17_1_res, input, root, input_0, input_1, dynamic_address);
}

// Total re-use buffer capacity: 61552 bits


// Operation logic
inline void input_1_merged17(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_2_m_input_1__p__1_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_1_cu15(input_arg_1_m__lp_2_m_input_1__p__1_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_1_merged17_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur5_2_1_merged23(blurx_cache& blurx, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */blur5_2, int root, int blur5_2_0, int blur5_2_1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_1_m__lp_2_m_blur5_2_1__p__1_rp___p__0_p_0_c_____1_m_blur5_2_0__p__0_p_0_value = blurx_blur5_2_1_merged23_read_bundle_read(blurx/* source_delay */, root, blur5_2_0, blur5_2_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur5_2_1_cu21(blurx_1_m__lp_2_m_blur5_2_1__p__1_rp___p__0_p_0_c_____1_m_blur5_2_0__p__0_p_0_value);
	// Produce: blur5_2
	blur5_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_1_merged20(input_cache& input, blurx_cache& blurx, int root, int blurx_0, int blurx_1) {
  // Dynamic address computation

	// Consume: input
	auto input_1_m__lp_2_m_blurx_1__p__1_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value = input_blurx_1_merged20_read_bundle_read(input/* source_delay */, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_1_cu18(input_1_m__lp_2_m_blurx_1__p__1_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_1_merged20_write_bundle_write(/* arg names */compute_result, blurx, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blur5_2_opt(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */blur5_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur5_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurx_cache blurx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  input_cache input;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960; blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960; blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
//   { input_1_merged17[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 960 }
// Condition for input_1_merged17(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((960 + -1*i2)) >= 0)))
//   { blurx_1_merged20[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 960 }
// Condition for blurx_1_merged20(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((960 + -1*i2)) >= 0)))
//   { blur5_2_1_merged23[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 959 }
// Condition for blur5_2_1_merged23(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((960 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and i2 <= 960 and 0 < i3 <= 2 and i3 <= 1 + i2; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 960 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 960; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_1_merged17(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_1_merged20(input /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          blur5_2_1_merged23(blurx /* buf name */, blur5_2, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur5_2_opt_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */input_arg, HWStream<hw_uint<32> >& /* get_args num ports = 2 */blur5_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur5_2_opt(input_arg, blur5_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blur5_2[1 + 2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959; blur5_2_1_merged23[root = 0, blur5_2_0, blur5_2_1] -> blur5_2[2blur5_2_1, blur5_2_0] : 0 <= blur5_2_0 <= 1079 and 0 <= blur5_2_1 <= 959 }
const int blur5_2_1_merged23_write_pipe0_num_transfers = 1036800;
  // { input_1_merged17[root = 0, input_0, input_1] -> input_arg[1 + 2input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 960; input_1_merged17[root = 0, input_0, input_1] -> input_arg[2input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 960 }
const int input_1_merged17_read_pipe0_num_transfers = 1039802;


extern "C" {

void blur5_2_opt_accel(hw_uint<32>* input_1_merged17_read_pipe0, hw_uint<32>* blur5_2_1_merged23_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_1_merged17_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur5_2_1_merged23_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_1_merged17_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur5_2_1_merged23_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > input_1_merged17_read_pipe0_channel;
  static HWStream<hw_uint<32> > blur5_2_1_merged23_write_pipe0_channel;

  burst_read<32>(input_1_merged17_read_pipe0, input_1_merged17_read_pipe0_channel, input_1_merged17_read_pipe0_num_transfers*size);

  blur5_2_opt_wrapper(input_1_merged17_read_pipe0_channel, blur5_2_1_merged23_write_pipe0_channel, size);

  burst_write<32>(blur5_2_1_merged23_write_pipe0, blur5_2_1_merged23_write_pipe0_channel, blur5_2_1_merged23_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur5_2_opt_rdai(HWStream<hw_uint<32> >& input_1_merged17_read_pipe0, HWStream<hw_uint<32> >&  blur5_2_1_merged23_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_1_merged17_read_pipe0
#pragma HLS INTERFACE axis register port = blur5_2_1_merged23_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur5_2_opt(input_1_merged17_read_pipe0, blur5_2_1_merged23_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

