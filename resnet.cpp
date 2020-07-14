#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: resnet_compute.h
#include "resnet_compute.h"

#include "hw_classes.h"

struct conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache {
	// RAM Box: {[0, 27], [0, 27], [9, 9]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12535
	// # of read delays: 12530
	fifo<hw_uint<16>, 12535> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12534 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache {
	// RAM Box: {[0, 27], [0, 27], [10, 10]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12534
	// # of read delays: 12530
	fifo<hw_uint<16>, 12534> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12533 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache {
	// RAM Box: {[0, 27], [0, 27], [11, 11]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12533
	// # of read delays: 12530
	fifo<hw_uint<16>, 12533> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12532 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache {
	// RAM Box: {[0, 27], [0, 27], [12, 12]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12532
	// # of read delays: 12530
	fifo<hw_uint<16>, 12532> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12531 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache {
	// RAM Box: {[0, 27], [0, 27], [13, 13]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12531
	// # of read delays: 12530
	fifo<hw_uint<16>, 12531> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12530 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache {
	// RAM Box: {[0, 27], [0, 27], [14, 14]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12530
	// # of read delays: 12530
	fifo<hw_uint<16>, 12530> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12529 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache {
	// RAM Box: {[0, 27], [0, 27], [15, 15]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12529
	// # of read delays: 12514
	fifo<hw_uint<16>, 12529> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12528 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12544
	// # of read delays: 12530
	fifo<hw_uint<16>, 12544> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12543 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache {
	// RAM Box: {[0, 27], [0, 27], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12543
	// # of read delays: 12530
	fifo<hw_uint<16>, 12543> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12542 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache {
	// RAM Box: {[0, 27], [0, 27], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12542
	// # of read delays: 12530
	fifo<hw_uint<16>, 12542> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12541 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12541
	// # of read delays: 12530
	fifo<hw_uint<16>, 12541> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12540 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache {
	// RAM Box: {[0, 27], [0, 27], [3, 3]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12540
	// # of read delays: 12530
	fifo<hw_uint<16>, 12540> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12539 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache {
	// RAM Box: {[0, 27], [0, 27], [4, 4]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12539
	// # of read delays: 12530
	fifo<hw_uint<16>, 12539> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12538 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache {
	// RAM Box: {[0, 27], [0, 27], [5, 5]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12538
	// # of read delays: 12530
	fifo<hw_uint<16>, 12538> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12537 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache {
	// RAM Box: {[0, 27], [0, 27], [6, 6]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12537
	// # of read delays: 12530
	fifo<hw_uint<16>, 12537> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12536 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache {
	// RAM Box: {[0, 27], [0, 27], [7, 7]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 12536
	// # of read delays: 12530
	fifo<hw_uint<16>, 12536> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(12535 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache {
	// RAM Box: {[0, 27], [0, 27], [8, 8]}
	// Capacity: 1
	// # of read delays: 2
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

struct conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7039
	// # of read delays: 7032
	fifo<hw_uint<16>, 7039> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7038 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache {
	// RAM Box: {[0, 27], [0, 27], [0, 15]}
	// Capacity: 7048
	// # of read delays: 7040
	fifo<hw_uint<16>, 7048> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7047 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct conv_stencil_cache {
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60_cache conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78_cache conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96_cache conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114_cache conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132_cache conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132;
  conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150_cache conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150;
  conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294;
  conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294_cache conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294;
};



inline void conv_stencil_op_hcompute_conv_stencil_10_167_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_10_167, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168.push(conv_stencil_op_hcompute_conv_stencil_10_167);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_10_167);
}

inline void conv_stencil_op_hcompute_conv_stencil_11_185_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_11_185, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186.push(conv_stencil_op_hcompute_conv_stencil_11_185);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_11_185);
}

inline void conv_stencil_op_hcompute_conv_stencil_12_203_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_12_203, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204.push(conv_stencil_op_hcompute_conv_stencil_12_203);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_12_203);
}

inline void conv_stencil_op_hcompute_conv_stencil_13_221_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_13_221, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222.push(conv_stencil_op_hcompute_conv_stencil_13_221);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_13_221);
}

inline void conv_stencil_op_hcompute_conv_stencil_14_239_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_14_239, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240.push(conv_stencil_op_hcompute_conv_stencil_14_239);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_14_239);
}

inline void conv_stencil_op_hcompute_conv_stencil_15_257_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_15_257, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258.push(conv_stencil_op_hcompute_conv_stencil_15_257);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_15_257);
}

inline void conv_stencil_op_hcompute_conv_stencil_16_275_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_16_275, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276.push(conv_stencil_op_hcompute_conv_stencil_16_275);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_16_275);
}

inline void conv_stencil_op_hcompute_conv_stencil_1_5_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_1_5, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.push(conv_stencil_op_hcompute_conv_stencil_1_5);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_1_5);
}

inline void conv_stencil_op_hcompute_conv_stencil_2_23_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_2_23, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24.push(conv_stencil_op_hcompute_conv_stencil_2_23);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_2_23);
}

inline void conv_stencil_op_hcompute_conv_stencil_3_41_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_3_41, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42.push(conv_stencil_op_hcompute_conv_stencil_3_41);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_3_41);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132.push(conv_stencil_op_hcompute_conv_stencil_4);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150.push(conv_stencil_op_hcompute_conv_stencil_4);
}

inline void conv_stencil_op_hcompute_conv_stencil_4_59_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_4_59, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60.push(conv_stencil_op_hcompute_conv_stencil_4_59);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_4_59);
}

inline void conv_stencil_op_hcompute_conv_stencil_5_77_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_5_77, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78.push(conv_stencil_op_hcompute_conv_stencil_5_77);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_5_77);
}

inline void conv_stencil_op_hcompute_conv_stencil_6_95_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_6_95, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96.push(conv_stencil_op_hcompute_conv_stencil_6_95);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_6_95);
}

inline void conv_stencil_op_hcompute_conv_stencil_7_113_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_7_113, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114.push(conv_stencil_op_hcompute_conv_stencil_7_113);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_7_113);
}

inline void conv_stencil_op_hcompute_conv_stencil_8_131_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_8_131, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132.push(conv_stencil_op_hcompute_conv_stencil_8_131);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_8_131);
}

