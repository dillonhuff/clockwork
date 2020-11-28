#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sc_stat_merged_compute_units.h
#include "sc_stat_merged_compute_units.h"

#include "hw_classes.h"

struct in_pw_math_in_oc02_merged583_228_merged_banks_9_cache {
	// RAM Box: {[-2, 138], [-5, 132]}
	// Capacity: 76
	// # of read delays: 4
  // 0, 1, 38, 75
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 36> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38() {
		return f4;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_75() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged583_229_merged_banks_9_cache {
	// RAM Box: {[-3, 137], [-5, 132]}
	// Capacity: 76
	// # of read delays: 4
  // 0, 1, 38, 75
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 36> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_37() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38() {
		return f4;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_75() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged583_230_merged_banks_9_cache {
	// RAM Box: {[-4, 140], [-5, 132]}
	// Capacity: 76
	// # of read delays: 6
  // 0, 1, 37, 38, 74, 75
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 35> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4;
	}

	inline hw_uint<32>  peek_38() {
		return f6;
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_74() {
		return f8;
	}

	inline hw_uint<32>  peek_75() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged583_231_merged_banks_9_cache {
	// RAM Box: {[-5, 139], [-5, 132]}
	// Capacity: 76
	// # of read delays: 6
  // 0, 1, 37, 38, 74, 75
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 35> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4;
	}

	inline hw_uint<32>  peek_38() {
		return f6;
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_74() {
		return f8;
	}

	inline hw_uint<32>  peek_75() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // # of banks: 4
  in_pw_math_in_oc02_merged583_228_merged_banks_9_cache in_pw_math_in_oc02_merged583_228_merged_banks_9;
  in_pw_math_in_oc02_merged583_229_merged_banks_9_cache in_pw_math_in_oc02_merged583_229_merged_banks_9;
  in_pw_math_in_oc02_merged583_230_merged_banks_9_cache in_pw_math_in_oc02_merged583_230_merged_banks_9;
  in_pw_math_in_oc02_merged583_231_merged_banks_9_cache in_pw_math_in_oc02_merged583_231_merged_banks_9;
};



inline void in_pw_math_in_oc02_merged583_228_write(hw_uint<32> & in_pw_math_in_oc02_merged583_228, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_228_merged_banks_9.push(in_pw_math_in_oc02_merged583_228);
}

inline void in_pw_math_in_oc02_merged583_229_write(hw_uint<32> & in_pw_math_in_oc02_merged583_229, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_229_merged_banks_9.push(in_pw_math_in_oc02_merged583_229);
}

inline void in_pw_math_in_oc02_merged583_230_write(hw_uint<32> & in_pw_math_in_oc02_merged583_230, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_230_merged_banks_9.push(in_pw_math_in_oc02_merged583_230);
}

inline void in_pw_math_in_oc02_merged583_231_write(hw_uint<32> & in_pw_math_in_oc02_merged583_231, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged583_231_merged_banks_9.push(in_pw_math_in_oc02_merged583_231);
}

inline hw_uint<32>  in_stencil_05_merged586_180_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_180 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_74();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_182_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_182 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_74();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_183_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_183 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_184_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_184 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_37();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_185_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_185 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_37();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_186_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_186 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_187_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_187 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_188_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_188 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_189_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_189 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_190_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_190 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_74();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_192_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_192 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_193_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_193 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_194_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_194 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_37();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_195_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_195 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_196_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_196 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_197_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_197 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-1 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_198_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_198 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_199_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_199 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_200_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_200 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_202_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_202 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_203_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_203 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_204_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_204 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_205_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_205 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_206_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_206 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_207_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_207 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-2 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_228 = in.in_pw_math_in_oc02_merged583_228_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_228;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_208_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_208 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_209_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_209 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_210_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_210 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_212_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_212 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_213_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_213 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-5 + 4stencil_05, -5 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_75();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_214_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_214 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_215_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_215 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_216_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_216 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-5 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_38();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_217_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_217 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-3 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_229 = in.in_pw_math_in_oc02_merged583_229_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_229;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_218_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_218 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-4 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_230 = in.in_pw_math_in_oc02_merged583_230_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_230;
  return 0;
}

inline hw_uint<32>  in_stencil_05_merged586_219_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_stencil_05_merged586_219 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> in[-5 + 4stencil_05, -3 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Read schedule : { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  // Write schedule: { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
  auto value_in_pw_math_in_oc02_merged583_231 = in.in_pw_math_in_oc02_merged583_231_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged583_231;
  return 0;
}

// # of bundles = 2
// pw_math_in_oc02_merged583_write
//	in_pw_math_in_oc02_merged583_228
//	in_pw_math_in_oc02_merged583_229
//	in_pw_math_in_oc02_merged583_230
//	in_pw_math_in_oc02_merged583_231
inline void in_pw_math_in_oc02_merged583_write_bundle_write(hw_uint<128>& pw_math_in_oc02_merged583_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc02_merged583_228_res = pw_math_in_oc02_merged583_write.extract<0, 31>();
	in_pw_math_in_oc02_merged583_228_write(in_pw_math_in_oc02_merged583_228_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_229_res = pw_math_in_oc02_merged583_write.extract<32, 63>();
	in_pw_math_in_oc02_merged583_229_write(in_pw_math_in_oc02_merged583_229_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_230_res = pw_math_in_oc02_merged583_write.extract<64, 95>();
	in_pw_math_in_oc02_merged583_230_write(in_pw_math_in_oc02_merged583_230_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged583_231_res = pw_math_in_oc02_merged583_write.extract<96, 127>();
	in_pw_math_in_oc02_merged583_231_write(in_pw_math_in_oc02_merged583_231_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

// stencil_05_merged586_read
//	in_stencil_05_merged586_180
//	in_stencil_05_merged586_182
//	in_stencil_05_merged586_183
//	in_stencil_05_merged586_184
//	in_stencil_05_merged586_185
//	in_stencil_05_merged586_186
//	in_stencil_05_merged586_187
//	in_stencil_05_merged586_188
//	in_stencil_05_merged586_189
//	in_stencil_05_merged586_190
//	in_stencil_05_merged586_192
//	in_stencil_05_merged586_193
//	in_stencil_05_merged586_194
//	in_stencil_05_merged586_195
//	in_stencil_05_merged586_196
//	in_stencil_05_merged586_197
//	in_stencil_05_merged586_198
//	in_stencil_05_merged586_199
//	in_stencil_05_merged586_200
//	in_stencil_05_merged586_202
//	in_stencil_05_merged586_203
//	in_stencil_05_merged586_204
//	in_stencil_05_merged586_205
//	in_stencil_05_merged586_206
//	in_stencil_05_merged586_207
//	in_stencil_05_merged586_208
//	in_stencil_05_merged586_209
//	in_stencil_05_merged586_210
//	in_stencil_05_merged586_212
//	in_stencil_05_merged586_213
//	in_stencil_05_merged586_214
//	in_stencil_05_merged586_215
//	in_stencil_05_merged586_216
//	in_stencil_05_merged586_217
//	in_stencil_05_merged586_218
//	in_stencil_05_merged586_219
inline hw_uint<1152> in_stencil_05_merged586_read_bundle_read(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 36
    // in_stencil_05_merged586_180
    // in_stencil_05_merged586_182
    // in_stencil_05_merged586_183
    // in_stencil_05_merged586_184
    // in_stencil_05_merged586_185
    // in_stencil_05_merged586_186
    // in_stencil_05_merged586_187
    // in_stencil_05_merged586_188
    // in_stencil_05_merged586_189
    // in_stencil_05_merged586_190
    // in_stencil_05_merged586_192
    // in_stencil_05_merged586_193
    // in_stencil_05_merged586_194
    // in_stencil_05_merged586_195
    // in_stencil_05_merged586_196
    // in_stencil_05_merged586_197
    // in_stencil_05_merged586_198
    // in_stencil_05_merged586_199
    // in_stencil_05_merged586_200
    // in_stencil_05_merged586_202
    // in_stencil_05_merged586_203
    // in_stencil_05_merged586_204
    // in_stencil_05_merged586_205
    // in_stencil_05_merged586_206
    // in_stencil_05_merged586_207
    // in_stencil_05_merged586_208
    // in_stencil_05_merged586_209
    // in_stencil_05_merged586_210
    // in_stencil_05_merged586_212
    // in_stencil_05_merged586_213
    // in_stencil_05_merged586_214
    // in_stencil_05_merged586_215
    // in_stencil_05_merged586_216
    // in_stencil_05_merged586_217
    // in_stencil_05_merged586_218
    // in_stencil_05_merged586_219

	hw_uint<1152> result;
	hw_uint<32>  in_stencil_05_merged586_180_res = in_stencil_05_merged586_180_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 1152>(result, in_stencil_05_merged586_180_res);
	hw_uint<32>  in_stencil_05_merged586_182_res = in_stencil_05_merged586_182_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 1152>(result, in_stencil_05_merged586_182_res);
	hw_uint<32>  in_stencil_05_merged586_183_res = in_stencil_05_merged586_183_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 1152>(result, in_stencil_05_merged586_183_res);
	hw_uint<32>  in_stencil_05_merged586_184_res = in_stencil_05_merged586_184_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 1152>(result, in_stencil_05_merged586_184_res);
	hw_uint<32>  in_stencil_05_merged586_185_res = in_stencil_05_merged586_185_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<128, 1152>(result, in_stencil_05_merged586_185_res);
	hw_uint<32>  in_stencil_05_merged586_186_res = in_stencil_05_merged586_186_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<160, 1152>(result, in_stencil_05_merged586_186_res);
	hw_uint<32>  in_stencil_05_merged586_187_res = in_stencil_05_merged586_187_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<192, 1152>(result, in_stencil_05_merged586_187_res);
	hw_uint<32>  in_stencil_05_merged586_188_res = in_stencil_05_merged586_188_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<224, 1152>(result, in_stencil_05_merged586_188_res);
	hw_uint<32>  in_stencil_05_merged586_189_res = in_stencil_05_merged586_189_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<256, 1152>(result, in_stencil_05_merged586_189_res);
	hw_uint<32>  in_stencil_05_merged586_190_res = in_stencil_05_merged586_190_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<288, 1152>(result, in_stencil_05_merged586_190_res);
	hw_uint<32>  in_stencil_05_merged586_192_res = in_stencil_05_merged586_192_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<320, 1152>(result, in_stencil_05_merged586_192_res);
	hw_uint<32>  in_stencil_05_merged586_193_res = in_stencil_05_merged586_193_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<352, 1152>(result, in_stencil_05_merged586_193_res);
	hw_uint<32>  in_stencil_05_merged586_194_res = in_stencil_05_merged586_194_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<384, 1152>(result, in_stencil_05_merged586_194_res);
	hw_uint<32>  in_stencil_05_merged586_195_res = in_stencil_05_merged586_195_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<416, 1152>(result, in_stencil_05_merged586_195_res);
	hw_uint<32>  in_stencil_05_merged586_196_res = in_stencil_05_merged586_196_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<448, 1152>(result, in_stencil_05_merged586_196_res);
	hw_uint<32>  in_stencil_05_merged586_197_res = in_stencil_05_merged586_197_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<480, 1152>(result, in_stencil_05_merged586_197_res);
	hw_uint<32>  in_stencil_05_merged586_198_res = in_stencil_05_merged586_198_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<512, 1152>(result, in_stencil_05_merged586_198_res);
	hw_uint<32>  in_stencil_05_merged586_199_res = in_stencil_05_merged586_199_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<544, 1152>(result, in_stencil_05_merged586_199_res);
	hw_uint<32>  in_stencil_05_merged586_200_res = in_stencil_05_merged586_200_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<576, 1152>(result, in_stencil_05_merged586_200_res);
	hw_uint<32>  in_stencil_05_merged586_202_res = in_stencil_05_merged586_202_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<608, 1152>(result, in_stencil_05_merged586_202_res);
	hw_uint<32>  in_stencil_05_merged586_203_res = in_stencil_05_merged586_203_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<640, 1152>(result, in_stencil_05_merged586_203_res);
	hw_uint<32>  in_stencil_05_merged586_204_res = in_stencil_05_merged586_204_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<672, 1152>(result, in_stencil_05_merged586_204_res);
	hw_uint<32>  in_stencil_05_merged586_205_res = in_stencil_05_merged586_205_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<704, 1152>(result, in_stencil_05_merged586_205_res);
	hw_uint<32>  in_stencil_05_merged586_206_res = in_stencil_05_merged586_206_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<736, 1152>(result, in_stencil_05_merged586_206_res);
	hw_uint<32>  in_stencil_05_merged586_207_res = in_stencil_05_merged586_207_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<768, 1152>(result, in_stencil_05_merged586_207_res);
	hw_uint<32>  in_stencil_05_merged586_208_res = in_stencil_05_merged586_208_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<800, 1152>(result, in_stencil_05_merged586_208_res);
	hw_uint<32>  in_stencil_05_merged586_209_res = in_stencil_05_merged586_209_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<832, 1152>(result, in_stencil_05_merged586_209_res);
	hw_uint<32>  in_stencil_05_merged586_210_res = in_stencil_05_merged586_210_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<864, 1152>(result, in_stencil_05_merged586_210_res);
	hw_uint<32>  in_stencil_05_merged586_212_res = in_stencil_05_merged586_212_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<896, 1152>(result, in_stencil_05_merged586_212_res);
	hw_uint<32>  in_stencil_05_merged586_213_res = in_stencil_05_merged586_213_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<928, 1152>(result, in_stencil_05_merged586_213_res);
	hw_uint<32>  in_stencil_05_merged586_214_res = in_stencil_05_merged586_214_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<960, 1152>(result, in_stencil_05_merged586_214_res);
	hw_uint<32>  in_stencil_05_merged586_215_res = in_stencil_05_merged586_215_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<992, 1152>(result, in_stencil_05_merged586_215_res);
	hw_uint<32>  in_stencil_05_merged586_216_res = in_stencil_05_merged586_216_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<1024, 1152>(result, in_stencil_05_merged586_216_res);
	hw_uint<32>  in_stencil_05_merged586_217_res = in_stencil_05_merged586_217_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<1056, 1152>(result, in_stencil_05_merged586_217_res);
	hw_uint<32>  in_stencil_05_merged586_218_res = in_stencil_05_merged586_218_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<1088, 1152>(result, in_stencil_05_merged586_218_res);
	hw_uint<32>  in_stencil_05_merged586_219_res = in_stencil_05_merged586_219_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<1120, 1152>(result, in_stencil_05_merged586_219_res);
	return result;
}

#include "hw_classes.h"

struct stencil_0_stencil_05_merged586_176_merged_banks_9_cache {
	// RAM Box: {[-1, 135], [-4, 131]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 35> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_73() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_0_stencil_05_merged586_177_merged_banks_9_cache {
	// RAM Box: {[-2, 134], [-4, 131]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 35> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37() {
		return f4;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_73() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_0_stencil_05_merged586_178_merged_banks_9_cache {
	// RAM Box: {[-3, 137], [-4, 131]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 34> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 34> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36() {
		return f4;
	}

	inline hw_uint<32>  peek_37() {
		return f6;
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_72() {
		return f8;
	}

	inline hw_uint<32>  peek_73() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_0_stencil_05_merged586_179_merged_banks_9_cache {
	// RAM Box: {[-4, 136], [-4, 131]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 34> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 34> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36() {
		return f4;
	}

	inline hw_uint<32>  peek_37() {
		return f6;
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_72() {
		return f8;
	}

	inline hw_uint<32>  peek_73() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_0_cache {
  // # of banks: 4
  stencil_0_stencil_05_merged586_176_merged_banks_9_cache stencil_0_stencil_05_merged586_176_merged_banks_9;
  stencil_0_stencil_05_merged586_177_merged_banks_9_cache stencil_0_stencil_05_merged586_177_merged_banks_9;
  stencil_0_stencil_05_merged586_178_merged_banks_9_cache stencil_0_stencil_05_merged586_178_merged_banks_9;
  stencil_0_stencil_05_merged586_179_merged_banks_9_cache stencil_0_stencil_05_merged586_179_merged_banks_9;
};



inline void stencil_0_stencil_05_merged586_176_write(hw_uint<32> & stencil_0_stencil_05_merged586_176, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.push(stencil_0_stencil_05_merged586_176);
}

inline void stencil_0_stencil_05_merged586_177_write(hw_uint<32> & stencil_0_stencil_05_merged586_177, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.push(stencil_0_stencil_05_merged586_177);
}

inline void stencil_0_stencil_05_merged586_178_write(hw_uint<32> & stencil_0_stencil_05_merged586_178, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.push(stencil_0_stencil_05_merged586_178);
}

inline void stencil_0_stencil_05_merged586_179_write(hw_uint<32> & stencil_0_stencil_05_merged586_179, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.push(stencil_0_stencil_05_merged586_179);
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_181_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_181 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-1 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_191_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_191 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-2 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_201_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_201 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-3 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_05_merged586_211_select(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_05_merged586_211 read pattern: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> stencil_0[-4 + 4stencil_05, -4 + stencil_04] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_136_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_136 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_72();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_138_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_138 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_72();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_139_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_139 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_140_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_140 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_36();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_141_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_141 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_36();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_142_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_142 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_143_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_143 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_0();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_144_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_144 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_0();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_145_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_145 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_146_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_146 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_72();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_148_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_148 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_149_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_149 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_150_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_150 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_36();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_151_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_151 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_152_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_152 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_153_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_153 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_0();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_154_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_154 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_155_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_155 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_156_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_156 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_158_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_158 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_159_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_159 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_160_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_160 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_161_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_161 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_162_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_162 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_163_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_163 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-1 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_176 = stencil_0.stencil_0_stencil_05_merged586_176_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_176;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_164_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_164 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_165_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_165 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_166_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_166 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_168_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_168 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_169_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_169 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-4 + 4stencil_111, -4 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_73();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_170_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_170 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_171_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_171 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_172_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_172 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-4 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_37();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_173_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_173 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-2 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_177 = stencil_0.stencil_0_stencil_05_merged586_177_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_177;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_174_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_174 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-3 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_178 = stencil_0.stencil_0_stencil_05_merged586_178_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_178;
  return 0;
}

inline hw_uint<32>  stencil_0_stencil_111_merged589_175_select(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_stencil_111_merged589_175 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_0[-4 + 4stencil_111, -2 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Read schedule : { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  // Write schedule: { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
  auto value_stencil_0_stencil_05_merged586_179 = stencil_0.stencil_0_stencil_05_merged586_179_merged_banks_9.peek_1();
  return value_stencil_0_stencil_05_merged586_179;
  return 0;
}

// # of bundles = 3
// stencil_05_merged586_read
//	stencil_0_stencil_05_merged586_181
//	stencil_0_stencil_05_merged586_191
//	stencil_0_stencil_05_merged586_201
//	stencil_0_stencil_05_merged586_211
inline hw_uint<128> stencil_0_stencil_05_merged586_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_0_stencil_05_merged586_181
    // stencil_0_stencil_05_merged586_191
    // stencil_0_stencil_05_merged586_201
    // stencil_0_stencil_05_merged586_211

	hw_uint<128> result;
	hw_uint<32>  stencil_0_stencil_05_merged586_181_res = stencil_0_stencil_05_merged586_181_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 128>(result, stencil_0_stencil_05_merged586_181_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_191_res = stencil_0_stencil_05_merged586_191_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 128>(result, stencil_0_stencil_05_merged586_191_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_201_res = stencil_0_stencil_05_merged586_201_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 128>(result, stencil_0_stencil_05_merged586_201_res);
	hw_uint<32>  stencil_0_stencil_05_merged586_211_res = stencil_0_stencil_05_merged586_211_select(stencil_0, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 128>(result, stencil_0_stencil_05_merged586_211_res);
	return result;
}

// stencil_05_merged586_write
//	stencil_0_stencil_05_merged586_176
//	stencil_0_stencil_05_merged586_177
//	stencil_0_stencil_05_merged586_178
//	stencil_0_stencil_05_merged586_179
inline void stencil_0_stencil_05_merged586_write_bundle_write(hw_uint<128>& stencil_05_merged586_write, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
	hw_uint<32>  stencil_0_stencil_05_merged586_176_res = stencil_05_merged586_write.extract<0, 31>();
	stencil_0_stencil_05_merged586_176_write(stencil_0_stencil_05_merged586_176_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_177_res = stencil_05_merged586_write.extract<32, 63>();
	stencil_0_stencil_05_merged586_177_write(stencil_0_stencil_05_merged586_177_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_178_res = stencil_05_merged586_write.extract<64, 95>();
	stencil_0_stencil_05_merged586_178_write(stencil_0_stencil_05_merged586_178_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
	hw_uint<32>  stencil_0_stencil_05_merged586_179_res = stencil_05_merged586_write.extract<96, 127>();
	stencil_0_stencil_05_merged586_179_write(stencil_0_stencil_05_merged586_179_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
}

// stencil_111_merged589_read
//	stencil_0_stencil_111_merged589_136
//	stencil_0_stencil_111_merged589_138
//	stencil_0_stencil_111_merged589_139
//	stencil_0_stencil_111_merged589_140
//	stencil_0_stencil_111_merged589_141
//	stencil_0_stencil_111_merged589_142
//	stencil_0_stencil_111_merged589_143
//	stencil_0_stencil_111_merged589_144
//	stencil_0_stencil_111_merged589_145
//	stencil_0_stencil_111_merged589_146
//	stencil_0_stencil_111_merged589_148
//	stencil_0_stencil_111_merged589_149
//	stencil_0_stencil_111_merged589_150
//	stencil_0_stencil_111_merged589_151
//	stencil_0_stencil_111_merged589_152
//	stencil_0_stencil_111_merged589_153
//	stencil_0_stencil_111_merged589_154
//	stencil_0_stencil_111_merged589_155
//	stencil_0_stencil_111_merged589_156
//	stencil_0_stencil_111_merged589_158
//	stencil_0_stencil_111_merged589_159
//	stencil_0_stencil_111_merged589_160
//	stencil_0_stencil_111_merged589_161
//	stencil_0_stencil_111_merged589_162
//	stencil_0_stencil_111_merged589_163
//	stencil_0_stencil_111_merged589_164
//	stencil_0_stencil_111_merged589_165
//	stencil_0_stencil_111_merged589_166
//	stencil_0_stencil_111_merged589_168
//	stencil_0_stencil_111_merged589_169
//	stencil_0_stencil_111_merged589_170
//	stencil_0_stencil_111_merged589_171
//	stencil_0_stencil_111_merged589_172
//	stencil_0_stencil_111_merged589_173
//	stencil_0_stencil_111_merged589_174
//	stencil_0_stencil_111_merged589_175
inline hw_uint<1152> stencil_0_stencil_111_merged589_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_110, int stencil_111, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_0_stencil_111_merged589_136
    // stencil_0_stencil_111_merged589_138
    // stencil_0_stencil_111_merged589_139
    // stencil_0_stencil_111_merged589_140
    // stencil_0_stencil_111_merged589_141
    // stencil_0_stencil_111_merged589_142
    // stencil_0_stencil_111_merged589_143
    // stencil_0_stencil_111_merged589_144
    // stencil_0_stencil_111_merged589_145
    // stencil_0_stencil_111_merged589_146
    // stencil_0_stencil_111_merged589_148
    // stencil_0_stencil_111_merged589_149
    // stencil_0_stencil_111_merged589_150
    // stencil_0_stencil_111_merged589_151
    // stencil_0_stencil_111_merged589_152
    // stencil_0_stencil_111_merged589_153
    // stencil_0_stencil_111_merged589_154
    // stencil_0_stencil_111_merged589_155
    // stencil_0_stencil_111_merged589_156
    // stencil_0_stencil_111_merged589_158
    // stencil_0_stencil_111_merged589_159
    // stencil_0_stencil_111_merged589_160
    // stencil_0_stencil_111_merged589_161
    // stencil_0_stencil_111_merged589_162
    // stencil_0_stencil_111_merged589_163
    // stencil_0_stencil_111_merged589_164
    // stencil_0_stencil_111_merged589_165
    // stencil_0_stencil_111_merged589_166
    // stencil_0_stencil_111_merged589_168
    // stencil_0_stencil_111_merged589_169
    // stencil_0_stencil_111_merged589_170
    // stencil_0_stencil_111_merged589_171
    // stencil_0_stencil_111_merged589_172
    // stencil_0_stencil_111_merged589_173
    // stencil_0_stencil_111_merged589_174
    // stencil_0_stencil_111_merged589_175

	hw_uint<1152> result;
	hw_uint<32>  stencil_0_stencil_111_merged589_136_res = stencil_0_stencil_111_merged589_136_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<0, 1152>(result, stencil_0_stencil_111_merged589_136_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_138_res = stencil_0_stencil_111_merged589_138_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<32, 1152>(result, stencil_0_stencil_111_merged589_138_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_139_res = stencil_0_stencil_111_merged589_139_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<64, 1152>(result, stencil_0_stencil_111_merged589_139_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_140_res = stencil_0_stencil_111_merged589_140_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<96, 1152>(result, stencil_0_stencil_111_merged589_140_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_141_res = stencil_0_stencil_111_merged589_141_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<128, 1152>(result, stencil_0_stencil_111_merged589_141_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_142_res = stencil_0_stencil_111_merged589_142_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<160, 1152>(result, stencil_0_stencil_111_merged589_142_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_143_res = stencil_0_stencil_111_merged589_143_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<192, 1152>(result, stencil_0_stencil_111_merged589_143_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_144_res = stencil_0_stencil_111_merged589_144_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<224, 1152>(result, stencil_0_stencil_111_merged589_144_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_145_res = stencil_0_stencil_111_merged589_145_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<256, 1152>(result, stencil_0_stencil_111_merged589_145_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_146_res = stencil_0_stencil_111_merged589_146_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<288, 1152>(result, stencil_0_stencil_111_merged589_146_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_148_res = stencil_0_stencil_111_merged589_148_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<320, 1152>(result, stencil_0_stencil_111_merged589_148_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_149_res = stencil_0_stencil_111_merged589_149_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<352, 1152>(result, stencil_0_stencil_111_merged589_149_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_150_res = stencil_0_stencil_111_merged589_150_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<384, 1152>(result, stencil_0_stencil_111_merged589_150_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_151_res = stencil_0_stencil_111_merged589_151_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<416, 1152>(result, stencil_0_stencil_111_merged589_151_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_152_res = stencil_0_stencil_111_merged589_152_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<448, 1152>(result, stencil_0_stencil_111_merged589_152_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_153_res = stencil_0_stencil_111_merged589_153_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<480, 1152>(result, stencil_0_stencil_111_merged589_153_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_154_res = stencil_0_stencil_111_merged589_154_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<512, 1152>(result, stencil_0_stencil_111_merged589_154_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_155_res = stencil_0_stencil_111_merged589_155_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<544, 1152>(result, stencil_0_stencil_111_merged589_155_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_156_res = stencil_0_stencil_111_merged589_156_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<576, 1152>(result, stencil_0_stencil_111_merged589_156_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_158_res = stencil_0_stencil_111_merged589_158_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<608, 1152>(result, stencil_0_stencil_111_merged589_158_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_159_res = stencil_0_stencil_111_merged589_159_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<640, 1152>(result, stencil_0_stencil_111_merged589_159_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_160_res = stencil_0_stencil_111_merged589_160_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<672, 1152>(result, stencil_0_stencil_111_merged589_160_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_161_res = stencil_0_stencil_111_merged589_161_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<704, 1152>(result, stencil_0_stencil_111_merged589_161_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_162_res = stencil_0_stencil_111_merged589_162_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<736, 1152>(result, stencil_0_stencil_111_merged589_162_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_163_res = stencil_0_stencil_111_merged589_163_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<768, 1152>(result, stencil_0_stencil_111_merged589_163_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_164_res = stencil_0_stencil_111_merged589_164_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<800, 1152>(result, stencil_0_stencil_111_merged589_164_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_165_res = stencil_0_stencil_111_merged589_165_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<832, 1152>(result, stencil_0_stencil_111_merged589_165_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_166_res = stencil_0_stencil_111_merged589_166_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<864, 1152>(result, stencil_0_stencil_111_merged589_166_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_168_res = stencil_0_stencil_111_merged589_168_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<896, 1152>(result, stencil_0_stencil_111_merged589_168_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_169_res = stencil_0_stencil_111_merged589_169_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<928, 1152>(result, stencil_0_stencil_111_merged589_169_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_170_res = stencil_0_stencil_111_merged589_170_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<960, 1152>(result, stencil_0_stencil_111_merged589_170_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_171_res = stencil_0_stencil_111_merged589_171_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<992, 1152>(result, stencil_0_stencil_111_merged589_171_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_172_res = stencil_0_stencil_111_merged589_172_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<1024, 1152>(result, stencil_0_stencil_111_merged589_172_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_173_res = stencil_0_stencil_111_merged589_173_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<1056, 1152>(result, stencil_0_stencil_111_merged589_173_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_174_res = stencil_0_stencil_111_merged589_174_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<1088, 1152>(result, stencil_0_stencil_111_merged589_174_res);
	hw_uint<32>  stencil_0_stencil_111_merged589_175_res = stencil_0_stencil_111_merged589_175_select(stencil_0, root, stencil_110, stencil_111, dynamic_address);
	set_at<1120, 1152>(result, stencil_0_stencil_111_merged589_175_res);
	return result;
}

#include "hw_classes.h"

struct stencil_1_stencil_111_merged589_132_merged_banks_9_cache {
	// RAM Box: {[0, 132], [-3, 130]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 34> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 34> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36() {
		return f4;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_71() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_1_stencil_111_merged589_133_merged_banks_9_cache {
	// RAM Box: {[-1, 131], [-3, 130]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 34> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 34> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36() {
		return f4;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_71() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_1_stencil_111_merged589_134_merged_banks_9_cache {
	// RAM Box: {[-2, 134], [-3, 130]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 33> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35() {
		return f4;
	}

	inline hw_uint<32>  peek_36() {
		return f6;
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_70() {
		return f8;
	}

	inline hw_uint<32>  peek_71() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_1_stencil_111_merged589_135_merged_banks_9_cache {
	// RAM Box: {[-3, 133], [-3, 130]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 33> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35() {
		return f4;
	}

	inline hw_uint<32>  peek_36() {
		return f6;
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_70() {
		return f8;
	}

	inline hw_uint<32>  peek_71() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_1_cache {
  // # of banks: 4
  stencil_1_stencil_111_merged589_132_merged_banks_9_cache stencil_1_stencil_111_merged589_132_merged_banks_9;
  stencil_1_stencil_111_merged589_133_merged_banks_9_cache stencil_1_stencil_111_merged589_133_merged_banks_9;
  stencil_1_stencil_111_merged589_134_merged_banks_9_cache stencil_1_stencil_111_merged589_134_merged_banks_9;
  stencil_1_stencil_111_merged589_135_merged_banks_9_cache stencil_1_stencil_111_merged589_135_merged_banks_9;
};



inline void stencil_1_stencil_111_merged589_132_write(hw_uint<32> & stencil_1_stencil_111_merged589_132, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.push(stencil_1_stencil_111_merged589_132);
}

inline void stencil_1_stencil_111_merged589_133_write(hw_uint<32> & stencil_1_stencil_111_merged589_133, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.push(stencil_1_stencil_111_merged589_133);
}

inline void stencil_1_stencil_111_merged589_134_write(hw_uint<32> & stencil_1_stencil_111_merged589_134, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.push(stencil_1_stencil_111_merged589_134);
}

inline void stencil_1_stencil_111_merged589_135_write(hw_uint<32> & stencil_1_stencil_111_merged589_135, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.push(stencil_1_stencil_111_merged589_135);
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_137_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_137 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_147_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_147 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-1 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_157_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_157 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-2 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_111_merged589_167_select(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_111_merged589_167 read pattern: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> stencil_1[-3 + 4stencil_111, -3 + stencil_110] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_100_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_100 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_0();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_101_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_101 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_102_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_102 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_70();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_104_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_104 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_105_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_105 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_106_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_106 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_35();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_107_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_107 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_108_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_108 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_109_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_109 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_0();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_110_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_110 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_111_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_111 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_112_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_112 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_114_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_114 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_115_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_115 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_116_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_116 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_117_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_117 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_118_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_118 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_119_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_119 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_120_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_120 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_121_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_121 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_122_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_122 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_124_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_124 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_125_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_125 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-3 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_126_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_126 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_127_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_127 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_128_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_128 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-3 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_129_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_129 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-1 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_133 = stencil_1.stencil_1_stencil_111_merged589_133_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_133;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_130_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_130 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_131_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_131 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[-3 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_1();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_92_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_92 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[2 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_70();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_94_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_94 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_70();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_95_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_95 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -3 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_71();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_96_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_96 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_35();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_97_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_97 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_135 = stencil_1.stencil_1_stencil_111_merged589_135_merged_banks_9.peek_35();
  return value_stencil_1_stencil_111_merged589_135;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_98_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_98 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_132 = stencil_1.stencil_1_stencil_111_merged589_132_merged_banks_9.peek_36();
  return value_stencil_1_stencil_111_merged589_132;
  return 0;
}

inline hw_uint<32>  stencil_1_stencil_217_merged592_99_select(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_stencil_217_merged592_99 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_1[2 + 4stencil_217, -1 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Read schedule : { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  // Write schedule: { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
  auto value_stencil_1_stencil_111_merged589_134 = stencil_1.stencil_1_stencil_111_merged589_134_merged_banks_9.peek_0();
  return value_stencil_1_stencil_111_merged589_134;
  return 0;
}

// # of bundles = 3
// stencil_111_merged589_read
//	stencil_1_stencil_111_merged589_137
//	stencil_1_stencil_111_merged589_147
//	stencil_1_stencil_111_merged589_157
//	stencil_1_stencil_111_merged589_167
inline hw_uint<128> stencil_1_stencil_111_merged589_read_bundle_read(stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_1_stencil_111_merged589_137
    // stencil_1_stencil_111_merged589_147
    // stencil_1_stencil_111_merged589_157
    // stencil_1_stencil_111_merged589_167

	hw_uint<128> result;
	hw_uint<32>  stencil_1_stencil_111_merged589_137_res = stencil_1_stencil_111_merged589_137_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<0, 128>(result, stencil_1_stencil_111_merged589_137_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_147_res = stencil_1_stencil_111_merged589_147_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<32, 128>(result, stencil_1_stencil_111_merged589_147_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_157_res = stencil_1_stencil_111_merged589_157_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<64, 128>(result, stencil_1_stencil_111_merged589_157_res);
	hw_uint<32>  stencil_1_stencil_111_merged589_167_res = stencil_1_stencil_111_merged589_167_select(stencil_1, root, stencil_110, stencil_111, dynamic_address);
	set_at<96, 128>(result, stencil_1_stencil_111_merged589_167_res);
	return result;
}

// stencil_111_merged589_write
//	stencil_1_stencil_111_merged589_132
//	stencil_1_stencil_111_merged589_133
//	stencil_1_stencil_111_merged589_134
//	stencil_1_stencil_111_merged589_135
inline void stencil_1_stencil_111_merged589_write_bundle_write(hw_uint<128>& stencil_111_merged589_write, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111, int dynamic_address) {
	hw_uint<32>  stencil_1_stencil_111_merged589_132_res = stencil_111_merged589_write.extract<0, 31>();
	stencil_1_stencil_111_merged589_132_write(stencil_1_stencil_111_merged589_132_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_133_res = stencil_111_merged589_write.extract<32, 63>();
	stencil_1_stencil_111_merged589_133_write(stencil_1_stencil_111_merged589_133_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_134_res = stencil_111_merged589_write.extract<64, 95>();
	stencil_1_stencil_111_merged589_134_write(stencil_1_stencil_111_merged589_134_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
	hw_uint<32>  stencil_1_stencil_111_merged589_135_res = stencil_111_merged589_write.extract<96, 127>();
	stencil_1_stencil_111_merged589_135_write(stencil_1_stencil_111_merged589_135_res, stencil_1, root, stencil_110, stencil_111, dynamic_address);
}

// stencil_217_merged592_read
//	stencil_1_stencil_217_merged592_92
//	stencil_1_stencil_217_merged592_94
//	stencil_1_stencil_217_merged592_95
//	stencil_1_stencil_217_merged592_96
//	stencil_1_stencil_217_merged592_97
//	stencil_1_stencil_217_merged592_98
//	stencil_1_stencil_217_merged592_99
//	stencil_1_stencil_217_merged592_100
//	stencil_1_stencil_217_merged592_101
//	stencil_1_stencil_217_merged592_102
//	stencil_1_stencil_217_merged592_104
//	stencil_1_stencil_217_merged592_105
//	stencil_1_stencil_217_merged592_106
//	stencil_1_stencil_217_merged592_107
//	stencil_1_stencil_217_merged592_108
//	stencil_1_stencil_217_merged592_109
//	stencil_1_stencil_217_merged592_110
//	stencil_1_stencil_217_merged592_111
//	stencil_1_stencil_217_merged592_112
//	stencil_1_stencil_217_merged592_114
//	stencil_1_stencil_217_merged592_115
//	stencil_1_stencil_217_merged592_116
//	stencil_1_stencil_217_merged592_117
//	stencil_1_stencil_217_merged592_118
//	stencil_1_stencil_217_merged592_119
//	stencil_1_stencil_217_merged592_120
//	stencil_1_stencil_217_merged592_121
//	stencil_1_stencil_217_merged592_122
//	stencil_1_stencil_217_merged592_124
//	stencil_1_stencil_217_merged592_125
//	stencil_1_stencil_217_merged592_126
//	stencil_1_stencil_217_merged592_127
//	stencil_1_stencil_217_merged592_128
//	stencil_1_stencil_217_merged592_129
//	stencil_1_stencil_217_merged592_130
//	stencil_1_stencil_217_merged592_131
inline hw_uint<1152> stencil_1_stencil_217_merged592_read_bundle_read(stencil_1_cache& stencil_1, int root, int stencil_216, int stencil_217, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_1_stencil_217_merged592_92
    // stencil_1_stencil_217_merged592_94
    // stencil_1_stencil_217_merged592_95
    // stencil_1_stencil_217_merged592_96
    // stencil_1_stencil_217_merged592_97
    // stencil_1_stencil_217_merged592_98
    // stencil_1_stencil_217_merged592_99
    // stencil_1_stencil_217_merged592_100
    // stencil_1_stencil_217_merged592_101
    // stencil_1_stencil_217_merged592_102
    // stencil_1_stencil_217_merged592_104
    // stencil_1_stencil_217_merged592_105
    // stencil_1_stencil_217_merged592_106
    // stencil_1_stencil_217_merged592_107
    // stencil_1_stencil_217_merged592_108
    // stencil_1_stencil_217_merged592_109
    // stencil_1_stencil_217_merged592_110
    // stencil_1_stencil_217_merged592_111
    // stencil_1_stencil_217_merged592_112
    // stencil_1_stencil_217_merged592_114
    // stencil_1_stencil_217_merged592_115
    // stencil_1_stencil_217_merged592_116
    // stencil_1_stencil_217_merged592_117
    // stencil_1_stencil_217_merged592_118
    // stencil_1_stencil_217_merged592_119
    // stencil_1_stencil_217_merged592_120
    // stencil_1_stencil_217_merged592_121
    // stencil_1_stencil_217_merged592_122
    // stencil_1_stencil_217_merged592_124
    // stencil_1_stencil_217_merged592_125
    // stencil_1_stencil_217_merged592_126
    // stencil_1_stencil_217_merged592_127
    // stencil_1_stencil_217_merged592_128
    // stencil_1_stencil_217_merged592_129
    // stencil_1_stencil_217_merged592_130
    // stencil_1_stencil_217_merged592_131

	hw_uint<1152> result;
	hw_uint<32>  stencil_1_stencil_217_merged592_92_res = stencil_1_stencil_217_merged592_92_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<0, 1152>(result, stencil_1_stencil_217_merged592_92_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_94_res = stencil_1_stencil_217_merged592_94_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<32, 1152>(result, stencil_1_stencil_217_merged592_94_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_95_res = stencil_1_stencil_217_merged592_95_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<64, 1152>(result, stencil_1_stencil_217_merged592_95_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_96_res = stencil_1_stencil_217_merged592_96_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<96, 1152>(result, stencil_1_stencil_217_merged592_96_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_97_res = stencil_1_stencil_217_merged592_97_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<128, 1152>(result, stencil_1_stencil_217_merged592_97_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_98_res = stencil_1_stencil_217_merged592_98_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<160, 1152>(result, stencil_1_stencil_217_merged592_98_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_99_res = stencil_1_stencil_217_merged592_99_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<192, 1152>(result, stencil_1_stencil_217_merged592_99_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_100_res = stencil_1_stencil_217_merged592_100_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<224, 1152>(result, stencil_1_stencil_217_merged592_100_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_101_res = stencil_1_stencil_217_merged592_101_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<256, 1152>(result, stencil_1_stencil_217_merged592_101_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_102_res = stencil_1_stencil_217_merged592_102_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<288, 1152>(result, stencil_1_stencil_217_merged592_102_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_104_res = stencil_1_stencil_217_merged592_104_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<320, 1152>(result, stencil_1_stencil_217_merged592_104_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_105_res = stencil_1_stencil_217_merged592_105_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<352, 1152>(result, stencil_1_stencil_217_merged592_105_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_106_res = stencil_1_stencil_217_merged592_106_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<384, 1152>(result, stencil_1_stencil_217_merged592_106_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_107_res = stencil_1_stencil_217_merged592_107_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<416, 1152>(result, stencil_1_stencil_217_merged592_107_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_108_res = stencil_1_stencil_217_merged592_108_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<448, 1152>(result, stencil_1_stencil_217_merged592_108_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_109_res = stencil_1_stencil_217_merged592_109_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<480, 1152>(result, stencil_1_stencil_217_merged592_109_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_110_res = stencil_1_stencil_217_merged592_110_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<512, 1152>(result, stencil_1_stencil_217_merged592_110_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_111_res = stencil_1_stencil_217_merged592_111_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<544, 1152>(result, stencil_1_stencil_217_merged592_111_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_112_res = stencil_1_stencil_217_merged592_112_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<576, 1152>(result, stencil_1_stencil_217_merged592_112_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_114_res = stencil_1_stencil_217_merged592_114_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<608, 1152>(result, stencil_1_stencil_217_merged592_114_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_115_res = stencil_1_stencil_217_merged592_115_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<640, 1152>(result, stencil_1_stencil_217_merged592_115_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_116_res = stencil_1_stencil_217_merged592_116_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<672, 1152>(result, stencil_1_stencil_217_merged592_116_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_117_res = stencil_1_stencil_217_merged592_117_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<704, 1152>(result, stencil_1_stencil_217_merged592_117_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_118_res = stencil_1_stencil_217_merged592_118_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<736, 1152>(result, stencil_1_stencil_217_merged592_118_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_119_res = stencil_1_stencil_217_merged592_119_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<768, 1152>(result, stencil_1_stencil_217_merged592_119_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_120_res = stencil_1_stencil_217_merged592_120_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<800, 1152>(result, stencil_1_stencil_217_merged592_120_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_121_res = stencil_1_stencil_217_merged592_121_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<832, 1152>(result, stencil_1_stencil_217_merged592_121_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_122_res = stencil_1_stencil_217_merged592_122_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<864, 1152>(result, stencil_1_stencil_217_merged592_122_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_124_res = stencil_1_stencil_217_merged592_124_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<896, 1152>(result, stencil_1_stencil_217_merged592_124_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_125_res = stencil_1_stencil_217_merged592_125_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<928, 1152>(result, stencil_1_stencil_217_merged592_125_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_126_res = stencil_1_stencil_217_merged592_126_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<960, 1152>(result, stencil_1_stencil_217_merged592_126_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_127_res = stencil_1_stencil_217_merged592_127_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<992, 1152>(result, stencil_1_stencil_217_merged592_127_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_128_res = stencil_1_stencil_217_merged592_128_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<1024, 1152>(result, stencil_1_stencil_217_merged592_128_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_129_res = stencil_1_stencil_217_merged592_129_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<1056, 1152>(result, stencil_1_stencil_217_merged592_129_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_130_res = stencil_1_stencil_217_merged592_130_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<1088, 1152>(result, stencil_1_stencil_217_merged592_130_res);
	hw_uint<32>  stencil_1_stencil_217_merged592_131_res = stencil_1_stencil_217_merged592_131_select(stencil_1, root, stencil_216, stencil_217, dynamic_address);
	set_at<1120, 1152>(result, stencil_1_stencil_217_merged592_131_res);
	return result;
}

#include "hw_classes.h"

struct stencil_2_stencil_217_merged592_88_merged_banks_9_cache {
	// RAM Box: {[1, 129], [-2, 129]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 33> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35() {
		return f4;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_69() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_2_stencil_217_merged592_89_merged_banks_9_cache {
	// RAM Box: {[0, 128], [-2, 129]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 33> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35() {
		return f4;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_69() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_2_stencil_217_merged592_90_merged_banks_9_cache {
	// RAM Box: {[-1, 131], [-2, 129]}
	// Capacity: 70
	// # of read delays: 6
  // 0, 1, 34, 35, 68, 69
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 32> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_68() {
		return f8;
	}

	inline hw_uint<32>  peek_69() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_2_stencil_217_merged592_91_merged_banks_9_cache {
	// RAM Box: {[-2, 130], [-2, 129]}
	// Capacity: 70
	// # of read delays: 6
  // 0, 1, 34, 35, 68, 69
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 32> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_68() {
		return f8;
	}

	inline hw_uint<32>  peek_69() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_2_cache {
  // # of banks: 4
  stencil_2_stencil_217_merged592_88_merged_banks_9_cache stencil_2_stencil_217_merged592_88_merged_banks_9;
  stencil_2_stencil_217_merged592_89_merged_banks_9_cache stencil_2_stencil_217_merged592_89_merged_banks_9;
  stencil_2_stencil_217_merged592_90_merged_banks_9_cache stencil_2_stencil_217_merged592_90_merged_banks_9;
  stencil_2_stencil_217_merged592_91_merged_banks_9_cache stencil_2_stencil_217_merged592_91_merged_banks_9;
};



inline void stencil_2_stencil_217_merged592_88_write(hw_uint<32> & stencil_2_stencil_217_merged592_88, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.push(stencil_2_stencil_217_merged592_88);
}

inline void stencil_2_stencil_217_merged592_89_write(hw_uint<32> & stencil_2_stencil_217_merged592_89, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.push(stencil_2_stencil_217_merged592_89);
}

inline void stencil_2_stencil_217_merged592_90_write(hw_uint<32> & stencil_2_stencil_217_merged592_90, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.push(stencil_2_stencil_217_merged592_90);
}

inline void stencil_2_stencil_217_merged592_91_write(hw_uint<32> & stencil_2_stencil_217_merged592_91, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.push(stencil_2_stencil_217_merged592_91);
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_103_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_103 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_113_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_113 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[-1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_123_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_123 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[-2 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_217_merged592_93_select(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_217_merged592_93 read pattern: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> stencil_2[1 + 4stencil_217, -2 + stencil_216] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_48_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_48 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[3 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_68();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_50_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_50 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_68();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_51_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_51 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_52_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_52 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[3 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_34();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_53_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_53 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_34();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_54_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_54 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_55_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_55 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[3 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_0();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_56_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_56 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_0();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_57_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_57 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_58_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_58 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_68();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_60_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_60 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_61_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_61 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_62_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_62 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_34();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_63_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_63 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_64_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_64 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_65_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_65 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_0();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_66_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_66 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_67_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_67 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_68_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_68 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_70_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_70 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_71_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_71 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_72_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_72 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_73_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_73 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_74_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_74 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_75_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_75 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_88 = stencil_2.stencil_2_stencil_217_merged592_88_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_88;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_76_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_76 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_77_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_77 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_78_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_78 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_80_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_80 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_81_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_81 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-2 + 4stencil_323, -2 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_69();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_82_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_82 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_83_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_83 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_84_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_84 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_35();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_85_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_85 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_89 = stencil_2.stencil_2_stencil_217_merged592_89_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_89;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_86_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_86 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-1 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_90 = stencil_2.stencil_2_stencil_217_merged592_90_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_90;
  return 0;
}

inline hw_uint<32>  stencil_2_stencil_323_merged595_87_select(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_stencil_323_merged595_87 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_2[-2 + 4stencil_323, stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Read schedule : { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  // Write schedule: { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
  auto value_stencil_2_stencil_217_merged592_91 = stencil_2.stencil_2_stencil_217_merged592_91_merged_banks_9.peek_1();
  return value_stencil_2_stencil_217_merged592_91;
  return 0;
}

// # of bundles = 3
// stencil_217_merged592_read
//	stencil_2_stencil_217_merged592_93
//	stencil_2_stencil_217_merged592_103
//	stencil_2_stencil_217_merged592_113
//	stencil_2_stencil_217_merged592_123
inline hw_uint<128> stencil_2_stencil_217_merged592_read_bundle_read(stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_2_stencil_217_merged592_93
    // stencil_2_stencil_217_merged592_103
    // stencil_2_stencil_217_merged592_113
    // stencil_2_stencil_217_merged592_123

	hw_uint<128> result;
	hw_uint<32>  stencil_2_stencil_217_merged592_93_res = stencil_2_stencil_217_merged592_93_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<0, 128>(result, stencil_2_stencil_217_merged592_93_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_103_res = stencil_2_stencil_217_merged592_103_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<32, 128>(result, stencil_2_stencil_217_merged592_103_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_113_res = stencil_2_stencil_217_merged592_113_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<64, 128>(result, stencil_2_stencil_217_merged592_113_res);
	hw_uint<32>  stencil_2_stencil_217_merged592_123_res = stencil_2_stencil_217_merged592_123_select(stencil_2, root, stencil_216, stencil_217, dynamic_address);
	set_at<96, 128>(result, stencil_2_stencil_217_merged592_123_res);
	return result;
}

// stencil_217_merged592_write
//	stencil_2_stencil_217_merged592_88
//	stencil_2_stencil_217_merged592_89
//	stencil_2_stencil_217_merged592_90
//	stencil_2_stencil_217_merged592_91
inline void stencil_2_stencil_217_merged592_write_bundle_write(hw_uint<128>& stencil_217_merged592_write, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217, int dynamic_address) {
	hw_uint<32>  stencil_2_stencil_217_merged592_88_res = stencil_217_merged592_write.extract<0, 31>();
	stencil_2_stencil_217_merged592_88_write(stencil_2_stencil_217_merged592_88_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_89_res = stencil_217_merged592_write.extract<32, 63>();
	stencil_2_stencil_217_merged592_89_write(stencil_2_stencil_217_merged592_89_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_90_res = stencil_217_merged592_write.extract<64, 95>();
	stencil_2_stencil_217_merged592_90_write(stencil_2_stencil_217_merged592_90_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
	hw_uint<32>  stencil_2_stencil_217_merged592_91_res = stencil_217_merged592_write.extract<96, 127>();
	stencil_2_stencil_217_merged592_91_write(stencil_2_stencil_217_merged592_91_res, stencil_2, root, stencil_216, stencil_217, dynamic_address);
}

// stencil_323_merged595_read
//	stencil_2_stencil_323_merged595_48
//	stencil_2_stencil_323_merged595_50
//	stencil_2_stencil_323_merged595_51
//	stencil_2_stencil_323_merged595_52
//	stencil_2_stencil_323_merged595_53
//	stencil_2_stencil_323_merged595_54
//	stencil_2_stencil_323_merged595_55
//	stencil_2_stencil_323_merged595_56
//	stencil_2_stencil_323_merged595_57
//	stencil_2_stencil_323_merged595_58
//	stencil_2_stencil_323_merged595_60
//	stencil_2_stencil_323_merged595_61
//	stencil_2_stencil_323_merged595_62
//	stencil_2_stencil_323_merged595_63
//	stencil_2_stencil_323_merged595_64
//	stencil_2_stencil_323_merged595_65
//	stencil_2_stencil_323_merged595_66
//	stencil_2_stencil_323_merged595_67
//	stencil_2_stencil_323_merged595_68
//	stencil_2_stencil_323_merged595_70
//	stencil_2_stencil_323_merged595_71
//	stencil_2_stencil_323_merged595_72
//	stencil_2_stencil_323_merged595_73
//	stencil_2_stencil_323_merged595_74
//	stencil_2_stencil_323_merged595_75
//	stencil_2_stencil_323_merged595_76
//	stencil_2_stencil_323_merged595_77
//	stencil_2_stencil_323_merged595_78
//	stencil_2_stencil_323_merged595_80
//	stencil_2_stencil_323_merged595_81
//	stencil_2_stencil_323_merged595_82
//	stencil_2_stencil_323_merged595_83
//	stencil_2_stencil_323_merged595_84
//	stencil_2_stencil_323_merged595_85
//	stencil_2_stencil_323_merged595_86
//	stencil_2_stencil_323_merged595_87
inline hw_uint<1152> stencil_2_stencil_323_merged595_read_bundle_read(stencil_2_cache& stencil_2, int root, int stencil_322, int stencil_323, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_2_stencil_323_merged595_48
    // stencil_2_stencil_323_merged595_50
    // stencil_2_stencil_323_merged595_51
    // stencil_2_stencil_323_merged595_52
    // stencil_2_stencil_323_merged595_53
    // stencil_2_stencil_323_merged595_54
    // stencil_2_stencil_323_merged595_55
    // stencil_2_stencil_323_merged595_56
    // stencil_2_stencil_323_merged595_57
    // stencil_2_stencil_323_merged595_58
    // stencil_2_stencil_323_merged595_60
    // stencil_2_stencil_323_merged595_61
    // stencil_2_stencil_323_merged595_62
    // stencil_2_stencil_323_merged595_63
    // stencil_2_stencil_323_merged595_64
    // stencil_2_stencil_323_merged595_65
    // stencil_2_stencil_323_merged595_66
    // stencil_2_stencil_323_merged595_67
    // stencil_2_stencil_323_merged595_68
    // stencil_2_stencil_323_merged595_70
    // stencil_2_stencil_323_merged595_71
    // stencil_2_stencil_323_merged595_72
    // stencil_2_stencil_323_merged595_73
    // stencil_2_stencil_323_merged595_74
    // stencil_2_stencil_323_merged595_75
    // stencil_2_stencil_323_merged595_76
    // stencil_2_stencil_323_merged595_77
    // stencil_2_stencil_323_merged595_78
    // stencil_2_stencil_323_merged595_80
    // stencil_2_stencil_323_merged595_81
    // stencil_2_stencil_323_merged595_82
    // stencil_2_stencil_323_merged595_83
    // stencil_2_stencil_323_merged595_84
    // stencil_2_stencil_323_merged595_85
    // stencil_2_stencil_323_merged595_86
    // stencil_2_stencil_323_merged595_87

	hw_uint<1152> result;
	hw_uint<32>  stencil_2_stencil_323_merged595_48_res = stencil_2_stencil_323_merged595_48_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<0, 1152>(result, stencil_2_stencil_323_merged595_48_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_50_res = stencil_2_stencil_323_merged595_50_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<32, 1152>(result, stencil_2_stencil_323_merged595_50_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_51_res = stencil_2_stencil_323_merged595_51_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<64, 1152>(result, stencil_2_stencil_323_merged595_51_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_52_res = stencil_2_stencil_323_merged595_52_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<96, 1152>(result, stencil_2_stencil_323_merged595_52_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_53_res = stencil_2_stencil_323_merged595_53_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<128, 1152>(result, stencil_2_stencil_323_merged595_53_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_54_res = stencil_2_stencil_323_merged595_54_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<160, 1152>(result, stencil_2_stencil_323_merged595_54_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_55_res = stencil_2_stencil_323_merged595_55_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<192, 1152>(result, stencil_2_stencil_323_merged595_55_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_56_res = stencil_2_stencil_323_merged595_56_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<224, 1152>(result, stencil_2_stencil_323_merged595_56_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_57_res = stencil_2_stencil_323_merged595_57_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<256, 1152>(result, stencil_2_stencil_323_merged595_57_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_58_res = stencil_2_stencil_323_merged595_58_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<288, 1152>(result, stencil_2_stencil_323_merged595_58_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_60_res = stencil_2_stencil_323_merged595_60_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<320, 1152>(result, stencil_2_stencil_323_merged595_60_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_61_res = stencil_2_stencil_323_merged595_61_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<352, 1152>(result, stencil_2_stencil_323_merged595_61_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_62_res = stencil_2_stencil_323_merged595_62_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<384, 1152>(result, stencil_2_stencil_323_merged595_62_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_63_res = stencil_2_stencil_323_merged595_63_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<416, 1152>(result, stencil_2_stencil_323_merged595_63_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_64_res = stencil_2_stencil_323_merged595_64_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<448, 1152>(result, stencil_2_stencil_323_merged595_64_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_65_res = stencil_2_stencil_323_merged595_65_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<480, 1152>(result, stencil_2_stencil_323_merged595_65_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_66_res = stencil_2_stencil_323_merged595_66_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<512, 1152>(result, stencil_2_stencil_323_merged595_66_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_67_res = stencil_2_stencil_323_merged595_67_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<544, 1152>(result, stencil_2_stencil_323_merged595_67_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_68_res = stencil_2_stencil_323_merged595_68_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<576, 1152>(result, stencil_2_stencil_323_merged595_68_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_70_res = stencil_2_stencil_323_merged595_70_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<608, 1152>(result, stencil_2_stencil_323_merged595_70_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_71_res = stencil_2_stencil_323_merged595_71_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<640, 1152>(result, stencil_2_stencil_323_merged595_71_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_72_res = stencil_2_stencil_323_merged595_72_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<672, 1152>(result, stencil_2_stencil_323_merged595_72_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_73_res = stencil_2_stencil_323_merged595_73_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<704, 1152>(result, stencil_2_stencil_323_merged595_73_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_74_res = stencil_2_stencil_323_merged595_74_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<736, 1152>(result, stencil_2_stencil_323_merged595_74_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_75_res = stencil_2_stencil_323_merged595_75_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<768, 1152>(result, stencil_2_stencil_323_merged595_75_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_76_res = stencil_2_stencil_323_merged595_76_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<800, 1152>(result, stencil_2_stencil_323_merged595_76_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_77_res = stencil_2_stencil_323_merged595_77_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<832, 1152>(result, stencil_2_stencil_323_merged595_77_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_78_res = stencil_2_stencil_323_merged595_78_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<864, 1152>(result, stencil_2_stencil_323_merged595_78_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_80_res = stencil_2_stencil_323_merged595_80_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<896, 1152>(result, stencil_2_stencil_323_merged595_80_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_81_res = stencil_2_stencil_323_merged595_81_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<928, 1152>(result, stencil_2_stencil_323_merged595_81_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_82_res = stencil_2_stencil_323_merged595_82_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<960, 1152>(result, stencil_2_stencil_323_merged595_82_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_83_res = stencil_2_stencil_323_merged595_83_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<992, 1152>(result, stencil_2_stencil_323_merged595_83_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_84_res = stencil_2_stencil_323_merged595_84_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<1024, 1152>(result, stencil_2_stencil_323_merged595_84_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_85_res = stencil_2_stencil_323_merged595_85_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<1056, 1152>(result, stencil_2_stencil_323_merged595_85_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_86_res = stencil_2_stencil_323_merged595_86_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<1088, 1152>(result, stencil_2_stencil_323_merged595_86_res);
	hw_uint<32>  stencil_2_stencil_323_merged595_87_res = stencil_2_stencil_323_merged595_87_select(stencil_2, root, stencil_322, stencil_323, dynamic_address);
	set_at<1120, 1152>(result, stencil_2_stencil_323_merged595_87_res);
	return result;
}

#include "hw_classes.h"

struct stencil_3_stencil_323_merged595_44_merged_banks_9_cache {
	// RAM Box: {[2, 126], [-1, 128]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 34, 67
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 32> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_67() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_3_stencil_323_merged595_45_merged_banks_9_cache {
	// RAM Box: {[1, 125], [-1, 128]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 34, 67
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 32> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 32> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_67() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_3_stencil_323_merged595_46_merged_banks_9_cache {
	// RAM Box: {[0, 128], [-1, 128]}
	// Capacity: 68
	// # of read delays: 6
  // 0, 1, 33, 34, 66, 67
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 31> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33() {
		return f4;
	}

	inline hw_uint<32>  peek_34() {
		return f6;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_66() {
		return f8;
	}

	inline hw_uint<32>  peek_67() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_3_stencil_323_merged595_47_merged_banks_9_cache {
	// RAM Box: {[-1, 127], [-1, 128]}
	// Capacity: 68
	// # of read delays: 6
  // 0, 1, 33, 34, 66, 67
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 31> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33() {
		return f4;
	}

	inline hw_uint<32>  peek_34() {
		return f6;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_66() {
		return f8;
	}

	inline hw_uint<32>  peek_67() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stencil_3_cache {
  // # of banks: 4
  stencil_3_stencil_323_merged595_44_merged_banks_9_cache stencil_3_stencil_323_merged595_44_merged_banks_9;
  stencil_3_stencil_323_merged595_45_merged_banks_9_cache stencil_3_stencil_323_merged595_45_merged_banks_9;
  stencil_3_stencil_323_merged595_46_merged_banks_9_cache stencil_3_stencil_323_merged595_46_merged_banks_9;
  stencil_3_stencil_323_merged595_47_merged_banks_9_cache stencil_3_stencil_323_merged595_47_merged_banks_9;
};



inline void stencil_3_stencil_323_merged595_44_write(hw_uint<32> & stencil_3_stencil_323_merged595_44, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.push(stencil_3_stencil_323_merged595_44);
}

inline void stencil_3_stencil_323_merged595_45_write(hw_uint<32> & stencil_3_stencil_323_merged595_45, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.push(stencil_3_stencil_323_merged595_45);
}

inline void stencil_3_stencil_323_merged595_46_write(hw_uint<32> & stencil_3_stencil_323_merged595_46, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.push(stencil_3_stencil_323_merged595_46);
}

inline void stencil_3_stencil_323_merged595_47_write(hw_uint<32> & stencil_3_stencil_323_merged595_47, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.push(stencil_3_stencil_323_merged595_47);
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_49_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_49 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[2 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_59_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_59 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_69_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_69 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_323_merged595_79_select(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_323_merged595_79 read pattern: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> stencil_3[-1 + 4stencil_323, -1 + stencil_322] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_10_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_10 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_11_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_11 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_0();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_12_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_12 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_0();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_13_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_13 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_14_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_14 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_66();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_16_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_16 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_17_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_17 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_18_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_18 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_33();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_19_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_19 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_20_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_20 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_21_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_21 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_0();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_22_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_22 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_23_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_23 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_24_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_24 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_26_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_26 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_27_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_27 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_28_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_28 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_29_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_29 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_30_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_30 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_31_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_31 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_32_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_32 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_33_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_33 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_34_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_34 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_36_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_36 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_37_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_37 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[-1 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_38_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_38 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_39_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_39 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_4_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_4 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_66();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_40_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_40 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[-1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_34();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_41_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_41 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_45 = stencil_3.stencil_3_stencil_323_merged595_45_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_45;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_42_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_42 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_43_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_43 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[-1 + 4stencil_429, 1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_1();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_6_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_6 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_66();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_7_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_7 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[2 + 4stencil_429, -1 + stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_44 = stencil_3.stencil_3_stencil_323_merged595_44_merged_banks_9.peek_67();
  return value_stencil_3_stencil_323_merged595_44;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_8_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_8 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[4 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_46 = stencil_3.stencil_3_stencil_323_merged595_46_merged_banks_9.peek_33();
  return value_stencil_3_stencil_323_merged595_46;
  return 0;
}

inline hw_uint<32>  stencil_3_stencil_429_merged598_9_select(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_stencil_429_merged598_9 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_3[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Read schedule : { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  // Write schedule: { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
  auto value_stencil_3_stencil_323_merged595_47 = stencil_3.stencil_3_stencil_323_merged595_47_merged_banks_9.peek_33();
  return value_stencil_3_stencil_323_merged595_47;
  return 0;
}

// # of bundles = 3
// stencil_323_merged595_read
//	stencil_3_stencil_323_merged595_49
//	stencil_3_stencil_323_merged595_59
//	stencil_3_stencil_323_merged595_69
//	stencil_3_stencil_323_merged595_79
inline hw_uint<128> stencil_3_stencil_323_merged595_read_bundle_read(stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_3_stencil_323_merged595_49
    // stencil_3_stencil_323_merged595_59
    // stencil_3_stencil_323_merged595_69
    // stencil_3_stencil_323_merged595_79

	hw_uint<128> result;
	hw_uint<32>  stencil_3_stencil_323_merged595_49_res = stencil_3_stencil_323_merged595_49_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<0, 128>(result, stencil_3_stencil_323_merged595_49_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_59_res = stencil_3_stencil_323_merged595_59_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<32, 128>(result, stencil_3_stencil_323_merged595_59_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_69_res = stencil_3_stencil_323_merged595_69_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<64, 128>(result, stencil_3_stencil_323_merged595_69_res);
	hw_uint<32>  stencil_3_stencil_323_merged595_79_res = stencil_3_stencil_323_merged595_79_select(stencil_3, root, stencil_322, stencil_323, dynamic_address);
	set_at<96, 128>(result, stencil_3_stencil_323_merged595_79_res);
	return result;
}

// stencil_323_merged595_write
//	stencil_3_stencil_323_merged595_44
//	stencil_3_stencil_323_merged595_45
//	stencil_3_stencil_323_merged595_46
//	stencil_3_stencil_323_merged595_47
inline void stencil_3_stencil_323_merged595_write_bundle_write(hw_uint<128>& stencil_323_merged595_write, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323, int dynamic_address) {
	hw_uint<32>  stencil_3_stencil_323_merged595_44_res = stencil_323_merged595_write.extract<0, 31>();
	stencil_3_stencil_323_merged595_44_write(stencil_3_stencil_323_merged595_44_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_45_res = stencil_323_merged595_write.extract<32, 63>();
	stencil_3_stencil_323_merged595_45_write(stencil_3_stencil_323_merged595_45_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_46_res = stencil_323_merged595_write.extract<64, 95>();
	stencil_3_stencil_323_merged595_46_write(stencil_3_stencil_323_merged595_46_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
	hw_uint<32>  stencil_3_stencil_323_merged595_47_res = stencil_323_merged595_write.extract<96, 127>();
	stencil_3_stencil_323_merged595_47_write(stencil_3_stencil_323_merged595_47_res, stencil_3, root, stencil_322, stencil_323, dynamic_address);
}

// stencil_429_merged598_read
//	stencil_3_stencil_429_merged598_4
//	stencil_3_stencil_429_merged598_6
//	stencil_3_stencil_429_merged598_7
//	stencil_3_stencil_429_merged598_8
//	stencil_3_stencil_429_merged598_9
//	stencil_3_stencil_429_merged598_10
//	stencil_3_stencil_429_merged598_11
//	stencil_3_stencil_429_merged598_12
//	stencil_3_stencil_429_merged598_13
//	stencil_3_stencil_429_merged598_14
//	stencil_3_stencil_429_merged598_16
//	stencil_3_stencil_429_merged598_17
//	stencil_3_stencil_429_merged598_18
//	stencil_3_stencil_429_merged598_19
//	stencil_3_stencil_429_merged598_20
//	stencil_3_stencil_429_merged598_21
//	stencil_3_stencil_429_merged598_22
//	stencil_3_stencil_429_merged598_23
//	stencil_3_stencil_429_merged598_24
//	stencil_3_stencil_429_merged598_26
//	stencil_3_stencil_429_merged598_27
//	stencil_3_stencil_429_merged598_28
//	stencil_3_stencil_429_merged598_29
//	stencil_3_stencil_429_merged598_30
//	stencil_3_stencil_429_merged598_31
//	stencil_3_stencil_429_merged598_32
//	stencil_3_stencil_429_merged598_33
//	stencil_3_stencil_429_merged598_34
//	stencil_3_stencil_429_merged598_36
//	stencil_3_stencil_429_merged598_37
//	stencil_3_stencil_429_merged598_38
//	stencil_3_stencil_429_merged598_39
//	stencil_3_stencil_429_merged598_40
//	stencil_3_stencil_429_merged598_41
//	stencil_3_stencil_429_merged598_42
//	stencil_3_stencil_429_merged598_43
inline hw_uint<1152> stencil_3_stencil_429_merged598_read_bundle_read(stencil_3_cache& stencil_3, int root, int stencil_428, int stencil_429, int dynamic_address) {
  // # of ports in bundle: 36
    // stencil_3_stencil_429_merged598_4
    // stencil_3_stencil_429_merged598_6
    // stencil_3_stencil_429_merged598_7
    // stencil_3_stencil_429_merged598_8
    // stencil_3_stencil_429_merged598_9
    // stencil_3_stencil_429_merged598_10
    // stencil_3_stencil_429_merged598_11
    // stencil_3_stencil_429_merged598_12
    // stencil_3_stencil_429_merged598_13
    // stencil_3_stencil_429_merged598_14
    // stencil_3_stencil_429_merged598_16
    // stencil_3_stencil_429_merged598_17
    // stencil_3_stencil_429_merged598_18
    // stencil_3_stencil_429_merged598_19
    // stencil_3_stencil_429_merged598_20
    // stencil_3_stencil_429_merged598_21
    // stencil_3_stencil_429_merged598_22
    // stencil_3_stencil_429_merged598_23
    // stencil_3_stencil_429_merged598_24
    // stencil_3_stencil_429_merged598_26
    // stencil_3_stencil_429_merged598_27
    // stencil_3_stencil_429_merged598_28
    // stencil_3_stencil_429_merged598_29
    // stencil_3_stencil_429_merged598_30
    // stencil_3_stencil_429_merged598_31
    // stencil_3_stencil_429_merged598_32
    // stencil_3_stencil_429_merged598_33
    // stencil_3_stencil_429_merged598_34
    // stencil_3_stencil_429_merged598_36
    // stencil_3_stencil_429_merged598_37
    // stencil_3_stencil_429_merged598_38
    // stencil_3_stencil_429_merged598_39
    // stencil_3_stencil_429_merged598_40
    // stencil_3_stencil_429_merged598_41
    // stencil_3_stencil_429_merged598_42
    // stencil_3_stencil_429_merged598_43

	hw_uint<1152> result;
	hw_uint<32>  stencil_3_stencil_429_merged598_4_res = stencil_3_stencil_429_merged598_4_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<0, 1152>(result, stencil_3_stencil_429_merged598_4_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_6_res = stencil_3_stencil_429_merged598_6_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<32, 1152>(result, stencil_3_stencil_429_merged598_6_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_7_res = stencil_3_stencil_429_merged598_7_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<64, 1152>(result, stencil_3_stencil_429_merged598_7_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_8_res = stencil_3_stencil_429_merged598_8_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<96, 1152>(result, stencil_3_stencil_429_merged598_8_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_9_res = stencil_3_stencil_429_merged598_9_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<128, 1152>(result, stencil_3_stencil_429_merged598_9_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_10_res = stencil_3_stencil_429_merged598_10_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<160, 1152>(result, stencil_3_stencil_429_merged598_10_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_11_res = stencil_3_stencil_429_merged598_11_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<192, 1152>(result, stencil_3_stencil_429_merged598_11_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_12_res = stencil_3_stencil_429_merged598_12_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<224, 1152>(result, stencil_3_stencil_429_merged598_12_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_13_res = stencil_3_stencil_429_merged598_13_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<256, 1152>(result, stencil_3_stencil_429_merged598_13_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_14_res = stencil_3_stencil_429_merged598_14_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<288, 1152>(result, stencil_3_stencil_429_merged598_14_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_16_res = stencil_3_stencil_429_merged598_16_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<320, 1152>(result, stencil_3_stencil_429_merged598_16_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_17_res = stencil_3_stencil_429_merged598_17_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<352, 1152>(result, stencil_3_stencil_429_merged598_17_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_18_res = stencil_3_stencil_429_merged598_18_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<384, 1152>(result, stencil_3_stencil_429_merged598_18_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_19_res = stencil_3_stencil_429_merged598_19_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<416, 1152>(result, stencil_3_stencil_429_merged598_19_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_20_res = stencil_3_stencil_429_merged598_20_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<448, 1152>(result, stencil_3_stencil_429_merged598_20_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_21_res = stencil_3_stencil_429_merged598_21_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<480, 1152>(result, stencil_3_stencil_429_merged598_21_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_22_res = stencil_3_stencil_429_merged598_22_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<512, 1152>(result, stencil_3_stencil_429_merged598_22_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_23_res = stencil_3_stencil_429_merged598_23_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<544, 1152>(result, stencil_3_stencil_429_merged598_23_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_24_res = stencil_3_stencil_429_merged598_24_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<576, 1152>(result, stencil_3_stencil_429_merged598_24_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_26_res = stencil_3_stencil_429_merged598_26_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<608, 1152>(result, stencil_3_stencil_429_merged598_26_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_27_res = stencil_3_stencil_429_merged598_27_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<640, 1152>(result, stencil_3_stencil_429_merged598_27_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_28_res = stencil_3_stencil_429_merged598_28_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<672, 1152>(result, stencil_3_stencil_429_merged598_28_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_29_res = stencil_3_stencil_429_merged598_29_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<704, 1152>(result, stencil_3_stencil_429_merged598_29_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_30_res = stencil_3_stencil_429_merged598_30_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<736, 1152>(result, stencil_3_stencil_429_merged598_30_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_31_res = stencil_3_stencil_429_merged598_31_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<768, 1152>(result, stencil_3_stencil_429_merged598_31_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_32_res = stencil_3_stencil_429_merged598_32_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<800, 1152>(result, stencil_3_stencil_429_merged598_32_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_33_res = stencil_3_stencil_429_merged598_33_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<832, 1152>(result, stencil_3_stencil_429_merged598_33_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_34_res = stencil_3_stencil_429_merged598_34_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<864, 1152>(result, stencil_3_stencil_429_merged598_34_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_36_res = stencil_3_stencil_429_merged598_36_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<896, 1152>(result, stencil_3_stencil_429_merged598_36_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_37_res = stencil_3_stencil_429_merged598_37_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<928, 1152>(result, stencil_3_stencil_429_merged598_37_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_38_res = stencil_3_stencil_429_merged598_38_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<960, 1152>(result, stencil_3_stencil_429_merged598_38_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_39_res = stencil_3_stencil_429_merged598_39_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<992, 1152>(result, stencil_3_stencil_429_merged598_39_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_40_res = stencil_3_stencil_429_merged598_40_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<1024, 1152>(result, stencil_3_stencil_429_merged598_40_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_41_res = stencil_3_stencil_429_merged598_41_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<1056, 1152>(result, stencil_3_stencil_429_merged598_41_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_42_res = stencil_3_stencil_429_merged598_42_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<1088, 1152>(result, stencil_3_stencil_429_merged598_42_res);
	hw_uint<32>  stencil_3_stencil_429_merged598_43_res = stencil_3_stencil_429_merged598_43_select(stencil_3, root, stencil_428, stencil_429, dynamic_address);
	set_at<1120, 1152>(result, stencil_3_stencil_429_merged598_43_res);
	return result;
}

#include "hw_classes.h"

struct stencil_4_stencil_429_merged598_0_to_stencil_4_pw_math_stencil_43436_merged601_224_cache {
	// RAM Box: {[3, 127], [0, 127]}
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

struct stencil_4_stencil_429_merged598_1_to_stencil_4_pw_math_stencil_43436_merged601_225_cache {
	// RAM Box: {[2, 126], [0, 127]}
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

struct stencil_4_stencil_429_merged598_2_to_stencil_4_pw_math_stencil_43436_merged601_226_cache {
	// RAM Box: {[1, 125], [0, 127]}
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

struct stencil_4_stencil_429_merged598_3_to_stencil_4_pw_math_stencil_43436_merged601_227_cache {
	// RAM Box: {[0, 124], [0, 127]}
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

struct stencil_4_cache {
  // # of banks: 4
  stencil_4_stencil_429_merged598_0_to_stencil_4_pw_math_stencil_43436_merged601_224_cache stencil_4_stencil_429_merged598_0_to_stencil_4_pw_math_stencil_43436_merged601_224;
  stencil_4_stencil_429_merged598_1_to_stencil_4_pw_math_stencil_43436_merged601_225_cache stencil_4_stencil_429_merged598_1_to_stencil_4_pw_math_stencil_43436_merged601_225;
  stencil_4_stencil_429_merged598_2_to_stencil_4_pw_math_stencil_43436_merged601_226_cache stencil_4_stencil_429_merged598_2_to_stencil_4_pw_math_stencil_43436_merged601_226;
  stencil_4_stencil_429_merged598_3_to_stencil_4_pw_math_stencil_43436_merged601_227_cache stencil_4_stencil_429_merged598_3_to_stencil_4_pw_math_stencil_43436_merged601_227;
};



inline void stencil_4_stencil_429_merged598_0_write(hw_uint<32> & stencil_4_stencil_429_merged598_0, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_0_to_stencil_4_pw_math_stencil_43436_merged601_224.push(stencil_4_stencil_429_merged598_0);
}

inline void stencil_4_stencil_429_merged598_1_write(hw_uint<32> & stencil_4_stencil_429_merged598_1, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_1_to_stencil_4_pw_math_stencil_43436_merged601_225.push(stencil_4_stencil_429_merged598_1);
}

inline void stencil_4_stencil_429_merged598_2_write(hw_uint<32> & stencil_4_stencil_429_merged598_2, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_2_to_stencil_4_pw_math_stencil_43436_merged601_226.push(stencil_4_stencil_429_merged598_2);
}

inline void stencil_4_stencil_429_merged598_3_write(hw_uint<32> & stencil_4_stencil_429_merged598_3, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  stencil_4.stencil_4_stencil_429_merged598_3_to_stencil_4_pw_math_stencil_43436_merged601_227.push(stencil_4_stencil_429_merged598_3);
}

inline hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_224_select(stencil_4_cache& stencil_4, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_pw_math_stencil_43436_merged601_224 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4[3 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  auto value_stencil_4_stencil_429_merged598_0 = stencil_4.stencil_4_stencil_429_merged598_0_to_stencil_4_pw_math_stencil_43436_merged601_224.peek(/* one reader or all rams */ 0);
  return value_stencil_4_stencil_429_merged598_0;
  return 0;
}

inline hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_225_select(stencil_4_cache& stencil_4, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_pw_math_stencil_43436_merged601_225 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4[2 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  auto value_stencil_4_stencil_429_merged598_1 = stencil_4.stencil_4_stencil_429_merged598_1_to_stencil_4_pw_math_stencil_43436_merged601_225.peek(/* one reader or all rams */ 0);
  return value_stencil_4_stencil_429_merged598_1;
  return 0;
}

inline hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_226_select(stencil_4_cache& stencil_4, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_pw_math_stencil_43436_merged601_226 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4[1 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  auto value_stencil_4_stencil_429_merged598_2 = stencil_4.stencil_4_stencil_429_merged598_2_to_stencil_4_pw_math_stencil_43436_merged601_226.peek(/* one reader or all rams */ 0);
  return value_stencil_4_stencil_429_merged598_2;
  return 0;
}

inline hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_227_select(stencil_4_cache& stencil_4, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_pw_math_stencil_43436_merged601_227 read pattern: { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> stencil_4[4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Read schedule : { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
  // Write schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  auto value_stencil_4_stencil_429_merged598_3 = stencil_4.stencil_4_stencil_429_merged598_3_to_stencil_4_pw_math_stencil_43436_merged601_227.peek(/* one reader or all rams */ 0);
  return value_stencil_4_stencil_429_merged598_3;
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_15_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_15 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[2 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_25_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_25 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[1 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_35_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_35 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

inline hw_uint<32>  stencil_4_stencil_429_merged598_5_select(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_4_stencil_429_merged598_5 read pattern: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> stencil_4[3 + 4stencil_429, stencil_428] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
  return 0;
}

// # of bundles = 3
// pw_math_stencil_43436_merged601_read
//	stencil_4_pw_math_stencil_43436_merged601_224
//	stencil_4_pw_math_stencil_43436_merged601_225
//	stencil_4_pw_math_stencil_43436_merged601_226
//	stencil_4_pw_math_stencil_43436_merged601_227
inline hw_uint<128> stencil_4_pw_math_stencil_43436_merged601_read_bundle_read(stencil_4_cache& stencil_4, int root, int pw_math_stencil_43435, int pw_math_stencil_43436, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_4_pw_math_stencil_43436_merged601_224
    // stencil_4_pw_math_stencil_43436_merged601_225
    // stencil_4_pw_math_stencil_43436_merged601_226
    // stencil_4_pw_math_stencil_43436_merged601_227

	hw_uint<128> result;
	hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_224_res = stencil_4_pw_math_stencil_43436_merged601_224_select(stencil_4, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<0, 128>(result, stencil_4_pw_math_stencil_43436_merged601_224_res);
	hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_225_res = stencil_4_pw_math_stencil_43436_merged601_225_select(stencil_4, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<32, 128>(result, stencil_4_pw_math_stencil_43436_merged601_225_res);
	hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_226_res = stencil_4_pw_math_stencil_43436_merged601_226_select(stencil_4, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<64, 128>(result, stencil_4_pw_math_stencil_43436_merged601_226_res);
	hw_uint<32>  stencil_4_pw_math_stencil_43436_merged601_227_res = stencil_4_pw_math_stencil_43436_merged601_227_select(stencil_4, root, pw_math_stencil_43435, pw_math_stencil_43436, dynamic_address);
	set_at<96, 128>(result, stencil_4_pw_math_stencil_43436_merged601_227_res);
	return result;
}

// stencil_429_merged598_read
//	stencil_4_stencil_429_merged598_5
//	stencil_4_stencil_429_merged598_15
//	stencil_4_stencil_429_merged598_25
//	stencil_4_stencil_429_merged598_35
inline hw_uint<128> stencil_4_stencil_429_merged598_read_bundle_read(stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
  // # of ports in bundle: 4
    // stencil_4_stencil_429_merged598_5
    // stencil_4_stencil_429_merged598_15
    // stencil_4_stencil_429_merged598_25
    // stencil_4_stencil_429_merged598_35

	hw_uint<128> result;
	hw_uint<32>  stencil_4_stencil_429_merged598_5_res = stencil_4_stencil_429_merged598_5_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<0, 128>(result, stencil_4_stencil_429_merged598_5_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_15_res = stencil_4_stencil_429_merged598_15_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<32, 128>(result, stencil_4_stencil_429_merged598_15_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_25_res = stencil_4_stencil_429_merged598_25_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<64, 128>(result, stencil_4_stencil_429_merged598_25_res);
	hw_uint<32>  stencil_4_stencil_429_merged598_35_res = stencil_4_stencil_429_merged598_35_select(stencil_4, root, stencil_428, stencil_429, dynamic_address);
	set_at<96, 128>(result, stencil_4_stencil_429_merged598_35_res);
	return result;
}

// stencil_429_merged598_write
//	stencil_4_stencil_429_merged598_0
//	stencil_4_stencil_429_merged598_1
//	stencil_4_stencil_429_merged598_2
//	stencil_4_stencil_429_merged598_3
inline void stencil_4_stencil_429_merged598_write_bundle_write(hw_uint<128>& stencil_429_merged598_write, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429, int dynamic_address) {
	hw_uint<32>  stencil_4_stencil_429_merged598_0_res = stencil_429_merged598_write.extract<0, 31>();
	stencil_4_stencil_429_merged598_0_write(stencil_4_stencil_429_merged598_0_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_1_res = stencil_429_merged598_write.extract<32, 63>();
	stencil_4_stencil_429_merged598_1_write(stencil_4_stencil_429_merged598_1_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_2_res = stencil_429_merged598_write.extract<64, 95>();
	stencil_4_stencil_429_merged598_2_write(stencil_4_stencil_429_merged598_2_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
	hw_uint<32>  stencil_4_stencil_429_merged598_3_res = stencil_429_merged598_write.extract<96, 127>();
	stencil_4_stencil_429_merged598_3_write(stencil_4_stencil_429_merged598_3_res, stencil_4, root, stencil_428, stencil_429, dynamic_address);
}

// Total re-use buffer capacity: 45440 bits


// Operation logic
inline void stencil_323_merged595(stencil_2_cache& stencil_2, stencil_3_cache& stencil_3, int root, int stencil_322, int stencil_323) {
  // Dynamic address computation

	// Consume: stencil_2
	auto stencil_2__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp___p__1_c_________lp_stencil_322__p___m_1_rp___p___m_1_value = stencil_2_stencil_323_merged595_read_bundle_read(stencil_2/* source_delay */, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_3
	auto stencil_3__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp__c_________lp_stencil_322__p___m_1_rp__value = stencil_3_stencil_323_merged595_read_bundle_read(stencil_3/* source_delay */, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_323_cu593(stencil_2__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp___p__1_c_________lp_stencil_322__p___m_1_rp___p___m_1_value, stencil_3__lp__lp_4_m_stencil_323__p__3_rp___p___m_1_rp__c_________lp_stencil_322__p___m_1_rp__value);
	// Produce: stencil_3
	stencil_3_stencil_323_merged595_write_bundle_write(/* arg names */compute_result, stencil_3, root, stencil_322, stencil_323, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in_oc02_merged583(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc__lp__lp_4_m_pw_math_in_oc02__p__3_rp___p___m_5_rp__c_______lp_pw_math_in_oc01__p___m_5_rp__value = in_oc.read();
	auto compute_result = pw_math_in_oc02_cu581(in_oc__lp__lp_4_m_pw_math_in_oc02__p__3_rp___p___m_5_rp__c_______lp_pw_math_in_oc01__p___m_5_rp__value);
	// Produce: in
	in_pw_math_in_oc02_merged583_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_05_merged586(in_cache& in, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05) {
  // Dynamic address computation

	// Consume: in
	auto in__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp___p__1_c_________lp_stencil_04__p___m_4_rp___p___m_1_value = in_stencil_05_merged586_read_bundle_read(in/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_0
	auto stencil_0__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp__c_________lp_stencil_04__p___m_4_rp__value = stencil_0_stencil_05_merged586_read_bundle_read(stencil_0/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_05_cu584(in__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp___p__1_c_________lp_stencil_04__p___m_4_rp___p___m_1_value, stencil_0__lp__lp_4_m_stencil_05__p__3_rp___p___m_4_rp__c_________lp_stencil_04__p___m_4_rp__value);
	// Produce: stencil_0
	stencil_0_stencil_05_merged586_write_bundle_write(/* arg names */compute_result, stencil_0, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_429_merged598(stencil_3_cache& stencil_3, stencil_4_cache& stencil_4, int root, int stencil_428, int stencil_429) {
  // Dynamic address computation

	// Consume: stencil_3
	auto stencil_3__lp_4_m_stencil_429__p__3_rp___p__1_c______stencil_428__p___m_1_value = stencil_3_stencil_429_merged598_read_bundle_read(stencil_3/* source_delay */, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_4
	auto stencil_4__lp_4_m_stencil_429__p__3_rp__c______stencil_428_value = stencil_4_stencil_429_merged598_read_bundle_read(stencil_4/* source_delay */, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_429_cu596(stencil_3__lp_4_m_stencil_429__p__3_rp___p__1_c______stencil_428__p___m_1_value, stencil_4__lp_4_m_stencil_429__p__3_rp__c______stencil_428_value);
	// Produce: stencil_4
	stencil_4_stencil_429_merged598_write_bundle_write(/* arg names */compute_result, stencil_4, root, stencil_428, stencil_429, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_stencil_43436_merged601(stencil_4_cache& stencil_4, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */out, int root, int pw_math_stencil_43435, int pw_math_stencil_43436) {
  // Dynamic address computation

	// Consume: stencil_4
	auto stencil_4__lp_4_m_pw_math_stencil_43436__p__3_rp__c____pw_math_stencil_43435_value = stencil_4_pw_math_stencil_43436_merged601_read_bundle_read(stencil_4/* source_delay */, root, pw_math_stencil_43435, pw_math_stencil_43436, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_stencil_43436_cu599(stencil_4__lp_4_m_pw_math_stencil_43436__p__3_rp__c____pw_math_stencil_43435_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_111_merged589(stencil_0_cache& stencil_0, stencil_1_cache& stencil_1, int root, int stencil_110, int stencil_111) {
  // Dynamic address computation

	// Consume: stencil_0
	auto stencil_0__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp___p__1_c_________lp_stencil_110__p___m_3_rp___p___m_1_value = stencil_0_stencil_111_merged589_read_bundle_read(stencil_0/* source_delay */, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_1
	auto stencil_1__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp__c_________lp_stencil_110__p___m_3_rp__value = stencil_1_stencil_111_merged589_read_bundle_read(stencil_1/* source_delay */, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_111_cu587(stencil_0__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp___p__1_c_________lp_stencil_110__p___m_3_rp___p___m_1_value, stencil_1__lp__lp_4_m_stencil_111__p__3_rp___p___m_3_rp__c_________lp_stencil_110__p___m_3_rp__value);
	// Produce: stencil_1
	stencil_1_stencil_111_merged589_write_bundle_write(/* arg names */compute_result, stencil_1, root, stencil_110, stencil_111, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stencil_217_merged592(stencil_1_cache& stencil_1, stencil_2_cache& stencil_2, int root, int stencil_216, int stencil_217) {
  // Dynamic address computation

	// Consume: stencil_1
	auto stencil_1__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp___p__1_c_________lp_stencil_216__p___m_2_rp___p___m_1_value = stencil_1_stencil_217_merged592_read_bundle_read(stencil_1/* source_delay */, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: stencil_2
	auto stencil_2__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp__c_________lp_stencil_216__p___m_2_rp__value = stencil_2_stencil_217_merged592_read_bundle_read(stencil_2/* source_delay */, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stencil_217_cu590(stencil_1__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp___p__1_c_________lp_stencil_216__p___m_2_rp___p___m_1_value, stencil_2__lp__lp_4_m_stencil_217__p__3_rp___p___m_2_rp__c_________lp_stencil_216__p___m_2_rp__value);
	// Produce: stencil_2
	stencil_2_stencil_217_merged592_write_bundle_write(/* arg names */compute_result, stencil_2, root, stencil_216, stencil_217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sc_stat(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_stat_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_0_cache stencil_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_1_cache stencil_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_2_cache stencil_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_3_cache stencil_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_4_cache stencil_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34; stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33; stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35; stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
//   { stencil_429_merged598[root = 0, stencil_428, stencil_429] -> [10 + stencil_428, 5 + stencil_429, 5] : 0 <= stencil_428 <= 127 and 0 <= stencil_429 <= 31 }
// Condition for stencil_429_merged598(((-5 + i2 == 0) && (-10 + i0 >= 0) && (137 - i0 >= 0) && (-5 + i1 >= 0) && (36 - i1 >= 0)))
//   { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> [10 + pw_math_stencil_43435, 5 + pw_math_stencil_43436, 6] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
// Condition for pw_math_stencil_43436_merged601(((-6 + i2 == 0) && (-10 + i0 >= 0) && (137 - i0 >= 0) && (-5 + i1 >= 0) && (36 - i1 >= 0)))
//   { stencil_111_merged589[root = 0, stencil_110, stencil_111] -> [4 + stencil_110, 2 + stencil_111, 2] : 0 <= stencil_110 <= 133 and 0 <= stencil_111 <= 34 }
// Condition for stencil_111_merged589(((-2 + i2 == 0) && (-4 + i0 >= 0) && (137 - i0 >= 0) && (-2 + i1 >= 0) && (36 - i1 >= 0)))
//   { stencil_217_merged592[root = 0, stencil_216, stencil_217] -> [6 + stencil_216, 3 + stencil_217, 3] : 0 <= stencil_216 <= 131 and 0 <= stencil_217 <= 33 }
// Condition for stencil_217_merged592(((-3 + i2 == 0) && (-6 + i0 >= 0) && (137 - i0 >= 0) && (-3 + i1 >= 0) && (36 - i1 >= 0)))
//   { stencil_05_merged586[root = 0, stencil_04, stencil_05] -> [2 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 135 and 0 <= stencil_05 <= 35 }
// Condition for stencil_05_merged586(((-1 + i2 == 0) && (-2 + i0 >= 0) && (137 - i0 >= 0) && (-1 + i1 >= 0) && (36 - i1 >= 0)))
//   { stencil_323_merged595[root = 0, stencil_322, stencil_323] -> [8 + stencil_322, 4 + stencil_323, 4] : 0 <= stencil_322 <= 129 and 0 <= stencil_323 <= 32 }
// Condition for stencil_323_merged595(((-4 + i2 == 0) && (-8 + i0 >= 0) && (137 - i0 >= 0) && (-4 + i1 >= 0) && (36 - i1 >= 0)))
//   { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
// Condition for pw_math_in_oc02_merged583(((i2 == 0) && (i0 >= 0) && (137 - i0 >= 0) && (i1 >= 0) && (36 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 137; c0 += 1)
  for (int c1 = 0; c1 <= 36; c1 += 1) {
    pw_math_in_oc02_merged583(0, c0, c1);
    if (c0 >= 2 && c1 >= 1) {
      stencil_05_merged586(0, c0 - 2, c1 - 1);
      if (c0 >= 4 && c1 >= 2) {
        stencil_111_merged589(0, c0 - 4, c1 - 2);
        if (c0 >= 6 && c1 >= 3) {
          stencil_217_merged592(0, c0 - 6, c1 - 3);
          if (c0 >= 8 && c1 >= 4) {
            stencil_323_merged595(0, c0 - 8, c1 - 4);
            if (c0 >= 10 && c1 >= 5) {
              stencil_429_merged598(0, c0 - 10, c1 - 5);
              pw_math_stencil_43436_merged601(0, c0 - 10, c1 - 5);
            }
          }
        }
      }
    }
  }

  */
	for (int c0 = 0; c0 <= 137; c0 += 1)
	  for (int c1 = 0; c1 <= 36; c1 += 1) {
	    pw_math_in_oc02_merged583(in_oc /* buf name */, in, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 1) {
	      stencil_05_merged586(in /* buf name */, stencil_0 /* buf name */, 0, c0 - 2, c1 - 1);
	      if (c0 >= 4 && c1 >= 2) {
	        stencil_111_merged589(stencil_0 /* buf name */, stencil_1 /* buf name */, 0, c0 - 4, c1 - 2);
	        if (c0 >= 6 && c1 >= 3) {
	          stencil_217_merged592(stencil_1 /* buf name */, stencil_2 /* buf name */, 0, c0 - 6, c1 - 3);
	          if (c0 >= 8 && c1 >= 4) {
	            stencil_323_merged595(stencil_2 /* buf name */, stencil_3 /* buf name */, 0, c0 - 8, c1 - 4);
	            if (c0 >= 10 && c1 >= 5) {
	              stencil_429_merged598(stencil_3 /* buf name */, stencil_4 /* buf name */, 0, c0 - 10, c1 - 5);
	              pw_math_stencil_43436_merged601(stencil_4 /* buf name */, out, 0, c0 - 10, c1 - 5);
	            }
	          }
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_stat_wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_stat(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-2 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-3 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-4 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36; pw_math_in_oc02_merged583[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[-5 + 4pw_math_in_oc02, -5 + pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 137 and 0 <= pw_math_in_oc02 <= 36 }
const int pw_math_in_oc02_merged583_read_pipe0_num_transfers = 5106;
  // { pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[3 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[2 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[1 + 4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31; pw_math_stencil_43436_merged601[root = 0, pw_math_stencil_43435, pw_math_stencil_43436] -> out[4pw_math_stencil_43436, pw_math_stencil_43435] : 0 <= pw_math_stencil_43435 <= 127 and 0 <= pw_math_stencil_43436 <= 31 }
const int pw_math_stencil_43436_merged601_write_pipe0_num_transfers = 4096;


extern "C" {

void sc_stat_accel(hw_uint<128>* pw_math_in_oc02_merged583_read_pipe0, hw_uint<128>* pw_math_stencil_43436_merged601_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc02_merged583_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_stencil_43436_merged601_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc02_merged583_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_stencil_43436_merged601_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > pw_math_in_oc02_merged583_read_pipe0_channel;
  static HWStream<hw_uint<128> > pw_math_stencil_43436_merged601_write_pipe0_channel;

  burst_read<128>(pw_math_in_oc02_merged583_read_pipe0, pw_math_in_oc02_merged583_read_pipe0_channel, pw_math_in_oc02_merged583_read_pipe0_num_transfers*size);

  sc_stat_wrapper(pw_math_in_oc02_merged583_read_pipe0_channel, pw_math_stencil_43436_merged601_write_pipe0_channel, size);

  burst_write<128>(pw_math_stencil_43436_merged601_write_pipe0, pw_math_stencil_43436_merged601_write_pipe0_channel, pw_math_stencil_43436_merged601_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_stat_rdai(HWStream<hw_uint<128> >& pw_math_in_oc02_merged583_read_pipe0, HWStream<hw_uint<128> >&  pw_math_stencil_43436_merged601_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc02_merged583_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_stencil_43436_merged601_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_stat(pw_math_in_oc02_merged583_read_pipe0, pw_math_stencil_43436_merged601_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

