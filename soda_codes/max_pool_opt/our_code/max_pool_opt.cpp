#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "max_pool_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 112], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 113], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write10_merged_banks_2_cache {
	// RAM Box: {[10, 122], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write11_merged_banks_2_cache {
	// RAM Box: {[11, 123], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write12_merged_banks_2_cache {
	// RAM Box: {[12, 124], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write13_merged_banks_2_cache {
	// RAM Box: {[13, 125], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write14_merged_banks_2_cache {
	// RAM Box: {[14, 126], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write15_merged_banks_2_cache {
	// RAM Box: {[15, 127], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 114], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 115], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 116], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 117], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 118], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 119], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write8_merged_banks_2_cache {
	// RAM Box: {[8, 120], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write9_merged_banks_2_cache {
	// RAM Box: {[9, 121], [0, 127], [0, 31]}
	// Capacity: 9
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 7> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_7() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_8() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 7
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 7 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write10_merged_banks_2_cache in_in_update_0_write10_merged_banks_2;
  in_in_update_0_write11_merged_banks_2_cache in_in_update_0_write11_merged_banks_2;
  in_in_update_0_write12_merged_banks_2_cache in_in_update_0_write12_merged_banks_2;
  in_in_update_0_write13_merged_banks_2_cache in_in_update_0_write13_merged_banks_2;
  in_in_update_0_write14_merged_banks_2_cache in_in_update_0_write14_merged_banks_2;
  in_in_update_0_write15_merged_banks_2_cache in_in_update_0_write15_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
  in_in_update_0_write4_merged_banks_2_cache in_in_update_0_write4_merged_banks_2;
  in_in_update_0_write5_merged_banks_2_cache in_in_update_0_write5_merged_banks_2;
  in_in_update_0_write6_merged_banks_2_cache in_in_update_0_write6_merged_banks_2;
  in_in_update_0_write7_merged_banks_2_cache in_in_update_0_write7_merged_banks_2;
  in_in_update_0_write8_merged_banks_2_cache in_in_update_0_write8_merged_banks_2;
  in_in_update_0_write9_merged_banks_2_cache in_in_update_0_write9_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<32> & in_in_update_0_write1, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<32> & in_in_update_0_write10, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write10_merged_banks_2.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<32> & in_in_update_0_write11, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write11_merged_banks_2.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<32> & in_in_update_0_write12, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write12_merged_banks_2.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<32> & in_in_update_0_write13, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write13_merged_banks_2.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<32> & in_in_update_0_write14, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write14_merged_banks_2.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<32> & in_in_update_0_write15, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write15_merged_banks_2.push(in_in_update_0_write15);
}

inline void in_in_update_0_write2_write(hw_uint<32> & in_in_update_0_write2, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<32> & in_in_update_0_write3, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<32> & in_in_update_0_write4, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write4_merged_banks_2.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<32> & in_in_update_0_write5, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write5_merged_banks_2.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<32> & in_in_update_0_write6, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write6_merged_banks_2.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<32> & in_in_update_0_write7, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write7_merged_banks_2.push(in_in_update_0_write7);
}

inline void in_in_update_0_write8_write(hw_uint<32> & in_in_update_0_write8, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write8_merged_banks_2.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<32> & in_in_update_0_write9, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write9_merged_banks_2.push(in_in_update_0_write9);
}

