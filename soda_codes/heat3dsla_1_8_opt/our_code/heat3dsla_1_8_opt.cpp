#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3dsla_1_8_opt_compute_units.h
#include "heat3dsla_1_8_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_to_heat3dsla_1_8_rd0_cache {
	// RAM Box: {[0, 24], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write1_to_heat3dsla_1_8_rd1_cache {
	// RAM Box: {[1, 25], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write2_to_heat3dsla_1_8_rd2_cache {
	// RAM Box: {[2, 26], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write3_to_heat3dsla_1_8_rd3_cache {
	// RAM Box: {[3, 27], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write4_to_heat3dsla_1_8_rd4_cache {
	// RAM Box: {[4, 28], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write5_to_heat3dsla_1_8_rd5_cache {
	// RAM Box: {[5, 29], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write6_to_heat3dsla_1_8_rd6_cache {
	// RAM Box: {[6, 30], [0, 31], [0, 3]}
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

struct h3_0_h3_0_update_0_write7_to_heat3dsla_1_8_rd7_cache {
	// RAM Box: {[7, 31], [0, 31], [0, 3]}
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

struct h3_0_cache {
  // # of banks: 8
  h3_0_h3_0_update_0_write0_to_heat3dsla_1_8_rd0_cache h3_0_h3_0_update_0_write0_to_heat3dsla_1_8_rd0;
  h3_0_h3_0_update_0_write1_to_heat3dsla_1_8_rd1_cache h3_0_h3_0_update_0_write1_to_heat3dsla_1_8_rd1;
  h3_0_h3_0_update_0_write2_to_heat3dsla_1_8_rd2_cache h3_0_h3_0_update_0_write2_to_heat3dsla_1_8_rd2;
  h3_0_h3_0_update_0_write3_to_heat3dsla_1_8_rd3_cache h3_0_h3_0_update_0_write3_to_heat3dsla_1_8_rd3;
  h3_0_h3_0_update_0_write4_to_heat3dsla_1_8_rd4_cache h3_0_h3_0_update_0_write4_to_heat3dsla_1_8_rd4;
  h3_0_h3_0_update_0_write5_to_heat3dsla_1_8_rd5_cache h3_0_h3_0_update_0_write5_to_heat3dsla_1_8_rd5;
  h3_0_h3_0_update_0_write6_to_heat3dsla_1_8_rd6_cache h3_0_h3_0_update_0_write6_to_heat3dsla_1_8_rd6;
  h3_0_h3_0_update_0_write7_to_heat3dsla_1_8_rd7_cache h3_0_h3_0_update_0_write7_to_heat3dsla_1_8_rd7;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_to_heat3dsla_1_8_rd0.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_to_heat3dsla_1_8_rd1.push(h3_0_h3_0_update_0_write1);
}

inline void h3_0_h3_0_update_0_write2_write(hw_uint<32> & h3_0_h3_0_update_0_write2, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write2_to_heat3dsla_1_8_rd2.push(h3_0_h3_0_update_0_write2);
}

inline void h3_0_h3_0_update_0_write3_write(hw_uint<32> & h3_0_h3_0_update_0_write3, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write3_to_heat3dsla_1_8_rd3.push(h3_0_h3_0_update_0_write3);
}

inline void h3_0_h3_0_update_0_write4_write(hw_uint<32> & h3_0_h3_0_update_0_write4, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write4_to_heat3dsla_1_8_rd4.push(h3_0_h3_0_update_0_write4);
}

inline void h3_0_h3_0_update_0_write5_write(hw_uint<32> & h3_0_h3_0_update_0_write5, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write5_to_heat3dsla_1_8_rd5.push(h3_0_h3_0_update_0_write5);
}

inline void h3_0_h3_0_update_0_write6_write(hw_uint<32> & h3_0_h3_0_update_0_write6, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write6_to_heat3dsla_1_8_rd6.push(h3_0_h3_0_update_0_write6);
}

inline void h3_0_h3_0_update_0_write7_write(hw_uint<32> & h3_0_h3_0_update_0_write7, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write7_to_heat3dsla_1_8_rd7.push(h3_0_h3_0_update_0_write7);
}

inline hw_uint<32>  heat3dsla_1_8_rd0_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd0 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_to_heat3dsla_1_8_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd1_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd1 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_to_heat3dsla_1_8_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd2_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd2 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_to_heat3dsla_1_8_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd3_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd3 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_to_heat3dsla_1_8_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd4_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd4 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_to_heat3dsla_1_8_rd4.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd5_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd5 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_to_heat3dsla_1_8_rd5.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd6_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd6 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_to_heat3dsla_1_8_rd6.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  heat3dsla_1_8_rd7_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3dsla_1_8_rd7 read pattern: { heat3dsla_1_8_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_to_heat3dsla_1_8_rd7.peek(/* one reader or all rams */ 0);
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
//	h3_0_h3_0_update_0_write2
//	h3_0_h3_0_update_0_write3
//	h3_0_h3_0_update_0_write4
//	h3_0_h3_0_update_0_write5
//	h3_0_h3_0_update_0_write6
//	h3_0_h3_0_update_0_write7
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<256>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write2_res = h3_0_update_0_write.extract<64, 95>();
	h3_0_h3_0_update_0_write2_write(h3_0_h3_0_update_0_write2_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write3_res = h3_0_update_0_write.extract<96, 127>();
	h3_0_h3_0_update_0_write3_write(h3_0_h3_0_update_0_write3_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write4_res = h3_0_update_0_write.extract<128, 159>();
	h3_0_h3_0_update_0_write4_write(h3_0_h3_0_update_0_write4_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write5_res = h3_0_update_0_write.extract<160, 191>();
	h3_0_h3_0_update_0_write5_write(h3_0_h3_0_update_0_write5_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write6_res = h3_0_update_0_write.extract<192, 223>();
	h3_0_h3_0_update_0_write6_write(h3_0_h3_0_update_0_write6_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write7_res = h3_0_update_0_write.extract<224, 255>();
	h3_0_h3_0_update_0_write7_write(h3_0_h3_0_update_0_write7_res, h3_0, d0, d1, d2, dynamic_address);
}

// heat3dsla_1_8_update_0_read
//	heat3dsla_1_8_rd0
//	heat3dsla_1_8_rd1
//	heat3dsla_1_8_rd2
//	heat3dsla_1_8_rd3
//	heat3dsla_1_8_rd4
//	heat3dsla_1_8_rd5
//	heat3dsla_1_8_rd6
//	heat3dsla_1_8_rd7
inline hw_uint<256> h3_0_heat3dsla_1_8_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 8
    // heat3dsla_1_8_rd0
    // heat3dsla_1_8_rd1
    // heat3dsla_1_8_rd2
    // heat3dsla_1_8_rd3
    // heat3dsla_1_8_rd4
    // heat3dsla_1_8_rd5
    // heat3dsla_1_8_rd6
    // heat3dsla_1_8_rd7

	hw_uint<256> result;
	hw_uint<32>  heat3dsla_1_8_rd0_res = heat3dsla_1_8_rd0_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<0, 256>(result, heat3dsla_1_8_rd0_res);
	hw_uint<32>  heat3dsla_1_8_rd1_res = heat3dsla_1_8_rd1_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<32, 256>(result, heat3dsla_1_8_rd1_res);
	hw_uint<32>  heat3dsla_1_8_rd2_res = heat3dsla_1_8_rd2_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<64, 256>(result, heat3dsla_1_8_rd2_res);
	hw_uint<32>  heat3dsla_1_8_rd3_res = heat3dsla_1_8_rd3_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<96, 256>(result, heat3dsla_1_8_rd3_res);
	hw_uint<32>  heat3dsla_1_8_rd4_res = heat3dsla_1_8_rd4_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<128, 256>(result, heat3dsla_1_8_rd4_res);
	hw_uint<32>  heat3dsla_1_8_rd5_res = heat3dsla_1_8_rd5_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<160, 256>(result, heat3dsla_1_8_rd5_res);
	hw_uint<32>  heat3dsla_1_8_rd6_res = heat3dsla_1_8_rd6_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<192, 256>(result, heat3dsla_1_8_rd6_res);
	hw_uint<32>  heat3dsla_1_8_rd7_res = heat3dsla_1_8_rd7_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<224, 256>(result, heat3dsla_1_8_rd7_res);
	return result;
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[0, 32], [-1, 31], [0, 3]}
	// Capacity: 416
	// # of read delays: 7
  // 0, 7, 205, 210, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 4> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 5> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 197> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_209() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_210() {
		return f6;
	}

	inline hw_uint<32>  peek_211() {
		return f8;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_217() {
		return f10;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_415() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[1, 25], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[2, 26], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[3, 27], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[4, 28], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[5, 29], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[6, 30], [-1, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 6
  // 0, 7, 205, 211, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 197> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_217() {
		return f8;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_415() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-1, 31], [0, 32], [0, 3]}
	// Capacity: 416
	// # of read delays: 7
  // 0, 7, 205, 211, 212, 217, 415
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 6> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 197> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 4> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 197> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_7() {
		return f2;
	}

	inline hw_uint<32>  peek_204() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_205() {
		return f4;
	}

	inline hw_uint<32>  peek_210() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_211() {
		return f6;
	}

	inline hw_uint<32>  peek_212() {
		return f8;
	}

	inline hw_uint<32>  peek_216() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_217() {
		return f10;
	}

	inline hw_uint<32>  peek_414() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_415() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 197
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 197 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 6
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 8
  in_cc_in_cc_update_0_write0_merged_banks_7_cache in_cc_in_cc_update_0_write0_merged_banks_7;
  in_cc_in_cc_update_0_write1_merged_banks_7_cache in_cc_in_cc_update_0_write1_merged_banks_7;
  in_cc_in_cc_update_0_write2_merged_banks_7_cache in_cc_in_cc_update_0_write2_merged_banks_7;
  in_cc_in_cc_update_0_write3_merged_banks_7_cache in_cc_in_cc_update_0_write3_merged_banks_7;
  in_cc_in_cc_update_0_write4_merged_banks_7_cache in_cc_in_cc_update_0_write4_merged_banks_7;
  in_cc_in_cc_update_0_write5_merged_banks_7_cache in_cc_in_cc_update_0_write5_merged_banks_7;
  in_cc_in_cc_update_0_write6_merged_banks_7_cache in_cc_in_cc_update_0_write6_merged_banks_7;
  in_cc_in_cc_update_0_write7_merged_banks_7_cache in_cc_in_cc_update_0_write7_merged_banks_7;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.push(in_cc_in_cc_update_0_write1);
}

inline void in_cc_in_cc_update_0_write2_write(hw_uint<32> & in_cc_in_cc_update_0_write2, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.push(in_cc_in_cc_update_0_write2);
}

inline void in_cc_in_cc_update_0_write3_write(hw_uint<32> & in_cc_in_cc_update_0_write3, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.push(in_cc_in_cc_update_0_write3);
}

inline void in_cc_in_cc_update_0_write4_write(hw_uint<32> & in_cc_in_cc_update_0_write4, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.push(in_cc_in_cc_update_0_write4);
}

inline void in_cc_in_cc_update_0_write5_write(hw_uint<32> & in_cc_in_cc_update_0_write5, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.push(in_cc_in_cc_update_0_write5);
}

inline void in_cc_in_cc_update_0_write6_write(hw_uint<32> & in_cc_in_cc_update_0_write6, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.push(in_cc_in_cc_update_0_write6);
}

inline void in_cc_in_cc_update_0_write7_write(hw_uint<32> & in_cc_in_cc_update_0_write7, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.push(in_cc_in_cc_update_0_write7);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_212();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd20_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd20 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd21_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd21 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd22_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd22 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd23_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd23 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd24_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd24 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd25_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd25 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd26_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd26 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd27_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd27 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd28_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd28 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd29_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd29 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd30_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd30 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd31_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd31 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd32_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd32 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd33_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd33 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd34_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd34 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd35_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd35 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd36_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd36 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd37_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd37 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd38_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd38 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd39_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd39 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd40_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd40 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd41_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd41 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd42_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd42 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd43_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd43 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd44_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd44 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd45_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd45 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd46_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd46 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd47_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd47 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd48_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd48 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd49_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd49 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd50_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd50 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd51_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd51 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd52_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd52 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd53_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd53 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, 1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_7();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd54_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd54 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, 1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_205();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd55_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd55 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_210();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_211();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, -1 + d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_217();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, -1 + d2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_415();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
//	h3_0_rd5
//	h3_0_rd6
//	h3_0_rd7
//	h3_0_rd8
//	h3_0_rd9
//	h3_0_rd10
//	h3_0_rd11
//	h3_0_rd12
//	h3_0_rd13
//	h3_0_rd14
//	h3_0_rd15
//	h3_0_rd16
//	h3_0_rd17
//	h3_0_rd18
//	h3_0_rd19
//	h3_0_rd20
//	h3_0_rd21
//	h3_0_rd22
//	h3_0_rd23
//	h3_0_rd24
//	h3_0_rd25
//	h3_0_rd26
//	h3_0_rd27
//	h3_0_rd28
//	h3_0_rd29
//	h3_0_rd30
//	h3_0_rd31
//	h3_0_rd32
//	h3_0_rd33
//	h3_0_rd34
//	h3_0_rd35
//	h3_0_rd36
//	h3_0_rd37
//	h3_0_rd38
//	h3_0_rd39
//	h3_0_rd40
//	h3_0_rd41
//	h3_0_rd42
//	h3_0_rd43
//	h3_0_rd44
//	h3_0_rd45
//	h3_0_rd46
//	h3_0_rd47
//	h3_0_rd48
//	h3_0_rd49
//	h3_0_rd50
//	h3_0_rd51
//	h3_0_rd52
//	h3_0_rd53
//	h3_0_rd54
//	h3_0_rd55
inline hw_uint<1792> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6
    // h3_0_rd7
    // h3_0_rd8
    // h3_0_rd9
    // h3_0_rd10
    // h3_0_rd11
    // h3_0_rd12
    // h3_0_rd13
    // h3_0_rd14
    // h3_0_rd15
    // h3_0_rd16
    // h3_0_rd17
    // h3_0_rd18
    // h3_0_rd19
    // h3_0_rd20
    // h3_0_rd21
    // h3_0_rd22
    // h3_0_rd23
    // h3_0_rd24
    // h3_0_rd25
    // h3_0_rd26
    // h3_0_rd27
    // h3_0_rd28
    // h3_0_rd29
    // h3_0_rd30
    // h3_0_rd31
    // h3_0_rd32
    // h3_0_rd33
    // h3_0_rd34
    // h3_0_rd35
    // h3_0_rd36
    // h3_0_rd37
    // h3_0_rd38
    // h3_0_rd39
    // h3_0_rd40
    // h3_0_rd41
    // h3_0_rd42
    // h3_0_rd43
    // h3_0_rd44
    // h3_0_rd45
    // h3_0_rd46
    // h3_0_rd47
    // h3_0_rd48
    // h3_0_rd49
    // h3_0_rd50
    // h3_0_rd51
    // h3_0_rd52
    // h3_0_rd53
    // h3_0_rd54
    // h3_0_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_0_rd19_res);
	hw_uint<32>  h3_0_rd20_res = h3_0_rd20_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_0_rd20_res);
	hw_uint<32>  h3_0_rd21_res = h3_0_rd21_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_0_rd21_res);
	hw_uint<32>  h3_0_rd22_res = h3_0_rd22_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_0_rd22_res);
	hw_uint<32>  h3_0_rd23_res = h3_0_rd23_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_0_rd23_res);
	hw_uint<32>  h3_0_rd24_res = h3_0_rd24_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_0_rd24_res);
	hw_uint<32>  h3_0_rd25_res = h3_0_rd25_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_0_rd25_res);
	hw_uint<32>  h3_0_rd26_res = h3_0_rd26_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_0_rd26_res);
	hw_uint<32>  h3_0_rd27_res = h3_0_rd27_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_0_rd27_res);
	hw_uint<32>  h3_0_rd28_res = h3_0_rd28_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_0_rd28_res);
	hw_uint<32>  h3_0_rd29_res = h3_0_rd29_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_0_rd29_res);
	hw_uint<32>  h3_0_rd30_res = h3_0_rd30_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_0_rd30_res);
	hw_uint<32>  h3_0_rd31_res = h3_0_rd31_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_0_rd31_res);
	hw_uint<32>  h3_0_rd32_res = h3_0_rd32_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_0_rd32_res);
	hw_uint<32>  h3_0_rd33_res = h3_0_rd33_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_0_rd33_res);
	hw_uint<32>  h3_0_rd34_res = h3_0_rd34_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_0_rd34_res);
	hw_uint<32>  h3_0_rd35_res = h3_0_rd35_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_0_rd35_res);
	hw_uint<32>  h3_0_rd36_res = h3_0_rd36_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_0_rd36_res);
	hw_uint<32>  h3_0_rd37_res = h3_0_rd37_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_0_rd37_res);
	hw_uint<32>  h3_0_rd38_res = h3_0_rd38_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_0_rd38_res);
	hw_uint<32>  h3_0_rd39_res = h3_0_rd39_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_0_rd39_res);
	hw_uint<32>  h3_0_rd40_res = h3_0_rd40_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_0_rd40_res);
	hw_uint<32>  h3_0_rd41_res = h3_0_rd41_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_0_rd41_res);
	hw_uint<32>  h3_0_rd42_res = h3_0_rd42_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_0_rd42_res);
	hw_uint<32>  h3_0_rd43_res = h3_0_rd43_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_0_rd43_res);
	hw_uint<32>  h3_0_rd44_res = h3_0_rd44_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_0_rd44_res);
	hw_uint<32>  h3_0_rd45_res = h3_0_rd45_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_0_rd45_res);
	hw_uint<32>  h3_0_rd46_res = h3_0_rd46_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_0_rd46_res);
	hw_uint<32>  h3_0_rd47_res = h3_0_rd47_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_0_rd47_res);
	hw_uint<32>  h3_0_rd48_res = h3_0_rd48_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_0_rd48_res);
	hw_uint<32>  h3_0_rd49_res = h3_0_rd49_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_0_rd49_res);
	hw_uint<32>  h3_0_rd50_res = h3_0_rd50_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_0_rd50_res);
	hw_uint<32>  h3_0_rd51_res = h3_0_rd51_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_0_rd51_res);
	hw_uint<32>  h3_0_rd52_res = h3_0_rd52_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_0_rd52_res);
	hw_uint<32>  h3_0_rd53_res = h3_0_rd53_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_0_rd53_res);
	hw_uint<32>  h3_0_rd54_res = h3_0_rd54_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_0_rd54_res);
	hw_uint<32>  h3_0_rd55_res = h3_0_rd55_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_0_rd55_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