inline void conv_stencil_op_hcompute_conv_stencil_9_149_write(hw_uint<16>& conv_stencil_op_hcompute_conv_stencil_9_149, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150.push(conv_stencil_op_hcompute_conv_stencil_9_149);
  conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294.push(conv_stencil_op_hcompute_conv_stencil_9_149);
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_168_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_10_168 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_10_167 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_conv_stencil_10_168.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_10_167;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_10_168.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12102 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((438 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12534 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_186_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_11_186 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 10] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_11_185 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_conv_stencil_11_186.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_11_185;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_11_186.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12101 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((437 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12533 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_204_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_12_204 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 11] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_12_203 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_conv_stencil_12_204.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_12_203;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_12_204.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12100 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((436 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12532 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_222_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_13_222 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 12] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_13_221 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_conv_stencil_13_222.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_13_221;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_13_222.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12099 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((435 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12531 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_240_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_14_240 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 13] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_14_239 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_conv_stencil_14_240.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_14_239;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_14_240.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12098 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((434 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12530 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_258_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_15_258 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 14] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_15_257 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_conv_stencil_15_258.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_15_257;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_15_258.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12097 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((433 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12529 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_276_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_16_276 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 15] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_16_275 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_conv_stencil_16_276.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_16_275;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_16_276.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12096 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((432 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12528 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_1_6 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_conv_stencil_1_6.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_1_6.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (15) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12111 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((447 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12543 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_24_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_2_24 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_2_23 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_conv_stencil_2_24.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_2_23;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_2_24.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (14) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12110 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((446 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12542 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_42_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_3_42 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_3_41 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_conv_stencil_3_42.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_3_41;
  }

  
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_3_42.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (13) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12109 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((445 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12541 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_60_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_4_60 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_4_60.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (12) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12108 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((444 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12540 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4_59 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_conv_stencil_4_60.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4_59;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_78_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_5_78 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_5_78.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (11) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12107 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((443 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12539 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_5_77 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_conv_stencil_5_78.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_5_77;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_96_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_6_96 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_6_96.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (10) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12106 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((442 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12538 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_6_95 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_conv_stencil_6_96.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_6_95;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_114_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_7_114 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_7_114.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (9) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12105 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((441 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12537 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_7_113 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_conv_stencil_7_114.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_7_113;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_132_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_8_132 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_8_132.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (8) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12104 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((440 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12536 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_8_131 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_conv_stencil_8_132.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_8_131;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_150_select(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_conv_stencil_9_150 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> conv_stencil[conv_s1_x, conv_s1_y, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  if ((((conv_s1_r_x == 0) && (conv_s1_r_y == 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil[root = 0, conv_s0_y, conv_s0_x, conv_s0_w] -> [0, 2, conv_s0_y, conv_s0_x, conv_s0_w, 0, 0, 0] : 0 <= conv_s0_y <= 27 and 0 <= conv_s0_x <= 27 and 0 <= conv_s0_w <= 15 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_to_conv_stencil_op_hcompute_conv_stencil_9_150.peek(/* one reader or all rams */ (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && 26 - conv_s1_y >= 0) ? ((12103 - 448 * conv_s1_y)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 26 - conv_s1_x >= 0) ? ((439 - 16 * conv_s1_x)) : (conv_s1_r_x == 0 && conv_s1_r_y == 0 && 26 - conv_s1_x >= 0 && 26 - conv_s1_y >= 0) ? (((12535 - 448 * conv_s1_y) - 16 * conv_s1_x)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4;
  }

  
  if ((((-1 + conv_s1_r_x >= 0)) || ((conv_s1_r_x == 0) && (-1 + conv_s1_r_y >= 0)))) {
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_9_149 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_conv_stencil_9_150.peek(/* one reader or all rams */ 0);
    return value_conv_stencil_op_hcompute_conv_stencil_9_149;
  }

  
  return 0;
}

inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_294_select(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // conv_stencil_op_hcompute_hw_output_stencil_294 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> conv_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  if ((((-9 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-9 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_10_167 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_10_167_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -9 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -9 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -9 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -9 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-9 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_10_167;
  }

  
  if ((((-10 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-10 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_11_185 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_11_185_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -10 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -10 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -10 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -10 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-10 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_11_185;
  }

  
  if ((((-11 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-11 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_12_203 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_12_203_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -11 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -11 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -11 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -11 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-11 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_12_203;
  }

  
  if ((((-12 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-12 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_13_221 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_13_221_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -12 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -12 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -12 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -12 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-12 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_13_221;
  }

  
  if ((((-13 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-13 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_14_239 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_14_239_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -13 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -13 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -13 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -13 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-13 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_14_239;
  }

  
  if ((((-14 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-14 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_15_257 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_15_257_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -14 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -14 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -14 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -14 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-14 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_15_257;
  }

  
  if ((((-15 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-15 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_16_275 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_16_275_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -15 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -15 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -15 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -15 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-15 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_16_275;
  }

  
  if ((((hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (hw_output_s0_w == 0) && (26 - hw_output_s0_x_xi >= 0)) || ((-27 + hw_output_s0_x_xi == 0) && (-27 + hw_output_s0_y_yi == 0) && (hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_1_5 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_1_5_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-26 + hw_output_s0_x_xi == 0 && -27 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (8) : (-25 + hw_output_s0_x_xi == 0 && -27 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (16) : (-26 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (257) : (-25 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (265) : (-26 + hw_output_s0_x_xi == 0 && -25 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (506) : (-25 + hw_output_s0_x_xi == 0 && -25 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (514) : (-27 + hw_output_s0_x_xi == 0 && hw_output_s0_w == 0 && 24 - hw_output_s0_y_yi >= 0) ? ((6795 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (249) : (-27 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0 && 24 - hw_output_s0_x_xi >= 0) ? ((240 - 9 * hw_output_s0_x_xi)) : (-27 + hw_output_s0_x_xi == 0 && -25 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0) ? (498) : (-26 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0 && 24 - hw_output_s0_x_xi >= 0) ? ((489 - 9 * hw_output_s0_x_xi)) : ((hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 24 - hw_output_s0_y_yi >= 0) || (-25 + hw_output_s0_y_yi == 0 && hw_output_s0_w == 0 && 24 - hw_output_s0_x_xi >= 0)) ? (((7038 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_1_5;
  }

  
  if ((((-1 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-1 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_2_23 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_2_23_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -1 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -1 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -1 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -1 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-1 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_2_23;
  }

  
  if ((((-2 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-2 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_3_41 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_3_41_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -2 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -2 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-2 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_3_41;
  }

  
  if ((((-3 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-3 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_4_59 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_4_59_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -3 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -3 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-3 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_4_59;
  }

  
  if ((((-4 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-4 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_5_77 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_5_77_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -4 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -4 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -4 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -4 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-4 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_5_77;
  }

  
  if ((((-5 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-5 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_6_95 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_6_95_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -5 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -5 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -5 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -5 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-5 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_6_95;
  }

  
  if ((((-6 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-6 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_7_113 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_7_113_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -6 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -6 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -6 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -6 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-6 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_7_113;
  }

  
  if ((((-7 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-7 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_8_131 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_8_131_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -7 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -7 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -7 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -7 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-7 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_8_131;
  }

  
  if ((((-8 + hw_output_s0_w == 0) && (26 - hw_output_s0_y_yi >= 0)) || ((-27 + hw_output_s0_y_yi == 0) && (-8 + hw_output_s0_w == 0)))) {
  // Read schedule : { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [29, 0, 29 + hw_output_s0_w, 1, hw_output_s0_y_yi, 1, hw_output_s0_x_xi, 1] : 0 <= hw_output_s0_w <= 15 and 0 <= hw_output_s0_y_yi <= 27 and 0 <= hw_output_s0_x_xi <= 27 }
  // Write schedule: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
    auto value_conv_stencil_op_hcompute_conv_stencil_9_149 = conv_stencil.conv_stencil_op_hcompute_conv_stencil_9_149_to_conv_stencil_op_hcompute_hw_output_stencil_294.peek(/* one reader or all rams */ (-27 + hw_output_s0_x_xi == 0 && -26 + hw_output_s0_y_yi == 0 && -8 + hw_output_s0_w == 0) ? (252) : (-27 + hw_output_s0_x_xi == 0 && -8 + hw_output_s0_w == 0 && 25 - hw_output_s0_y_yi >= 0) ? ((6804 - 252 * hw_output_s0_y_yi)) : (-27 + hw_output_s0_y_yi == 0 && -8 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((243 - 9 * hw_output_s0_x_xi)) : (-26 + hw_output_s0_y_yi == 0 && -8 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0) ? ((495 - 9 * hw_output_s0_x_xi)) : (-8 + hw_output_s0_w == 0 && 26 - hw_output_s0_x_xi >= 0 && 25 - hw_output_s0_y_yi >= 0) ? (((7047 - 252 * hw_output_s0_y_yi) - 9 * hw_output_s0_x_xi)) : 0);
    return value_conv_stencil_op_hcompute_conv_stencil_9_149;
  }

  
  return 0;
}

// # of bundles = 34
// op_hcompute_conv_stencil_10_read
//	conv_stencil_op_hcompute_conv_stencil_10_168
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_10_168

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_168_res = conv_stencil_op_hcompute_conv_stencil_10_168_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_10_168_res);
	return result;
}

// op_hcompute_conv_stencil_10_write
//	conv_stencil_op_hcompute_conv_stencil_10_167
inline void conv_stencil_op_hcompute_conv_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_10_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_10_167_res = op_hcompute_conv_stencil_10_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_10_167_write(conv_stencil_op_hcompute_conv_stencil_10_167_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_11_read
//	conv_stencil_op_hcompute_conv_stencil_11_186
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_11_186

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_186_res = conv_stencil_op_hcompute_conv_stencil_11_186_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_11_186_res);
	return result;
}

// op_hcompute_conv_stencil_11_write
//	conv_stencil_op_hcompute_conv_stencil_11_185
inline void conv_stencil_op_hcompute_conv_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_11_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_11_185_res = op_hcompute_conv_stencil_11_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_11_185_write(conv_stencil_op_hcompute_conv_stencil_11_185_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_12_read
//	conv_stencil_op_hcompute_conv_stencil_12_204
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_12_204

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_204_res = conv_stencil_op_hcompute_conv_stencil_12_204_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_12_204_res);
	return result;
}

// op_hcompute_conv_stencil_12_write
//	conv_stencil_op_hcompute_conv_stencil_12_203
inline void conv_stencil_op_hcompute_conv_stencil_12_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_12_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_12_203_res = op_hcompute_conv_stencil_12_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_12_203_write(conv_stencil_op_hcompute_conv_stencil_12_203_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_13_read
//	conv_stencil_op_hcompute_conv_stencil_13_222
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_13_222

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_222_res = conv_stencil_op_hcompute_conv_stencil_13_222_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_13_222_res);
	return result;
}

// op_hcompute_conv_stencil_13_write
//	conv_stencil_op_hcompute_conv_stencil_13_221
inline void conv_stencil_op_hcompute_conv_stencil_13_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_13_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_13_221_res = op_hcompute_conv_stencil_13_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_13_221_write(conv_stencil_op_hcompute_conv_stencil_13_221_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_14_read
//	conv_stencil_op_hcompute_conv_stencil_14_240
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_14_240

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_240_res = conv_stencil_op_hcompute_conv_stencil_14_240_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_14_240_res);
	return result;
}

// op_hcompute_conv_stencil_14_write
//	conv_stencil_op_hcompute_conv_stencil_14_239
inline void conv_stencil_op_hcompute_conv_stencil_14_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_14_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_14_239_res = op_hcompute_conv_stencil_14_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_14_239_write(conv_stencil_op_hcompute_conv_stencil_14_239_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_15_read
//	conv_stencil_op_hcompute_conv_stencil_15_258
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_15_258

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_258_res = conv_stencil_op_hcompute_conv_stencil_15_258_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_15_258_res);
	return result;
}

// op_hcompute_conv_stencil_15_write
//	conv_stencil_op_hcompute_conv_stencil_15_257
inline void conv_stencil_op_hcompute_conv_stencil_15_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_15_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_15_257_res = op_hcompute_conv_stencil_15_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_15_257_write(conv_stencil_op_hcompute_conv_stencil_15_257_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_16_read
//	conv_stencil_op_hcompute_conv_stencil_16_276
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_16_276

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_276_res = conv_stencil_op_hcompute_conv_stencil_16_276_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_16_276_res);
	return result;
}

// op_hcompute_conv_stencil_16_write
//	conv_stencil_op_hcompute_conv_stencil_16_275
inline void conv_stencil_op_hcompute_conv_stencil_16_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_16_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_16_275_res = op_hcompute_conv_stencil_16_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_16_275_write(conv_stencil_op_hcompute_conv_stencil_16_275_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_1_read
//	conv_stencil_op_hcompute_conv_stencil_1_6
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_6_res = conv_stencil_op_hcompute_conv_stencil_1_6_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_1_6_res);
	return result;
}

// op_hcompute_conv_stencil_1_write
//	conv_stencil_op_hcompute_conv_stencil_1_5
inline void conv_stencil_op_hcompute_conv_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_1_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_1_5_res = op_hcompute_conv_stencil_1_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_1_5_write(conv_stencil_op_hcompute_conv_stencil_1_5_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_2_read
//	conv_stencil_op_hcompute_conv_stencil_2_24
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_2_24

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_24_res = conv_stencil_op_hcompute_conv_stencil_2_24_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_2_24_res);
	return result;
}

// op_hcompute_conv_stencil_2_write
//	conv_stencil_op_hcompute_conv_stencil_2_23
inline void conv_stencil_op_hcompute_conv_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_2_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_2_23_res = op_hcompute_conv_stencil_2_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_2_23_write(conv_stencil_op_hcompute_conv_stencil_2_23_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_3_read
//	conv_stencil_op_hcompute_conv_stencil_3_42
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_3_42

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_42_res = conv_stencil_op_hcompute_conv_stencil_3_42_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_3_42_res);
	return result;
}

// op_hcompute_conv_stencil_3_write
//	conv_stencil_op_hcompute_conv_stencil_3_41
inline void conv_stencil_op_hcompute_conv_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_3_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_3_41_res = op_hcompute_conv_stencil_3_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_3_41_write(conv_stencil_op_hcompute_conv_stencil_3_41_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_4_read
//	conv_stencil_op_hcompute_conv_stencil_4_60
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_4_60

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_60_res = conv_stencil_op_hcompute_conv_stencil_4_60_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_4_60_res);
	return result;
}

// op_hcompute_conv_stencil_4_write
//	conv_stencil_op_hcompute_conv_stencil_4_59
inline void conv_stencil_op_hcompute_conv_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_4_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_59_res = op_hcompute_conv_stencil_4_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_59_write(conv_stencil_op_hcompute_conv_stencil_4_59_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_5_read
//	conv_stencil_op_hcompute_conv_stencil_5_78
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_5_78

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_78_res = conv_stencil_op_hcompute_conv_stencil_5_78_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_5_78_res);
	return result;
}

// op_hcompute_conv_stencil_5_write
//	conv_stencil_op_hcompute_conv_stencil_5_77
inline void conv_stencil_op_hcompute_conv_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_5_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_5_77_res = op_hcompute_conv_stencil_5_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_5_77_write(conv_stencil_op_hcompute_conv_stencil_5_77_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_6_read
//	conv_stencil_op_hcompute_conv_stencil_6_96
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_6_96

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_96_res = conv_stencil_op_hcompute_conv_stencil_6_96_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_6_96_res);
	return result;
}

// op_hcompute_conv_stencil_6_write
//	conv_stencil_op_hcompute_conv_stencil_6_95
inline void conv_stencil_op_hcompute_conv_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_6_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_6_95_res = op_hcompute_conv_stencil_6_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_6_95_write(conv_stencil_op_hcompute_conv_stencil_6_95_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_7_read
//	conv_stencil_op_hcompute_conv_stencil_7_114
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_7_114

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_114_res = conv_stencil_op_hcompute_conv_stencil_7_114_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_7_114_res);
	return result;
}

// op_hcompute_conv_stencil_7_write
//	conv_stencil_op_hcompute_conv_stencil_7_113
inline void conv_stencil_op_hcompute_conv_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_7_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_7_113_res = op_hcompute_conv_stencil_7_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_7_113_write(conv_stencil_op_hcompute_conv_stencil_7_113_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_8_read
//	conv_stencil_op_hcompute_conv_stencil_8_132
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_8_132

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_132_res = conv_stencil_op_hcompute_conv_stencil_8_132_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_8_132_res);
	return result;
}

// op_hcompute_conv_stencil_8_write
//	conv_stencil_op_hcompute_conv_stencil_8_131
inline void conv_stencil_op_hcompute_conv_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_8_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_8_131_res = op_hcompute_conv_stencil_8_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_8_131_write(conv_stencil_op_hcompute_conv_stencil_8_131_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_9_read
//	conv_stencil_op_hcompute_conv_stencil_9_150
inline hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_conv_stencil_9_150

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_150_res = conv_stencil_op_hcompute_conv_stencil_9_150_select(conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_conv_stencil_9_150_res);
	return result;
}

// op_hcompute_conv_stencil_9_write
//	conv_stencil_op_hcompute_conv_stencil_9_149
inline void conv_stencil_op_hcompute_conv_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_9_write, conv_stencil_cache& conv_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_9_149_res = op_hcompute_conv_stencil_9_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_9_149_write(conv_stencil_op_hcompute_conv_stencil_9_149_res, conv_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
}

// op_hcompute_conv_stencil_write
//	conv_stencil_op_hcompute_conv_stencil_4
inline void conv_stencil_op_hcompute_conv_stencil_write_bundle_write(hw_uint<16>& op_hcompute_conv_stencil_write, conv_stencil_cache& conv_stencil, int root, int conv_s0_y, int conv_s0_x, int conv_s0_w, int dynamic_address) {
	hw_uint<16> conv_stencil_op_hcompute_conv_stencil_4_res = op_hcompute_conv_stencil_write.extract<0, 15>();
	conv_stencil_op_hcompute_conv_stencil_4_write(conv_stencil_op_hcompute_conv_stencil_4_res, conv_stencil, root, conv_s0_y, conv_s0_x, conv_s0_w, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	conv_stencil_op_hcompute_hw_output_stencil_294
inline hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_read_bundle_read(conv_stencil_cache& conv_stencil, int root, int hw_output_s0_w, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // conv_stencil_op_hcompute_hw_output_stencil_294

	hw_uint<16> result;
	hw_uint<16> conv_stencil_op_hcompute_hw_output_stencil_294_res = conv_stencil_op_hcompute_hw_output_stencil_294_select(conv_stencil, root, hw_output_s0_w, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, conv_stencil_op_hcompute_hw_output_stencil_294_res);
	return result;
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7200
	// # of read delays: 7194
	fifo<hw_uint<16>, 7200> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7199 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7199
	// # of read delays: 7194
	fifo<hw_uint<16>, 7199> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7198 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7198
	// # of read delays: 7194
	fifo<hw_uint<16>, 7198> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7197 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7197
	// # of read delays: 7194
	fifo<hw_uint<16>, 7197> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7196 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7196
	// # of read delays: 7194
	fifo<hw_uint<16>, 7196> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7195 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7195
	// # of read delays: 7194
	fifo<hw_uint<16>, 7195> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7194 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7194
	// # of read delays: 7194
	fifo<hw_uint<16>, 7194> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7193 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache {
	// RAM Box: {[0, 7], [0, 29], [0, 29]}
	// Capacity: 7193
	// # of read delays: 7186
	fifo<hw_uint<16>, 7193> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7192 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct hw_input_stencil_cache {
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158.push(hw_input_stencil_op_hcompute_hw_input_stencil_0);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_169 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_169.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_170 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_170.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_171 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_171.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_172 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_172.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_173 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_173.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_174 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_174.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_175 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_175.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_10_176 read pattern: { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_10[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 32 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 9] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_10_176.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_187_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_187 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_187.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_188_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_188 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_188.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_189_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_189 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_189.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_190_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_190 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_190.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_191_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_191 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_191.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_192_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_192 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_192.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_193_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_193 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_193.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_194_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_11_194 read pattern: { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_11[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 3 + conv_s1_x, 4, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_11_194.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_205_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_205 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_205.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_206_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_206 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_206.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_207 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_207.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_208 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_208.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_209 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_209.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_210 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_210.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_211 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_211.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_12_212 read pattern: { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_12[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 4 + conv_s1_x, 0, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_12_212.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_223_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_223 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_223.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_224_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_224 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_224.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_225_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_225 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_225.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_226_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_226 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_226.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_227_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_227 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_227.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_228_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_228 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_228.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_229_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_229 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_229.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_230_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_13_230 read pattern: { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_13[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 5 + conv_s1_x, 3, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_13_230.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_241_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_241 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_241.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_242_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_242 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_242.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_243_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_243 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_243.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_244_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_244 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_244.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_245_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_245 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_245.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_246_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_246 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_246.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_247_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_247 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_247.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_248_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_14_248 read pattern: { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_14[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 6 + conv_s1_x, 6, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_14_248.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_259_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_259 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_259.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_260_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_260 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_260.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_261_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_261 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_261.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_262_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_262 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_262.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_263_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_263 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_263.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_264_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_264 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_264.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_265_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_265 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_265.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_266_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_15_266 read pattern: { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_15[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 7 + conv_s1_x, 5, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_15_266.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_277_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_277 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_277.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_278_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_278 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_278.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_279_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_279 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_279.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_280_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_280 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_280.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_281_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_281 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_281.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_282_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_282 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_282.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_283_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_283 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_283.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_284_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_16_284 read pattern: { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_16[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 8 + conv_s1_x, 2, conv_s1_r_y, conv_s1_r_x, 0, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_16_284.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_10 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_10.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_11 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_11.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_12 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_12.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_13 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_13.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_14 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_14.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_7 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_7.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_8 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_8.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_1_9 read pattern: { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_1[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 1, 25 + conv_s1_r_x, 0] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_1_9.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_25_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_25 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_25.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_26 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_26.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_27 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_27.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_28 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_28.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_29 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_29.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_30 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_30.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_31 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_31.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_2_32 read pattern: { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_2[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 24 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 6] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_2_32.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_43_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_43 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_43.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_44 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_44.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_45 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_45.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_46 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_46.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_47 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_47.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_48 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_48.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_49 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_49.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_3_50 read pattern: { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_3[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 25 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 4] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_3_50.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_61_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_61 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_61.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_62_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_62 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_62.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_63_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_63 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_63.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_64_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_64 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_64.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_65_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_65 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_65.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_66_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_66 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_66.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_67_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_67 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_67.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_68_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_4_68 read pattern: { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_4[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 26 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 3] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_4_68.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_79_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_79 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_79.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_80_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_80 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_80.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_81_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_81 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_81.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_82_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_82 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_82.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_83_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_83 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_83.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_84_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_84 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_84.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_85_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_85 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_85.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_86_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_5_86 read pattern: { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_5[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 27 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 5] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_5_86.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_100_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_100 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_100.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_101_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_101 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_101.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_102_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_102 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_102.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_103_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_103 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_103.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_104_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_104 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_104.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_97_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_97 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_97.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_98_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_98 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_98.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_99_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_6_99 read pattern: { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_6[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 28 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 8] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_6_99.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_115_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_115 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_115.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_116_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_116 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_116.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_117_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_117 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_117.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_118_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_118 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_118.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_119_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_119 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_119.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_120_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_120 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_120.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_121_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_121 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_121.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_122_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_7_122 read pattern: { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_7[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 29 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 1] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_7_122.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_133_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_133 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_133.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_134_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_134 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_134.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_135_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_135 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_135.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_136_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_136 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_136.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_137_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_137 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_137.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_138_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_138 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_138.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_139_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_139 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_139.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_140_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_8_140 read pattern: { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_8[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 30 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 7] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_8_140.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_151_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_151 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[0, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_151.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (7) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6967 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((239 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7199 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_152_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_152 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[1, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_152.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (6) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6966 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((238 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7198 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_153_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_153 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[2, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_153.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (5) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6965 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((237 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7197 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_154_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_154 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[3, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_154.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (4) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6964 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((236 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7196 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_155_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_155 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[4, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_155.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (3) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6963 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((235 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7195 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_156_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_156 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[5, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_156.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (2) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6962 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((234 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7194 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_157_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_157 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[6, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_157.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -2 + conv_s1_r_y == 0 && -27 + conv_s1_x == 0 && -27 + conv_s1_y == 0) ? (1) : (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6961 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((233 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7193 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_158_select(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_conv_stencil_9_158 read pattern: { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> hw_input_stencil[7, conv_s1_x + conv_s1_r_x, conv_s1_y + conv_s1_r_y] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Read schedule : { op_hcompute_conv_stencil_9[root = 0, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x] -> [2 + conv_s1_y, 0, 2 + conv_s1_x, 1, 31 + conv_s1_r_y, 0, 5 + conv_s1_r_x, 2] : 0 <= conv_s1_y <= 27 and 0 <= conv_s1_x <= 27 and 0 <= conv_s1_r_y <= 2 and 0 <= conv_s1_r_x <= 2 }
  // Write schedule: { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z] -> [0, 1, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, 0, 0, 0] : 0 <= hw_input_s0_y <= 29 and 0 <= hw_input_s0_x <= 29 and 0 <= hw_input_s0_z <= 7 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_conv_stencil_9_158.peek(/* one reader or all rams */ (-2 + conv_s1_r_x == 0 && -27 + conv_s1_x == 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((6960 - 240 * conv_s1_y) - 240 * conv_s1_r_y)) : (-2 + conv_s1_r_y == 0 && -27 + conv_s1_y == 0 && 28 - conv_s1_x - conv_s1_r_x >= 0) ? (((232 - 8 * conv_s1_x) - 8 * conv_s1_r_x)) : (28 - conv_s1_x - conv_s1_r_x >= 0 && 28 - conv_s1_y - conv_s1_r_y >= 0) ? (((((7192 - 240 * conv_s1_y) - 8 * conv_s1_x) - 240 * conv_s1_r_y) - 8 * conv_s1_r_x)) : 0);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 17
// op_hcompute_conv_stencil_10_read
//	hw_input_stencil_op_hcompute_conv_stencil_10_169
//	hw_input_stencil_op_hcompute_conv_stencil_10_170
//	hw_input_stencil_op_hcompute_conv_stencil_10_171
//	hw_input_stencil_op_hcompute_conv_stencil_10_172
//	hw_input_stencil_op_hcompute_conv_stencil_10_173
//	hw_input_stencil_op_hcompute_conv_stencil_10_174
//	hw_input_stencil_op_hcompute_conv_stencil_10_175
//	hw_input_stencil_op_hcompute_conv_stencil_10_176
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_10_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_10_169
    // hw_input_stencil_op_hcompute_conv_stencil_10_170
    // hw_input_stencil_op_hcompute_conv_stencil_10_171
    // hw_input_stencil_op_hcompute_conv_stencil_10_172
    // hw_input_stencil_op_hcompute_conv_stencil_10_173
    // hw_input_stencil_op_hcompute_conv_stencil_10_174
    // hw_input_stencil_op_hcompute_conv_stencil_10_175
    // hw_input_stencil_op_hcompute_conv_stencil_10_176

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_169_res = hw_input_stencil_op_hcompute_conv_stencil_10_169_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_169_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_170_res = hw_input_stencil_op_hcompute_conv_stencil_10_170_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_170_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_171_res = hw_input_stencil_op_hcompute_conv_stencil_10_171_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_171_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_172_res = hw_input_stencil_op_hcompute_conv_stencil_10_172_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_172_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_173_res = hw_input_stencil_op_hcompute_conv_stencil_10_173_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_173_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_174_res = hw_input_stencil_op_hcompute_conv_stencil_10_174_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_174_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_175_res = hw_input_stencil_op_hcompute_conv_stencil_10_175_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_175_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_10_176_res = hw_input_stencil_op_hcompute_conv_stencil_10_176_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_10_176_res);
	return result;
}

// op_hcompute_conv_stencil_11_read
//	hw_input_stencil_op_hcompute_conv_stencil_11_187
//	hw_input_stencil_op_hcompute_conv_stencil_11_188
//	hw_input_stencil_op_hcompute_conv_stencil_11_189
//	hw_input_stencil_op_hcompute_conv_stencil_11_190
//	hw_input_stencil_op_hcompute_conv_stencil_11_191
//	hw_input_stencil_op_hcompute_conv_stencil_11_192
//	hw_input_stencil_op_hcompute_conv_stencil_11_193
//	hw_input_stencil_op_hcompute_conv_stencil_11_194
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_11_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_11_187
    // hw_input_stencil_op_hcompute_conv_stencil_11_188
    // hw_input_stencil_op_hcompute_conv_stencil_11_189
    // hw_input_stencil_op_hcompute_conv_stencil_11_190
    // hw_input_stencil_op_hcompute_conv_stencil_11_191
    // hw_input_stencil_op_hcompute_conv_stencil_11_192
    // hw_input_stencil_op_hcompute_conv_stencil_11_193
    // hw_input_stencil_op_hcompute_conv_stencil_11_194

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_187_res = hw_input_stencil_op_hcompute_conv_stencil_11_187_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_187_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_188_res = hw_input_stencil_op_hcompute_conv_stencil_11_188_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_188_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_189_res = hw_input_stencil_op_hcompute_conv_stencil_11_189_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_189_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_190_res = hw_input_stencil_op_hcompute_conv_stencil_11_190_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_190_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_191_res = hw_input_stencil_op_hcompute_conv_stencil_11_191_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_191_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_192_res = hw_input_stencil_op_hcompute_conv_stencil_11_192_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_192_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_193_res = hw_input_stencil_op_hcompute_conv_stencil_11_193_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_193_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_11_194_res = hw_input_stencil_op_hcompute_conv_stencil_11_194_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_11_194_res);
	return result;
}

// op_hcompute_conv_stencil_12_read
//	hw_input_stencil_op_hcompute_conv_stencil_12_205
//	hw_input_stencil_op_hcompute_conv_stencil_12_206
//	hw_input_stencil_op_hcompute_conv_stencil_12_207
//	hw_input_stencil_op_hcompute_conv_stencil_12_208
//	hw_input_stencil_op_hcompute_conv_stencil_12_209
//	hw_input_stencil_op_hcompute_conv_stencil_12_210
//	hw_input_stencil_op_hcompute_conv_stencil_12_211
//	hw_input_stencil_op_hcompute_conv_stencil_12_212
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_12_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_12_205
    // hw_input_stencil_op_hcompute_conv_stencil_12_206
    // hw_input_stencil_op_hcompute_conv_stencil_12_207
    // hw_input_stencil_op_hcompute_conv_stencil_12_208
    // hw_input_stencil_op_hcompute_conv_stencil_12_209
    // hw_input_stencil_op_hcompute_conv_stencil_12_210
    // hw_input_stencil_op_hcompute_conv_stencil_12_211
    // hw_input_stencil_op_hcompute_conv_stencil_12_212

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_205_res = hw_input_stencil_op_hcompute_conv_stencil_12_205_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_205_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_206_res = hw_input_stencil_op_hcompute_conv_stencil_12_206_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_206_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_207_res = hw_input_stencil_op_hcompute_conv_stencil_12_207_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_207_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_208_res = hw_input_stencil_op_hcompute_conv_stencil_12_208_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_208_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_209_res = hw_input_stencil_op_hcompute_conv_stencil_12_209_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_209_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_210_res = hw_input_stencil_op_hcompute_conv_stencil_12_210_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_210_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_211_res = hw_input_stencil_op_hcompute_conv_stencil_12_211_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_211_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_12_212_res = hw_input_stencil_op_hcompute_conv_stencil_12_212_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_12_212_res);
	return result;
}

// op_hcompute_conv_stencil_13_read
//	hw_input_stencil_op_hcompute_conv_stencil_13_223
//	hw_input_stencil_op_hcompute_conv_stencil_13_224
//	hw_input_stencil_op_hcompute_conv_stencil_13_225
//	hw_input_stencil_op_hcompute_conv_stencil_13_226
//	hw_input_stencil_op_hcompute_conv_stencil_13_227
//	hw_input_stencil_op_hcompute_conv_stencil_13_228
//	hw_input_stencil_op_hcompute_conv_stencil_13_229
//	hw_input_stencil_op_hcompute_conv_stencil_13_230
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_13_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_13_223
    // hw_input_stencil_op_hcompute_conv_stencil_13_224
    // hw_input_stencil_op_hcompute_conv_stencil_13_225
    // hw_input_stencil_op_hcompute_conv_stencil_13_226
    // hw_input_stencil_op_hcompute_conv_stencil_13_227
    // hw_input_stencil_op_hcompute_conv_stencil_13_228
    // hw_input_stencil_op_hcompute_conv_stencil_13_229
    // hw_input_stencil_op_hcompute_conv_stencil_13_230

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_223_res = hw_input_stencil_op_hcompute_conv_stencil_13_223_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_223_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_224_res = hw_input_stencil_op_hcompute_conv_stencil_13_224_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_224_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_225_res = hw_input_stencil_op_hcompute_conv_stencil_13_225_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_225_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_226_res = hw_input_stencil_op_hcompute_conv_stencil_13_226_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_226_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_227_res = hw_input_stencil_op_hcompute_conv_stencil_13_227_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_227_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_228_res = hw_input_stencil_op_hcompute_conv_stencil_13_228_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_228_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_229_res = hw_input_stencil_op_hcompute_conv_stencil_13_229_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_229_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_13_230_res = hw_input_stencil_op_hcompute_conv_stencil_13_230_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_13_230_res);
	return result;
}

// op_hcompute_conv_stencil_14_read
//	hw_input_stencil_op_hcompute_conv_stencil_14_241
//	hw_input_stencil_op_hcompute_conv_stencil_14_242
//	hw_input_stencil_op_hcompute_conv_stencil_14_243
//	hw_input_stencil_op_hcompute_conv_stencil_14_244
//	hw_input_stencil_op_hcompute_conv_stencil_14_245
//	hw_input_stencil_op_hcompute_conv_stencil_14_246
//	hw_input_stencil_op_hcompute_conv_stencil_14_247
//	hw_input_stencil_op_hcompute_conv_stencil_14_248
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_14_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_14_241
    // hw_input_stencil_op_hcompute_conv_stencil_14_242
    // hw_input_stencil_op_hcompute_conv_stencil_14_243
    // hw_input_stencil_op_hcompute_conv_stencil_14_244
    // hw_input_stencil_op_hcompute_conv_stencil_14_245
    // hw_input_stencil_op_hcompute_conv_stencil_14_246
    // hw_input_stencil_op_hcompute_conv_stencil_14_247
    // hw_input_stencil_op_hcompute_conv_stencil_14_248

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_241_res = hw_input_stencil_op_hcompute_conv_stencil_14_241_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_241_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_242_res = hw_input_stencil_op_hcompute_conv_stencil_14_242_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_242_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_243_res = hw_input_stencil_op_hcompute_conv_stencil_14_243_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_243_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_244_res = hw_input_stencil_op_hcompute_conv_stencil_14_244_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_244_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_245_res = hw_input_stencil_op_hcompute_conv_stencil_14_245_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_245_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_246_res = hw_input_stencil_op_hcompute_conv_stencil_14_246_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_246_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_247_res = hw_input_stencil_op_hcompute_conv_stencil_14_247_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_247_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_14_248_res = hw_input_stencil_op_hcompute_conv_stencil_14_248_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_14_248_res);
	return result;
}

// op_hcompute_conv_stencil_15_read
//	hw_input_stencil_op_hcompute_conv_stencil_15_259
//	hw_input_stencil_op_hcompute_conv_stencil_15_260
//	hw_input_stencil_op_hcompute_conv_stencil_15_261
//	hw_input_stencil_op_hcompute_conv_stencil_15_262
//	hw_input_stencil_op_hcompute_conv_stencil_15_263
//	hw_input_stencil_op_hcompute_conv_stencil_15_264
//	hw_input_stencil_op_hcompute_conv_stencil_15_265
//	hw_input_stencil_op_hcompute_conv_stencil_15_266
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_15_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_15_259
    // hw_input_stencil_op_hcompute_conv_stencil_15_260
    // hw_input_stencil_op_hcompute_conv_stencil_15_261
    // hw_input_stencil_op_hcompute_conv_stencil_15_262
    // hw_input_stencil_op_hcompute_conv_stencil_15_263
    // hw_input_stencil_op_hcompute_conv_stencil_15_264
    // hw_input_stencil_op_hcompute_conv_stencil_15_265
    // hw_input_stencil_op_hcompute_conv_stencil_15_266

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_259_res = hw_input_stencil_op_hcompute_conv_stencil_15_259_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_259_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_260_res = hw_input_stencil_op_hcompute_conv_stencil_15_260_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_260_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_261_res = hw_input_stencil_op_hcompute_conv_stencil_15_261_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_261_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_262_res = hw_input_stencil_op_hcompute_conv_stencil_15_262_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_262_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_263_res = hw_input_stencil_op_hcompute_conv_stencil_15_263_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_263_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_264_res = hw_input_stencil_op_hcompute_conv_stencil_15_264_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_264_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_265_res = hw_input_stencil_op_hcompute_conv_stencil_15_265_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_265_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_15_266_res = hw_input_stencil_op_hcompute_conv_stencil_15_266_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_15_266_res);
	return result;
}

// op_hcompute_conv_stencil_16_read
//	hw_input_stencil_op_hcompute_conv_stencil_16_277
//	hw_input_stencil_op_hcompute_conv_stencil_16_278
//	hw_input_stencil_op_hcompute_conv_stencil_16_279
//	hw_input_stencil_op_hcompute_conv_stencil_16_280
//	hw_input_stencil_op_hcompute_conv_stencil_16_281
//	hw_input_stencil_op_hcompute_conv_stencil_16_282
//	hw_input_stencil_op_hcompute_conv_stencil_16_283
//	hw_input_stencil_op_hcompute_conv_stencil_16_284
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_16_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_16_277
    // hw_input_stencil_op_hcompute_conv_stencil_16_278
    // hw_input_stencil_op_hcompute_conv_stencil_16_279
    // hw_input_stencil_op_hcompute_conv_stencil_16_280
    // hw_input_stencil_op_hcompute_conv_stencil_16_281
    // hw_input_stencil_op_hcompute_conv_stencil_16_282
    // hw_input_stencil_op_hcompute_conv_stencil_16_283
    // hw_input_stencil_op_hcompute_conv_stencil_16_284

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_277_res = hw_input_stencil_op_hcompute_conv_stencil_16_277_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_277_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_278_res = hw_input_stencil_op_hcompute_conv_stencil_16_278_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_278_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_279_res = hw_input_stencil_op_hcompute_conv_stencil_16_279_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_279_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_280_res = hw_input_stencil_op_hcompute_conv_stencil_16_280_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_280_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_281_res = hw_input_stencil_op_hcompute_conv_stencil_16_281_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_281_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_282_res = hw_input_stencil_op_hcompute_conv_stencil_16_282_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_282_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_283_res = hw_input_stencil_op_hcompute_conv_stencil_16_283_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_283_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_16_284_res = hw_input_stencil_op_hcompute_conv_stencil_16_284_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_16_284_res);
	return result;
}

// op_hcompute_conv_stencil_1_read
//	hw_input_stencil_op_hcompute_conv_stencil_1_7
//	hw_input_stencil_op_hcompute_conv_stencil_1_8
//	hw_input_stencil_op_hcompute_conv_stencil_1_9
//	hw_input_stencil_op_hcompute_conv_stencil_1_10
//	hw_input_stencil_op_hcompute_conv_stencil_1_11
//	hw_input_stencil_op_hcompute_conv_stencil_1_12
//	hw_input_stencil_op_hcompute_conv_stencil_1_13
//	hw_input_stencil_op_hcompute_conv_stencil_1_14
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_1_7
    // hw_input_stencil_op_hcompute_conv_stencil_1_8
    // hw_input_stencil_op_hcompute_conv_stencil_1_9
    // hw_input_stencil_op_hcompute_conv_stencil_1_10
    // hw_input_stencil_op_hcompute_conv_stencil_1_11
    // hw_input_stencil_op_hcompute_conv_stencil_1_12
    // hw_input_stencil_op_hcompute_conv_stencil_1_13
    // hw_input_stencil_op_hcompute_conv_stencil_1_14

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_7_res = hw_input_stencil_op_hcompute_conv_stencil_1_7_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_8_res = hw_input_stencil_op_hcompute_conv_stencil_1_8_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_9_res = hw_input_stencil_op_hcompute_conv_stencil_1_9_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_10_res = hw_input_stencil_op_hcompute_conv_stencil_1_10_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_11_res = hw_input_stencil_op_hcompute_conv_stencil_1_11_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_12_res = hw_input_stencil_op_hcompute_conv_stencil_1_12_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_12_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_13_res = hw_input_stencil_op_hcompute_conv_stencil_1_13_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_13_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_1_14_res = hw_input_stencil_op_hcompute_conv_stencil_1_14_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_1_14_res);
	return result;
}

// op_hcompute_conv_stencil_2_read
//	hw_input_stencil_op_hcompute_conv_stencil_2_25
//	hw_input_stencil_op_hcompute_conv_stencil_2_26
//	hw_input_stencil_op_hcompute_conv_stencil_2_27
//	hw_input_stencil_op_hcompute_conv_stencil_2_28
//	hw_input_stencil_op_hcompute_conv_stencil_2_29
//	hw_input_stencil_op_hcompute_conv_stencil_2_30
//	hw_input_stencil_op_hcompute_conv_stencil_2_31
//	hw_input_stencil_op_hcompute_conv_stencil_2_32
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_2_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_2_25
    // hw_input_stencil_op_hcompute_conv_stencil_2_26
    // hw_input_stencil_op_hcompute_conv_stencil_2_27
    // hw_input_stencil_op_hcompute_conv_stencil_2_28
    // hw_input_stencil_op_hcompute_conv_stencil_2_29
    // hw_input_stencil_op_hcompute_conv_stencil_2_30
    // hw_input_stencil_op_hcompute_conv_stencil_2_31
    // hw_input_stencil_op_hcompute_conv_stencil_2_32

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_25_res = hw_input_stencil_op_hcompute_conv_stencil_2_25_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_25_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_26_res = hw_input_stencil_op_hcompute_conv_stencil_2_26_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_26_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_27_res = hw_input_stencil_op_hcompute_conv_stencil_2_27_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_27_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_28_res = hw_input_stencil_op_hcompute_conv_stencil_2_28_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_28_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_29_res = hw_input_stencil_op_hcompute_conv_stencil_2_29_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_29_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_30_res = hw_input_stencil_op_hcompute_conv_stencil_2_30_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_30_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_31_res = hw_input_stencil_op_hcompute_conv_stencil_2_31_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_31_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_2_32_res = hw_input_stencil_op_hcompute_conv_stencil_2_32_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_2_32_res);
	return result;
}

// op_hcompute_conv_stencil_3_read
//	hw_input_stencil_op_hcompute_conv_stencil_3_43
//	hw_input_stencil_op_hcompute_conv_stencil_3_44
//	hw_input_stencil_op_hcompute_conv_stencil_3_45
//	hw_input_stencil_op_hcompute_conv_stencil_3_46
//	hw_input_stencil_op_hcompute_conv_stencil_3_47
//	hw_input_stencil_op_hcompute_conv_stencil_3_48
//	hw_input_stencil_op_hcompute_conv_stencil_3_49
//	hw_input_stencil_op_hcompute_conv_stencil_3_50
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_3_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_3_43
    // hw_input_stencil_op_hcompute_conv_stencil_3_44
    // hw_input_stencil_op_hcompute_conv_stencil_3_45
    // hw_input_stencil_op_hcompute_conv_stencil_3_46
    // hw_input_stencil_op_hcompute_conv_stencil_3_47
    // hw_input_stencil_op_hcompute_conv_stencil_3_48
    // hw_input_stencil_op_hcompute_conv_stencil_3_49
    // hw_input_stencil_op_hcompute_conv_stencil_3_50

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_43_res = hw_input_stencil_op_hcompute_conv_stencil_3_43_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_43_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_44_res = hw_input_stencil_op_hcompute_conv_stencil_3_44_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_44_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_45_res = hw_input_stencil_op_hcompute_conv_stencil_3_45_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_45_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_46_res = hw_input_stencil_op_hcompute_conv_stencil_3_46_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_46_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_47_res = hw_input_stencil_op_hcompute_conv_stencil_3_47_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_47_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_48_res = hw_input_stencil_op_hcompute_conv_stencil_3_48_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_48_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_49_res = hw_input_stencil_op_hcompute_conv_stencil_3_49_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_49_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_3_50_res = hw_input_stencil_op_hcompute_conv_stencil_3_50_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_3_50_res);
	return result;
}

// op_hcompute_conv_stencil_4_read
//	hw_input_stencil_op_hcompute_conv_stencil_4_61
//	hw_input_stencil_op_hcompute_conv_stencil_4_62
//	hw_input_stencil_op_hcompute_conv_stencil_4_63
//	hw_input_stencil_op_hcompute_conv_stencil_4_64
//	hw_input_stencil_op_hcompute_conv_stencil_4_65
//	hw_input_stencil_op_hcompute_conv_stencil_4_66
//	hw_input_stencil_op_hcompute_conv_stencil_4_67
//	hw_input_stencil_op_hcompute_conv_stencil_4_68
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_4_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_4_61
    // hw_input_stencil_op_hcompute_conv_stencil_4_62
    // hw_input_stencil_op_hcompute_conv_stencil_4_63
    // hw_input_stencil_op_hcompute_conv_stencil_4_64
    // hw_input_stencil_op_hcompute_conv_stencil_4_65
    // hw_input_stencil_op_hcompute_conv_stencil_4_66
    // hw_input_stencil_op_hcompute_conv_stencil_4_67
    // hw_input_stencil_op_hcompute_conv_stencil_4_68

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_61_res = hw_input_stencil_op_hcompute_conv_stencil_4_61_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_61_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_62_res = hw_input_stencil_op_hcompute_conv_stencil_4_62_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_62_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_63_res = hw_input_stencil_op_hcompute_conv_stencil_4_63_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_63_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_64_res = hw_input_stencil_op_hcompute_conv_stencil_4_64_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_64_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_65_res = hw_input_stencil_op_hcompute_conv_stencil_4_65_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_65_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_66_res = hw_input_stencil_op_hcompute_conv_stencil_4_66_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_66_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_67_res = hw_input_stencil_op_hcompute_conv_stencil_4_67_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_67_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_4_68_res = hw_input_stencil_op_hcompute_conv_stencil_4_68_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_4_68_res);
	return result;
}

// op_hcompute_conv_stencil_5_read
//	hw_input_stencil_op_hcompute_conv_stencil_5_79
//	hw_input_stencil_op_hcompute_conv_stencil_5_80
//	hw_input_stencil_op_hcompute_conv_stencil_5_81
//	hw_input_stencil_op_hcompute_conv_stencil_5_82
//	hw_input_stencil_op_hcompute_conv_stencil_5_83
//	hw_input_stencil_op_hcompute_conv_stencil_5_84
//	hw_input_stencil_op_hcompute_conv_stencil_5_85
//	hw_input_stencil_op_hcompute_conv_stencil_5_86
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_5_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_5_79
    // hw_input_stencil_op_hcompute_conv_stencil_5_80
    // hw_input_stencil_op_hcompute_conv_stencil_5_81
    // hw_input_stencil_op_hcompute_conv_stencil_5_82
    // hw_input_stencil_op_hcompute_conv_stencil_5_83
    // hw_input_stencil_op_hcompute_conv_stencil_5_84
    // hw_input_stencil_op_hcompute_conv_stencil_5_85
    // hw_input_stencil_op_hcompute_conv_stencil_5_86

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_79_res = hw_input_stencil_op_hcompute_conv_stencil_5_79_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_79_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_80_res = hw_input_stencil_op_hcompute_conv_stencil_5_80_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_80_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_81_res = hw_input_stencil_op_hcompute_conv_stencil_5_81_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_81_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_82_res = hw_input_stencil_op_hcompute_conv_stencil_5_82_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_82_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_83_res = hw_input_stencil_op_hcompute_conv_stencil_5_83_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_83_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_84_res = hw_input_stencil_op_hcompute_conv_stencil_5_84_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_84_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_85_res = hw_input_stencil_op_hcompute_conv_stencil_5_85_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_85_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_5_86_res = hw_input_stencil_op_hcompute_conv_stencil_5_86_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_5_86_res);
	return result;
}

// op_hcompute_conv_stencil_6_read
//	hw_input_stencil_op_hcompute_conv_stencil_6_97
//	hw_input_stencil_op_hcompute_conv_stencil_6_98
//	hw_input_stencil_op_hcompute_conv_stencil_6_99
//	hw_input_stencil_op_hcompute_conv_stencil_6_100
//	hw_input_stencil_op_hcompute_conv_stencil_6_101
//	hw_input_stencil_op_hcompute_conv_stencil_6_102
//	hw_input_stencil_op_hcompute_conv_stencil_6_103
//	hw_input_stencil_op_hcompute_conv_stencil_6_104
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_6_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_6_97
    // hw_input_stencil_op_hcompute_conv_stencil_6_98
    // hw_input_stencil_op_hcompute_conv_stencil_6_99
    // hw_input_stencil_op_hcompute_conv_stencil_6_100
    // hw_input_stencil_op_hcompute_conv_stencil_6_101
    // hw_input_stencil_op_hcompute_conv_stencil_6_102
    // hw_input_stencil_op_hcompute_conv_stencil_6_103
    // hw_input_stencil_op_hcompute_conv_stencil_6_104

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_97_res = hw_input_stencil_op_hcompute_conv_stencil_6_97_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_97_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_98_res = hw_input_stencil_op_hcompute_conv_stencil_6_98_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_98_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_99_res = hw_input_stencil_op_hcompute_conv_stencil_6_99_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_99_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_100_res = hw_input_stencil_op_hcompute_conv_stencil_6_100_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_100_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_101_res = hw_input_stencil_op_hcompute_conv_stencil_6_101_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_101_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_102_res = hw_input_stencil_op_hcompute_conv_stencil_6_102_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_102_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_103_res = hw_input_stencil_op_hcompute_conv_stencil_6_103_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_103_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_6_104_res = hw_input_stencil_op_hcompute_conv_stencil_6_104_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_6_104_res);
	return result;
}

// op_hcompute_conv_stencil_7_read
//	hw_input_stencil_op_hcompute_conv_stencil_7_115
//	hw_input_stencil_op_hcompute_conv_stencil_7_116
//	hw_input_stencil_op_hcompute_conv_stencil_7_117
//	hw_input_stencil_op_hcompute_conv_stencil_7_118
//	hw_input_stencil_op_hcompute_conv_stencil_7_119
//	hw_input_stencil_op_hcompute_conv_stencil_7_120
//	hw_input_stencil_op_hcompute_conv_stencil_7_121
//	hw_input_stencil_op_hcompute_conv_stencil_7_122
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_7_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_7_115
    // hw_input_stencil_op_hcompute_conv_stencil_7_116
    // hw_input_stencil_op_hcompute_conv_stencil_7_117
    // hw_input_stencil_op_hcompute_conv_stencil_7_118
    // hw_input_stencil_op_hcompute_conv_stencil_7_119
    // hw_input_stencil_op_hcompute_conv_stencil_7_120
    // hw_input_stencil_op_hcompute_conv_stencil_7_121
    // hw_input_stencil_op_hcompute_conv_stencil_7_122

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_115_res = hw_input_stencil_op_hcompute_conv_stencil_7_115_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_115_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_116_res = hw_input_stencil_op_hcompute_conv_stencil_7_116_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_116_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_117_res = hw_input_stencil_op_hcompute_conv_stencil_7_117_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_117_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_118_res = hw_input_stencil_op_hcompute_conv_stencil_7_118_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_118_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_119_res = hw_input_stencil_op_hcompute_conv_stencil_7_119_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_119_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_120_res = hw_input_stencil_op_hcompute_conv_stencil_7_120_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_120_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_121_res = hw_input_stencil_op_hcompute_conv_stencil_7_121_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_121_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_7_122_res = hw_input_stencil_op_hcompute_conv_stencil_7_122_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_7_122_res);
	return result;
}

// op_hcompute_conv_stencil_8_read
//	hw_input_stencil_op_hcompute_conv_stencil_8_133
//	hw_input_stencil_op_hcompute_conv_stencil_8_134
//	hw_input_stencil_op_hcompute_conv_stencil_8_135
//	hw_input_stencil_op_hcompute_conv_stencil_8_136
//	hw_input_stencil_op_hcompute_conv_stencil_8_137
//	hw_input_stencil_op_hcompute_conv_stencil_8_138
//	hw_input_stencil_op_hcompute_conv_stencil_8_139
//	hw_input_stencil_op_hcompute_conv_stencil_8_140
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_8_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_8_133
    // hw_input_stencil_op_hcompute_conv_stencil_8_134
    // hw_input_stencil_op_hcompute_conv_stencil_8_135
    // hw_input_stencil_op_hcompute_conv_stencil_8_136
    // hw_input_stencil_op_hcompute_conv_stencil_8_137
    // hw_input_stencil_op_hcompute_conv_stencil_8_138
    // hw_input_stencil_op_hcompute_conv_stencil_8_139
    // hw_input_stencil_op_hcompute_conv_stencil_8_140

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_133_res = hw_input_stencil_op_hcompute_conv_stencil_8_133_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_133_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_134_res = hw_input_stencil_op_hcompute_conv_stencil_8_134_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_134_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_135_res = hw_input_stencil_op_hcompute_conv_stencil_8_135_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_135_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_136_res = hw_input_stencil_op_hcompute_conv_stencil_8_136_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_136_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_137_res = hw_input_stencil_op_hcompute_conv_stencil_8_137_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_137_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_138_res = hw_input_stencil_op_hcompute_conv_stencil_8_138_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_138_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_139_res = hw_input_stencil_op_hcompute_conv_stencil_8_139_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_139_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_8_140_res = hw_input_stencil_op_hcompute_conv_stencil_8_140_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_8_140_res);
	return result;
}

// op_hcompute_conv_stencil_9_read
//	hw_input_stencil_op_hcompute_conv_stencil_9_151
//	hw_input_stencil_op_hcompute_conv_stencil_9_152
//	hw_input_stencil_op_hcompute_conv_stencil_9_153
//	hw_input_stencil_op_hcompute_conv_stencil_9_154
//	hw_input_stencil_op_hcompute_conv_stencil_9_155
//	hw_input_stencil_op_hcompute_conv_stencil_9_156
//	hw_input_stencil_op_hcompute_conv_stencil_9_157
//	hw_input_stencil_op_hcompute_conv_stencil_9_158
inline hw_uint<128> hw_input_stencil_op_hcompute_conv_stencil_9_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int conv_s1_y, int conv_s1_x, int conv_s1_r_y, int conv_s1_r_x, int dynamic_address) {
  // # of ports in bundle: 8
    // hw_input_stencil_op_hcompute_conv_stencil_9_151
    // hw_input_stencil_op_hcompute_conv_stencil_9_152
    // hw_input_stencil_op_hcompute_conv_stencil_9_153
    // hw_input_stencil_op_hcompute_conv_stencil_9_154
    // hw_input_stencil_op_hcompute_conv_stencil_9_155
    // hw_input_stencil_op_hcompute_conv_stencil_9_156
    // hw_input_stencil_op_hcompute_conv_stencil_9_157
    // hw_input_stencil_op_hcompute_conv_stencil_9_158

	hw_uint<128> result;
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_151_res = hw_input_stencil_op_hcompute_conv_stencil_9_151_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<0, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_151_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_152_res = hw_input_stencil_op_hcompute_conv_stencil_9_152_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<16, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_152_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_153_res = hw_input_stencil_op_hcompute_conv_stencil_9_153_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<32, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_153_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_154_res = hw_input_stencil_op_hcompute_conv_stencil_9_154_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<48, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_154_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_155_res = hw_input_stencil_op_hcompute_conv_stencil_9_155_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<64, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_155_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_156_res = hw_input_stencil_op_hcompute_conv_stencil_9_156_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<80, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_156_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_157_res = hw_input_stencil_op_hcompute_conv_stencil_9_157_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<96, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_157_res);
	hw_uint<16> hw_input_stencil_op_hcompute_conv_stencil_9_158_res = hw_input_stencil_op_hcompute_conv_stencil_9_158_select(hw_input_stencil, root, conv_s1_y, conv_s1_x, conv_s1_r_y, conv_s1_r_x, dynamic_address);
	set_at<112, 128>(result, hw_input_stencil_op_hcompute_conv_stencil_9_158_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int hw_input_s0_z, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, hw_input_s0_z, dynamic_address);
}

