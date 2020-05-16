#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "upsample_stencil_opt_compute_units.h"

#include "hw_classes.h"

struct Img_Img_update_0_write0_to_upsample_stencil_rd0_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd1_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 36
	// # of read delays: 18
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd2_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 18
	// # of read delays: 18
	fifo<hw_uint<32> , 18> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd3_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 53
	// # of read delays: 18
	fifo<hw_uint<32> , 53> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(52 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd4_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 35
	// # of read delays: 18
	fifo<hw_uint<32> , 35> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(34 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd5_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 17
	// # of read delays: 18
	fifo<hw_uint<32> , 17> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(16 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd6_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 52
	// # of read delays: 17
	fifo<hw_uint<32> , 52> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(51 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd7_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 34
	// # of read delays: 17
	fifo<hw_uint<32> , 34> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(33 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd8_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 16
	// # of read delays: 17
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_cache {
  Img_Img_update_0_write0_to_upsample_stencil_rd0_cache Img_Img_update_0_write0_to_upsample_stencil_rd0;
  Img_Img_update_0_write0_to_upsample_stencil_rd1_cache Img_Img_update_0_write0_to_upsample_stencil_rd1;
  Img_Img_update_0_write0_to_upsample_stencil_rd2_cache Img_Img_update_0_write0_to_upsample_stencil_rd2;
  Img_Img_update_0_write0_to_upsample_stencil_rd3_cache Img_Img_update_0_write0_to_upsample_stencil_rd3;
  Img_Img_update_0_write0_to_upsample_stencil_rd4_cache Img_Img_update_0_write0_to_upsample_stencil_rd4;
  Img_Img_update_0_write0_to_upsample_stencil_rd5_cache Img_Img_update_0_write0_to_upsample_stencil_rd5;
  Img_Img_update_0_write0_to_upsample_stencil_rd6_cache Img_Img_update_0_write0_to_upsample_stencil_rd6;
  Img_Img_update_0_write0_to_upsample_stencil_rd7_cache Img_Img_update_0_write0_to_upsample_stencil_rd7;
  Img_Img_update_0_write0_to_upsample_stencil_rd8_cache Img_Img_update_0_write0_to_upsample_stencil_rd8;
};



inline void Img_Img_update_0_write0_write(hw_uint<32> & Img_Img_update_0_write0, Img_cache& Img, int d0, int d1) {
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd0.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd1.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd2.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd3.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd4.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd5.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd6.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd7.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd8.push(Img_Img_update_0_write0);
}

inline hw_uint<32>  upsample_stencil_rd0_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd0 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> 38 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 38 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> 38 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 38 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> (53 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 2 <= d1 <= 31; upsample_stencil_update_0[d0, d1] -> (53 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 1 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd0.peek(/* one reader or all rams */ (-1 + d1 == 0) ? ((53 - floord(d0, 2))) : (d1 == 0) ? (38) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0) ? ((53 - floord(d0, 2))) : ((-d1) % 2 == 0 && -2 + d1 >= 0) ? (38) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd1_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd1 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> (35 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 < d1 <= 31; upsample_stencil_update_0[d0, d1] -> 20 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 20 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 30 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((35 - floord(d0, 2))) : ((-d1) % 2 == 0) ? (20) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd2_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd2 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and d1 < 2o1 <= 2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> 2 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> ((1 + d0) - 2 * floor((2d0)/4)) : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> (17 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 < d1 <= 31 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd2.peek(/* one reader or all rams */ ((-d1) % 2 == 0 && (-d0) % 2 == 0) ? (2) : ((-1 - d1) % 2 == 0) ? ((17 - floord(2*d0, 4))) : ((-d1) % 2 == 0 && (-1 - d0) % 2 == 0) ? (2) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd3_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd3 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> 37 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 37 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> 37 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 37 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> (52 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 2 <= d1 <= 31; upsample_stencil_update_0[d0, d1] -> (52 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 1 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd3.peek(/* one reader or all rams */ (-1 + d1 == 0) ? ((52 - floord(d0, 2))) : (d1 == 0) ? (37) : ((-1 - d1) % 2 == 0 && -3 + d1 >= 0) ? ((52 - floord(d0, 2))) : ((-d1) % 2 == 0 && -2 + d1 >= 0) ? (37) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd4_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd4 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> (34 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 < d1 <= 31; upsample_stencil_update_0[d0, d1] -> 19 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 19 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 <= d1 <= 30 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd4.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((34 - floord(d0, 2))) : ((-d1) % 2 == 0) ? (19) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd5_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd5 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 + d0 <= 2o0 <= d0 and d1 < 2o1 <= 2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> 1 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 < d0 <= 31 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 1 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 30 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> (16 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 31 and 0 < d1 <= 31 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd5.peek(/* one reader or all rams */ ((-d1) % 2 == 0) ? (1) : ((-1 - d1) % 2 == 0) ? ((16 - floord(2*d0, 4))) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd6_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd6 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> 36 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 36 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> (21 + 1/2 * d0) : d0 = 30 and (d1) mod 2 = 0 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 36 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 2 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 36 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> ((20 + d0) - floor((2d0)/4)) : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 30 <= d0 <= 31 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> (51 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 29 and 2 <= d1 <= 31; upsample_stencil_update_0[d0, d1] -> (51 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 <= d1 <= 1; upsample_stencil_update_0[d0, d1] -> ((18 + 18 * d1) - 36 * floor((d1)/2)) : (1 + d1) mod 2 = 0 and 30 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd6.peek(/* one reader or all rams */ (-1 + d1 == 0 && 29 - d0 >= 0) ? ((51 - floord(d0, 2))) : ((-1 - d1) % 2 == 0 && -30 + d0 >= 0) ? (36) : (d1 == 0 && 29 - d0 >= 0) ? (36) : ((-1 - d1) % 2 == 0 && 29 - d0 >= 0 && -3 + d1 >= 0) ? ((51 - floord(d0, 2))) : ((-d1) % 2 == 0 && -30 + d0 == 0) ? (36) : ((-d1) % 2 == 0 && -31 + d0 == 0) ? (36) : ((-d1) % 2 == 0 && 29 - d0 >= 0 && -2 + d1 >= 0) ? (36) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd7_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd7 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> (33 - floor((d0)/2)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 < d1 <= 31; upsample_stencil_update_0[d0, d1] -> 18 : (1 + d1) mod 2 = 0 and 30 <= d0 <= 31 and 0 < d1 <= 31; upsample_stencil_update_0[d0, d1] -> 18 : (d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> (3 + 1/2 * d0) : d0 = 30 and (d1) mod 2 = 0 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> 18 : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 <= d1 <= 30; upsample_stencil_update_0[d0, d1] -> ((2 + d0) - floor((2d0)/4)) : (1 + d0) mod 2 = 0 and (d1) mod 2 = 0 and 30 <= d0 <= 31 and 0 <= d1 <= 30 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd7.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && -30 + d0 >= 0) ? (18) : ((-1 - d1) % 2 == 0 && 29 - d0 >= 0) ? ((33 - floord(d0, 2))) : ((-d1) % 2 == 0 && -30 + d0 == 0) ? (18) : ((-d1) % 2 == 0 && -31 + d0 == 0) ? (18) : ((-d1) % 2 == 0 && 29 - d0 >= 0) ? (18) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  upsample_stencil_rd8_select(Img_cache& Img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // upsample_stencil_rd8 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and d0 < 2o0 <= 2 + d0 and d1 < 2o1 <= 2 + d1 }
  // Read schedule : { upsample_stencil_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { Img_update_0[d0, d1] -> [2d1, 2d0, 1] : -1 <= d0 <= 16 and -1 <= d1 <= 16 }
  // DD fold: { upsample_stencil_update_0[d0, d1] -> (15 - floor((2d0)/4)) : (1 + d1) mod 2 = 0 and 0 <= d0 <= 29 and 0 < d1 <= 31 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_to_upsample_stencil_rd8.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 29 - d0 >= 0) ? ((15 - floord(2*d0, 4))) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// Img_update_0_write
//	Img_Img_update_0_write0
inline void Img_Img_update_0_write_bundle_write(hw_uint<32>& Img_update_0_write, Img_cache& Img, int d0, int d1) {
	hw_uint<32>  Img_Img_update_0_write0_res = Img_update_0_write.extract<0, 31>();
	Img_Img_update_0_write0_write(Img_Img_update_0_write0_res, Img, d0, d1);
}

// upsample_stencil_update_0_read
//	upsample_stencil_rd0
//	upsample_stencil_rd1
//	upsample_stencil_rd2
//	upsample_stencil_rd3
//	upsample_stencil_rd4
//	upsample_stencil_rd5
//	upsample_stencil_rd6
//	upsample_stencil_rd7
//	upsample_stencil_rd8
inline hw_uint<288> Img_upsample_stencil_update_0_read_bundle_read(Img_cache& Img, int d0, int d1) {
  // # of ports in bundle: 9
    // upsample_stencil_rd0
    // upsample_stencil_rd1
    // upsample_stencil_rd2
    // upsample_stencil_rd3
    // upsample_stencil_rd4
    // upsample_stencil_rd5
    // upsample_stencil_rd6
    // upsample_stencil_rd7
    // upsample_stencil_rd8

	hw_uint<288> result;
	hw_uint<32>  upsample_stencil_rd0_res = upsample_stencil_rd0_select(Img, d0, d1);
	set_at<0, 288>(result, upsample_stencil_rd0_res);
	hw_uint<32>  upsample_stencil_rd1_res = upsample_stencil_rd1_select(Img, d0, d1);
	set_at<32, 288>(result, upsample_stencil_rd1_res);
	hw_uint<32>  upsample_stencil_rd2_res = upsample_stencil_rd2_select(Img, d0, d1);
	set_at<64, 288>(result, upsample_stencil_rd2_res);
	hw_uint<32>  upsample_stencil_rd3_res = upsample_stencil_rd3_select(Img, d0, d1);
	set_at<96, 288>(result, upsample_stencil_rd3_res);
	hw_uint<32>  upsample_stencil_rd4_res = upsample_stencil_rd4_select(Img, d0, d1);
	set_at<128, 288>(result, upsample_stencil_rd4_res);
	hw_uint<32>  upsample_stencil_rd5_res = upsample_stencil_rd5_select(Img, d0, d1);
	set_at<160, 288>(result, upsample_stencil_rd5_res);
	hw_uint<32>  upsample_stencil_rd6_res = upsample_stencil_rd6_select(Img, d0, d1);
	set_at<192, 288>(result, upsample_stencil_rd6_res);
	hw_uint<32>  upsample_stencil_rd7_res = upsample_stencil_rd7_select(Img, d0, d1);
	set_at<224, 288>(result, upsample_stencil_rd7_res);
	hw_uint<32>  upsample_stencil_rd8_res = upsample_stencil_rd8_select(Img, d0, d1);
	set_at<256, 288>(result, upsample_stencil_rd8_res);
	return result;
}



// Operation logic
inline void Img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Img_off, Img_cache& Img, int d0, int d1) {
	// Consume: Img_off
	auto Img_off_0_c__0_value = Img_off.read();
	auto compute_result = id_unrolled_1(Img_off_0_c__0_value);
	// Produce: Img
	Img_Img_update_0_write_bundle_write(compute_result, Img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "Img_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void upsample_stencil_update_0(Img_cache& Img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */upsample_stencil, int d0, int d1) {
	// Consume: Img
	auto Img_0_c__0_value = Img_upsample_stencil_update_0_read_bundle_read(Img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "upsample_stencil_update_0_Img," << d0<< "," << d1<< "," <<  Img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3_unrolled_1(Img_0_c__0_value);
	// Produce: upsample_stencil
	upsample_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "upsample_stencil_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void upsample_stencil_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */upsample_stencil, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("upsample_stencil_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  Img_cache Img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // Img_off_update_0 -> [1*d1*1*2 + 1*0,1*d0*1*2 + 1*0,1*0]
	    // Img_update_0 -> [1*d1*1*2 + 1*0,1*d0*1*2 + 1*0,1*1]
	    // upsample_stencil_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*2]
	for (int c0 = -2; c0 <= 33; c0++) {
	  for (int c1 = -2; c1 <= 33; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 32) && ((c1 - 0) % 2 == 0) && (-2 <= c0 && c0 <= 32) && ((c0 - 0) % 2 == 0)) {
	Img_update_0(Img_off, Img, (c1 - 0) / 2, (c0 - 0) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 33) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 33) && ((c0 - 2) % 1 == 0)) {
	upsample_stencil_update_0(Img, upsample_stencil, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void upsample_stencil_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */upsample_stencil) {

  upsample_stencil_opt(Img_off, upsample_stencil, 1);
}
#ifdef __VIVADO_SYNTH__
#include "upsample_stencil_opt.h"

const int Img_update_0_read_num_transfers = 324;
const int upsample_stencil_update_0_write_num_transfers = 1024;


extern "C" {

static void read_Img_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = Img_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_upsample_stencil_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = upsample_stencil_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void upsample_stencil_opt_accel(hw_uint<32>* Img_update_0_read, hw_uint<32>* upsample_stencil_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = Img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = upsample_stencil_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = Img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = upsample_stencil_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > Img_update_0_read_channel;
  static HWStream<hw_uint<32> > upsample_stencil_update_0_write_channel;

  read_Img_update_0_read(Img_update_0_read, Img_update_0_read_channel, size);

  upsample_stencil_opt(Img_update_0_read_channel, upsample_stencil_update_0_write_channel, size);

  write_upsample_stencil_update_0_write(upsample_stencil_update_0_write, upsample_stencil_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