//	in_cc_in_cc_update_0_write2
//	in_cc_in_cc_update_0_write3
//	in_cc_in_cc_update_0_write4
//	in_cc_in_cc_update_0_write5
//	in_cc_in_cc_update_0_write6
//	in_cc_in_cc_update_0_write7
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<256>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write2_res = in_cc_update_0_write.extract<64, 95>();
	in_cc_in_cc_update_0_write2_write(in_cc_in_cc_update_0_write2_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write3_res = in_cc_update_0_write.extract<96, 127>();
	in_cc_in_cc_update_0_write3_write(in_cc_in_cc_update_0_write3_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write4_res = in_cc_update_0_write.extract<128, 159>();
	in_cc_in_cc_update_0_write4_write(in_cc_in_cc_update_0_write4_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write5_res = in_cc_update_0_write.extract<160, 191>();
	in_cc_in_cc_update_0_write5_write(in_cc_in_cc_update_0_write5_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write6_res = in_cc_update_0_write.extract<192, 223>();
	in_cc_in_cc_update_0_write6_write(in_cc_in_cc_update_0_write6_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write7_res = in_cc_update_0_write.extract<224, 255>();
	in_cc_in_cc_update_0_write7_write(in_cc_in_cc_update_0_write7_res, in_cc, d0, d1, d2, dynamic_address);
}

// Total re-use buffer capacity: 106240 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */in, in_cc_cache& in_cc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_8(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_8(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3dsla_1_8_update_0(h3_0_cache& h3_0, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */heat3dsla_1_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_heat3dsla_1_8_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3dsla_1_8_generated_compute_unrolled_8(h3_0_0_c__0_value);
	// Produce: heat3dsla_1_8
	heat3dsla_1_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3dsla_1_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3dsla_1_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3dsla_1_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3; h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3; in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
//   { heat3dsla_1_8_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 3] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
// Condition for heat3dsla_1_8_update_0(((-3 + i3 == 0) && (-1 + i2 >= 0) && (4 - i2 >= 0) && (-1 + i1 >= 0) && (32 - i1 >= 0) && (-1 + i0 >= 0) && (4 - i0 >= 0)))
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 31 and 0 <= d2 <= 3 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (-1 + i2 >= 0) && (4 - i2 >= 0) && (-1 + i1 >= 0) && (32 - i1 >= 0) && (-1 + i0 >= 0) && (4 - i0 >= 0)))
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 32 and -1 <= d2 <= 4 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (1 + i2 >= 0) && (4 - i2 >= 0) && (1 + i1 >= 0) && (32 - i1 >= 0) && (1 + i0 >= 0) && (4 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // heat3dsla_1_8_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -1; c0 <= 4; c0++) {
  for (int c1 = -1; c1 <= 32; c1++) {
    for (int c2 = -1; c2 <= 4; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-1 <= c2 && c2 <= 4) && ((c2 - 0) % 1 == 0) && (-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 4) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((1 <= c2 && c2 <= 4) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((1 <= c2 && c2 <= 4) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
        heat3dsla_1_8_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // heat3dsla_1_8_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -1; c0 <= 4; c0++) {
	  for (int c1 = -1; c1 <= 32; c1++) {
	    for (int c2 = -1; c2 <= 4; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-1 <= c2 && c2 <= 4) && ((c2 - 0) % 1 == 0) && (-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 4) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 4) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 4) && ((c2 - 1) % 1 == 0) && (1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 4) && ((c0 - 1) % 1 == 0)) {
	        heat3dsla_1_8_update_0(h3_0 /* buf name */, heat3dsla_1_8, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3dsla_1_8_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3dsla_1_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3dsla_1_8_opt(in, heat3dsla_1_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3dsla_1_8_update_0[root = 0, heat3dsla_1_8_0, heat3dsla_1_8_1, heat3dsla_1_8_2] -> heat3dsla_1_8[0, 0] : 0 <= heat3dsla_1_8_0 <= 3 and 0 <= heat3dsla_1_8_1 <= 31 and 0 <= heat3dsla_1_8_2 <= 3 }
const int heat3dsla_1_8_update_0_write_pipe0_num_transfers = 512;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -1 <= in_cc_0 <= 4 and -1 <= in_cc_1 <= 32 and -1 <= in_cc_2 <= 4 }
const int in_cc_update_0_read_pipe0_num_transfers = 1224;


extern "C" {

void heat3dsla_1_8_opt_accel(hw_uint<256>* in_cc_update_0_read_pipe0, hw_uint<256>* heat3dsla_1_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3dsla_1_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3dsla_1_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > heat3dsla_1_8_update_0_write_pipe0_channel;

  burst_read<256>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3dsla_1_8_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3dsla_1_8_update_0_write_pipe0_channel, size);

  burst_write<256>(heat3dsla_1_8_update_0_write_pipe0, heat3dsla_1_8_update_0_write_pipe0_channel, heat3dsla_1_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3dsla_1_8_opt_rdai(HWStream<hw_uint<256> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<256> >&  heat3dsla_1_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3dsla_1_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3dsla_1_8_opt(in_cc_update_0_read_pipe0, heat3dsla_1_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

