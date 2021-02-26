#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: blur4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "blur4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_224_cache {
	// RAM Box: {[31, 1919], [0, 1079]}
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

struct blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_225_cache {
	// RAM Box: {[32, 1920], [0, 1079]}
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

struct blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_226_cache {
	// RAM Box: {[33, 1921], [0, 1079]}
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

struct blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_227_cache {
	// RAM Box: {[30, 1918], [0, 1079]}
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

struct blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_228_cache {
	// RAM Box: {[31, 1919], [0, 1079]}
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

struct blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_229_cache {
	// RAM Box: {[32, 1920], [0, 1079]}
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

struct blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_230_cache {
	// RAM Box: {[29, 1917], [0, 1079]}
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

struct blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_231_cache {
	// RAM Box: {[30, 1918], [0, 1079]}
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

struct blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_232_cache {
	// RAM Box: {[31, 1919], [0, 1079]}
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

struct blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_233_cache {
	// RAM Box: {[28, 1916], [0, 1079]}
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

struct blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_234_cache {
	// RAM Box: {[29, 1917], [0, 1079]}
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

struct blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_235_cache {
	// RAM Box: {[30, 1918], [0, 1079]}
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

struct blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_236_cache {
	// RAM Box: {[27, 1915], [0, 1079]}
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

struct blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_237_cache {
	// RAM Box: {[28, 1916], [0, 1079]}
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

struct blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_238_cache {
	// RAM Box: {[29, 1917], [0, 1079]}
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

struct blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_239_cache {
	// RAM Box: {[26, 1914], [0, 1079]}
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

struct blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_240_cache {
	// RAM Box: {[27, 1915], [0, 1079]}
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

struct blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_241_cache {
	// RAM Box: {[28, 1916], [0, 1079]}
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

struct blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_242_cache {
	// RAM Box: {[25, 1913], [0, 1079]}
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

struct blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_243_cache {
	// RAM Box: {[26, 1914], [0, 1079]}
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

struct blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_244_cache {
	// RAM Box: {[27, 1915], [0, 1079]}
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

struct blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_245_cache {
	// RAM Box: {[24, 1912], [0, 1079]}
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

struct blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_246_cache {
	// RAM Box: {[25, 1913], [0, 1079]}
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

struct blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_247_cache {
	// RAM Box: {[26, 1914], [0, 1079]}
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

struct blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_248_cache {
	// RAM Box: {[23, 1911], [0, 1079]}
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

struct blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_249_cache {
	// RAM Box: {[24, 1912], [0, 1079]}
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

struct blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_250_cache {
	// RAM Box: {[25, 1913], [0, 1079]}
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

struct blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_251_cache {
	// RAM Box: {[22, 1910], [0, 1079]}
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

struct blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_252_cache {
	// RAM Box: {[23, 1911], [0, 1079]}
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

struct blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_253_cache {
	// RAM Box: {[24, 1912], [0, 1079]}
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

struct blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_254_cache {
	// RAM Box: {[21, 1909], [0, 1079]}
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

struct blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_255_cache {
	// RAM Box: {[22, 1910], [0, 1079]}
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

struct blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_256_cache {
	// RAM Box: {[23, 1911], [0, 1079]}
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

struct blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_257_cache {
	// RAM Box: {[20, 1908], [0, 1079]}
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

struct blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_258_cache {
	// RAM Box: {[21, 1909], [0, 1079]}
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

struct blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_259_cache {
	// RAM Box: {[22, 1910], [0, 1079]}
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

struct blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_260_cache {
	// RAM Box: {[19, 1907], [0, 1079]}
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

struct blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_261_cache {
	// RAM Box: {[20, 1908], [0, 1079]}
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

struct blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_262_cache {
	// RAM Box: {[21, 1909], [0, 1079]}
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

struct blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_263_cache {
	// RAM Box: {[18, 1906], [0, 1079]}
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

struct blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_264_cache {
	// RAM Box: {[19, 1907], [0, 1079]}
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

struct blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_265_cache {
	// RAM Box: {[20, 1908], [0, 1079]}
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

struct blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_266_cache {
	// RAM Box: {[17, 1905], [0, 1079]}
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

struct blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_267_cache {
	// RAM Box: {[18, 1906], [0, 1079]}
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

struct blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_268_cache {
	// RAM Box: {[19, 1907], [0, 1079]}
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

struct blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_269_cache {
	// RAM Box: {[16, 1904], [0, 1079]}
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

struct blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_270_cache {
	// RAM Box: {[17, 1905], [0, 1079]}
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

struct blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_271_cache {
	// RAM Box: {[18, 1906], [0, 1079]}
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

struct blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_272_cache {
	// RAM Box: {[15, 1903], [0, 1079]}
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

struct blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_273_cache {
	// RAM Box: {[16, 1904], [0, 1079]}
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

struct blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_274_cache {
	// RAM Box: {[17, 1905], [0, 1079]}
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

struct blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_275_cache {
	// RAM Box: {[14, 1902], [0, 1079]}
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

struct blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_276_cache {
	// RAM Box: {[15, 1903], [0, 1079]}
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

struct blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_277_cache {
	// RAM Box: {[16, 1904], [0, 1079]}
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

struct blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_278_cache {
	// RAM Box: {[13, 1901], [0, 1079]}
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

struct blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_279_cache {
	// RAM Box: {[14, 1902], [0, 1079]}
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

struct blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_280_cache {
	// RAM Box: {[15, 1903], [0, 1079]}
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

struct blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_281_cache {
	// RAM Box: {[12, 1900], [0, 1079]}
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

struct blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_282_cache {
	// RAM Box: {[13, 1901], [0, 1079]}
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

struct blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_283_cache {
	// RAM Box: {[14, 1902], [0, 1079]}
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

struct blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_284_cache {
	// RAM Box: {[11, 1899], [0, 1079]}
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

struct blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_285_cache {
	// RAM Box: {[12, 1900], [0, 1079]}
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

struct blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_286_cache {
	// RAM Box: {[13, 1901], [0, 1079]}
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

struct blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_287_cache {
	// RAM Box: {[10, 1898], [0, 1079]}
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

struct blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_288_cache {
	// RAM Box: {[11, 1899], [0, 1079]}
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

struct blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_289_cache {
	// RAM Box: {[12, 1900], [0, 1079]}
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

struct blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_290_cache {
	// RAM Box: {[9, 1897], [0, 1079]}
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

struct blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_291_cache {
	// RAM Box: {[10, 1898], [0, 1079]}
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

struct blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_292_cache {
	// RAM Box: {[11, 1899], [0, 1079]}
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

struct blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_293_cache {
	// RAM Box: {[8, 1896], [0, 1079]}
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

struct blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_294_cache {
	// RAM Box: {[9, 1897], [0, 1079]}
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

struct blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_295_cache {
	// RAM Box: {[10, 1898], [0, 1079]}
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

struct blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_296_cache {
	// RAM Box: {[7, 1895], [0, 1079]}
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

struct blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_297_cache {
	// RAM Box: {[8, 1896], [0, 1079]}
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

struct blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_298_cache {
	// RAM Box: {[9, 1897], [0, 1079]}
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

struct blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_299_cache {
	// RAM Box: {[6, 1894], [0, 1079]}
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

struct blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_300_cache {
	// RAM Box: {[7, 1895], [0, 1079]}
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

struct blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_301_cache {
	// RAM Box: {[8, 1896], [0, 1079]}
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

struct blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_302_cache {
	// RAM Box: {[5, 1893], [0, 1079]}
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

struct blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_303_cache {
	// RAM Box: {[6, 1894], [0, 1079]}
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

struct blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_304_cache {
	// RAM Box: {[7, 1895], [0, 1079]}
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

struct blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_305_cache {
	// RAM Box: {[4, 1892], [0, 1079]}
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

struct blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_306_cache {
	// RAM Box: {[5, 1893], [0, 1079]}
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

struct blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_307_cache {
	// RAM Box: {[6, 1894], [0, 1079]}
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

struct blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_308_cache {
	// RAM Box: {[3, 1891], [0, 1079]}
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

struct blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_309_cache {
	// RAM Box: {[4, 1892], [0, 1079]}
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

struct blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_310_cache {
	// RAM Box: {[5, 1893], [0, 1079]}
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

struct blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_311_cache {
	// RAM Box: {[2, 1890], [0, 1079]}
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

struct blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_312_cache {
	// RAM Box: {[3, 1891], [0, 1079]}
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

struct blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_313_cache {
	// RAM Box: {[4, 1892], [0, 1079]}
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

struct blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_314_cache {
	// RAM Box: {[1, 1889], [0, 1079]}
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

struct blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_315_cache {
	// RAM Box: {[2, 1890], [0, 1079]}
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

struct blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_316_cache {
	// RAM Box: {[3, 1891], [0, 1079]}
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

struct blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_317_cache {
	// RAM Box: {[0, 1888], [0, 1079]}
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

struct blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_318_cache {
	// RAM Box: {[1, 1889], [0, 1079]}
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

struct blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_319_cache {
	// RAM Box: {[2, 1890], [0, 1079]}
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

struct blurx_cache {
  // Reader addrs...
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[33 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[1 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[1 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
    // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // # of banks: 96
  blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_224_cache blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_224;
  blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_225_cache blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_225;
  blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_226_cache blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_226;
  blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_227_cache blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_227;
  blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_228_cache blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_228;
  blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_229_cache blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_229;
  blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_230_cache blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_230;
  blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_231_cache blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_231;
  blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_232_cache blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_232;
  blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_233_cache blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_233;
  blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_234_cache blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_234;
  blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_235_cache blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_235;
  blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_236_cache blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_236;
  blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_237_cache blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_237;
  blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_238_cache blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_238;
  blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_239_cache blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_239;
  blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_240_cache blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_240;
  blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_241_cache blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_241;
  blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_242_cache blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_242;
  blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_243_cache blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_243;
  blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_244_cache blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_244;
  blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_245_cache blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_245;
  blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_246_cache blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_246;
  blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_247_cache blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_247;
  blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_248_cache blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_248;
  blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_249_cache blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_249;
  blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_250_cache blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_250;
  blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_251_cache blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_251;
  blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_252_cache blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_252;
  blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_253_cache blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_253;
  blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_254_cache blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_254;
  blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_255_cache blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_255;
  blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_256_cache blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_256;
  blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_257_cache blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_257;
  blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_258_cache blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_258;
  blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_259_cache blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_259;
  blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_260_cache blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_260;
  blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_261_cache blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_261;
  blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_262_cache blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_262;
  blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_263_cache blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_263;
  blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_264_cache blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_264;
  blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_265_cache blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_265;
  blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_266_cache blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_266;
  blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_267_cache blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_267;
  blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_268_cache blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_268;
  blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_269_cache blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_269;
  blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_270_cache blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_270;
  blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_271_cache blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_271;
  blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_272_cache blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_272;
  blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_273_cache blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_273;
  blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_274_cache blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_274;
  blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_275_cache blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_275;
  blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_276_cache blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_276;
  blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_277_cache blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_277;
  blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_278_cache blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_278;
  blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_279_cache blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_279;
  blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_280_cache blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_280;
  blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_281_cache blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_281;
  blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_282_cache blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_282;
  blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_283_cache blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_283;
  blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_284_cache blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_284;
  blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_285_cache blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_285;
  blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_286_cache blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_286;
  blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_287_cache blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_287;
  blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_288_cache blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_288;
  blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_289_cache blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_289;
  blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_290_cache blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_290;
  blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_291_cache blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_291;
  blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_292_cache blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_292;
  blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_293_cache blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_293;
  blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_294_cache blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_294;
  blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_295_cache blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_295;
  blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_296_cache blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_296;
  blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_297_cache blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_297;
  blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_298_cache blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_298;
  blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_299_cache blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_299;
  blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_300_cache blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_300;
  blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_301_cache blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_301;
  blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_302_cache blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_302;
  blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_303_cache blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_303;
  blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_304_cache blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_304;
  blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_305_cache blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_305;
  blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_306_cache blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_306;
  blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_307_cache blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_307;
  blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_308_cache blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_308;
  blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_309_cache blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_309;
  blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_310_cache blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_310;
  blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_311_cache blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_311;
  blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_312_cache blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_312;
  blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_313_cache blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_313;
  blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_314_cache blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_314;
  blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_315_cache blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_315;
  blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_316_cache blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_316;
  blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_317_cache blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_317;
  blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_318_cache blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_318;
  blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_319_cache blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_319;
};



inline void blurx_blurx_1_merged200_64_write(hw_uint<16>& blurx_blurx_1_merged200_64, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_224.push(blurx_blurx_1_merged200_64);
  blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_228.push(blurx_blurx_1_merged200_64);
  blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_232.push(blurx_blurx_1_merged200_64);
}

inline void blurx_blurx_1_merged200_65_write(hw_uint<16>& blurx_blurx_1_merged200_65, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_227.push(blurx_blurx_1_merged200_65);
  blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_231.push(blurx_blurx_1_merged200_65);
  blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_235.push(blurx_blurx_1_merged200_65);
}

inline void blurx_blurx_1_merged200_66_write(hw_uint<16>& blurx_blurx_1_merged200_66, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_230.push(blurx_blurx_1_merged200_66);
  blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_234.push(blurx_blurx_1_merged200_66);
  blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_238.push(blurx_blurx_1_merged200_66);
}

inline void blurx_blurx_1_merged200_67_write(hw_uint<16>& blurx_blurx_1_merged200_67, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_233.push(blurx_blurx_1_merged200_67);
  blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_237.push(blurx_blurx_1_merged200_67);
  blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_241.push(blurx_blurx_1_merged200_67);
}

inline void blurx_blurx_1_merged200_68_write(hw_uint<16>& blurx_blurx_1_merged200_68, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_236.push(blurx_blurx_1_merged200_68);
  blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_240.push(blurx_blurx_1_merged200_68);
  blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_244.push(blurx_blurx_1_merged200_68);
}

inline void blurx_blurx_1_merged200_69_write(hw_uint<16>& blurx_blurx_1_merged200_69, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_239.push(blurx_blurx_1_merged200_69);
  blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_243.push(blurx_blurx_1_merged200_69);
  blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_247.push(blurx_blurx_1_merged200_69);
}

inline void blurx_blurx_1_merged200_70_write(hw_uint<16>& blurx_blurx_1_merged200_70, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_242.push(blurx_blurx_1_merged200_70);
  blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_246.push(blurx_blurx_1_merged200_70);
  blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_250.push(blurx_blurx_1_merged200_70);
}

inline void blurx_blurx_1_merged200_71_write(hw_uint<16>& blurx_blurx_1_merged200_71, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_245.push(blurx_blurx_1_merged200_71);
  blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_249.push(blurx_blurx_1_merged200_71);
  blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_253.push(blurx_blurx_1_merged200_71);
}

inline void blurx_blurx_1_merged200_72_write(hw_uint<16>& blurx_blurx_1_merged200_72, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_248.push(blurx_blurx_1_merged200_72);
  blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_252.push(blurx_blurx_1_merged200_72);
  blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_256.push(blurx_blurx_1_merged200_72);
}

inline void blurx_blurx_1_merged200_73_write(hw_uint<16>& blurx_blurx_1_merged200_73, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_251.push(blurx_blurx_1_merged200_73);
  blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_255.push(blurx_blurx_1_merged200_73);
  blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_259.push(blurx_blurx_1_merged200_73);
}

inline void blurx_blurx_1_merged200_74_write(hw_uint<16>& blurx_blurx_1_merged200_74, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_254.push(blurx_blurx_1_merged200_74);
  blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_258.push(blurx_blurx_1_merged200_74);
  blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_262.push(blurx_blurx_1_merged200_74);
}

inline void blurx_blurx_1_merged200_75_write(hw_uint<16>& blurx_blurx_1_merged200_75, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_257.push(blurx_blurx_1_merged200_75);
  blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_261.push(blurx_blurx_1_merged200_75);
  blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_265.push(blurx_blurx_1_merged200_75);
}

inline void blurx_blurx_1_merged200_76_write(hw_uint<16>& blurx_blurx_1_merged200_76, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_260.push(blurx_blurx_1_merged200_76);
  blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_264.push(blurx_blurx_1_merged200_76);
  blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_268.push(blurx_blurx_1_merged200_76);
}

inline void blurx_blurx_1_merged200_77_write(hw_uint<16>& blurx_blurx_1_merged200_77, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_263.push(blurx_blurx_1_merged200_77);
  blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_267.push(blurx_blurx_1_merged200_77);
  blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_271.push(blurx_blurx_1_merged200_77);
}

inline void blurx_blurx_1_merged200_78_write(hw_uint<16>& blurx_blurx_1_merged200_78, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_266.push(blurx_blurx_1_merged200_78);
  blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_270.push(blurx_blurx_1_merged200_78);
  blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_274.push(blurx_blurx_1_merged200_78);
}

inline void blurx_blurx_1_merged200_79_write(hw_uint<16>& blurx_blurx_1_merged200_79, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_269.push(blurx_blurx_1_merged200_79);
  blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_273.push(blurx_blurx_1_merged200_79);
  blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_277.push(blurx_blurx_1_merged200_79);
}

inline void blurx_blurx_1_merged200_80_write(hw_uint<16>& blurx_blurx_1_merged200_80, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_272.push(blurx_blurx_1_merged200_80);
  blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_276.push(blurx_blurx_1_merged200_80);
  blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_280.push(blurx_blurx_1_merged200_80);
}

inline void blurx_blurx_1_merged200_81_write(hw_uint<16>& blurx_blurx_1_merged200_81, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_275.push(blurx_blurx_1_merged200_81);
  blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_279.push(blurx_blurx_1_merged200_81);
  blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_283.push(blurx_blurx_1_merged200_81);
}

inline void blurx_blurx_1_merged200_82_write(hw_uint<16>& blurx_blurx_1_merged200_82, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_278.push(blurx_blurx_1_merged200_82);
  blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_282.push(blurx_blurx_1_merged200_82);
  blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_286.push(blurx_blurx_1_merged200_82);
}

inline void blurx_blurx_1_merged200_83_write(hw_uint<16>& blurx_blurx_1_merged200_83, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_281.push(blurx_blurx_1_merged200_83);
  blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_285.push(blurx_blurx_1_merged200_83);
  blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_289.push(blurx_blurx_1_merged200_83);
}

inline void blurx_blurx_1_merged200_84_write(hw_uint<16>& blurx_blurx_1_merged200_84, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_284.push(blurx_blurx_1_merged200_84);
  blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_288.push(blurx_blurx_1_merged200_84);
  blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_292.push(blurx_blurx_1_merged200_84);
}

inline void blurx_blurx_1_merged200_85_write(hw_uint<16>& blurx_blurx_1_merged200_85, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_287.push(blurx_blurx_1_merged200_85);
  blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_291.push(blurx_blurx_1_merged200_85);
  blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_295.push(blurx_blurx_1_merged200_85);
}

inline void blurx_blurx_1_merged200_86_write(hw_uint<16>& blurx_blurx_1_merged200_86, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_290.push(blurx_blurx_1_merged200_86);
  blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_294.push(blurx_blurx_1_merged200_86);
  blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_298.push(blurx_blurx_1_merged200_86);
}

inline void blurx_blurx_1_merged200_87_write(hw_uint<16>& blurx_blurx_1_merged200_87, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_293.push(blurx_blurx_1_merged200_87);
  blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_297.push(blurx_blurx_1_merged200_87);
  blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_301.push(blurx_blurx_1_merged200_87);
}

inline void blurx_blurx_1_merged200_88_write(hw_uint<16>& blurx_blurx_1_merged200_88, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_296.push(blurx_blurx_1_merged200_88);
  blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_300.push(blurx_blurx_1_merged200_88);
  blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_304.push(blurx_blurx_1_merged200_88);
}

inline void blurx_blurx_1_merged200_89_write(hw_uint<16>& blurx_blurx_1_merged200_89, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_299.push(blurx_blurx_1_merged200_89);
  blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_303.push(blurx_blurx_1_merged200_89);
  blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_307.push(blurx_blurx_1_merged200_89);
}

inline void blurx_blurx_1_merged200_90_write(hw_uint<16>& blurx_blurx_1_merged200_90, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_302.push(blurx_blurx_1_merged200_90);
  blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_306.push(blurx_blurx_1_merged200_90);
  blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_310.push(blurx_blurx_1_merged200_90);
}

inline void blurx_blurx_1_merged200_91_write(hw_uint<16>& blurx_blurx_1_merged200_91, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_305.push(blurx_blurx_1_merged200_91);
  blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_309.push(blurx_blurx_1_merged200_91);
  blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_313.push(blurx_blurx_1_merged200_91);
}

inline void blurx_blurx_1_merged200_92_write(hw_uint<16>& blurx_blurx_1_merged200_92, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_308.push(blurx_blurx_1_merged200_92);
  blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_312.push(blurx_blurx_1_merged200_92);
  blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_316.push(blurx_blurx_1_merged200_92);
}

inline void blurx_blurx_1_merged200_93_write(hw_uint<16>& blurx_blurx_1_merged200_93, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_311.push(blurx_blurx_1_merged200_93);
  blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_315.push(blurx_blurx_1_merged200_93);
  blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_319.push(blurx_blurx_1_merged200_93);
}

inline void blurx_blurx_1_merged200_94_write(hw_uint<16>& blurx_blurx_1_merged200_94, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_226.push(blurx_blurx_1_merged200_94);
  blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_314.push(blurx_blurx_1_merged200_94);
  blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_318.push(blurx_blurx_1_merged200_94);
}

inline void blurx_blurx_1_merged200_95_write(hw_uint<16>& blurx_blurx_1_merged200_95, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
  blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_225.push(blurx_blurx_1_merged200_95);
  blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_229.push(blurx_blurx_1_merged200_95);
  blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_317.push(blurx_blurx_1_merged200_95);
}

inline hw_uint<16> blurx_blur4_32_1_merged203_224_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_224 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_64 = blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_224.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_64;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_225_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_225 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_95 = blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_225.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged200_95;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_226_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_226 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[33 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_94 = blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_226.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged200_94;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_227_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_227 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_65 = blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_227.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_65;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_228_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_228 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_64 = blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_228.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_64;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_229_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_229 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_95 = blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_229.peek(/* one reader or all rams */ 0);
  return value_blurx_blurx_1_merged200_95;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_230_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_230 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_66 = blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_230.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_66;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_231_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_231 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_65 = blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_231.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_65;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_232_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_232 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_64 = blurx.blurx_blurx_1_merged200_64_to_blurx_blur4_32_1_merged203_232.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_64;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_233_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_233 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_67 = blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_233.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_67;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_234_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_234 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_66 = blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_234.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_66;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_235_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_235 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_65 = blurx.blurx_blurx_1_merged200_65_to_blurx_blur4_32_1_merged203_235.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_65;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_236_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_236 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_68 = blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_236.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_68;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_237_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_237 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_67 = blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_237.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_67;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_238_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_238 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_66 = blurx.blurx_blurx_1_merged200_66_to_blurx_blur4_32_1_merged203_238.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_66;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_239_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_239 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_69 = blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_239.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_69;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_240_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_240 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_68 = blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_240.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_68;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_241_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_241 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_67 = blurx.blurx_blurx_1_merged200_67_to_blurx_blur4_32_1_merged203_241.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_67;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_242_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_242 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_70 = blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_242.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_70;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_243_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_243 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_69 = blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_243.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_69;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_244_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_244 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_68 = blurx.blurx_blurx_1_merged200_68_to_blurx_blur4_32_1_merged203_244.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_68;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_245_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_245 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_71 = blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_245.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_71;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_246_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_246 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_70 = blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_246.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_70;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_247_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_247 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_69 = blurx.blurx_blurx_1_merged200_69_to_blurx_blur4_32_1_merged203_247.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_69;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_248_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_248 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_72 = blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_248.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_72;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_249_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_249 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_71 = blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_249.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_71;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_250_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_250 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_70 = blurx.blurx_blurx_1_merged200_70_to_blurx_blur4_32_1_merged203_250.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_70;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_251_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_251 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_73 = blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_251.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_73;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_252_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_252 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_72 = blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_252.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_72;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_253_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_253 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_71 = blurx.blurx_blurx_1_merged200_71_to_blurx_blur4_32_1_merged203_253.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_71;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_254_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_254 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_74 = blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_254.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_74;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_255_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_255 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_73 = blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_255.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_73;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_256_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_256 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_72 = blurx.blurx_blurx_1_merged200_72_to_blurx_blur4_32_1_merged203_256.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_72;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_257_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_257 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_75 = blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_257.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_75;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_258_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_258 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_74 = blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_258.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_74;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_259_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_259 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_73 = blurx.blurx_blurx_1_merged200_73_to_blurx_blur4_32_1_merged203_259.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_73;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_260_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_260 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_76 = blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_260.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_76;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_261_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_261 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_75 = blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_261.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_75;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_262_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_262 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_74 = blurx.blurx_blurx_1_merged200_74_to_blurx_blur4_32_1_merged203_262.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_74;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_263_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_263 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_77 = blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_263.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_77;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_264_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_264 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_76 = blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_264.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_76;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_265_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_265 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_75 = blurx.blurx_blurx_1_merged200_75_to_blurx_blur4_32_1_merged203_265.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_75;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_266_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_266 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_78 = blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_266.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_78;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_267_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_267 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_77 = blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_267.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_77;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_268_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_268 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_76 = blurx.blurx_blurx_1_merged200_76_to_blurx_blur4_32_1_merged203_268.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_76;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_269_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_269 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_79 = blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_269.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_79;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_270_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_270 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_78 = blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_270.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_78;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_271_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_271 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_77 = blurx.blurx_blurx_1_merged200_77_to_blurx_blur4_32_1_merged203_271.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_77;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_272_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_272 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_80 = blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_272.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_80;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_273_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_273 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_79 = blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_273.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_79;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_274_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_274 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_78 = blurx.blurx_blurx_1_merged200_78_to_blurx_blur4_32_1_merged203_274.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_78;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_275_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_275 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_81 = blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_275.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_81;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_276_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_276 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_80 = blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_276.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_80;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_277_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_277 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_79 = blurx.blurx_blurx_1_merged200_79_to_blurx_blur4_32_1_merged203_277.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_79;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_278_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_278 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_82 = blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_278.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_82;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_279_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_279 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_81 = blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_279.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_81;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_280_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_280 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_80 = blurx.blurx_blurx_1_merged200_80_to_blurx_blur4_32_1_merged203_280.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_80;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_281_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_281 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_83 = blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_281.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_83;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_282_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_282 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_82 = blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_282.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_82;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_283_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_283 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_81 = blurx.blurx_blurx_1_merged200_81_to_blurx_blur4_32_1_merged203_283.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_81;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_284_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_284 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_84 = blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_284.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_84;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_285_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_285 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_83 = blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_285.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_83;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_286_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_286 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_82 = blurx.blurx_blurx_1_merged200_82_to_blurx_blur4_32_1_merged203_286.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_82;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_287_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_287 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_85 = blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_287.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_85;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_288_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_288 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_84 = blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_288.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_84;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_289_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_289 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_83 = blurx.blurx_blurx_1_merged200_83_to_blurx_blur4_32_1_merged203_289.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_83;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_290_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_290 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_86 = blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_290.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_86;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_291_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_291 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_85 = blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_291.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_85;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_292_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_292 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_84 = blurx.blurx_blurx_1_merged200_84_to_blurx_blur4_32_1_merged203_292.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_84;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_293_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_293 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_87 = blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_293.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_87;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_294_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_294 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_86 = blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_294.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_86;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_295_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_295 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_85 = blurx.blurx_blurx_1_merged200_85_to_blurx_blur4_32_1_merged203_295.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_85;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_296_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_296 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_88 = blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_296.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_88;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_297_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_297 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_87 = blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_297.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_87;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_298_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_298 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_86 = blurx.blurx_blurx_1_merged200_86_to_blurx_blur4_32_1_merged203_298.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_86;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_299_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_299 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_89 = blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_299.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_89;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_300_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_300 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_88 = blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_300.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_88;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_301_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_301 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_87 = blurx.blurx_blurx_1_merged200_87_to_blurx_blur4_32_1_merged203_301.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_87;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_302_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_302 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_90 = blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_302.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_90;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_303_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_303 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_89 = blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_303.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_89;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_304_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_304 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_88 = blurx.blurx_blurx_1_merged200_88_to_blurx_blur4_32_1_merged203_304.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_88;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_305_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_305 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_91 = blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_305.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_91;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_306_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_306 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_90 = blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_306.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_90;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_307_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_307 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_89 = blurx.blurx_blurx_1_merged200_89_to_blurx_blur4_32_1_merged203_307.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_89;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_308_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_308 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_92 = blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_308.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_92;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_309_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_309 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_91 = blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_309.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_91;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_310_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_310 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_90 = blurx.blurx_blurx_1_merged200_90_to_blurx_blur4_32_1_merged203_310.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_90;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_311_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_311 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_93 = blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_311.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_93;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_312_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_312 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_92 = blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_312.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_92;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_313_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_313 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_91 = blurx.blurx_blurx_1_merged200_91_to_blurx_blur4_32_1_merged203_313.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_91;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_314_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_314 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[1 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_94 = blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_314.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_94;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_315_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_315 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_93 = blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_315.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_93;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_316_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_316 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_92 = blurx.blurx_blurx_1_merged200_92_to_blurx_blur4_32_1_merged203_316.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_92;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_317_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_317 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_95 = blurx.blurx_blurx_1_merged200_95_to_blurx_blur4_32_1_merged203_317.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_95;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_318_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_318 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[1 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_94 = blurx.blurx_blurx_1_merged200_94_to_blurx_blur4_32_1_merged203_318.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_94;
  return 0;
}

inline hw_uint<16> blurx_blur4_32_1_merged203_319_select(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurx_blur4_32_1_merged203_319 read pattern: { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blurx[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
  // Read schedule : { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  auto value_blurx_blurx_1_merged200_93 = blurx.blurx_blurx_1_merged200_93_to_blurx_blur4_32_1_merged203_319.peek(/* one reader or all rams */ 1);
  return value_blurx_blurx_1_merged200_93;
  return 0;
}

// # of bundles = 2
// blur4_32_1_merged203_read
//	blurx_blur4_32_1_merged203_224
//	blurx_blur4_32_1_merged203_225
//	blurx_blur4_32_1_merged203_226
//	blurx_blur4_32_1_merged203_227
//	blurx_blur4_32_1_merged203_228
//	blurx_blur4_32_1_merged203_229
//	blurx_blur4_32_1_merged203_230
//	blurx_blur4_32_1_merged203_231
//	blurx_blur4_32_1_merged203_232
//	blurx_blur4_32_1_merged203_233
//	blurx_blur4_32_1_merged203_234
//	blurx_blur4_32_1_merged203_235
//	blurx_blur4_32_1_merged203_236
//	blurx_blur4_32_1_merged203_237
//	blurx_blur4_32_1_merged203_238
//	blurx_blur4_32_1_merged203_239
//	blurx_blur4_32_1_merged203_240
//	blurx_blur4_32_1_merged203_241
//	blurx_blur4_32_1_merged203_242
//	blurx_blur4_32_1_merged203_243
//	blurx_blur4_32_1_merged203_244
//	blurx_blur4_32_1_merged203_245
//	blurx_blur4_32_1_merged203_246
//	blurx_blur4_32_1_merged203_247
//	blurx_blur4_32_1_merged203_248
//	blurx_blur4_32_1_merged203_249
//	blurx_blur4_32_1_merged203_250
//	blurx_blur4_32_1_merged203_251
//	blurx_blur4_32_1_merged203_252
//	blurx_blur4_32_1_merged203_253
//	blurx_blur4_32_1_merged203_254
//	blurx_blur4_32_1_merged203_255
//	blurx_blur4_32_1_merged203_256
//	blurx_blur4_32_1_merged203_257
//	blurx_blur4_32_1_merged203_258
//	blurx_blur4_32_1_merged203_259
//	blurx_blur4_32_1_merged203_260
//	blurx_blur4_32_1_merged203_261
//	blurx_blur4_32_1_merged203_262
//	blurx_blur4_32_1_merged203_263
//	blurx_blur4_32_1_merged203_264
//	blurx_blur4_32_1_merged203_265
//	blurx_blur4_32_1_merged203_266
//	blurx_blur4_32_1_merged203_267
//	blurx_blur4_32_1_merged203_268
//	blurx_blur4_32_1_merged203_269
//	blurx_blur4_32_1_merged203_270
//	blurx_blur4_32_1_merged203_271
//	blurx_blur4_32_1_merged203_272
//	blurx_blur4_32_1_merged203_273
//	blurx_blur4_32_1_merged203_274
//	blurx_blur4_32_1_merged203_275
//	blurx_blur4_32_1_merged203_276
//	blurx_blur4_32_1_merged203_277
//	blurx_blur4_32_1_merged203_278
//	blurx_blur4_32_1_merged203_279
//	blurx_blur4_32_1_merged203_280
//	blurx_blur4_32_1_merged203_281
//	blurx_blur4_32_1_merged203_282
//	blurx_blur4_32_1_merged203_283
//	blurx_blur4_32_1_merged203_284
//	blurx_blur4_32_1_merged203_285
//	blurx_blur4_32_1_merged203_286
//	blurx_blur4_32_1_merged203_287
//	blurx_blur4_32_1_merged203_288
//	blurx_blur4_32_1_merged203_289
//	blurx_blur4_32_1_merged203_290
//	blurx_blur4_32_1_merged203_291
//	blurx_blur4_32_1_merged203_292
//	blurx_blur4_32_1_merged203_293
//	blurx_blur4_32_1_merged203_294
//	blurx_blur4_32_1_merged203_295
//	blurx_blur4_32_1_merged203_296
//	blurx_blur4_32_1_merged203_297
//	blurx_blur4_32_1_merged203_298
//	blurx_blur4_32_1_merged203_299
//	blurx_blur4_32_1_merged203_300
//	blurx_blur4_32_1_merged203_301
//	blurx_blur4_32_1_merged203_302
//	blurx_blur4_32_1_merged203_303
//	blurx_blur4_32_1_merged203_304
//	blurx_blur4_32_1_merged203_305
//	blurx_blur4_32_1_merged203_306
//	blurx_blur4_32_1_merged203_307
//	blurx_blur4_32_1_merged203_308
//	blurx_blur4_32_1_merged203_309
//	blurx_blur4_32_1_merged203_310
//	blurx_blur4_32_1_merged203_311
//	blurx_blur4_32_1_merged203_312
//	blurx_blur4_32_1_merged203_313
//	blurx_blur4_32_1_merged203_314
//	blurx_blur4_32_1_merged203_315
//	blurx_blur4_32_1_merged203_316
//	blurx_blur4_32_1_merged203_317
//	blurx_blur4_32_1_merged203_318
//	blurx_blur4_32_1_merged203_319
inline hw_uint<1536> blurx_blur4_32_1_merged203_read_bundle_read(blurx_cache& blurx, int root, int blur4_32_0, int blur4_32_1, int dynamic_address) {
  // # of ports in bundle: 96
    // blurx_blur4_32_1_merged203_224
    // blurx_blur4_32_1_merged203_225
    // blurx_blur4_32_1_merged203_226
    // blurx_blur4_32_1_merged203_227
    // blurx_blur4_32_1_merged203_228
    // blurx_blur4_32_1_merged203_229
    // blurx_blur4_32_1_merged203_230
    // blurx_blur4_32_1_merged203_231
    // blurx_blur4_32_1_merged203_232
    // blurx_blur4_32_1_merged203_233
    // blurx_blur4_32_1_merged203_234
    // blurx_blur4_32_1_merged203_235
    // blurx_blur4_32_1_merged203_236
    // blurx_blur4_32_1_merged203_237
    // blurx_blur4_32_1_merged203_238
    // blurx_blur4_32_1_merged203_239
    // blurx_blur4_32_1_merged203_240
    // blurx_blur4_32_1_merged203_241
    // blurx_blur4_32_1_merged203_242
    // blurx_blur4_32_1_merged203_243
    // blurx_blur4_32_1_merged203_244
    // blurx_blur4_32_1_merged203_245
    // blurx_blur4_32_1_merged203_246
    // blurx_blur4_32_1_merged203_247
    // blurx_blur4_32_1_merged203_248
    // blurx_blur4_32_1_merged203_249
    // blurx_blur4_32_1_merged203_250
    // blurx_blur4_32_1_merged203_251
    // blurx_blur4_32_1_merged203_252
    // blurx_blur4_32_1_merged203_253
    // blurx_blur4_32_1_merged203_254
    // blurx_blur4_32_1_merged203_255
    // blurx_blur4_32_1_merged203_256
    // blurx_blur4_32_1_merged203_257
    // blurx_blur4_32_1_merged203_258
    // blurx_blur4_32_1_merged203_259
    // blurx_blur4_32_1_merged203_260
    // blurx_blur4_32_1_merged203_261
    // blurx_blur4_32_1_merged203_262
    // blurx_blur4_32_1_merged203_263
    // blurx_blur4_32_1_merged203_264
    // blurx_blur4_32_1_merged203_265
    // blurx_blur4_32_1_merged203_266
    // blurx_blur4_32_1_merged203_267
    // blurx_blur4_32_1_merged203_268
    // blurx_blur4_32_1_merged203_269
    // blurx_blur4_32_1_merged203_270
    // blurx_blur4_32_1_merged203_271
    // blurx_blur4_32_1_merged203_272
    // blurx_blur4_32_1_merged203_273
    // blurx_blur4_32_1_merged203_274
    // blurx_blur4_32_1_merged203_275
    // blurx_blur4_32_1_merged203_276
    // blurx_blur4_32_1_merged203_277
    // blurx_blur4_32_1_merged203_278
    // blurx_blur4_32_1_merged203_279
    // blurx_blur4_32_1_merged203_280
    // blurx_blur4_32_1_merged203_281
    // blurx_blur4_32_1_merged203_282
    // blurx_blur4_32_1_merged203_283
    // blurx_blur4_32_1_merged203_284
    // blurx_blur4_32_1_merged203_285
    // blurx_blur4_32_1_merged203_286
    // blurx_blur4_32_1_merged203_287
    // blurx_blur4_32_1_merged203_288
    // blurx_blur4_32_1_merged203_289
    // blurx_blur4_32_1_merged203_290
    // blurx_blur4_32_1_merged203_291
    // blurx_blur4_32_1_merged203_292
    // blurx_blur4_32_1_merged203_293
    // blurx_blur4_32_1_merged203_294
    // blurx_blur4_32_1_merged203_295
    // blurx_blur4_32_1_merged203_296
    // blurx_blur4_32_1_merged203_297
    // blurx_blur4_32_1_merged203_298
    // blurx_blur4_32_1_merged203_299
    // blurx_blur4_32_1_merged203_300
    // blurx_blur4_32_1_merged203_301
    // blurx_blur4_32_1_merged203_302
    // blurx_blur4_32_1_merged203_303
    // blurx_blur4_32_1_merged203_304
    // blurx_blur4_32_1_merged203_305
    // blurx_blur4_32_1_merged203_306
    // blurx_blur4_32_1_merged203_307
    // blurx_blur4_32_1_merged203_308
    // blurx_blur4_32_1_merged203_309
    // blurx_blur4_32_1_merged203_310
    // blurx_blur4_32_1_merged203_311
    // blurx_blur4_32_1_merged203_312
    // blurx_blur4_32_1_merged203_313
    // blurx_blur4_32_1_merged203_314
    // blurx_blur4_32_1_merged203_315
    // blurx_blur4_32_1_merged203_316
    // blurx_blur4_32_1_merged203_317
    // blurx_blur4_32_1_merged203_318
    // blurx_blur4_32_1_merged203_319

	hw_uint<1536> result;
	hw_uint<16> blurx_blur4_32_1_merged203_224_res = blurx_blur4_32_1_merged203_224_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<0, 1536>(result, blurx_blur4_32_1_merged203_224_res);
	hw_uint<16> blurx_blur4_32_1_merged203_225_res = blurx_blur4_32_1_merged203_225_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<16, 1536>(result, blurx_blur4_32_1_merged203_225_res);
	hw_uint<16> blurx_blur4_32_1_merged203_226_res = blurx_blur4_32_1_merged203_226_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<32, 1536>(result, blurx_blur4_32_1_merged203_226_res);
	hw_uint<16> blurx_blur4_32_1_merged203_227_res = blurx_blur4_32_1_merged203_227_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<48, 1536>(result, blurx_blur4_32_1_merged203_227_res);
	hw_uint<16> blurx_blur4_32_1_merged203_228_res = blurx_blur4_32_1_merged203_228_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<64, 1536>(result, blurx_blur4_32_1_merged203_228_res);
	hw_uint<16> blurx_blur4_32_1_merged203_229_res = blurx_blur4_32_1_merged203_229_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<80, 1536>(result, blurx_blur4_32_1_merged203_229_res);
	hw_uint<16> blurx_blur4_32_1_merged203_230_res = blurx_blur4_32_1_merged203_230_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<96, 1536>(result, blurx_blur4_32_1_merged203_230_res);
	hw_uint<16> blurx_blur4_32_1_merged203_231_res = blurx_blur4_32_1_merged203_231_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<112, 1536>(result, blurx_blur4_32_1_merged203_231_res);
	hw_uint<16> blurx_blur4_32_1_merged203_232_res = blurx_blur4_32_1_merged203_232_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<128, 1536>(result, blurx_blur4_32_1_merged203_232_res);
	hw_uint<16> blurx_blur4_32_1_merged203_233_res = blurx_blur4_32_1_merged203_233_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<144, 1536>(result, blurx_blur4_32_1_merged203_233_res);
	hw_uint<16> blurx_blur4_32_1_merged203_234_res = blurx_blur4_32_1_merged203_234_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<160, 1536>(result, blurx_blur4_32_1_merged203_234_res);
	hw_uint<16> blurx_blur4_32_1_merged203_235_res = blurx_blur4_32_1_merged203_235_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<176, 1536>(result, blurx_blur4_32_1_merged203_235_res);
	hw_uint<16> blurx_blur4_32_1_merged203_236_res = blurx_blur4_32_1_merged203_236_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<192, 1536>(result, blurx_blur4_32_1_merged203_236_res);
	hw_uint<16> blurx_blur4_32_1_merged203_237_res = blurx_blur4_32_1_merged203_237_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<208, 1536>(result, blurx_blur4_32_1_merged203_237_res);
	hw_uint<16> blurx_blur4_32_1_merged203_238_res = blurx_blur4_32_1_merged203_238_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<224, 1536>(result, blurx_blur4_32_1_merged203_238_res);
	hw_uint<16> blurx_blur4_32_1_merged203_239_res = blurx_blur4_32_1_merged203_239_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<240, 1536>(result, blurx_blur4_32_1_merged203_239_res);
	hw_uint<16> blurx_blur4_32_1_merged203_240_res = blurx_blur4_32_1_merged203_240_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<256, 1536>(result, blurx_blur4_32_1_merged203_240_res);
	hw_uint<16> blurx_blur4_32_1_merged203_241_res = blurx_blur4_32_1_merged203_241_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<272, 1536>(result, blurx_blur4_32_1_merged203_241_res);
	hw_uint<16> blurx_blur4_32_1_merged203_242_res = blurx_blur4_32_1_merged203_242_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<288, 1536>(result, blurx_blur4_32_1_merged203_242_res);
	hw_uint<16> blurx_blur4_32_1_merged203_243_res = blurx_blur4_32_1_merged203_243_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<304, 1536>(result, blurx_blur4_32_1_merged203_243_res);
	hw_uint<16> blurx_blur4_32_1_merged203_244_res = blurx_blur4_32_1_merged203_244_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<320, 1536>(result, blurx_blur4_32_1_merged203_244_res);
	hw_uint<16> blurx_blur4_32_1_merged203_245_res = blurx_blur4_32_1_merged203_245_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<336, 1536>(result, blurx_blur4_32_1_merged203_245_res);
	hw_uint<16> blurx_blur4_32_1_merged203_246_res = blurx_blur4_32_1_merged203_246_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<352, 1536>(result, blurx_blur4_32_1_merged203_246_res);
	hw_uint<16> blurx_blur4_32_1_merged203_247_res = blurx_blur4_32_1_merged203_247_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<368, 1536>(result, blurx_blur4_32_1_merged203_247_res);
	hw_uint<16> blurx_blur4_32_1_merged203_248_res = blurx_blur4_32_1_merged203_248_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<384, 1536>(result, blurx_blur4_32_1_merged203_248_res);
	hw_uint<16> blurx_blur4_32_1_merged203_249_res = blurx_blur4_32_1_merged203_249_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<400, 1536>(result, blurx_blur4_32_1_merged203_249_res);
	hw_uint<16> blurx_blur4_32_1_merged203_250_res = blurx_blur4_32_1_merged203_250_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<416, 1536>(result, blurx_blur4_32_1_merged203_250_res);
	hw_uint<16> blurx_blur4_32_1_merged203_251_res = blurx_blur4_32_1_merged203_251_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<432, 1536>(result, blurx_blur4_32_1_merged203_251_res);
	hw_uint<16> blurx_blur4_32_1_merged203_252_res = blurx_blur4_32_1_merged203_252_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<448, 1536>(result, blurx_blur4_32_1_merged203_252_res);
	hw_uint<16> blurx_blur4_32_1_merged203_253_res = blurx_blur4_32_1_merged203_253_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<464, 1536>(result, blurx_blur4_32_1_merged203_253_res);
	hw_uint<16> blurx_blur4_32_1_merged203_254_res = blurx_blur4_32_1_merged203_254_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<480, 1536>(result, blurx_blur4_32_1_merged203_254_res);
	hw_uint<16> blurx_blur4_32_1_merged203_255_res = blurx_blur4_32_1_merged203_255_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<496, 1536>(result, blurx_blur4_32_1_merged203_255_res);
	hw_uint<16> blurx_blur4_32_1_merged203_256_res = blurx_blur4_32_1_merged203_256_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<512, 1536>(result, blurx_blur4_32_1_merged203_256_res);
	hw_uint<16> blurx_blur4_32_1_merged203_257_res = blurx_blur4_32_1_merged203_257_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<528, 1536>(result, blurx_blur4_32_1_merged203_257_res);
	hw_uint<16> blurx_blur4_32_1_merged203_258_res = blurx_blur4_32_1_merged203_258_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<544, 1536>(result, blurx_blur4_32_1_merged203_258_res);
	hw_uint<16> blurx_blur4_32_1_merged203_259_res = blurx_blur4_32_1_merged203_259_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<560, 1536>(result, blurx_blur4_32_1_merged203_259_res);
	hw_uint<16> blurx_blur4_32_1_merged203_260_res = blurx_blur4_32_1_merged203_260_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<576, 1536>(result, blurx_blur4_32_1_merged203_260_res);
	hw_uint<16> blurx_blur4_32_1_merged203_261_res = blurx_blur4_32_1_merged203_261_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<592, 1536>(result, blurx_blur4_32_1_merged203_261_res);
	hw_uint<16> blurx_blur4_32_1_merged203_262_res = blurx_blur4_32_1_merged203_262_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<608, 1536>(result, blurx_blur4_32_1_merged203_262_res);
	hw_uint<16> blurx_blur4_32_1_merged203_263_res = blurx_blur4_32_1_merged203_263_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<624, 1536>(result, blurx_blur4_32_1_merged203_263_res);
	hw_uint<16> blurx_blur4_32_1_merged203_264_res = blurx_blur4_32_1_merged203_264_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<640, 1536>(result, blurx_blur4_32_1_merged203_264_res);
	hw_uint<16> blurx_blur4_32_1_merged203_265_res = blurx_blur4_32_1_merged203_265_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<656, 1536>(result, blurx_blur4_32_1_merged203_265_res);
	hw_uint<16> blurx_blur4_32_1_merged203_266_res = blurx_blur4_32_1_merged203_266_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<672, 1536>(result, blurx_blur4_32_1_merged203_266_res);
	hw_uint<16> blurx_blur4_32_1_merged203_267_res = blurx_blur4_32_1_merged203_267_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<688, 1536>(result, blurx_blur4_32_1_merged203_267_res);
	hw_uint<16> blurx_blur4_32_1_merged203_268_res = blurx_blur4_32_1_merged203_268_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<704, 1536>(result, blurx_blur4_32_1_merged203_268_res);
	hw_uint<16> blurx_blur4_32_1_merged203_269_res = blurx_blur4_32_1_merged203_269_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<720, 1536>(result, blurx_blur4_32_1_merged203_269_res);
	hw_uint<16> blurx_blur4_32_1_merged203_270_res = blurx_blur4_32_1_merged203_270_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<736, 1536>(result, blurx_blur4_32_1_merged203_270_res);
	hw_uint<16> blurx_blur4_32_1_merged203_271_res = blurx_blur4_32_1_merged203_271_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<752, 1536>(result, blurx_blur4_32_1_merged203_271_res);
	hw_uint<16> blurx_blur4_32_1_merged203_272_res = blurx_blur4_32_1_merged203_272_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<768, 1536>(result, blurx_blur4_32_1_merged203_272_res);
	hw_uint<16> blurx_blur4_32_1_merged203_273_res = blurx_blur4_32_1_merged203_273_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<784, 1536>(result, blurx_blur4_32_1_merged203_273_res);
	hw_uint<16> blurx_blur4_32_1_merged203_274_res = blurx_blur4_32_1_merged203_274_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<800, 1536>(result, blurx_blur4_32_1_merged203_274_res);
	hw_uint<16> blurx_blur4_32_1_merged203_275_res = blurx_blur4_32_1_merged203_275_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<816, 1536>(result, blurx_blur4_32_1_merged203_275_res);
	hw_uint<16> blurx_blur4_32_1_merged203_276_res = blurx_blur4_32_1_merged203_276_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<832, 1536>(result, blurx_blur4_32_1_merged203_276_res);
	hw_uint<16> blurx_blur4_32_1_merged203_277_res = blurx_blur4_32_1_merged203_277_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<848, 1536>(result, blurx_blur4_32_1_merged203_277_res);
	hw_uint<16> blurx_blur4_32_1_merged203_278_res = blurx_blur4_32_1_merged203_278_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<864, 1536>(result, blurx_blur4_32_1_merged203_278_res);
	hw_uint<16> blurx_blur4_32_1_merged203_279_res = blurx_blur4_32_1_merged203_279_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<880, 1536>(result, blurx_blur4_32_1_merged203_279_res);
	hw_uint<16> blurx_blur4_32_1_merged203_280_res = blurx_blur4_32_1_merged203_280_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<896, 1536>(result, blurx_blur4_32_1_merged203_280_res);
	hw_uint<16> blurx_blur4_32_1_merged203_281_res = blurx_blur4_32_1_merged203_281_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<912, 1536>(result, blurx_blur4_32_1_merged203_281_res);
	hw_uint<16> blurx_blur4_32_1_merged203_282_res = blurx_blur4_32_1_merged203_282_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<928, 1536>(result, blurx_blur4_32_1_merged203_282_res);
	hw_uint<16> blurx_blur4_32_1_merged203_283_res = blurx_blur4_32_1_merged203_283_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<944, 1536>(result, blurx_blur4_32_1_merged203_283_res);
	hw_uint<16> blurx_blur4_32_1_merged203_284_res = blurx_blur4_32_1_merged203_284_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<960, 1536>(result, blurx_blur4_32_1_merged203_284_res);
	hw_uint<16> blurx_blur4_32_1_merged203_285_res = blurx_blur4_32_1_merged203_285_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<976, 1536>(result, blurx_blur4_32_1_merged203_285_res);
	hw_uint<16> blurx_blur4_32_1_merged203_286_res = blurx_blur4_32_1_merged203_286_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<992, 1536>(result, blurx_blur4_32_1_merged203_286_res);
	hw_uint<16> blurx_blur4_32_1_merged203_287_res = blurx_blur4_32_1_merged203_287_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1008, 1536>(result, blurx_blur4_32_1_merged203_287_res);
	hw_uint<16> blurx_blur4_32_1_merged203_288_res = blurx_blur4_32_1_merged203_288_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1024, 1536>(result, blurx_blur4_32_1_merged203_288_res);
	hw_uint<16> blurx_blur4_32_1_merged203_289_res = blurx_blur4_32_1_merged203_289_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1040, 1536>(result, blurx_blur4_32_1_merged203_289_res);
	hw_uint<16> blurx_blur4_32_1_merged203_290_res = blurx_blur4_32_1_merged203_290_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1056, 1536>(result, blurx_blur4_32_1_merged203_290_res);
	hw_uint<16> blurx_blur4_32_1_merged203_291_res = blurx_blur4_32_1_merged203_291_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1072, 1536>(result, blurx_blur4_32_1_merged203_291_res);
	hw_uint<16> blurx_blur4_32_1_merged203_292_res = blurx_blur4_32_1_merged203_292_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1088, 1536>(result, blurx_blur4_32_1_merged203_292_res);
	hw_uint<16> blurx_blur4_32_1_merged203_293_res = blurx_blur4_32_1_merged203_293_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1104, 1536>(result, blurx_blur4_32_1_merged203_293_res);
	hw_uint<16> blurx_blur4_32_1_merged203_294_res = blurx_blur4_32_1_merged203_294_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1120, 1536>(result, blurx_blur4_32_1_merged203_294_res);
	hw_uint<16> blurx_blur4_32_1_merged203_295_res = blurx_blur4_32_1_merged203_295_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1136, 1536>(result, blurx_blur4_32_1_merged203_295_res);
	hw_uint<16> blurx_blur4_32_1_merged203_296_res = blurx_blur4_32_1_merged203_296_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1152, 1536>(result, blurx_blur4_32_1_merged203_296_res);
	hw_uint<16> blurx_blur4_32_1_merged203_297_res = blurx_blur4_32_1_merged203_297_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1168, 1536>(result, blurx_blur4_32_1_merged203_297_res);
	hw_uint<16> blurx_blur4_32_1_merged203_298_res = blurx_blur4_32_1_merged203_298_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1184, 1536>(result, blurx_blur4_32_1_merged203_298_res);
	hw_uint<16> blurx_blur4_32_1_merged203_299_res = blurx_blur4_32_1_merged203_299_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1200, 1536>(result, blurx_blur4_32_1_merged203_299_res);
	hw_uint<16> blurx_blur4_32_1_merged203_300_res = blurx_blur4_32_1_merged203_300_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1216, 1536>(result, blurx_blur4_32_1_merged203_300_res);
	hw_uint<16> blurx_blur4_32_1_merged203_301_res = blurx_blur4_32_1_merged203_301_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1232, 1536>(result, blurx_blur4_32_1_merged203_301_res);
	hw_uint<16> blurx_blur4_32_1_merged203_302_res = blurx_blur4_32_1_merged203_302_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1248, 1536>(result, blurx_blur4_32_1_merged203_302_res);
	hw_uint<16> blurx_blur4_32_1_merged203_303_res = blurx_blur4_32_1_merged203_303_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1264, 1536>(result, blurx_blur4_32_1_merged203_303_res);
	hw_uint<16> blurx_blur4_32_1_merged203_304_res = blurx_blur4_32_1_merged203_304_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1280, 1536>(result, blurx_blur4_32_1_merged203_304_res);
	hw_uint<16> blurx_blur4_32_1_merged203_305_res = blurx_blur4_32_1_merged203_305_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1296, 1536>(result, blurx_blur4_32_1_merged203_305_res);
	hw_uint<16> blurx_blur4_32_1_merged203_306_res = blurx_blur4_32_1_merged203_306_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1312, 1536>(result, blurx_blur4_32_1_merged203_306_res);
	hw_uint<16> blurx_blur4_32_1_merged203_307_res = blurx_blur4_32_1_merged203_307_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1328, 1536>(result, blurx_blur4_32_1_merged203_307_res);
	hw_uint<16> blurx_blur4_32_1_merged203_308_res = blurx_blur4_32_1_merged203_308_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1344, 1536>(result, blurx_blur4_32_1_merged203_308_res);
	hw_uint<16> blurx_blur4_32_1_merged203_309_res = blurx_blur4_32_1_merged203_309_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1360, 1536>(result, blurx_blur4_32_1_merged203_309_res);
	hw_uint<16> blurx_blur4_32_1_merged203_310_res = blurx_blur4_32_1_merged203_310_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1376, 1536>(result, blurx_blur4_32_1_merged203_310_res);
	hw_uint<16> blurx_blur4_32_1_merged203_311_res = blurx_blur4_32_1_merged203_311_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1392, 1536>(result, blurx_blur4_32_1_merged203_311_res);
	hw_uint<16> blurx_blur4_32_1_merged203_312_res = blurx_blur4_32_1_merged203_312_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1408, 1536>(result, blurx_blur4_32_1_merged203_312_res);
	hw_uint<16> blurx_blur4_32_1_merged203_313_res = blurx_blur4_32_1_merged203_313_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1424, 1536>(result, blurx_blur4_32_1_merged203_313_res);
	hw_uint<16> blurx_blur4_32_1_merged203_314_res = blurx_blur4_32_1_merged203_314_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1440, 1536>(result, blurx_blur4_32_1_merged203_314_res);
	hw_uint<16> blurx_blur4_32_1_merged203_315_res = blurx_blur4_32_1_merged203_315_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1456, 1536>(result, blurx_blur4_32_1_merged203_315_res);
	hw_uint<16> blurx_blur4_32_1_merged203_316_res = blurx_blur4_32_1_merged203_316_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1472, 1536>(result, blurx_blur4_32_1_merged203_316_res);
	hw_uint<16> blurx_blur4_32_1_merged203_317_res = blurx_blur4_32_1_merged203_317_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1488, 1536>(result, blurx_blur4_32_1_merged203_317_res);
	hw_uint<16> blurx_blur4_32_1_merged203_318_res = blurx_blur4_32_1_merged203_318_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1504, 1536>(result, blurx_blur4_32_1_merged203_318_res);
	hw_uint<16> blurx_blur4_32_1_merged203_319_res = blurx_blur4_32_1_merged203_319_select(blurx, root, blur4_32_0, blur4_32_1, dynamic_address);
	set_at<1520, 1536>(result, blurx_blur4_32_1_merged203_319_res);
	return result;
}

// blurx_1_merged200_write
//	blurx_blurx_1_merged200_64
//	blurx_blurx_1_merged200_65
//	blurx_blurx_1_merged200_66
//	blurx_blurx_1_merged200_67
//	blurx_blurx_1_merged200_68
//	blurx_blurx_1_merged200_69
//	blurx_blurx_1_merged200_70
//	blurx_blurx_1_merged200_71
//	blurx_blurx_1_merged200_72
//	blurx_blurx_1_merged200_73
//	blurx_blurx_1_merged200_74
//	blurx_blurx_1_merged200_75
//	blurx_blurx_1_merged200_76
//	blurx_blurx_1_merged200_77
//	blurx_blurx_1_merged200_78
//	blurx_blurx_1_merged200_79
//	blurx_blurx_1_merged200_80
//	blurx_blurx_1_merged200_81
//	blurx_blurx_1_merged200_82
//	blurx_blurx_1_merged200_83
//	blurx_blurx_1_merged200_84
//	blurx_blurx_1_merged200_85
//	blurx_blurx_1_merged200_86
//	blurx_blurx_1_merged200_87
//	blurx_blurx_1_merged200_88
//	blurx_blurx_1_merged200_89
//	blurx_blurx_1_merged200_90
//	blurx_blurx_1_merged200_91
//	blurx_blurx_1_merged200_92
//	blurx_blurx_1_merged200_93
//	blurx_blurx_1_merged200_94
//	blurx_blurx_1_merged200_95
inline void blurx_blurx_1_merged200_write_bundle_write(hw_uint<512>& blurx_1_merged200_write, blurx_cache& blurx, int root, int blurx_0, int blurx_1, int dynamic_address) {
	hw_uint<16> blurx_blurx_1_merged200_64_res = blurx_1_merged200_write.extract<0, 15>();
	blurx_blurx_1_merged200_64_write(blurx_blurx_1_merged200_64_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_65_res = blurx_1_merged200_write.extract<16, 31>();
	blurx_blurx_1_merged200_65_write(blurx_blurx_1_merged200_65_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_66_res = blurx_1_merged200_write.extract<32, 47>();
	blurx_blurx_1_merged200_66_write(blurx_blurx_1_merged200_66_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_67_res = blurx_1_merged200_write.extract<48, 63>();
	blurx_blurx_1_merged200_67_write(blurx_blurx_1_merged200_67_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_68_res = blurx_1_merged200_write.extract<64, 79>();
	blurx_blurx_1_merged200_68_write(blurx_blurx_1_merged200_68_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_69_res = blurx_1_merged200_write.extract<80, 95>();
	blurx_blurx_1_merged200_69_write(blurx_blurx_1_merged200_69_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_70_res = blurx_1_merged200_write.extract<96, 111>();
	blurx_blurx_1_merged200_70_write(blurx_blurx_1_merged200_70_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_71_res = blurx_1_merged200_write.extract<112, 127>();
	blurx_blurx_1_merged200_71_write(blurx_blurx_1_merged200_71_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_72_res = blurx_1_merged200_write.extract<128, 143>();
	blurx_blurx_1_merged200_72_write(blurx_blurx_1_merged200_72_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_73_res = blurx_1_merged200_write.extract<144, 159>();
	blurx_blurx_1_merged200_73_write(blurx_blurx_1_merged200_73_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_74_res = blurx_1_merged200_write.extract<160, 175>();
	blurx_blurx_1_merged200_74_write(blurx_blurx_1_merged200_74_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_75_res = blurx_1_merged200_write.extract<176, 191>();
	blurx_blurx_1_merged200_75_write(blurx_blurx_1_merged200_75_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_76_res = blurx_1_merged200_write.extract<192, 207>();
	blurx_blurx_1_merged200_76_write(blurx_blurx_1_merged200_76_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_77_res = blurx_1_merged200_write.extract<208, 223>();
	blurx_blurx_1_merged200_77_write(blurx_blurx_1_merged200_77_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_78_res = blurx_1_merged200_write.extract<224, 239>();
	blurx_blurx_1_merged200_78_write(blurx_blurx_1_merged200_78_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_79_res = blurx_1_merged200_write.extract<240, 255>();
	blurx_blurx_1_merged200_79_write(blurx_blurx_1_merged200_79_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_80_res = blurx_1_merged200_write.extract<256, 271>();
	blurx_blurx_1_merged200_80_write(blurx_blurx_1_merged200_80_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_81_res = blurx_1_merged200_write.extract<272, 287>();
	blurx_blurx_1_merged200_81_write(blurx_blurx_1_merged200_81_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_82_res = blurx_1_merged200_write.extract<288, 303>();
	blurx_blurx_1_merged200_82_write(blurx_blurx_1_merged200_82_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_83_res = blurx_1_merged200_write.extract<304, 319>();
	blurx_blurx_1_merged200_83_write(blurx_blurx_1_merged200_83_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_84_res = blurx_1_merged200_write.extract<320, 335>();
	blurx_blurx_1_merged200_84_write(blurx_blurx_1_merged200_84_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_85_res = blurx_1_merged200_write.extract<336, 351>();
	blurx_blurx_1_merged200_85_write(blurx_blurx_1_merged200_85_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_86_res = blurx_1_merged200_write.extract<352, 367>();
	blurx_blurx_1_merged200_86_write(blurx_blurx_1_merged200_86_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_87_res = blurx_1_merged200_write.extract<368, 383>();
	blurx_blurx_1_merged200_87_write(blurx_blurx_1_merged200_87_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_88_res = blurx_1_merged200_write.extract<384, 399>();
	blurx_blurx_1_merged200_88_write(blurx_blurx_1_merged200_88_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_89_res = blurx_1_merged200_write.extract<400, 415>();
	blurx_blurx_1_merged200_89_write(blurx_blurx_1_merged200_89_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_90_res = blurx_1_merged200_write.extract<416, 431>();
	blurx_blurx_1_merged200_90_write(blurx_blurx_1_merged200_90_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_91_res = blurx_1_merged200_write.extract<432, 447>();
	blurx_blurx_1_merged200_91_write(blurx_blurx_1_merged200_91_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_92_res = blurx_1_merged200_write.extract<448, 463>();
	blurx_blurx_1_merged200_92_write(blurx_blurx_1_merged200_92_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_93_res = blurx_1_merged200_write.extract<464, 479>();
	blurx_blurx_1_merged200_93_write(blurx_blurx_1_merged200_93_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_94_res = blurx_1_merged200_write.extract<480, 495>();
	blurx_blurx_1_merged200_94_write(blurx_blurx_1_merged200_94_res, blurx, root, blurx_0, blurx_1, dynamic_address);
	hw_uint<16> blurx_blurx_1_merged200_95_res = blurx_1_merged200_write.extract<496, 511>();
	blurx_blurx_1_merged200_95_write(blurx_blurx_1_merged200_95_res, blurx, root, blurx_0, blurx_1, dynamic_address);
}

struct input_input_1_merged197_0_merged_banks_3_cache {
	// RAM Box: {[31, 1951], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_1_merged_banks_3_cache {
	// RAM Box: {[30, 1950], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_10_merged_banks_3_cache {
	// RAM Box: {[21, 1941], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_11_merged_banks_3_cache {
	// RAM Box: {[20, 1940], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_12_merged_banks_3_cache {
	// RAM Box: {[19, 1939], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_13_merged_banks_3_cache {
	// RAM Box: {[18, 1938], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_14_merged_banks_3_cache {
	// RAM Box: {[17, 1937], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_15_merged_banks_3_cache {
	// RAM Box: {[16, 1936], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_16_merged_banks_3_cache {
	// RAM Box: {[15, 1935], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_17_merged_banks_3_cache {
	// RAM Box: {[14, 1934], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_18_merged_banks_3_cache {
	// RAM Box: {[13, 1933], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_19_merged_banks_3_cache {
	// RAM Box: {[12, 1932], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_2_merged_banks_3_cache {
	// RAM Box: {[29, 1949], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_20_merged_banks_3_cache {
	// RAM Box: {[11, 1931], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_21_merged_banks_3_cache {
	// RAM Box: {[10, 1930], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_22_merged_banks_3_cache {
	// RAM Box: {[9, 1929], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_23_merged_banks_3_cache {
	// RAM Box: {[8, 1928], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_24_merged_banks_3_cache {
	// RAM Box: {[7, 1927], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_25_merged_banks_3_cache {
	// RAM Box: {[6, 1926], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_26_merged_banks_3_cache {
	// RAM Box: {[5, 1925], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_27_merged_banks_3_cache {
	// RAM Box: {[4, 1924], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_28_merged_banks_3_cache {
	// RAM Box: {[3, 1923], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_29_merged_banks_3_cache {
	// RAM Box: {[2, 1922], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_3_merged_banks_3_cache {
	// RAM Box: {[28, 1948], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_30_merged_banks_3_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_31_merged_banks_3_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_4_merged_banks_3_cache {
	// RAM Box: {[27, 1947], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_5_merged_banks_3_cache {
	// RAM Box: {[26, 1946], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_6_merged_banks_3_cache {
	// RAM Box: {[25, 1945], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_7_merged_banks_3_cache {
	// RAM Box: {[24, 1944], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_8_merged_banks_3_cache {
	// RAM Box: {[23, 1943], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_input_1_merged197_9_merged_banks_3_cache {
	// RAM Box: {[22, 1942], [0, 1081]}
	// Capacity: 123
	// # of read delays: 3
  // 0, 61, 122
	hw_uint<16> f0;
	fifo<hw_uint<16>, 60> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_61() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct input_cache {
  // Reader addrs...
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
    // { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // # of banks: 32
  input_input_1_merged197_0_merged_banks_3_cache input_input_1_merged197_0_merged_banks_3;
  input_input_1_merged197_1_merged_banks_3_cache input_input_1_merged197_1_merged_banks_3;
  input_input_1_merged197_10_merged_banks_3_cache input_input_1_merged197_10_merged_banks_3;
  input_input_1_merged197_11_merged_banks_3_cache input_input_1_merged197_11_merged_banks_3;
  input_input_1_merged197_12_merged_banks_3_cache input_input_1_merged197_12_merged_banks_3;
  input_input_1_merged197_13_merged_banks_3_cache input_input_1_merged197_13_merged_banks_3;
  input_input_1_merged197_14_merged_banks_3_cache input_input_1_merged197_14_merged_banks_3;
  input_input_1_merged197_15_merged_banks_3_cache input_input_1_merged197_15_merged_banks_3;
  input_input_1_merged197_16_merged_banks_3_cache input_input_1_merged197_16_merged_banks_3;
  input_input_1_merged197_17_merged_banks_3_cache input_input_1_merged197_17_merged_banks_3;
  input_input_1_merged197_18_merged_banks_3_cache input_input_1_merged197_18_merged_banks_3;
  input_input_1_merged197_19_merged_banks_3_cache input_input_1_merged197_19_merged_banks_3;
  input_input_1_merged197_2_merged_banks_3_cache input_input_1_merged197_2_merged_banks_3;
  input_input_1_merged197_20_merged_banks_3_cache input_input_1_merged197_20_merged_banks_3;
  input_input_1_merged197_21_merged_banks_3_cache input_input_1_merged197_21_merged_banks_3;
  input_input_1_merged197_22_merged_banks_3_cache input_input_1_merged197_22_merged_banks_3;
  input_input_1_merged197_23_merged_banks_3_cache input_input_1_merged197_23_merged_banks_3;
  input_input_1_merged197_24_merged_banks_3_cache input_input_1_merged197_24_merged_banks_3;
  input_input_1_merged197_25_merged_banks_3_cache input_input_1_merged197_25_merged_banks_3;
  input_input_1_merged197_26_merged_banks_3_cache input_input_1_merged197_26_merged_banks_3;
  input_input_1_merged197_27_merged_banks_3_cache input_input_1_merged197_27_merged_banks_3;
  input_input_1_merged197_28_merged_banks_3_cache input_input_1_merged197_28_merged_banks_3;
  input_input_1_merged197_29_merged_banks_3_cache input_input_1_merged197_29_merged_banks_3;
  input_input_1_merged197_3_merged_banks_3_cache input_input_1_merged197_3_merged_banks_3;
  input_input_1_merged197_30_merged_banks_3_cache input_input_1_merged197_30_merged_banks_3;
  input_input_1_merged197_31_merged_banks_3_cache input_input_1_merged197_31_merged_banks_3;
  input_input_1_merged197_4_merged_banks_3_cache input_input_1_merged197_4_merged_banks_3;
  input_input_1_merged197_5_merged_banks_3_cache input_input_1_merged197_5_merged_banks_3;
  input_input_1_merged197_6_merged_banks_3_cache input_input_1_merged197_6_merged_banks_3;
  input_input_1_merged197_7_merged_banks_3_cache input_input_1_merged197_7_merged_banks_3;
  input_input_1_merged197_8_merged_banks_3_cache input_input_1_merged197_8_merged_banks_3;
  input_input_1_merged197_9_merged_banks_3_cache input_input_1_merged197_9_merged_banks_3;
};



inline void input_input_1_merged197_0_write(hw_uint<16>& input_input_1_merged197_0, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_0_merged_banks_3.push(input_input_1_merged197_0);
}

inline void input_input_1_merged197_1_write(hw_uint<16>& input_input_1_merged197_1, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_1_merged_banks_3.push(input_input_1_merged197_1);
}

inline void input_input_1_merged197_10_write(hw_uint<16>& input_input_1_merged197_10, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_10_merged_banks_3.push(input_input_1_merged197_10);
}

inline void input_input_1_merged197_11_write(hw_uint<16>& input_input_1_merged197_11, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_11_merged_banks_3.push(input_input_1_merged197_11);
}

inline void input_input_1_merged197_12_write(hw_uint<16>& input_input_1_merged197_12, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_12_merged_banks_3.push(input_input_1_merged197_12);
}

inline void input_input_1_merged197_13_write(hw_uint<16>& input_input_1_merged197_13, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_13_merged_banks_3.push(input_input_1_merged197_13);
}

inline void input_input_1_merged197_14_write(hw_uint<16>& input_input_1_merged197_14, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_14_merged_banks_3.push(input_input_1_merged197_14);
}

inline void input_input_1_merged197_15_write(hw_uint<16>& input_input_1_merged197_15, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_15_merged_banks_3.push(input_input_1_merged197_15);
}

inline void input_input_1_merged197_16_write(hw_uint<16>& input_input_1_merged197_16, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_16_merged_banks_3.push(input_input_1_merged197_16);
}

inline void input_input_1_merged197_17_write(hw_uint<16>& input_input_1_merged197_17, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_17_merged_banks_3.push(input_input_1_merged197_17);
}

inline void input_input_1_merged197_18_write(hw_uint<16>& input_input_1_merged197_18, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_18_merged_banks_3.push(input_input_1_merged197_18);
}

inline void input_input_1_merged197_19_write(hw_uint<16>& input_input_1_merged197_19, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_19_merged_banks_3.push(input_input_1_merged197_19);
}

inline void input_input_1_merged197_2_write(hw_uint<16>& input_input_1_merged197_2, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_2_merged_banks_3.push(input_input_1_merged197_2);
}

inline void input_input_1_merged197_20_write(hw_uint<16>& input_input_1_merged197_20, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_20_merged_banks_3.push(input_input_1_merged197_20);
}

inline void input_input_1_merged197_21_write(hw_uint<16>& input_input_1_merged197_21, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_21_merged_banks_3.push(input_input_1_merged197_21);
}

inline void input_input_1_merged197_22_write(hw_uint<16>& input_input_1_merged197_22, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_22_merged_banks_3.push(input_input_1_merged197_22);
}

inline void input_input_1_merged197_23_write(hw_uint<16>& input_input_1_merged197_23, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_23_merged_banks_3.push(input_input_1_merged197_23);
}

inline void input_input_1_merged197_24_write(hw_uint<16>& input_input_1_merged197_24, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_24_merged_banks_3.push(input_input_1_merged197_24);
}

inline void input_input_1_merged197_25_write(hw_uint<16>& input_input_1_merged197_25, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_25_merged_banks_3.push(input_input_1_merged197_25);
}

inline void input_input_1_merged197_26_write(hw_uint<16>& input_input_1_merged197_26, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_26_merged_banks_3.push(input_input_1_merged197_26);
}

inline void input_input_1_merged197_27_write(hw_uint<16>& input_input_1_merged197_27, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_27_merged_banks_3.push(input_input_1_merged197_27);
}

inline void input_input_1_merged197_28_write(hw_uint<16>& input_input_1_merged197_28, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_28_merged_banks_3.push(input_input_1_merged197_28);
}

inline void input_input_1_merged197_29_write(hw_uint<16>& input_input_1_merged197_29, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_29_merged_banks_3.push(input_input_1_merged197_29);
}

inline void input_input_1_merged197_3_write(hw_uint<16>& input_input_1_merged197_3, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_3_merged_banks_3.push(input_input_1_merged197_3);
}

inline void input_input_1_merged197_30_write(hw_uint<16>& input_input_1_merged197_30, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_30_merged_banks_3.push(input_input_1_merged197_30);
}

inline void input_input_1_merged197_31_write(hw_uint<16>& input_input_1_merged197_31, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_31_merged_banks_3.push(input_input_1_merged197_31);
}

inline void input_input_1_merged197_4_write(hw_uint<16>& input_input_1_merged197_4, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_4_merged_banks_3.push(input_input_1_merged197_4);
}

inline void input_input_1_merged197_5_write(hw_uint<16>& input_input_1_merged197_5, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_5_merged_banks_3.push(input_input_1_merged197_5);
}

inline void input_input_1_merged197_6_write(hw_uint<16>& input_input_1_merged197_6, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_6_merged_banks_3.push(input_input_1_merged197_6);
}

inline void input_input_1_merged197_7_write(hw_uint<16>& input_input_1_merged197_7, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_7_merged_banks_3.push(input_input_1_merged197_7);
}

inline void input_input_1_merged197_8_write(hw_uint<16>& input_input_1_merged197_8, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_8_merged_banks_3.push(input_input_1_merged197_8);
}

inline void input_input_1_merged197_9_write(hw_uint<16>& input_input_1_merged197_9, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
  input.input_input_1_merged197_9_merged_banks_3.push(input_input_1_merged197_9);
}

inline hw_uint<16> input_blurx_1_merged200_100_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_100 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_1 = input.input_input_1_merged197_1_merged_banks_3.peek_61();
  return value_input_input_1_merged197_1;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_101_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_101 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_1 = input.input_input_1_merged197_1_merged_banks_3.peek_0();
  return value_input_input_1_merged197_1;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_102_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_102 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_2 = input.input_input_1_merged197_2_merged_banks_3.peek_122();
  return value_input_input_1_merged197_2;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_103_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_103 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_2 = input.input_input_1_merged197_2_merged_banks_3.peek_61();
  return value_input_input_1_merged197_2;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_104_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_104 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[29 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_2 = input.input_input_1_merged197_2_merged_banks_3.peek_0();
  return value_input_input_1_merged197_2;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_105_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_105 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_3 = input.input_input_1_merged197_3_merged_banks_3.peek_122();
  return value_input_input_1_merged197_3;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_106_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_106 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_3 = input.input_input_1_merged197_3_merged_banks_3.peek_61();
  return value_input_input_1_merged197_3;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_107_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_107 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[28 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_3 = input.input_input_1_merged197_3_merged_banks_3.peek_0();
  return value_input_input_1_merged197_3;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_108_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_108 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_4 = input.input_input_1_merged197_4_merged_banks_3.peek_122();
  return value_input_input_1_merged197_4;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_109_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_109 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_4 = input.input_input_1_merged197_4_merged_banks_3.peek_61();
  return value_input_input_1_merged197_4;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_110_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_110 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[27 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_4 = input.input_input_1_merged197_4_merged_banks_3.peek_0();
  return value_input_input_1_merged197_4;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_111_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_111 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_5 = input.input_input_1_merged197_5_merged_banks_3.peek_122();
  return value_input_input_1_merged197_5;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_112_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_112 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_5 = input.input_input_1_merged197_5_merged_banks_3.peek_61();
  return value_input_input_1_merged197_5;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_113_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_113 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[26 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_5 = input.input_input_1_merged197_5_merged_banks_3.peek_0();
  return value_input_input_1_merged197_5;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_114_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_114 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_6 = input.input_input_1_merged197_6_merged_banks_3.peek_122();
  return value_input_input_1_merged197_6;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_115_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_115 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_6 = input.input_input_1_merged197_6_merged_banks_3.peek_61();
  return value_input_input_1_merged197_6;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_116_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_116 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[25 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_6 = input.input_input_1_merged197_6_merged_banks_3.peek_0();
  return value_input_input_1_merged197_6;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_117_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_117 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_7 = input.input_input_1_merged197_7_merged_banks_3.peek_122();
  return value_input_input_1_merged197_7;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_118_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_118 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_7 = input.input_input_1_merged197_7_merged_banks_3.peek_61();
  return value_input_input_1_merged197_7;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_119_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_119 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[24 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_7 = input.input_input_1_merged197_7_merged_banks_3.peek_0();
  return value_input_input_1_merged197_7;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_120_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_120 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_8 = input.input_input_1_merged197_8_merged_banks_3.peek_122();
  return value_input_input_1_merged197_8;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_121_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_121 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_8 = input.input_input_1_merged197_8_merged_banks_3.peek_61();
  return value_input_input_1_merged197_8;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_122_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_122 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[23 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_8 = input.input_input_1_merged197_8_merged_banks_3.peek_0();
  return value_input_input_1_merged197_8;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_123_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_123 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_9 = input.input_input_1_merged197_9_merged_banks_3.peek_122();
  return value_input_input_1_merged197_9;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_124_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_124 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_9 = input.input_input_1_merged197_9_merged_banks_3.peek_61();
  return value_input_input_1_merged197_9;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_125_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_125 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[22 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_9 = input.input_input_1_merged197_9_merged_banks_3.peek_0();
  return value_input_input_1_merged197_9;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_126_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_126 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_10 = input.input_input_1_merged197_10_merged_banks_3.peek_122();
  return value_input_input_1_merged197_10;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_127_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_127 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_10 = input.input_input_1_merged197_10_merged_banks_3.peek_61();
  return value_input_input_1_merged197_10;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_128_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_128 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[21 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_10 = input.input_input_1_merged197_10_merged_banks_3.peek_0();
  return value_input_input_1_merged197_10;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_129_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_129 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_11 = input.input_input_1_merged197_11_merged_banks_3.peek_122();
  return value_input_input_1_merged197_11;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_130_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_130 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_11 = input.input_input_1_merged197_11_merged_banks_3.peek_61();
  return value_input_input_1_merged197_11;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_131_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_131 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[20 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_11 = input.input_input_1_merged197_11_merged_banks_3.peek_0();
  return value_input_input_1_merged197_11;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_132_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_132 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_12 = input.input_input_1_merged197_12_merged_banks_3.peek_122();
  return value_input_input_1_merged197_12;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_133_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_133 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_12 = input.input_input_1_merged197_12_merged_banks_3.peek_61();
  return value_input_input_1_merged197_12;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_134_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_134 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[19 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_12 = input.input_input_1_merged197_12_merged_banks_3.peek_0();
  return value_input_input_1_merged197_12;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_135_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_135 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_13 = input.input_input_1_merged197_13_merged_banks_3.peek_122();
  return value_input_input_1_merged197_13;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_136_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_136 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_13 = input.input_input_1_merged197_13_merged_banks_3.peek_61();
  return value_input_input_1_merged197_13;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_137_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_137 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[18 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_13 = input.input_input_1_merged197_13_merged_banks_3.peek_0();
  return value_input_input_1_merged197_13;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_138_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_138 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_14 = input.input_input_1_merged197_14_merged_banks_3.peek_122();
  return value_input_input_1_merged197_14;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_139_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_139 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_14 = input.input_input_1_merged197_14_merged_banks_3.peek_61();
  return value_input_input_1_merged197_14;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_140_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_140 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[17 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_14 = input.input_input_1_merged197_14_merged_banks_3.peek_0();
  return value_input_input_1_merged197_14;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_141_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_141 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_15 = input.input_input_1_merged197_15_merged_banks_3.peek_122();
  return value_input_input_1_merged197_15;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_142_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_142 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_15 = input.input_input_1_merged197_15_merged_banks_3.peek_61();
  return value_input_input_1_merged197_15;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_143_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_143 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[16 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_15 = input.input_input_1_merged197_15_merged_banks_3.peek_0();
  return value_input_input_1_merged197_15;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_144_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_144 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_16 = input.input_input_1_merged197_16_merged_banks_3.peek_122();
  return value_input_input_1_merged197_16;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_145_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_145 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_16 = input.input_input_1_merged197_16_merged_banks_3.peek_61();
  return value_input_input_1_merged197_16;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_146_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_146 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[15 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_16 = input.input_input_1_merged197_16_merged_banks_3.peek_0();
  return value_input_input_1_merged197_16;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_147_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_147 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_17 = input.input_input_1_merged197_17_merged_banks_3.peek_122();
  return value_input_input_1_merged197_17;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_148_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_148 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_17 = input.input_input_1_merged197_17_merged_banks_3.peek_61();
  return value_input_input_1_merged197_17;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_149_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_149 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[14 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_17 = input.input_input_1_merged197_17_merged_banks_3.peek_0();
  return value_input_input_1_merged197_17;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_150_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_150 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_18 = input.input_input_1_merged197_18_merged_banks_3.peek_122();
  return value_input_input_1_merged197_18;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_151_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_151 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_18 = input.input_input_1_merged197_18_merged_banks_3.peek_61();
  return value_input_input_1_merged197_18;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_152_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_152 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[13 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_18 = input.input_input_1_merged197_18_merged_banks_3.peek_0();
  return value_input_input_1_merged197_18;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_153_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_153 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_19 = input.input_input_1_merged197_19_merged_banks_3.peek_122();
  return value_input_input_1_merged197_19;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_154_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_154 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_19 = input.input_input_1_merged197_19_merged_banks_3.peek_61();
  return value_input_input_1_merged197_19;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_155_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_155 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[12 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_19 = input.input_input_1_merged197_19_merged_banks_3.peek_0();
  return value_input_input_1_merged197_19;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_156_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_156 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_20 = input.input_input_1_merged197_20_merged_banks_3.peek_122();
  return value_input_input_1_merged197_20;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_157_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_157 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_20 = input.input_input_1_merged197_20_merged_banks_3.peek_61();
  return value_input_input_1_merged197_20;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_158_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_158 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[11 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_20 = input.input_input_1_merged197_20_merged_banks_3.peek_0();
  return value_input_input_1_merged197_20;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_159_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_159 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_21 = input.input_input_1_merged197_21_merged_banks_3.peek_122();
  return value_input_input_1_merged197_21;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_160_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_160 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_21 = input.input_input_1_merged197_21_merged_banks_3.peek_61();
  return value_input_input_1_merged197_21;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_161_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_161 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[10 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_21 = input.input_input_1_merged197_21_merged_banks_3.peek_0();
  return value_input_input_1_merged197_21;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_162_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_162 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_22 = input.input_input_1_merged197_22_merged_banks_3.peek_122();
  return value_input_input_1_merged197_22;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_163_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_163 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_22 = input.input_input_1_merged197_22_merged_banks_3.peek_61();
  return value_input_input_1_merged197_22;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_164_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_164 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[9 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_22 = input.input_input_1_merged197_22_merged_banks_3.peek_0();
  return value_input_input_1_merged197_22;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_165_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_165 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_23 = input.input_input_1_merged197_23_merged_banks_3.peek_122();
  return value_input_input_1_merged197_23;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_166_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_166 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_23 = input.input_input_1_merged197_23_merged_banks_3.peek_61();
  return value_input_input_1_merged197_23;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_167_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_167 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[8 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_23 = input.input_input_1_merged197_23_merged_banks_3.peek_0();
  return value_input_input_1_merged197_23;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_168_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_168 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_24 = input.input_input_1_merged197_24_merged_banks_3.peek_122();
  return value_input_input_1_merged197_24;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_169_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_169 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_24 = input.input_input_1_merged197_24_merged_banks_3.peek_61();
  return value_input_input_1_merged197_24;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_170_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_170 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[7 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_24 = input.input_input_1_merged197_24_merged_banks_3.peek_0();
  return value_input_input_1_merged197_24;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_171_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_171 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_25 = input.input_input_1_merged197_25_merged_banks_3.peek_122();
  return value_input_input_1_merged197_25;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_172_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_172 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_25 = input.input_input_1_merged197_25_merged_banks_3.peek_61();
  return value_input_input_1_merged197_25;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_173_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_173 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[6 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_25 = input.input_input_1_merged197_25_merged_banks_3.peek_0();
  return value_input_input_1_merged197_25;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_174_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_174 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_26 = input.input_input_1_merged197_26_merged_banks_3.peek_122();
  return value_input_input_1_merged197_26;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_175_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_175 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_26 = input.input_input_1_merged197_26_merged_banks_3.peek_61();
  return value_input_input_1_merged197_26;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_176_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_176 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[5 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_26 = input.input_input_1_merged197_26_merged_banks_3.peek_0();
  return value_input_input_1_merged197_26;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_177_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_177 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_27 = input.input_input_1_merged197_27_merged_banks_3.peek_122();
  return value_input_input_1_merged197_27;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_178_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_178 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_27 = input.input_input_1_merged197_27_merged_banks_3.peek_61();
  return value_input_input_1_merged197_27;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_179_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_179 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[4 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_27 = input.input_input_1_merged197_27_merged_banks_3.peek_0();
  return value_input_input_1_merged197_27;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_180_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_180 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_28 = input.input_input_1_merged197_28_merged_banks_3.peek_122();
  return value_input_input_1_merged197_28;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_181_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_181 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_28 = input.input_input_1_merged197_28_merged_banks_3.peek_61();
  return value_input_input_1_merged197_28;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_182_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_182 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[3 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_28 = input.input_input_1_merged197_28_merged_banks_3.peek_0();
  return value_input_input_1_merged197_28;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_183_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_183 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_29 = input.input_input_1_merged197_29_merged_banks_3.peek_122();
  return value_input_input_1_merged197_29;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_184_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_184 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_29 = input.input_input_1_merged197_29_merged_banks_3.peek_61();
  return value_input_input_1_merged197_29;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_185_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_185 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[2 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_29 = input.input_input_1_merged197_29_merged_banks_3.peek_0();
  return value_input_input_1_merged197_29;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_186_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_186 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_30 = input.input_input_1_merged197_30_merged_banks_3.peek_122();
  return value_input_input_1_merged197_30;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_187_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_187 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_30 = input.input_input_1_merged197_30_merged_banks_3.peek_61();
  return value_input_input_1_merged197_30;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_188_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_188 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[1 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_30 = input.input_input_1_merged197_30_merged_banks_3.peek_0();
  return value_input_input_1_merged197_30;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_189_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_189 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_31 = input.input_input_1_merged197_31_merged_banks_3.peek_122();
  return value_input_input_1_merged197_31;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_190_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_190 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_31 = input.input_input_1_merged197_31_merged_banks_3.peek_61();
  return value_input_input_1_merged197_31;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_191_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_191 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_31 = input.input_input_1_merged197_31_merged_banks_3.peek_0();
  return value_input_input_1_merged197_31;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_96_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_96 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_0 = input.input_input_1_merged197_0_merged_banks_3.peek_122();
  return value_input_input_1_merged197_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_97_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_97 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, 1 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_0 = input.input_input_1_merged197_0_merged_banks_3.peek_61();
  return value_input_input_1_merged197_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_98_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_98 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[31 + 32blurx_1, 2 + blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_0 = input.input_input_1_merged197_0_merged_banks_3.peek_0();
  return value_input_input_1_merged197_0;
  return 0;
}

inline hw_uint<16> input_blurx_1_merged200_99_select(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // input_blurx_1_merged200_99 read pattern: { blurx_1_merged200[root = 0, blurx_0, blurx_1] -> input[30 + 32blurx_1, blurx_0] : 0 <= blurx_0 <= 1079 and 0 <= blurx_1 <= 60 }
  // Read schedule : { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
  // Write schedule: { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_input_input_1_merged197_1 = input.input_input_1_merged197_1_merged_banks_3.peek_122();
  return value_input_input_1_merged197_1;
  return 0;
}

// # of bundles = 2
// blurx_1_merged200_read
//	input_blurx_1_merged200_96
//	input_blurx_1_merged200_97
//	input_blurx_1_merged200_98
//	input_blurx_1_merged200_99
//	input_blurx_1_merged200_100
//	input_blurx_1_merged200_101
//	input_blurx_1_merged200_102
//	input_blurx_1_merged200_103
//	input_blurx_1_merged200_104
//	input_blurx_1_merged200_105
//	input_blurx_1_merged200_106
//	input_blurx_1_merged200_107
//	input_blurx_1_merged200_108
//	input_blurx_1_merged200_109
//	input_blurx_1_merged200_110
//	input_blurx_1_merged200_111
//	input_blurx_1_merged200_112
//	input_blurx_1_merged200_113
//	input_blurx_1_merged200_114
//	input_blurx_1_merged200_115
//	input_blurx_1_merged200_116
//	input_blurx_1_merged200_117
//	input_blurx_1_merged200_118
//	input_blurx_1_merged200_119
//	input_blurx_1_merged200_120
//	input_blurx_1_merged200_121
//	input_blurx_1_merged200_122
//	input_blurx_1_merged200_123
//	input_blurx_1_merged200_124
//	input_blurx_1_merged200_125
//	input_blurx_1_merged200_126
//	input_blurx_1_merged200_127
//	input_blurx_1_merged200_128
//	input_blurx_1_merged200_129
//	input_blurx_1_merged200_130
//	input_blurx_1_merged200_131
//	input_blurx_1_merged200_132
//	input_blurx_1_merged200_133
//	input_blurx_1_merged200_134
//	input_blurx_1_merged200_135
//	input_blurx_1_merged200_136
//	input_blurx_1_merged200_137
//	input_blurx_1_merged200_138
//	input_blurx_1_merged200_139
//	input_blurx_1_merged200_140
//	input_blurx_1_merged200_141
//	input_blurx_1_merged200_142
//	input_blurx_1_merged200_143
//	input_blurx_1_merged200_144
//	input_blurx_1_merged200_145
//	input_blurx_1_merged200_146
//	input_blurx_1_merged200_147
//	input_blurx_1_merged200_148
//	input_blurx_1_merged200_149
//	input_blurx_1_merged200_150
//	input_blurx_1_merged200_151
//	input_blurx_1_merged200_152
//	input_blurx_1_merged200_153
//	input_blurx_1_merged200_154
//	input_blurx_1_merged200_155
//	input_blurx_1_merged200_156
//	input_blurx_1_merged200_157
//	input_blurx_1_merged200_158
//	input_blurx_1_merged200_159
//	input_blurx_1_merged200_160
//	input_blurx_1_merged200_161
//	input_blurx_1_merged200_162
//	input_blurx_1_merged200_163
//	input_blurx_1_merged200_164
//	input_blurx_1_merged200_165
//	input_blurx_1_merged200_166
//	input_blurx_1_merged200_167
//	input_blurx_1_merged200_168
//	input_blurx_1_merged200_169
//	input_blurx_1_merged200_170
//	input_blurx_1_merged200_171
//	input_blurx_1_merged200_172
//	input_blurx_1_merged200_173
//	input_blurx_1_merged200_174
//	input_blurx_1_merged200_175
//	input_blurx_1_merged200_176
//	input_blurx_1_merged200_177
//	input_blurx_1_merged200_178
//	input_blurx_1_merged200_179
//	input_blurx_1_merged200_180
//	input_blurx_1_merged200_181
//	input_blurx_1_merged200_182
//	input_blurx_1_merged200_183
//	input_blurx_1_merged200_184
//	input_blurx_1_merged200_185
//	input_blurx_1_merged200_186
//	input_blurx_1_merged200_187
//	input_blurx_1_merged200_188
//	input_blurx_1_merged200_189
//	input_blurx_1_merged200_190
//	input_blurx_1_merged200_191
inline hw_uint<1536> input_blurx_1_merged200_read_bundle_read(input_cache& input, int root, int blurx_0, int blurx_1, int dynamic_address) {
  // # of ports in bundle: 96
    // input_blurx_1_merged200_96
    // input_blurx_1_merged200_97
    // input_blurx_1_merged200_98
    // input_blurx_1_merged200_99
    // input_blurx_1_merged200_100
    // input_blurx_1_merged200_101
    // input_blurx_1_merged200_102
    // input_blurx_1_merged200_103
    // input_blurx_1_merged200_104
    // input_blurx_1_merged200_105
    // input_blurx_1_merged200_106
    // input_blurx_1_merged200_107
    // input_blurx_1_merged200_108
    // input_blurx_1_merged200_109
    // input_blurx_1_merged200_110
    // input_blurx_1_merged200_111
    // input_blurx_1_merged200_112
    // input_blurx_1_merged200_113
    // input_blurx_1_merged200_114
    // input_blurx_1_merged200_115
    // input_blurx_1_merged200_116
    // input_blurx_1_merged200_117
    // input_blurx_1_merged200_118
    // input_blurx_1_merged200_119
    // input_blurx_1_merged200_120
    // input_blurx_1_merged200_121
    // input_blurx_1_merged200_122
    // input_blurx_1_merged200_123
    // input_blurx_1_merged200_124
    // input_blurx_1_merged200_125
    // input_blurx_1_merged200_126
    // input_blurx_1_merged200_127
    // input_blurx_1_merged200_128
    // input_blurx_1_merged200_129
    // input_blurx_1_merged200_130
    // input_blurx_1_merged200_131
    // input_blurx_1_merged200_132
    // input_blurx_1_merged200_133
    // input_blurx_1_merged200_134
    // input_blurx_1_merged200_135
    // input_blurx_1_merged200_136
    // input_blurx_1_merged200_137
    // input_blurx_1_merged200_138
    // input_blurx_1_merged200_139
    // input_blurx_1_merged200_140
    // input_blurx_1_merged200_141
    // input_blurx_1_merged200_142
    // input_blurx_1_merged200_143
    // input_blurx_1_merged200_144
    // input_blurx_1_merged200_145
    // input_blurx_1_merged200_146
    // input_blurx_1_merged200_147
    // input_blurx_1_merged200_148
    // input_blurx_1_merged200_149
    // input_blurx_1_merged200_150
    // input_blurx_1_merged200_151
    // input_blurx_1_merged200_152
    // input_blurx_1_merged200_153
    // input_blurx_1_merged200_154
    // input_blurx_1_merged200_155
    // input_blurx_1_merged200_156
    // input_blurx_1_merged200_157
    // input_blurx_1_merged200_158
    // input_blurx_1_merged200_159
    // input_blurx_1_merged200_160
    // input_blurx_1_merged200_161
    // input_blurx_1_merged200_162
    // input_blurx_1_merged200_163
    // input_blurx_1_merged200_164
    // input_blurx_1_merged200_165
    // input_blurx_1_merged200_166
    // input_blurx_1_merged200_167
    // input_blurx_1_merged200_168
    // input_blurx_1_merged200_169
    // input_blurx_1_merged200_170
    // input_blurx_1_merged200_171
    // input_blurx_1_merged200_172
    // input_blurx_1_merged200_173
    // input_blurx_1_merged200_174
    // input_blurx_1_merged200_175
    // input_blurx_1_merged200_176
    // input_blurx_1_merged200_177
    // input_blurx_1_merged200_178
    // input_blurx_1_merged200_179
    // input_blurx_1_merged200_180
    // input_blurx_1_merged200_181
    // input_blurx_1_merged200_182
    // input_blurx_1_merged200_183
    // input_blurx_1_merged200_184
    // input_blurx_1_merged200_185
    // input_blurx_1_merged200_186
    // input_blurx_1_merged200_187
    // input_blurx_1_merged200_188
    // input_blurx_1_merged200_189
    // input_blurx_1_merged200_190
    // input_blurx_1_merged200_191

	hw_uint<1536> result;
	hw_uint<16> input_blurx_1_merged200_96_res = input_blurx_1_merged200_96_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<0, 1536>(result, input_blurx_1_merged200_96_res);
	hw_uint<16> input_blurx_1_merged200_97_res = input_blurx_1_merged200_97_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<16, 1536>(result, input_blurx_1_merged200_97_res);
	hw_uint<16> input_blurx_1_merged200_98_res = input_blurx_1_merged200_98_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<32, 1536>(result, input_blurx_1_merged200_98_res);
	hw_uint<16> input_blurx_1_merged200_99_res = input_blurx_1_merged200_99_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<48, 1536>(result, input_blurx_1_merged200_99_res);
	hw_uint<16> input_blurx_1_merged200_100_res = input_blurx_1_merged200_100_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<64, 1536>(result, input_blurx_1_merged200_100_res);
	hw_uint<16> input_blurx_1_merged200_101_res = input_blurx_1_merged200_101_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<80, 1536>(result, input_blurx_1_merged200_101_res);
	hw_uint<16> input_blurx_1_merged200_102_res = input_blurx_1_merged200_102_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<96, 1536>(result, input_blurx_1_merged200_102_res);
	hw_uint<16> input_blurx_1_merged200_103_res = input_blurx_1_merged200_103_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<112, 1536>(result, input_blurx_1_merged200_103_res);
	hw_uint<16> input_blurx_1_merged200_104_res = input_blurx_1_merged200_104_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<128, 1536>(result, input_blurx_1_merged200_104_res);
	hw_uint<16> input_blurx_1_merged200_105_res = input_blurx_1_merged200_105_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<144, 1536>(result, input_blurx_1_merged200_105_res);
	hw_uint<16> input_blurx_1_merged200_106_res = input_blurx_1_merged200_106_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<160, 1536>(result, input_blurx_1_merged200_106_res);
	hw_uint<16> input_blurx_1_merged200_107_res = input_blurx_1_merged200_107_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<176, 1536>(result, input_blurx_1_merged200_107_res);
	hw_uint<16> input_blurx_1_merged200_108_res = input_blurx_1_merged200_108_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<192, 1536>(result, input_blurx_1_merged200_108_res);
	hw_uint<16> input_blurx_1_merged200_109_res = input_blurx_1_merged200_109_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<208, 1536>(result, input_blurx_1_merged200_109_res);
	hw_uint<16> input_blurx_1_merged200_110_res = input_blurx_1_merged200_110_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<224, 1536>(result, input_blurx_1_merged200_110_res);
	hw_uint<16> input_blurx_1_merged200_111_res = input_blurx_1_merged200_111_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<240, 1536>(result, input_blurx_1_merged200_111_res);
	hw_uint<16> input_blurx_1_merged200_112_res = input_blurx_1_merged200_112_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<256, 1536>(result, input_blurx_1_merged200_112_res);
	hw_uint<16> input_blurx_1_merged200_113_res = input_blurx_1_merged200_113_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<272, 1536>(result, input_blurx_1_merged200_113_res);
	hw_uint<16> input_blurx_1_merged200_114_res = input_blurx_1_merged200_114_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<288, 1536>(result, input_blurx_1_merged200_114_res);
	hw_uint<16> input_blurx_1_merged200_115_res = input_blurx_1_merged200_115_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<304, 1536>(result, input_blurx_1_merged200_115_res);
	hw_uint<16> input_blurx_1_merged200_116_res = input_blurx_1_merged200_116_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<320, 1536>(result, input_blurx_1_merged200_116_res);
	hw_uint<16> input_blurx_1_merged200_117_res = input_blurx_1_merged200_117_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<336, 1536>(result, input_blurx_1_merged200_117_res);
	hw_uint<16> input_blurx_1_merged200_118_res = input_blurx_1_merged200_118_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<352, 1536>(result, input_blurx_1_merged200_118_res);
	hw_uint<16> input_blurx_1_merged200_119_res = input_blurx_1_merged200_119_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<368, 1536>(result, input_blurx_1_merged200_119_res);
	hw_uint<16> input_blurx_1_merged200_120_res = input_blurx_1_merged200_120_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<384, 1536>(result, input_blurx_1_merged200_120_res);
	hw_uint<16> input_blurx_1_merged200_121_res = input_blurx_1_merged200_121_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<400, 1536>(result, input_blurx_1_merged200_121_res);
	hw_uint<16> input_blurx_1_merged200_122_res = input_blurx_1_merged200_122_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<416, 1536>(result, input_blurx_1_merged200_122_res);
	hw_uint<16> input_blurx_1_merged200_123_res = input_blurx_1_merged200_123_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<432, 1536>(result, input_blurx_1_merged200_123_res);
	hw_uint<16> input_blurx_1_merged200_124_res = input_blurx_1_merged200_124_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<448, 1536>(result, input_blurx_1_merged200_124_res);
	hw_uint<16> input_blurx_1_merged200_125_res = input_blurx_1_merged200_125_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<464, 1536>(result, input_blurx_1_merged200_125_res);
	hw_uint<16> input_blurx_1_merged200_126_res = input_blurx_1_merged200_126_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<480, 1536>(result, input_blurx_1_merged200_126_res);
	hw_uint<16> input_blurx_1_merged200_127_res = input_blurx_1_merged200_127_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<496, 1536>(result, input_blurx_1_merged200_127_res);
	hw_uint<16> input_blurx_1_merged200_128_res = input_blurx_1_merged200_128_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<512, 1536>(result, input_blurx_1_merged200_128_res);
	hw_uint<16> input_blurx_1_merged200_129_res = input_blurx_1_merged200_129_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<528, 1536>(result, input_blurx_1_merged200_129_res);
	hw_uint<16> input_blurx_1_merged200_130_res = input_blurx_1_merged200_130_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<544, 1536>(result, input_blurx_1_merged200_130_res);
	hw_uint<16> input_blurx_1_merged200_131_res = input_blurx_1_merged200_131_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<560, 1536>(result, input_blurx_1_merged200_131_res);
	hw_uint<16> input_blurx_1_merged200_132_res = input_blurx_1_merged200_132_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<576, 1536>(result, input_blurx_1_merged200_132_res);
	hw_uint<16> input_blurx_1_merged200_133_res = input_blurx_1_merged200_133_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<592, 1536>(result, input_blurx_1_merged200_133_res);
	hw_uint<16> input_blurx_1_merged200_134_res = input_blurx_1_merged200_134_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<608, 1536>(result, input_blurx_1_merged200_134_res);
	hw_uint<16> input_blurx_1_merged200_135_res = input_blurx_1_merged200_135_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<624, 1536>(result, input_blurx_1_merged200_135_res);
	hw_uint<16> input_blurx_1_merged200_136_res = input_blurx_1_merged200_136_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<640, 1536>(result, input_blurx_1_merged200_136_res);
	hw_uint<16> input_blurx_1_merged200_137_res = input_blurx_1_merged200_137_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<656, 1536>(result, input_blurx_1_merged200_137_res);
	hw_uint<16> input_blurx_1_merged200_138_res = input_blurx_1_merged200_138_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<672, 1536>(result, input_blurx_1_merged200_138_res);
	hw_uint<16> input_blurx_1_merged200_139_res = input_blurx_1_merged200_139_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<688, 1536>(result, input_blurx_1_merged200_139_res);
	hw_uint<16> input_blurx_1_merged200_140_res = input_blurx_1_merged200_140_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<704, 1536>(result, input_blurx_1_merged200_140_res);
	hw_uint<16> input_blurx_1_merged200_141_res = input_blurx_1_merged200_141_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<720, 1536>(result, input_blurx_1_merged200_141_res);
	hw_uint<16> input_blurx_1_merged200_142_res = input_blurx_1_merged200_142_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<736, 1536>(result, input_blurx_1_merged200_142_res);
	hw_uint<16> input_blurx_1_merged200_143_res = input_blurx_1_merged200_143_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<752, 1536>(result, input_blurx_1_merged200_143_res);
	hw_uint<16> input_blurx_1_merged200_144_res = input_blurx_1_merged200_144_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<768, 1536>(result, input_blurx_1_merged200_144_res);
	hw_uint<16> input_blurx_1_merged200_145_res = input_blurx_1_merged200_145_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<784, 1536>(result, input_blurx_1_merged200_145_res);
	hw_uint<16> input_blurx_1_merged200_146_res = input_blurx_1_merged200_146_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<800, 1536>(result, input_blurx_1_merged200_146_res);
	hw_uint<16> input_blurx_1_merged200_147_res = input_blurx_1_merged200_147_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<816, 1536>(result, input_blurx_1_merged200_147_res);
	hw_uint<16> input_blurx_1_merged200_148_res = input_blurx_1_merged200_148_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<832, 1536>(result, input_blurx_1_merged200_148_res);
	hw_uint<16> input_blurx_1_merged200_149_res = input_blurx_1_merged200_149_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<848, 1536>(result, input_blurx_1_merged200_149_res);
	hw_uint<16> input_blurx_1_merged200_150_res = input_blurx_1_merged200_150_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<864, 1536>(result, input_blurx_1_merged200_150_res);
	hw_uint<16> input_blurx_1_merged200_151_res = input_blurx_1_merged200_151_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<880, 1536>(result, input_blurx_1_merged200_151_res);
	hw_uint<16> input_blurx_1_merged200_152_res = input_blurx_1_merged200_152_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<896, 1536>(result, input_blurx_1_merged200_152_res);
	hw_uint<16> input_blurx_1_merged200_153_res = input_blurx_1_merged200_153_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<912, 1536>(result, input_blurx_1_merged200_153_res);
	hw_uint<16> input_blurx_1_merged200_154_res = input_blurx_1_merged200_154_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<928, 1536>(result, input_blurx_1_merged200_154_res);
	hw_uint<16> input_blurx_1_merged200_155_res = input_blurx_1_merged200_155_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<944, 1536>(result, input_blurx_1_merged200_155_res);
	hw_uint<16> input_blurx_1_merged200_156_res = input_blurx_1_merged200_156_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<960, 1536>(result, input_blurx_1_merged200_156_res);
	hw_uint<16> input_blurx_1_merged200_157_res = input_blurx_1_merged200_157_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<976, 1536>(result, input_blurx_1_merged200_157_res);
	hw_uint<16> input_blurx_1_merged200_158_res = input_blurx_1_merged200_158_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<992, 1536>(result, input_blurx_1_merged200_158_res);
	hw_uint<16> input_blurx_1_merged200_159_res = input_blurx_1_merged200_159_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1008, 1536>(result, input_blurx_1_merged200_159_res);
	hw_uint<16> input_blurx_1_merged200_160_res = input_blurx_1_merged200_160_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1024, 1536>(result, input_blurx_1_merged200_160_res);
	hw_uint<16> input_blurx_1_merged200_161_res = input_blurx_1_merged200_161_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1040, 1536>(result, input_blurx_1_merged200_161_res);
	hw_uint<16> input_blurx_1_merged200_162_res = input_blurx_1_merged200_162_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1056, 1536>(result, input_blurx_1_merged200_162_res);
	hw_uint<16> input_blurx_1_merged200_163_res = input_blurx_1_merged200_163_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1072, 1536>(result, input_blurx_1_merged200_163_res);
	hw_uint<16> input_blurx_1_merged200_164_res = input_blurx_1_merged200_164_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1088, 1536>(result, input_blurx_1_merged200_164_res);
	hw_uint<16> input_blurx_1_merged200_165_res = input_blurx_1_merged200_165_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1104, 1536>(result, input_blurx_1_merged200_165_res);
	hw_uint<16> input_blurx_1_merged200_166_res = input_blurx_1_merged200_166_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1120, 1536>(result, input_blurx_1_merged200_166_res);
	hw_uint<16> input_blurx_1_merged200_167_res = input_blurx_1_merged200_167_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1136, 1536>(result, input_blurx_1_merged200_167_res);
	hw_uint<16> input_blurx_1_merged200_168_res = input_blurx_1_merged200_168_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1152, 1536>(result, input_blurx_1_merged200_168_res);
	hw_uint<16> input_blurx_1_merged200_169_res = input_blurx_1_merged200_169_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1168, 1536>(result, input_blurx_1_merged200_169_res);
	hw_uint<16> input_blurx_1_merged200_170_res = input_blurx_1_merged200_170_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1184, 1536>(result, input_blurx_1_merged200_170_res);
	hw_uint<16> input_blurx_1_merged200_171_res = input_blurx_1_merged200_171_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1200, 1536>(result, input_blurx_1_merged200_171_res);
	hw_uint<16> input_blurx_1_merged200_172_res = input_blurx_1_merged200_172_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1216, 1536>(result, input_blurx_1_merged200_172_res);
	hw_uint<16> input_blurx_1_merged200_173_res = input_blurx_1_merged200_173_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1232, 1536>(result, input_blurx_1_merged200_173_res);
	hw_uint<16> input_blurx_1_merged200_174_res = input_blurx_1_merged200_174_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1248, 1536>(result, input_blurx_1_merged200_174_res);
	hw_uint<16> input_blurx_1_merged200_175_res = input_blurx_1_merged200_175_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1264, 1536>(result, input_blurx_1_merged200_175_res);
	hw_uint<16> input_blurx_1_merged200_176_res = input_blurx_1_merged200_176_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1280, 1536>(result, input_blurx_1_merged200_176_res);
	hw_uint<16> input_blurx_1_merged200_177_res = input_blurx_1_merged200_177_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1296, 1536>(result, input_blurx_1_merged200_177_res);
	hw_uint<16> input_blurx_1_merged200_178_res = input_blurx_1_merged200_178_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1312, 1536>(result, input_blurx_1_merged200_178_res);
	hw_uint<16> input_blurx_1_merged200_179_res = input_blurx_1_merged200_179_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1328, 1536>(result, input_blurx_1_merged200_179_res);
	hw_uint<16> input_blurx_1_merged200_180_res = input_blurx_1_merged200_180_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1344, 1536>(result, input_blurx_1_merged200_180_res);
	hw_uint<16> input_blurx_1_merged200_181_res = input_blurx_1_merged200_181_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1360, 1536>(result, input_blurx_1_merged200_181_res);
	hw_uint<16> input_blurx_1_merged200_182_res = input_blurx_1_merged200_182_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1376, 1536>(result, input_blurx_1_merged200_182_res);
	hw_uint<16> input_blurx_1_merged200_183_res = input_blurx_1_merged200_183_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1392, 1536>(result, input_blurx_1_merged200_183_res);
	hw_uint<16> input_blurx_1_merged200_184_res = input_blurx_1_merged200_184_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1408, 1536>(result, input_blurx_1_merged200_184_res);
	hw_uint<16> input_blurx_1_merged200_185_res = input_blurx_1_merged200_185_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1424, 1536>(result, input_blurx_1_merged200_185_res);
	hw_uint<16> input_blurx_1_merged200_186_res = input_blurx_1_merged200_186_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1440, 1536>(result, input_blurx_1_merged200_186_res);
	hw_uint<16> input_blurx_1_merged200_187_res = input_blurx_1_merged200_187_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1456, 1536>(result, input_blurx_1_merged200_187_res);
	hw_uint<16> input_blurx_1_merged200_188_res = input_blurx_1_merged200_188_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1472, 1536>(result, input_blurx_1_merged200_188_res);
	hw_uint<16> input_blurx_1_merged200_189_res = input_blurx_1_merged200_189_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1488, 1536>(result, input_blurx_1_merged200_189_res);
	hw_uint<16> input_blurx_1_merged200_190_res = input_blurx_1_merged200_190_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1504, 1536>(result, input_blurx_1_merged200_190_res);
	hw_uint<16> input_blurx_1_merged200_191_res = input_blurx_1_merged200_191_select(input, root, blurx_0, blurx_1, dynamic_address);
	set_at<1520, 1536>(result, input_blurx_1_merged200_191_res);
	return result;
}

// input_1_merged197_write
//	input_input_1_merged197_0
//	input_input_1_merged197_1
//	input_input_1_merged197_2
//	input_input_1_merged197_3
//	input_input_1_merged197_4
//	input_input_1_merged197_5
//	input_input_1_merged197_6
//	input_input_1_merged197_7
//	input_input_1_merged197_8
//	input_input_1_merged197_9
//	input_input_1_merged197_10
//	input_input_1_merged197_11
//	input_input_1_merged197_12
//	input_input_1_merged197_13
//	input_input_1_merged197_14
//	input_input_1_merged197_15
//	input_input_1_merged197_16
//	input_input_1_merged197_17
//	input_input_1_merged197_18
//	input_input_1_merged197_19
//	input_input_1_merged197_20
//	input_input_1_merged197_21
//	input_input_1_merged197_22
//	input_input_1_merged197_23
//	input_input_1_merged197_24
//	input_input_1_merged197_25
//	input_input_1_merged197_26
//	input_input_1_merged197_27
//	input_input_1_merged197_28
//	input_input_1_merged197_29
//	input_input_1_merged197_30
//	input_input_1_merged197_31
inline void input_input_1_merged197_write_bundle_write(hw_uint<512>& input_1_merged197_write, input_cache& input, int root, int input_0, int input_1, int dynamic_address) {
	hw_uint<16> input_input_1_merged197_0_res = input_1_merged197_write.extract<0, 15>();
	input_input_1_merged197_0_write(input_input_1_merged197_0_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_1_res = input_1_merged197_write.extract<16, 31>();
	input_input_1_merged197_1_write(input_input_1_merged197_1_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_2_res = input_1_merged197_write.extract<32, 47>();
	input_input_1_merged197_2_write(input_input_1_merged197_2_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_3_res = input_1_merged197_write.extract<48, 63>();
	input_input_1_merged197_3_write(input_input_1_merged197_3_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_4_res = input_1_merged197_write.extract<64, 79>();
	input_input_1_merged197_4_write(input_input_1_merged197_4_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_5_res = input_1_merged197_write.extract<80, 95>();
	input_input_1_merged197_5_write(input_input_1_merged197_5_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_6_res = input_1_merged197_write.extract<96, 111>();
	input_input_1_merged197_6_write(input_input_1_merged197_6_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_7_res = input_1_merged197_write.extract<112, 127>();
	input_input_1_merged197_7_write(input_input_1_merged197_7_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_8_res = input_1_merged197_write.extract<128, 143>();
	input_input_1_merged197_8_write(input_input_1_merged197_8_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_9_res = input_1_merged197_write.extract<144, 159>();
	input_input_1_merged197_9_write(input_input_1_merged197_9_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_10_res = input_1_merged197_write.extract<160, 175>();
	input_input_1_merged197_10_write(input_input_1_merged197_10_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_11_res = input_1_merged197_write.extract<176, 191>();
	input_input_1_merged197_11_write(input_input_1_merged197_11_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_12_res = input_1_merged197_write.extract<192, 207>();
	input_input_1_merged197_12_write(input_input_1_merged197_12_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_13_res = input_1_merged197_write.extract<208, 223>();
	input_input_1_merged197_13_write(input_input_1_merged197_13_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_14_res = input_1_merged197_write.extract<224, 239>();
	input_input_1_merged197_14_write(input_input_1_merged197_14_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_15_res = input_1_merged197_write.extract<240, 255>();
	input_input_1_merged197_15_write(input_input_1_merged197_15_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_16_res = input_1_merged197_write.extract<256, 271>();
	input_input_1_merged197_16_write(input_input_1_merged197_16_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_17_res = input_1_merged197_write.extract<272, 287>();
	input_input_1_merged197_17_write(input_input_1_merged197_17_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_18_res = input_1_merged197_write.extract<288, 303>();
	input_input_1_merged197_18_write(input_input_1_merged197_18_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_19_res = input_1_merged197_write.extract<304, 319>();
	input_input_1_merged197_19_write(input_input_1_merged197_19_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_20_res = input_1_merged197_write.extract<320, 335>();
	input_input_1_merged197_20_write(input_input_1_merged197_20_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_21_res = input_1_merged197_write.extract<336, 351>();
	input_input_1_merged197_21_write(input_input_1_merged197_21_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_22_res = input_1_merged197_write.extract<352, 367>();
	input_input_1_merged197_22_write(input_input_1_merged197_22_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_23_res = input_1_merged197_write.extract<368, 383>();
	input_input_1_merged197_23_write(input_input_1_merged197_23_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_24_res = input_1_merged197_write.extract<384, 399>();
	input_input_1_merged197_24_write(input_input_1_merged197_24_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_25_res = input_1_merged197_write.extract<400, 415>();
	input_input_1_merged197_25_write(input_input_1_merged197_25_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_26_res = input_1_merged197_write.extract<416, 431>();
	input_input_1_merged197_26_write(input_input_1_merged197_26_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_27_res = input_1_merged197_write.extract<432, 447>();
	input_input_1_merged197_27_write(input_input_1_merged197_27_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_28_res = input_1_merged197_write.extract<448, 463>();
	input_input_1_merged197_28_write(input_input_1_merged197_28_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_29_res = input_1_merged197_write.extract<464, 479>();
	input_input_1_merged197_29_write(input_input_1_merged197_29_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_30_res = input_1_merged197_write.extract<480, 495>();
	input_input_1_merged197_30_write(input_input_1_merged197_30_res, input, root, input_0, input_1, dynamic_address);
	hw_uint<16> input_input_1_merged197_31_res = input_1_merged197_write.extract<496, 511>();
	input_input_1_merged197_31_write(input_input_1_merged197_31_res, input, root, input_0, input_1, dynamic_address);
}

// Total re-use buffer capacity: 63952 bits


// Operation logic
inline void input_1_merged197(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */input_arg, input_cache& input, int root, int input_0, int input_1) {
  // Dynamic address computation

	// Consume: input_arg
	auto input_arg_1_m__lp_32_m_input_1__p__31_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value = input_arg.read();
	auto compute_result = input_1_cu195(input_arg_1_m__lp_32_m_input_1__p__31_rp___p__0_p_0_c_____1_m_input_0__p__0_p_0_value);
	// Produce: input
	input_input_1_merged197_write_bundle_write(/* arg names */compute_result, input, root, input_0, input_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blurx_1_merged200(input_cache& input, blurx_cache& blurx, int root, int blurx_0, int blurx_1) {
  // Dynamic address computation

	// Consume: input
	auto input_1_m__lp_32_m_blurx_1__p__31_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value = input_blurx_1_merged200_read_bundle_read(input/* source_delay */, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blurx_1_cu198(input_1_m__lp_32_m_blurx_1__p__31_rp___p__0_p_0_c_____1_m_blurx_0__p__0_p_0_value);
	// Produce: blurx
	blurx_blurx_1_merged200_write_bundle_write(/* arg names */compute_result, blurx, root, blurx_0, blurx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur4_32_1_merged203(blurx_cache& blurx, HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */blur4_32, int root, int blur4_32_0, int blur4_32_1) {
  // Dynamic address computation

	// Consume: blurx
	auto blurx_1_m__lp_32_m_blur4_32_1__p__31_rp___p__0_p_0_c_____1_m_blur4_32_0__p__0_p_0_value = blurx_blur4_32_1_merged203_read_bundle_read(blurx/* source_delay */, root, blur4_32_0, blur4_32_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = blur4_32_1_cu201(blurx_1_m__lp_32_m_blur4_32_1__p__31_rp___p__0_p_0_c_____1_m_blur4_32_0__p__0_p_0_value);
	// Produce: blur4_32
	blur4_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void blur4_32_opt(HWStream<hw_uint<512> >& /* no bundle get_args num ports = 32 */input_arg, HWStream<hw_uint<512> >& /* get_args num ports = 32 */blur4_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("blur4_32_opt_debug.csv");
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

// schedule: { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59; input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60; blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
//   { blur4_32_1_merged203[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
// Condition for blur4_32_1_merged203(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { input_1_merged197[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
// Condition for input_1_merged197(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { blurx_1_merged200[d0 = 0, d1, d2] -> [0, 2 + d1, d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 60 }
// Condition for blurx_1_merged200(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and i2 <= 60 and 0 < i3 <= 2 and i3 <= 1 + i2; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 60 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 60; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          input_1_merged197(input_arg /* buf name */, input, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 }
	        // { [i0, i1, i2] : i1 >= 2 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0)))) {
	          blurx_1_merged200(input /* buf name */, blurx, 0, ((-2 + 1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          blur4_32_1_merged203(blurx /* buf name */, blur4_32, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void blur4_32_opt_wrapper(HWStream<hw_uint<512> >& /* no bundle get_args num ports = 32 */input_arg, HWStream<hw_uint<512> >& /* get_args num ports = 32 */blur4_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    blur4_32_opt(input_arg, blur4_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[31 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[30 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[29 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[28 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[27 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[26 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[25 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[24 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[23 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[22 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[21 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[20 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[19 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[18 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[17 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[16 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[15 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[14 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[13 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[12 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[11 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[10 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[9 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[8 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[7 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[6 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[5 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[4 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[3 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[2 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[1 + 32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59; blur4_32_1_merged203[root = 0, blur4_32_0, blur4_32_1] -> blur4_32[32blur4_32_1, blur4_32_0] : 0 <= blur4_32_0 <= 1079 and 0 <= blur4_32_1 <= 59 }
const int blur4_32_1_merged203_write_pipe0_num_transfers = 64800;
  // { input_1_merged197[root = 0, input_0, input_1] -> input_arg[31 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[30 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[29 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[28 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[27 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[26 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[25 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[24 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[23 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[22 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[21 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[20 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[19 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[18 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[17 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[16 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[15 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[14 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[13 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[12 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[11 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[10 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[9 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[8 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[7 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[6 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[5 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[4 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[3 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[2 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[1 + 32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60; input_1_merged197[root = 0, input_0, input_1] -> input_arg[32input_1, input_0] : 0 <= input_0 <= 1081 and 0 <= input_1 <= 60 }
const int input_1_merged197_read_pipe0_num_transfers = 66002;


extern "C" {

void blur4_32_opt_accel(hw_uint<512>* input_1_merged197_read_pipe0, hw_uint<512>* blur4_32_1_merged203_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = input_1_merged197_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = blur4_32_1_merged203_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = input_1_merged197_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = blur4_32_1_merged203_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > input_1_merged197_read_pipe0_channel;
  static HWStream<hw_uint<512> > blur4_32_1_merged203_write_pipe0_channel;

  burst_read<512>(input_1_merged197_read_pipe0, input_1_merged197_read_pipe0_channel, input_1_merged197_read_pipe0_num_transfers*size);

  blur4_32_opt_wrapper(input_1_merged197_read_pipe0_channel, blur4_32_1_merged203_write_pipe0_channel, size);

  burst_write<512>(blur4_32_1_merged203_write_pipe0, blur4_32_1_merged203_write_pipe0_channel, blur4_32_1_merged203_write_pipe0_num_transfers*size);
}

}
extern "C" {

void blur4_32_opt_rdai(HWStream<hw_uint<512> >& input_1_merged197_read_pipe0, HWStream<hw_uint<512> >&  blur4_32_1_merged203_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = input_1_merged197_read_pipe0
#pragma HLS INTERFACE axis register port = blur4_32_1_merged203_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  blur4_32_opt(input_1_merged197_read_pipe0, blur4_32_1_merged203_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