inline hw_uint<32>  max_pool_rd0_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd0 read pattern: { max_pool_update_0[d0, d1, d2] -> in[16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_8();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd1_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd1 read pattern: { max_pool_update_0[d0, d1, d2] -> in[16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd10_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd10 read pattern: { max_pool_update_0[d0, d1, d2] -> in[5 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_8();
  return value_in_in_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd11_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd11 read pattern: { max_pool_update_0[d0, d1, d2] -> in[5 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_0();
  return value_in_in_update_0_write5;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd12_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd12 read pattern: { max_pool_update_0[d0, d1, d2] -> in[6 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_8();
  return value_in_in_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd13_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd13 read pattern: { max_pool_update_0[d0, d1, d2] -> in[6 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_0();
  return value_in_in_update_0_write6;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd14_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd14 read pattern: { max_pool_update_0[d0, d1, d2] -> in[7 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_8();
  return value_in_in_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd15_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd15 read pattern: { max_pool_update_0[d0, d1, d2] -> in[7 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_0();
  return value_in_in_update_0_write7;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd16_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd16 read pattern: { max_pool_update_0[d0, d1, d2] -> in[8 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_8();
  return value_in_in_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd17_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd17 read pattern: { max_pool_update_0[d0, d1, d2] -> in[8 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_0();
  return value_in_in_update_0_write8;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd18_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd18 read pattern: { max_pool_update_0[d0, d1, d2] -> in[9 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_8();
  return value_in_in_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd19_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd19 read pattern: { max_pool_update_0[d0, d1, d2] -> in[9 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_0();
  return value_in_in_update_0_write9;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd2_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd2 read pattern: { max_pool_update_0[d0, d1, d2] -> in[1 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_8();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd20_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd20 read pattern: { max_pool_update_0[d0, d1, d2] -> in[10 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_8();
  return value_in_in_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd21_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd21 read pattern: { max_pool_update_0[d0, d1, d2] -> in[10 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_0();
  return value_in_in_update_0_write10;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd22_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd22 read pattern: { max_pool_update_0[d0, d1, d2] -> in[11 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_8();
  return value_in_in_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd23_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd23 read pattern: { max_pool_update_0[d0, d1, d2] -> in[11 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_0();
  return value_in_in_update_0_write11;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd24_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd24 read pattern: { max_pool_update_0[d0, d1, d2] -> in[12 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_8();
  return value_in_in_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd25_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd25 read pattern: { max_pool_update_0[d0, d1, d2] -> in[12 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_0();
  return value_in_in_update_0_write12;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd26_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd26 read pattern: { max_pool_update_0[d0, d1, d2] -> in[13 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_8();
  return value_in_in_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd27_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd27 read pattern: { max_pool_update_0[d0, d1, d2] -> in[13 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_0();
  return value_in_in_update_0_write13;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd28_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd28 read pattern: { max_pool_update_0[d0, d1, d2] -> in[14 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_8();
  return value_in_in_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd29_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd29 read pattern: { max_pool_update_0[d0, d1, d2] -> in[14 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_0();
  return value_in_in_update_0_write14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd3_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd3 read pattern: { max_pool_update_0[d0, d1, d2] -> in[1 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd30_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd30 read pattern: { max_pool_update_0[d0, d1, d2] -> in[15 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_8();
  return value_in_in_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd31_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd31 read pattern: { max_pool_update_0[d0, d1, d2] -> in[15 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_0();
  return value_in_in_update_0_write15;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd4_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd4 read pattern: { max_pool_update_0[d0, d1, d2] -> in[2 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_8();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd5_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd5 read pattern: { max_pool_update_0[d0, d1, d2] -> in[2 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd6_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd6 read pattern: { max_pool_update_0[d0, d1, d2] -> in[3 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_8();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd7_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd7 read pattern: { max_pool_update_0[d0, d1, d2] -> in[3 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd8_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd8 read pattern: { max_pool_update_0[d0, d1, d2] -> in[4 + 16d0, 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { max_pool_update_0[d0, d1, d2] -> 8 : 0 < d0 <= 6 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> (1 + d0) : d0 = 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31; max_pool_update_0[d0, d1, d2] -> 8 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_8();
  return value_in_in_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  max_pool_rd9_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // max_pool_rd9 read pattern: { max_pool_update_0[d0, d1, d2] -> in[4 + 16d0, 1 + 2d1, d2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { max_pool_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 7 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 7 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_0();
  return value_in_in_update_0_write4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
//	in_in_update_0_write4
//	in_in_update_0_write5
//	in_in_update_0_write6
//	in_in_update_0_write7
//	in_in_update_0_write8
//	in_in_update_0_write9
//	in_in_update_0_write10
//	in_in_update_0_write11
//	in_in_update_0_write12
//	in_in_update_0_write13
//	in_in_update_0_write14
//	in_in_update_0_write15
inline void in_in_update_0_write_bundle_write(hw_uint<512>& in_update_0_write, in_cache& in, int d0, int d1, int d2) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write1_res = in_update_0_write.extract<32, 63>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write2_res = in_update_0_write.extract<64, 95>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write3_res = in_update_0_write.extract<96, 127>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write4_res = in_update_0_write.extract<128, 159>();
	in_in_update_0_write4_write(in_in_update_0_write4_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write5_res = in_update_0_write.extract<160, 191>();
	in_in_update_0_write5_write(in_in_update_0_write5_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write6_res = in_update_0_write.extract<192, 223>();
	in_in_update_0_write6_write(in_in_update_0_write6_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write7_res = in_update_0_write.extract<224, 255>();
	in_in_update_0_write7_write(in_in_update_0_write7_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write8_res = in_update_0_write.extract<256, 287>();
	in_in_update_0_write8_write(in_in_update_0_write8_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write9_res = in_update_0_write.extract<288, 319>();
	in_in_update_0_write9_write(in_in_update_0_write9_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write10_res = in_update_0_write.extract<320, 351>();
	in_in_update_0_write10_write(in_in_update_0_write10_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write11_res = in_update_0_write.extract<352, 383>();
	in_in_update_0_write11_write(in_in_update_0_write11_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write12_res = in_update_0_write.extract<384, 415>();
	in_in_update_0_write12_write(in_in_update_0_write12_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write13_res = in_update_0_write.extract<416, 447>();
	in_in_update_0_write13_write(in_in_update_0_write13_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write14_res = in_update_0_write.extract<448, 479>();
	in_in_update_0_write14_write(in_in_update_0_write14_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write15_res = in_update_0_write.extract<480, 511>();
	in_in_update_0_write15_write(in_in_update_0_write15_res, in, d0, d1, d2);
}

// max_pool_update_0_read
//	max_pool_rd0
//	max_pool_rd1
//	max_pool_rd2
//	max_pool_rd3
//	max_pool_rd4
//	max_pool_rd5
//	max_pool_rd6
//	max_pool_rd7
//	max_pool_rd8
//	max_pool_rd9
//	max_pool_rd10
//	max_pool_rd11
//	max_pool_rd12
//	max_pool_rd13
//	max_pool_rd14
//	max_pool_rd15
//	max_pool_rd16
//	max_pool_rd17
//	max_pool_rd18
//	max_pool_rd19
//	max_pool_rd20
//	max_pool_rd21
//	max_pool_rd22
//	max_pool_rd23
//	max_pool_rd24
//	max_pool_rd25
//	max_pool_rd26
//	max_pool_rd27
//	max_pool_rd28
//	max_pool_rd29
//	max_pool_rd30
//	max_pool_rd31
inline hw_uint<1024> in_max_pool_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2) {
  // # of ports in bundle: 32
    // max_pool_rd0
    // max_pool_rd1
    // max_pool_rd2
    // max_pool_rd3
    // max_pool_rd4
    // max_pool_rd5
    // max_pool_rd6
    // max_pool_rd7
    // max_pool_rd8
    // max_pool_rd9
    // max_pool_rd10
    // max_pool_rd11
    // max_pool_rd12
    // max_pool_rd13
    // max_pool_rd14
    // max_pool_rd15
    // max_pool_rd16
    // max_pool_rd17
    // max_pool_rd18
    // max_pool_rd19
    // max_pool_rd20
    // max_pool_rd21
    // max_pool_rd22
    // max_pool_rd23
    // max_pool_rd24
    // max_pool_rd25
    // max_pool_rd26
    // max_pool_rd27
    // max_pool_rd28
    // max_pool_rd29
    // max_pool_rd30
    // max_pool_rd31

	hw_uint<1024> result;
	hw_uint<32>  max_pool_rd0_res = max_pool_rd0_select(in, d0, d1, d2);
	set_at<0, 1024>(result, max_pool_rd0_res);
	hw_uint<32>  max_pool_rd1_res = max_pool_rd1_select(in, d0, d1, d2);
	set_at<32, 1024>(result, max_pool_rd1_res);
	hw_uint<32>  max_pool_rd2_res = max_pool_rd2_select(in, d0, d1, d2);
	set_at<64, 1024>(result, max_pool_rd2_res);
	hw_uint<32>  max_pool_rd3_res = max_pool_rd3_select(in, d0, d1, d2);
	set_at<96, 1024>(result, max_pool_rd3_res);
	hw_uint<32>  max_pool_rd4_res = max_pool_rd4_select(in, d0, d1, d2);
	set_at<128, 1024>(result, max_pool_rd4_res);
	hw_uint<32>  max_pool_rd5_res = max_pool_rd5_select(in, d0, d1, d2);
	set_at<160, 1024>(result, max_pool_rd5_res);
	hw_uint<32>  max_pool_rd6_res = max_pool_rd6_select(in, d0, d1, d2);
	set_at<192, 1024>(result, max_pool_rd6_res);
	hw_uint<32>  max_pool_rd7_res = max_pool_rd7_select(in, d0, d1, d2);
	set_at<224, 1024>(result, max_pool_rd7_res);
	hw_uint<32>  max_pool_rd8_res = max_pool_rd8_select(in, d0, d1, d2);
	set_at<256, 1024>(result, max_pool_rd8_res);
	hw_uint<32>  max_pool_rd9_res = max_pool_rd9_select(in, d0, d1, d2);
	set_at<288, 1024>(result, max_pool_rd9_res);
	hw_uint<32>  max_pool_rd10_res = max_pool_rd10_select(in, d0, d1, d2);
	set_at<320, 1024>(result, max_pool_rd10_res);
	hw_uint<32>  max_pool_rd11_res = max_pool_rd11_select(in, d0, d1, d2);
	set_at<352, 1024>(result, max_pool_rd11_res);
	hw_uint<32>  max_pool_rd12_res = max_pool_rd12_select(in, d0, d1, d2);
	set_at<384, 1024>(result, max_pool_rd12_res);
	hw_uint<32>  max_pool_rd13_res = max_pool_rd13_select(in, d0, d1, d2);
	set_at<416, 1024>(result, max_pool_rd13_res);
	hw_uint<32>  max_pool_rd14_res = max_pool_rd14_select(in, d0, d1, d2);
	set_at<448, 1024>(result, max_pool_rd14_res);
	hw_uint<32>  max_pool_rd15_res = max_pool_rd15_select(in, d0, d1, d2);
	set_at<480, 1024>(result, max_pool_rd15_res);
	hw_uint<32>  max_pool_rd16_res = max_pool_rd16_select(in, d0, d1, d2);
	set_at<512, 1024>(result, max_pool_rd16_res);
	hw_uint<32>  max_pool_rd17_res = max_pool_rd17_select(in, d0, d1, d2);
	set_at<544, 1024>(result, max_pool_rd17_res);
	hw_uint<32>  max_pool_rd18_res = max_pool_rd18_select(in, d0, d1, d2);
	set_at<576, 1024>(result, max_pool_rd18_res);
	hw_uint<32>  max_pool_rd19_res = max_pool_rd19_select(in, d0, d1, d2);
	set_at<608, 1024>(result, max_pool_rd19_res);
	hw_uint<32>  max_pool_rd20_res = max_pool_rd20_select(in, d0, d1, d2);
	set_at<640, 1024>(result, max_pool_rd20_res);
	hw_uint<32>  max_pool_rd21_res = max_pool_rd21_select(in, d0, d1, d2);
	set_at<672, 1024>(result, max_pool_rd21_res);
	hw_uint<32>  max_pool_rd22_res = max_pool_rd22_select(in, d0, d1, d2);
	set_at<704, 1024>(result, max_pool_rd22_res);
	hw_uint<32>  max_pool_rd23_res = max_pool_rd23_select(in, d0, d1, d2);
	set_at<736, 1024>(result, max_pool_rd23_res);
	hw_uint<32>  max_pool_rd24_res = max_pool_rd24_select(in, d0, d1, d2);
	set_at<768, 1024>(result, max_pool_rd24_res);
	hw_uint<32>  max_pool_rd25_res = max_pool_rd25_select(in, d0, d1, d2);
	set_at<800, 1024>(result, max_pool_rd25_res);
	hw_uint<32>  max_pool_rd26_res = max_pool_rd26_select(in, d0, d1, d2);
	set_at<832, 1024>(result, max_pool_rd26_res);
	hw_uint<32>  max_pool_rd27_res = max_pool_rd27_select(in, d0, d1, d2);
	set_at<864, 1024>(result, max_pool_rd27_res);
	hw_uint<32>  max_pool_rd28_res = max_pool_rd28_select(in, d0, d1, d2);
	set_at<896, 1024>(result, max_pool_rd28_res);
	hw_uint<32>  max_pool_rd29_res = max_pool_rd29_select(in, d0, d1, d2);
	set_at<928, 1024>(result, max_pool_rd29_res);
	hw_uint<32>  max_pool_rd30_res = max_pool_rd30_select(in, d0, d1, d2);
	set_at<960, 1024>(result, max_pool_rd30_res);
	hw_uint<32>  max_pool_rd31_res = max_pool_rd31_select(in, d0, d1, d2);
	set_at<992, 1024>(result, max_pool_rd31_res);
	return result;
}



// Operation logic
inline void in_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */in_oc, in_cache& in, int d0, int d1, int d2) {
	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_16(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
  hw_uint<512> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  hw_uint<32> debug_compute_result_lane_1;
  set_at<0, 32, 32>(debug_compute_result_lane_1, debug_compute_result.extract<32, 63>());
  hw_uint<32> debug_compute_result_lane_2;
  set_at<0, 32, 32>(debug_compute_result_lane_2, debug_compute_result.extract<64, 95>());
  hw_uint<32> debug_compute_result_lane_3;
  set_at<0, 32, 32>(debug_compute_result_lane_3, debug_compute_result.extract<96, 127>());
  hw_uint<32> debug_compute_result_lane_4;
  set_at<0, 32, 32>(debug_compute_result_lane_4, debug_compute_result.extract<128, 159>());
  hw_uint<32> debug_compute_result_lane_5;
  set_at<0, 32, 32>(debug_compute_result_lane_5, debug_compute_result.extract<160, 191>());
  hw_uint<32> debug_compute_result_lane_6;
  set_at<0, 32, 32>(debug_compute_result_lane_6, debug_compute_result.extract<192, 223>());
  hw_uint<32> debug_compute_result_lane_7;
  set_at<0, 32, 32>(debug_compute_result_lane_7, debug_compute_result.extract<224, 255>());
  hw_uint<32> debug_compute_result_lane_8;
  set_at<0, 32, 32>(debug_compute_result_lane_8, debug_compute_result.extract<256, 287>());
  hw_uint<32> debug_compute_result_lane_9;
  set_at<0, 32, 32>(debug_compute_result_lane_9, debug_compute_result.extract<288, 319>());
  hw_uint<32> debug_compute_result_lane_10;
  set_at<0, 32, 32>(debug_compute_result_lane_10, debug_compute_result.extract<320, 351>());
  hw_uint<32> debug_compute_result_lane_11;
  set_at<0, 32, 32>(debug_compute_result_lane_11, debug_compute_result.extract<352, 383>());
  hw_uint<32> debug_compute_result_lane_12;
  set_at<0, 32, 32>(debug_compute_result_lane_12, debug_compute_result.extract<384, 415>());
  hw_uint<32> debug_compute_result_lane_13;
  set_at<0, 32, 32>(debug_compute_result_lane_13, debug_compute_result.extract<416, 447>());
  hw_uint<32> debug_compute_result_lane_14;
  set_at<0, 32, 32>(debug_compute_result_lane_14, debug_compute_result.extract<448, 479>());
  hw_uint<32> debug_compute_result_lane_15;
  set_at<0, 32, 32>(debug_compute_result_lane_15, debug_compute_result.extract<480, 511>());
  *global_debug_handle << "in_update_0," << (16*d0 + 0) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 1) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 2) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 3) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 4) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 5) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 6) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 7) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_7 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 8) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_8 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 9) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_9 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 10) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_10 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 11) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_11 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 12) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_12 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 13) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_13 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 14) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_14 << endl;
  *global_debug_handle << "in_update_0," << (16*d0 + 15) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_15 << endl;
#endif //__VIVADO_SYNTH__

}

inline void max_pool_update_0(in_cache& in, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */max_pool, int d0, int d1, int d2) {
	// Consume: in
	auto in_0_c__0_value = in_max_pool_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "max_pool_update_0_in," << d0<< "," << d1<< "," << d2<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_8(in_0_c__0_value);
	// Produce: max_pool
	max_pool.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<256> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  hw_uint<32> debug_compute_result_lane_1;
  set_at<0, 32, 32>(debug_compute_result_lane_1, debug_compute_result.extract<32, 63>());
  hw_uint<32> debug_compute_result_lane_2;
  set_at<0, 32, 32>(debug_compute_result_lane_2, debug_compute_result.extract<64, 95>());
  hw_uint<32> debug_compute_result_lane_3;
  set_at<0, 32, 32>(debug_compute_result_lane_3, debug_compute_result.extract<96, 127>());
  hw_uint<32> debug_compute_result_lane_4;
  set_at<0, 32, 32>(debug_compute_result_lane_4, debug_compute_result.extract<128, 159>());
  hw_uint<32> debug_compute_result_lane_5;
  set_at<0, 32, 32>(debug_compute_result_lane_5, debug_compute_result.extract<160, 191>());
  hw_uint<32> debug_compute_result_lane_6;
  set_at<0, 32, 32>(debug_compute_result_lane_6, debug_compute_result.extract<192, 223>());
  hw_uint<32> debug_compute_result_lane_7;
  set_at<0, 32, 32>(debug_compute_result_lane_7, debug_compute_result.extract<224, 255>());
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 0) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 1) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 2) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 3) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_3 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 4) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_4 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 5) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_5 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 6) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_6 << endl;
  *global_debug_handle << "max_pool_update_0," << (8*d0 + 7) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_7 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void max_pool_opt(HWStream<hw_uint<512> >& /* get_args num ports = 16 */in_oc, HWStream<hw_uint<256> >& /* get_args num ports = 8 */max_pool, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("max_pool_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  for (int epoch = 0; epoch < num_epochs; epoch++) {
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = 0; c0 <= 31; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 7; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_oc, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 7) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	max_pool_update_0(in, max_pool, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void max_pool_opt(HWStream<hw_uint<512> >& /* get_args num ports = 16 */in_oc, HWStream<hw_uint<256> >& /* get_args num ports = 8 */max_pool) {

  max_pool_opt(in_oc, max_pool, 1);
}
#ifdef __VIVADO_SYNTH__
#include "max_pool_opt.h"

const int in_update_0_read_num_transfers = 32768;
const int max_pool_update_0_write_num_transfers = 16384;

// TODO: Adapt to have one size for each edge buffer
#define INPUT_SIZE 32768
#define OUTPUT_SIZE 16384
extern "C" {

static void read_in_update_0_read(hw_uint<512>* input, HWStream<hw_uint<512> >& v, const int size) {
  hw_uint<512> burst_reg;
  for (int i = 0; i < in_update_0_read_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_max_pool_update_0_write(hw_uint<256>* output, HWStream<hw_uint<256> >& v, const int size) {
  hw_uint<256> burst_reg;
  for (int i = 0; i < max_pool_update_0_write_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void max_pool_opt_accel(hw_uint<512>* in_update_0_read, hw_uint<256>* max_pool_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = max_pool_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = max_pool_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<512> > in_update_0_read_channel;
  static HWStream<hw_uint<256> > max_pool_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  max_pool_opt(in_update_0_read_channel, max_pool_update_0_write_channel, size);

  write_max_pool_update_0_write(max_pool_update_0_write, max_pool_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

