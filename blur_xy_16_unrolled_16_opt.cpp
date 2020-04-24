#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "blur_xy_16_unrolled_16_opt_compute_units.h"

#include "hw_classes.h"

struct blurx_blurx_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct blurx_blurx_update_0_write10_merged_banks_1_cache {
	// RAM Box: {[0, 1930], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write11_merged_banks_1_cache {
	// RAM Box: {[0, 1931], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write12_merged_banks_1_cache {
	// RAM Box: {[0, 1932], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write13_merged_banks_1_cache {
	// RAM Box: {[0, 1933], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write14_merged_banks_1_cache {
	// RAM Box: {[0, 1934], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write15_merged_banks_1_cache {
	// RAM Box: {[0, 1935], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write2_merged_banks_1_cache {
	// RAM Box: {[0, 1922], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write3_merged_banks_1_cache {
	// RAM Box: {[0, 1923], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write4_merged_banks_1_cache {
	// RAM Box: {[0, 1924], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write5_merged_banks_1_cache {
	// RAM Box: {[0, 1925], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write6_merged_banks_1_cache {
	// RAM Box: {[0, 1926], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write7_merged_banks_1_cache {
	// RAM Box: {[0, 1927], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write8_merged_banks_1_cache {
	// RAM Box: {[0, 1928], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_blurx_update_0_write9_merged_banks_1_cache {
	// RAM Box: {[0, 1929], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
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

struct blurx_cache {
  blurx_blurx_update_0_write0_merged_banks_2_cache blurx_blurx_update_0_write0_merged_banks_2;
  blurx_blurx_update_0_write1_merged_banks_2_cache blurx_blurx_update_0_write1_merged_banks_2;
  blurx_blurx_update_0_write10_merged_banks_1_cache blurx_blurx_update_0_write10_merged_banks_1;
  blurx_blurx_update_0_write11_merged_banks_1_cache blurx_blurx_update_0_write11_merged_banks_1;
  blurx_blurx_update_0_write12_merged_banks_1_cache blurx_blurx_update_0_write12_merged_banks_1;
  blurx_blurx_update_0_write13_merged_banks_1_cache blurx_blurx_update_0_write13_merged_banks_1;
  blurx_blurx_update_0_write14_merged_banks_1_cache blurx_blurx_update_0_write14_merged_banks_1;
  blurx_blurx_update_0_write15_merged_banks_1_cache blurx_blurx_update_0_write15_merged_banks_1;
  blurx_blurx_update_0_write2_merged_banks_1_cache blurx_blurx_update_0_write2_merged_banks_1;
  blurx_blurx_update_0_write3_merged_banks_1_cache blurx_blurx_update_0_write3_merged_banks_1;
  blurx_blurx_update_0_write4_merged_banks_1_cache blurx_blurx_update_0_write4_merged_banks_1;
  blurx_blurx_update_0_write5_merged_banks_1_cache blurx_blurx_update_0_write5_merged_banks_1;
  blurx_blurx_update_0_write6_merged_banks_1_cache blurx_blurx_update_0_write6_merged_banks_1;
  blurx_blurx_update_0_write7_merged_banks_1_cache blurx_blurx_update_0_write7_merged_banks_1;
  blurx_blurx_update_0_write8_merged_banks_1_cache blurx_blurx_update_0_write8_merged_banks_1;
  blurx_blurx_update_0_write9_merged_banks_1_cache blurx_blurx_update_0_write9_merged_banks_1;
};



inline void blurx_blurx_update_0_write0_write(hw_uint<16>& blurx_blurx_update_0_write0, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write0_merged_banks_2.push(blurx_blurx_update_0_write0);
}

inline void blurx_blurx_update_0_write1_write(hw_uint<16>& blurx_blurx_update_0_write1, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write1_merged_banks_2.push(blurx_blurx_update_0_write1);
}

inline void blurx_blurx_update_0_write10_write(hw_uint<16>& blurx_blurx_update_0_write10, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write10_merged_banks_1.push(blurx_blurx_update_0_write10);
}

inline void blurx_blurx_update_0_write11_write(hw_uint<16>& blurx_blurx_update_0_write11, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write11_merged_banks_1.push(blurx_blurx_update_0_write11);
}

inline void blurx_blurx_update_0_write12_write(hw_uint<16>& blurx_blurx_update_0_write12, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write12_merged_banks_1.push(blurx_blurx_update_0_write12);
}

inline void blurx_blurx_update_0_write13_write(hw_uint<16>& blurx_blurx_update_0_write13, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write13_merged_banks_1.push(blurx_blurx_update_0_write13);
}

inline void blurx_blurx_update_0_write14_write(hw_uint<16>& blurx_blurx_update_0_write14, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write14_merged_banks_1.push(blurx_blurx_update_0_write14);
}

inline void blurx_blurx_update_0_write15_write(hw_uint<16>& blurx_blurx_update_0_write15, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write15_merged_banks_1.push(blurx_blurx_update_0_write15);
}

inline void blurx_blurx_update_0_write2_write(hw_uint<16>& blurx_blurx_update_0_write2, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write2_merged_banks_1.push(blurx_blurx_update_0_write2);
}

inline void blurx_blurx_update_0_write3_write(hw_uint<16>& blurx_blurx_update_0_write3, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write3_merged_banks_1.push(blurx_blurx_update_0_write3);
}

inline void blurx_blurx_update_0_write4_write(hw_uint<16>& blurx_blurx_update_0_write4, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write4_merged_banks_1.push(blurx_blurx_update_0_write4);
}

inline void blurx_blurx_update_0_write5_write(hw_uint<16>& blurx_blurx_update_0_write5, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write5_merged_banks_1.push(blurx_blurx_update_0_write5);
}

inline void blurx_blurx_update_0_write6_write(hw_uint<16>& blurx_blurx_update_0_write6, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write6_merged_banks_1.push(blurx_blurx_update_0_write6);
}

inline void blurx_blurx_update_0_write7_write(hw_uint<16>& blurx_blurx_update_0_write7, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write7_merged_banks_1.push(blurx_blurx_update_0_write7);
}

inline void blurx_blurx_update_0_write8_write(hw_uint<16>& blurx_blurx_update_0_write8, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write8_merged_banks_1.push(blurx_blurx_update_0_write8);
}

inline void blurx_blurx_update_0_write9_write(hw_uint<16>& blurx_blurx_update_0_write9, blurx_cache& blurx, int d0, int d1) {
  blurx.blurx_blurx_update_0_write9_merged_banks_1.push(blurx_blurx_update_0_write9);
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd0_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd0 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd1_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd1 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_1();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd10_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd10 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write10 = blurx.blurx_blurx_update_0_write10_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd11_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd11 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write11 = blurx.blurx_blurx_update_0_write11_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd12_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd12 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write12 = blurx.blurx_blurx_update_0_write12_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd13_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd13 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write13 = blurx.blurx_blurx_update_0_write13_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd14_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd14 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write14 = blurx.blurx_blurx_update_0_write14_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd15_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd15 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write15 = blurx.blurx_blurx_update_0_write15_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd16_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd16 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write0 = blurx.blurx_blurx_update_0_write0_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd17_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd17 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[17 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_blurx_blurx_update_0_write1 = blurx.blurx_blurx_update_0_write1_merged_banks_2.peek_0();
  return value_blurx_blurx_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd2_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd2 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write2 = blurx.blurx_blurx_update_0_write2_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd3_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd3 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write3 = blurx.blurx_blurx_update_0_write3_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd4_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd4 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write4 = blurx.blurx_blurx_update_0_write4_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd5_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd5 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write5 = blurx.blurx_blurx_update_0_write5_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd6_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd6 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write6 = blurx.blurx_blurx_update_0_write6_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd7_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd7 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write7 = blurx.blurx_blurx_update_0_write7_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd8_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd8 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write8 = blurx.blurx_blurx_update_0_write8_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blur_xy_16_unrolled_16_rd9_select(blurx_cache& blurx, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_xy_16_unrolled_16_rd9 read pattern: { blur_xy_16_unrolled_16_update_0[d0, d1] -> blurx[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { blur_xy_16_unrolled_16_update_0[d0, d1] -> [2 + d1, 1 + d0, 3] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // DD fold: { blur_xy_16_unrolled_16_update_0[d0, d1] -> 1 : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_blurx_blurx_update_0_write9 = blurx.blurx_blurx_update_0_write9_merged_banks_1.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// blur_xy_16_unrolled_16_update_0_read
//	blur_xy_16_unrolled_16_rd0
//	blur_xy_16_unrolled_16_rd1
//	blur_xy_16_unrolled_16_rd2
//	blur_xy_16_unrolled_16_rd3
//	blur_xy_16_unrolled_16_rd4
//	blur_xy_16_unrolled_16_rd5
//	blur_xy_16_unrolled_16_rd6
//	blur_xy_16_unrolled_16_rd7
//	blur_xy_16_unrolled_16_rd8
//	blur_xy_16_unrolled_16_rd9
//	blur_xy_16_unrolled_16_rd10
//	blur_xy_16_unrolled_16_rd11
//	blur_xy_16_unrolled_16_rd12
//	blur_xy_16_unrolled_16_rd13
//	blur_xy_16_unrolled_16_rd14
//	blur_xy_16_unrolled_16_rd15
//	blur_xy_16_unrolled_16_rd16
//	blur_xy_16_unrolled_16_rd17
inline hw_uint<288> blurx_blur_xy_16_unrolled_16_update_0_read_bundle_read(blurx_cache& blurx, int d0, int d1) {
  // # of ports in bundle: 18
    // blur_xy_16_unrolled_16_rd0
    // blur_xy_16_unrolled_16_rd1
    // blur_xy_16_unrolled_16_rd2
    // blur_xy_16_unrolled_16_rd3
    // blur_xy_16_unrolled_16_rd4
    // blur_xy_16_unrolled_16_rd5
    // blur_xy_16_unrolled_16_rd6
    // blur_xy_16_unrolled_16_rd7
    // blur_xy_16_unrolled_16_rd8
    // blur_xy_16_unrolled_16_rd9
    // blur_xy_16_unrolled_16_rd10
    // blur_xy_16_unrolled_16_rd11
    // blur_xy_16_unrolled_16_rd12
    // blur_xy_16_unrolled_16_rd13
    // blur_xy_16_unrolled_16_rd14
    // blur_xy_16_unrolled_16_rd15
    // blur_xy_16_unrolled_16_rd16
    // blur_xy_16_unrolled_16_rd17

	hw_uint<288> result;
	hw_uint<16> blur_xy_16_unrolled_16_rd0_res = blur_xy_16_unrolled_16_rd0_select(blurx, d0, d1);
	set_at<0, 288>(result, blur_xy_16_unrolled_16_rd0_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd1_res = blur_xy_16_unrolled_16_rd1_select(blurx, d0, d1);
	set_at<16, 288>(result, blur_xy_16_unrolled_16_rd1_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd2_res = blur_xy_16_unrolled_16_rd2_select(blurx, d0, d1);
	set_at<32, 288>(result, blur_xy_16_unrolled_16_rd2_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd3_res = blur_xy_16_unrolled_16_rd3_select(blurx, d0, d1);
	set_at<48, 288>(result, blur_xy_16_unrolled_16_rd3_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd4_res = blur_xy_16_unrolled_16_rd4_select(blurx, d0, d1);
	set_at<64, 288>(result, blur_xy_16_unrolled_16_rd4_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd5_res = blur_xy_16_unrolled_16_rd5_select(blurx, d0, d1);
	set_at<80, 288>(result, blur_xy_16_unrolled_16_rd5_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd6_res = blur_xy_16_unrolled_16_rd6_select(blurx, d0, d1);
	set_at<96, 288>(result, blur_xy_16_unrolled_16_rd6_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd7_res = blur_xy_16_unrolled_16_rd7_select(blurx, d0, d1);
	set_at<112, 288>(result, blur_xy_16_unrolled_16_rd7_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd8_res = blur_xy_16_unrolled_16_rd8_select(blurx, d0, d1);
	set_at<128, 288>(result, blur_xy_16_unrolled_16_rd8_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd9_res = blur_xy_16_unrolled_16_rd9_select(blurx, d0, d1);
	set_at<144, 288>(result, blur_xy_16_unrolled_16_rd9_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd10_res = blur_xy_16_unrolled_16_rd10_select(blurx, d0, d1);
	set_at<160, 288>(result, blur_xy_16_unrolled_16_rd10_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd11_res = blur_xy_16_unrolled_16_rd11_select(blurx, d0, d1);
	set_at<176, 288>(result, blur_xy_16_unrolled_16_rd11_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd12_res = blur_xy_16_unrolled_16_rd12_select(blurx, d0, d1);
	set_at<192, 288>(result, blur_xy_16_unrolled_16_rd12_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd13_res = blur_xy_16_unrolled_16_rd13_select(blurx, d0, d1);
	set_at<208, 288>(result, blur_xy_16_unrolled_16_rd13_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd14_res = blur_xy_16_unrolled_16_rd14_select(blurx, d0, d1);
	set_at<224, 288>(result, blur_xy_16_unrolled_16_rd14_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd15_res = blur_xy_16_unrolled_16_rd15_select(blurx, d0, d1);
	set_at<240, 288>(result, blur_xy_16_unrolled_16_rd15_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd16_res = blur_xy_16_unrolled_16_rd16_select(blurx, d0, d1);
	set_at<256, 288>(result, blur_xy_16_unrolled_16_rd16_res);
	hw_uint<16> blur_xy_16_unrolled_16_rd17_res = blur_xy_16_unrolled_16_rd17_select(blurx, d0, d1);
	set_at<272, 288>(result, blur_xy_16_unrolled_16_rd17_res);
	return result;
}

// blurx_update_0_write
//	blurx_blurx_update_0_write0
//	blurx_blurx_update_0_write1
//	blurx_blurx_update_0_write2
//	blurx_blurx_update_0_write3
//	blurx_blurx_update_0_write4
//	blurx_blurx_update_0_write5
//	blurx_blurx_update_0_write6
//	blurx_blurx_update_0_write7
//	blurx_blurx_update_0_write8
//	blurx_blurx_update_0_write9
//	blurx_blurx_update_0_write10
//	blurx_blurx_update_0_write11
//	blurx_blurx_update_0_write12
//	blurx_blurx_update_0_write13
//	blurx_blurx_update_0_write14
//	blurx_blurx_update_0_write15
inline void blurx_blurx_update_0_write_bundle_write(hw_uint<256>& blurx_update_0_write, blurx_cache& blurx, int d0, int d1) {
	hw_uint<16> blurx_blurx_update_0_write0_res = blurx_update_0_write.extract<0, 15>();
	blurx_blurx_update_0_write0_write(blurx_blurx_update_0_write0_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write1_res = blurx_update_0_write.extract<16, 31>();
	blurx_blurx_update_0_write1_write(blurx_blurx_update_0_write1_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write2_res = blurx_update_0_write.extract<32, 47>();
	blurx_blurx_update_0_write2_write(blurx_blurx_update_0_write2_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write3_res = blurx_update_0_write.extract<48, 63>();
	blurx_blurx_update_0_write3_write(blurx_blurx_update_0_write3_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write4_res = blurx_update_0_write.extract<64, 79>();
	blurx_blurx_update_0_write4_write(blurx_blurx_update_0_write4_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write5_res = blurx_update_0_write.extract<80, 95>();
	blurx_blurx_update_0_write5_write(blurx_blurx_update_0_write5_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write6_res = blurx_update_0_write.extract<96, 111>();
	blurx_blurx_update_0_write6_write(blurx_blurx_update_0_write6_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write7_res = blurx_update_0_write.extract<112, 127>();
	blurx_blurx_update_0_write7_write(blurx_blurx_update_0_write7_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write8_res = blurx_update_0_write.extract<128, 143>();
	blurx_blurx_update_0_write8_write(blurx_blurx_update_0_write8_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write9_res = blurx_update_0_write.extract<144, 159>();
	blurx_blurx_update_0_write9_write(blurx_blurx_update_0_write9_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write10_res = blurx_update_0_write.extract<160, 175>();
	blurx_blurx_update_0_write10_write(blurx_blurx_update_0_write10_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write11_res = blurx_update_0_write.extract<176, 191>();
	blurx_blurx_update_0_write11_write(blurx_blurx_update_0_write11_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write12_res = blurx_update_0_write.extract<192, 207>();
	blurx_blurx_update_0_write12_write(blurx_blurx_update_0_write12_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write13_res = blurx_update_0_write.extract<208, 223>();
	blurx_blurx_update_0_write13_write(blurx_blurx_update_0_write13_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write14_res = blurx_update_0_write.extract<224, 239>();
	blurx_blurx_update_0_write14_write(blurx_blurx_update_0_write14_res, blurx, d0, d1);
	hw_uint<16> blurx_blurx_update_0_write15_res = blurx_update_0_write.extract<240, 255>();
	blurx_blurx_update_0_write15_write(blurx_blurx_update_0_write15_res, blurx, d0, d1);
}

#include "hw_classes.h"

struct input_input_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write10_merged_banks_3_cache {
	// RAM Box: {[0, 1930], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[0, 1931], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write12_merged_banks_3_cache {
	// RAM Box: {[0, 1932], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[0, 1933], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write14_merged_banks_3_cache {
	// RAM Box: {[0, 1934], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[0, 1935], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write2_merged_banks_3_cache {
	// RAM Box: {[0, 1922], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[0, 1923], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write4_merged_banks_3_cache {
	// RAM Box: {[0, 1924], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[0, 1925], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write6_merged_banks_3_cache {
	// RAM Box: {[0, 1926], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[0, 1927], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write8_merged_banks_3_cache {
	// RAM Box: {[0, 1928], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[0, 1929], [0, 1081]}
	// Capacity: 243
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 120> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_121() {
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



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  input_input_update_0_write0_merged_banks_3_cache input_input_update_0_write0_merged_banks_3;
  input_input_update_0_write1_merged_banks_3_cache input_input_update_0_write1_merged_banks_3;
  input_input_update_0_write10_merged_banks_3_cache input_input_update_0_write10_merged_banks_3;
  input_input_update_0_write11_merged_banks_3_cache input_input_update_0_write11_merged_banks_3;
  input_input_update_0_write12_merged_banks_3_cache input_input_update_0_write12_merged_banks_3;
  input_input_update_0_write13_merged_banks_3_cache input_input_update_0_write13_merged_banks_3;
  input_input_update_0_write14_merged_banks_3_cache input_input_update_0_write14_merged_banks_3;
  input_input_update_0_write15_merged_banks_3_cache input_input_update_0_write15_merged_banks_3;
  input_input_update_0_write2_merged_banks_3_cache input_input_update_0_write2_merged_banks_3;
  input_input_update_0_write3_merged_banks_3_cache input_input_update_0_write3_merged_banks_3;
  input_input_update_0_write4_merged_banks_3_cache input_input_update_0_write4_merged_banks_3;
  input_input_update_0_write5_merged_banks_3_cache input_input_update_0_write5_merged_banks_3;
  input_input_update_0_write6_merged_banks_3_cache input_input_update_0_write6_merged_banks_3;
  input_input_update_0_write7_merged_banks_3_cache input_input_update_0_write7_merged_banks_3;
  input_input_update_0_write8_merged_banks_3_cache input_input_update_0_write8_merged_banks_3;
  input_input_update_0_write9_merged_banks_3_cache input_input_update_0_write9_merged_banks_3;
};



inline void input_input_update_0_write0_write(hw_uint<16>& input_input_update_0_write0, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write0_merged_banks_3.push(input_input_update_0_write0);
}

inline void input_input_update_0_write1_write(hw_uint<16>& input_input_update_0_write1, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write1_merged_banks_3.push(input_input_update_0_write1);
}

inline void input_input_update_0_write10_write(hw_uint<16>& input_input_update_0_write10, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write10_merged_banks_3.push(input_input_update_0_write10);
}

inline void input_input_update_0_write11_write(hw_uint<16>& input_input_update_0_write11, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write11_merged_banks_3.push(input_input_update_0_write11);
}

inline void input_input_update_0_write12_write(hw_uint<16>& input_input_update_0_write12, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write12_merged_banks_3.push(input_input_update_0_write12);
}

inline void input_input_update_0_write13_write(hw_uint<16>& input_input_update_0_write13, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write13_merged_banks_3.push(input_input_update_0_write13);
}

inline void input_input_update_0_write14_write(hw_uint<16>& input_input_update_0_write14, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write14_merged_banks_3.push(input_input_update_0_write14);
}

inline void input_input_update_0_write15_write(hw_uint<16>& input_input_update_0_write15, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write15_merged_banks_3.push(input_input_update_0_write15);
}

inline void input_input_update_0_write2_write(hw_uint<16>& input_input_update_0_write2, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write2_merged_banks_3.push(input_input_update_0_write2);
}

inline void input_input_update_0_write3_write(hw_uint<16>& input_input_update_0_write3, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write3_merged_banks_3.push(input_input_update_0_write3);
}

inline void input_input_update_0_write4_write(hw_uint<16>& input_input_update_0_write4, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write4_merged_banks_3.push(input_input_update_0_write4);
}

inline void input_input_update_0_write5_write(hw_uint<16>& input_input_update_0_write5, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write5_merged_banks_3.push(input_input_update_0_write5);
}

inline void input_input_update_0_write6_write(hw_uint<16>& input_input_update_0_write6, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write6_merged_banks_3.push(input_input_update_0_write6);
}

inline void input_input_update_0_write7_write(hw_uint<16>& input_input_update_0_write7, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write7_merged_banks_3.push(input_input_update_0_write7);
}

inline void input_input_update_0_write8_write(hw_uint<16>& input_input_update_0_write8, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write8_merged_banks_3.push(input_input_update_0_write8);
}

inline void input_input_update_0_write9_write(hw_uint<16>& input_input_update_0_write9, input_cache& input, int d0, int d1) {
  input.input_input_update_0_write9_merged_banks_3.push(input_input_update_0_write9);
}

inline hw_uint<16> blurx_rd0_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd0 read pattern: { blurx_update_0[d0, d1] -> input[16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_242();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd1_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd1 read pattern: { blurx_update_0[d0, d1] -> input[16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_121();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd10_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd10 read pattern: { blurx_update_0[d0, d1] -> input[3 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_121();
  return value_input_input_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd11_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd11 read pattern: { blurx_update_0[d0, d1] -> input[3 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write3 = input.input_input_update_0_write3_merged_banks_3.peek_0();
  return value_input_input_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd12_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd12 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_242();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd13_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd13 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_121();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd14_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd14 read pattern: { blurx_update_0[d0, d1] -> input[4 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write4 = input.input_input_update_0_write4_merged_banks_3.peek_0();
  return value_input_input_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd15_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd15 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_242();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd16_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd16 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_121();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd17_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd17 read pattern: { blurx_update_0[d0, d1] -> input[5 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write5 = input.input_input_update_0_write5_merged_banks_3.peek_0();
  return value_input_input_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd18_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd18 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_242();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd19_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd19 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_121();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd2_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd2 read pattern: { blurx_update_0[d0, d1] -> input[16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write0 = input.input_input_update_0_write0_merged_banks_3.peek_0();
  return value_input_input_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd20_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd20 read pattern: { blurx_update_0[d0, d1] -> input[6 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write6 = input.input_input_update_0_write6_merged_banks_3.peek_0();
  return value_input_input_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd21_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd21 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_242();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd22_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd22 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 121 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (1 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 121 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_121();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd23_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd23 read pattern: { blurx_update_0[d0, d1] -> input[7 + 16d0, 2 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: {  }
  auto value_input_input_update_0_write7 = input.input_input_update_0_write7_merged_banks_3.peek_0();
  return value_input_input_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd24_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd24 read pattern: { blurx_update_0[d0, d1] -> input[8 + 16d0, d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Read schedule : { blurx_update_0[d0, d1] -> [2 + d1, d0, 2] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
  // Write schedule: { input_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 120 and 0 <= d1 <= 1081 }
  // DD fold: { blurx_update_0[d0, d1] -> 242 : 0 < d0 <= 119 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> (122 + d0) : d0 = 120 and 0 <= d1 <= 1079; blurx_update_0[d0, d1] -> 242 : d0 = 0 and 0 <= d1 <= 1079 }
  auto value_input_input_update_0_write8 = input.input_input_update_0_write8_merged_banks_3.peek_242();
  return value_input_input_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> blurx_rd25_select(input_cache& input, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_rd25 read pattern: { blurx_update_0[d0, d1] -> input[8 + 16d0, 1 + d1] : 0 <= d0 <= 120 and 0 <= d1 <= 1079 }
