#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: one_pipe80_opt_compute_units.h
#include "one_pipe80_opt_compute_units.h"

#include "hw_classes.h"

struct in_off_chip0_in_off_chip0_update_0_write0_to_one_pipe8_rd0_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write1_to_one_pipe8_rd1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write2_to_one_pipe8_rd2_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write3_to_one_pipe8_rd3_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write4_to_one_pipe8_rd4_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write5_to_one_pipe8_rd5_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write6_to_one_pipe8_rd6_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
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

struct in_off_chip0_in_off_chip0_update_0_write7_to_one_pipe8_rd7_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
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

struct in_off_chip0_cache {
  // # of banks: 8
  in_off_chip0_in_off_chip0_update_0_write0_to_one_pipe8_rd0_cache in_off_chip0_in_off_chip0_update_0_write0_to_one_pipe8_rd0;
  in_off_chip0_in_off_chip0_update_0_write1_to_one_pipe8_rd1_cache in_off_chip0_in_off_chip0_update_0_write1_to_one_pipe8_rd1;
  in_off_chip0_in_off_chip0_update_0_write2_to_one_pipe8_rd2_cache in_off_chip0_in_off_chip0_update_0_write2_to_one_pipe8_rd2;
  in_off_chip0_in_off_chip0_update_0_write3_to_one_pipe8_rd3_cache in_off_chip0_in_off_chip0_update_0_write3_to_one_pipe8_rd3;
  in_off_chip0_in_off_chip0_update_0_write4_to_one_pipe8_rd4_cache in_off_chip0_in_off_chip0_update_0_write4_to_one_pipe8_rd4;
  in_off_chip0_in_off_chip0_update_0_write5_to_one_pipe8_rd5_cache in_off_chip0_in_off_chip0_update_0_write5_to_one_pipe8_rd5;
  in_off_chip0_in_off_chip0_update_0_write6_to_one_pipe8_rd6_cache in_off_chip0_in_off_chip0_update_0_write6_to_one_pipe8_rd6;
  in_off_chip0_in_off_chip0_update_0_write7_to_one_pipe8_rd7_cache in_off_chip0_in_off_chip0_update_0_write7_to_one_pipe8_rd7;
};



inline void in_off_chip0_in_off_chip0_update_0_write0_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write0, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_to_one_pipe8_rd0.push(in_off_chip0_in_off_chip0_update_0_write0);
}

inline void in_off_chip0_in_off_chip0_update_0_write1_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write1, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write1_to_one_pipe8_rd1.push(in_off_chip0_in_off_chip0_update_0_write1);
}

inline void in_off_chip0_in_off_chip0_update_0_write2_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write2, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write2_to_one_pipe8_rd2.push(in_off_chip0_in_off_chip0_update_0_write2);
}

inline void in_off_chip0_in_off_chip0_update_0_write3_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write3, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write3_to_one_pipe8_rd3.push(in_off_chip0_in_off_chip0_update_0_write3);
}

inline void in_off_chip0_in_off_chip0_update_0_write4_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write4, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write4_to_one_pipe8_rd4.push(in_off_chip0_in_off_chip0_update_0_write4);
}

inline void in_off_chip0_in_off_chip0_update_0_write5_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write5, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write5_to_one_pipe8_rd5.push(in_off_chip0_in_off_chip0_update_0_write5);
}

inline void in_off_chip0_in_off_chip0_update_0_write6_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write6, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write6_to_one_pipe8_rd6.push(in_off_chip0_in_off_chip0_update_0_write6);
}

inline void in_off_chip0_in_off_chip0_update_0_write7_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write7, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write7_to_one_pipe8_rd7.push(in_off_chip0_in_off_chip0_update_0_write7);
}

inline hw_uint<16> one_pipe8_rd0_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd0 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write0 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_to_one_pipe8_rd0.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write0;
  return 0;
}

inline hw_uint<16> one_pipe8_rd1_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd1 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write1 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write1_to_one_pipe8_rd1.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write1;
  return 0;
}

inline hw_uint<16> one_pipe8_rd2_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd2 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write2 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write2_to_one_pipe8_rd2.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write2;
  return 0;
}

inline hw_uint<16> one_pipe8_rd3_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd3 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write3 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write3_to_one_pipe8_rd3.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write3;
  return 0;
}

inline hw_uint<16> one_pipe8_rd4_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd4 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write4 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write4_to_one_pipe8_rd4.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write4;
  return 0;
}

inline hw_uint<16> one_pipe8_rd5_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd5 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write5 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write5_to_one_pipe8_rd5.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write5;
  return 0;
}

inline hw_uint<16> one_pipe8_rd6_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd6 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write6 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write6_to_one_pipe8_rd6.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write6;
  return 0;
}

inline hw_uint<16> one_pipe8_rd7_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe8_rd7 read pattern: { one_pipe8_update_0[d0, d1] -> in_off_chip0[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write7 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write7_to_one_pipe8_rd7.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_in_off_chip0_update_0_write7;
  return 0;
}

// # of bundles = 2
// in_off_chip0_update_0_write
//	in_off_chip0_in_off_chip0_update_0_write0
//	in_off_chip0_in_off_chip0_update_0_write1
//	in_off_chip0_in_off_chip0_update_0_write2
//	in_off_chip0_in_off_chip0_update_0_write3
//	in_off_chip0_in_off_chip0_update_0_write4
//	in_off_chip0_in_off_chip0_update_0_write5
//	in_off_chip0_in_off_chip0_update_0_write6
//	in_off_chip0_in_off_chip0_update_0_write7
inline void in_off_chip0_in_off_chip0_update_0_write_bundle_write(hw_uint<128>& in_off_chip0_update_0_write, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write0_res = in_off_chip0_update_0_write.extract<0, 15>();
	in_off_chip0_in_off_chip0_update_0_write0_write(in_off_chip0_in_off_chip0_update_0_write0_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write1_res = in_off_chip0_update_0_write.extract<16, 31>();
	in_off_chip0_in_off_chip0_update_0_write1_write(in_off_chip0_in_off_chip0_update_0_write1_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write2_res = in_off_chip0_update_0_write.extract<32, 47>();
	in_off_chip0_in_off_chip0_update_0_write2_write(in_off_chip0_in_off_chip0_update_0_write2_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write3_res = in_off_chip0_update_0_write.extract<48, 63>();
	in_off_chip0_in_off_chip0_update_0_write3_write(in_off_chip0_in_off_chip0_update_0_write3_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write4_res = in_off_chip0_update_0_write.extract<64, 79>();
	in_off_chip0_in_off_chip0_update_0_write4_write(in_off_chip0_in_off_chip0_update_0_write4_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write5_res = in_off_chip0_update_0_write.extract<80, 95>();
	in_off_chip0_in_off_chip0_update_0_write5_write(in_off_chip0_in_off_chip0_update_0_write5_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write6_res = in_off_chip0_update_0_write.extract<96, 111>();
	in_off_chip0_in_off_chip0_update_0_write6_write(in_off_chip0_in_off_chip0_update_0_write6_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write7_res = in_off_chip0_update_0_write.extract<112, 127>();
	in_off_chip0_in_off_chip0_update_0_write7_write(in_off_chip0_in_off_chip0_update_0_write7_res, in_off_chip0, d0, d1, dynamic_address);
}

// one_pipe8_update_0_read
//	one_pipe8_rd0
//	one_pipe8_rd1
//	one_pipe8_rd2
//	one_pipe8_rd3
//	one_pipe8_rd4
//	one_pipe8_rd5
//	one_pipe8_rd6
//	one_pipe8_rd7
inline hw_uint<128> in_off_chip0_one_pipe8_update_0_read_bundle_read(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 8
    // one_pipe8_rd0
    // one_pipe8_rd1
    // one_pipe8_rd2
    // one_pipe8_rd3
    // one_pipe8_rd4
    // one_pipe8_rd5
    // one_pipe8_rd6
    // one_pipe8_rd7

	hw_uint<128> result;
	hw_uint<16> one_pipe8_rd0_res = one_pipe8_rd0_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<0, 128>(result, one_pipe8_rd0_res);
	hw_uint<16> one_pipe8_rd1_res = one_pipe8_rd1_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<16, 128>(result, one_pipe8_rd1_res);
	hw_uint<16> one_pipe8_rd2_res = one_pipe8_rd2_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<32, 128>(result, one_pipe8_rd2_res);
	hw_uint<16> one_pipe8_rd3_res = one_pipe8_rd3_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<48, 128>(result, one_pipe8_rd3_res);
	hw_uint<16> one_pipe8_rd4_res = one_pipe8_rd4_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<64, 128>(result, one_pipe8_rd4_res);
	hw_uint<16> one_pipe8_rd5_res = one_pipe8_rd5_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<80, 128>(result, one_pipe8_rd5_res);
	hw_uint<16> one_pipe8_rd6_res = one_pipe8_rd6_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<96, 128>(result, one_pipe8_rd6_res);
	hw_uint<16> one_pipe8_rd7_res = one_pipe8_rd7_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<112, 128>(result, one_pipe8_rd7_res);
	return result;
}

#include "hw_classes.h"

struct one_pipe8_one_pipe8_update_0_write0_to_one_pipe80_rd0_cache {
	// RAM Box: {[0, 1912], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write1_to_one_pipe80_rd1_cache {
	// RAM Box: {[1, 1913], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write2_to_one_pipe80_rd2_cache {
	// RAM Box: {[2, 1914], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write3_to_one_pipe80_rd3_cache {
	// RAM Box: {[3, 1915], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write4_to_one_pipe80_rd4_cache {
	// RAM Box: {[4, 1916], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write5_to_one_pipe80_rd5_cache {
	// RAM Box: {[5, 1917], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write6_to_one_pipe80_rd6_cache {
	// RAM Box: {[6, 1918], [0, 1079]}
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

struct one_pipe8_one_pipe8_update_0_write7_to_one_pipe80_rd7_cache {
	// RAM Box: {[7, 1919], [0, 1079]}
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

struct one_pipe8_cache {
  // # of banks: 8
  one_pipe8_one_pipe8_update_0_write0_to_one_pipe80_rd0_cache one_pipe8_one_pipe8_update_0_write0_to_one_pipe80_rd0;
  one_pipe8_one_pipe8_update_0_write1_to_one_pipe80_rd1_cache one_pipe8_one_pipe8_update_0_write1_to_one_pipe80_rd1;
  one_pipe8_one_pipe8_update_0_write2_to_one_pipe80_rd2_cache one_pipe8_one_pipe8_update_0_write2_to_one_pipe80_rd2;
  one_pipe8_one_pipe8_update_0_write3_to_one_pipe80_rd3_cache one_pipe8_one_pipe8_update_0_write3_to_one_pipe80_rd3;
  one_pipe8_one_pipe8_update_0_write4_to_one_pipe80_rd4_cache one_pipe8_one_pipe8_update_0_write4_to_one_pipe80_rd4;
  one_pipe8_one_pipe8_update_0_write5_to_one_pipe80_rd5_cache one_pipe8_one_pipe8_update_0_write5_to_one_pipe80_rd5;
  one_pipe8_one_pipe8_update_0_write6_to_one_pipe80_rd6_cache one_pipe8_one_pipe8_update_0_write6_to_one_pipe80_rd6;
  one_pipe8_one_pipe8_update_0_write7_to_one_pipe80_rd7_cache one_pipe8_one_pipe8_update_0_write7_to_one_pipe80_rd7;
};



inline void one_pipe8_one_pipe8_update_0_write0_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write0, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write0_to_one_pipe80_rd0.push(one_pipe8_one_pipe8_update_0_write0);
}

inline void one_pipe8_one_pipe8_update_0_write1_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write1, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write1_to_one_pipe80_rd1.push(one_pipe8_one_pipe8_update_0_write1);
}

inline void one_pipe8_one_pipe8_update_0_write2_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write2, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write2_to_one_pipe80_rd2.push(one_pipe8_one_pipe8_update_0_write2);
}

inline void one_pipe8_one_pipe8_update_0_write3_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write3, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write3_to_one_pipe80_rd3.push(one_pipe8_one_pipe8_update_0_write3);
}

inline void one_pipe8_one_pipe8_update_0_write4_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write4, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write4_to_one_pipe80_rd4.push(one_pipe8_one_pipe8_update_0_write4);
}

inline void one_pipe8_one_pipe8_update_0_write5_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write5, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write5_to_one_pipe80_rd5.push(one_pipe8_one_pipe8_update_0_write5);
}

inline void one_pipe8_one_pipe8_update_0_write6_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write6, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write6_to_one_pipe80_rd6.push(one_pipe8_one_pipe8_update_0_write6);
}

inline void one_pipe8_one_pipe8_update_0_write7_write(hw_uint<16>& one_pipe8_one_pipe8_update_0_write7, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  one_pipe8.one_pipe8_one_pipe8_update_0_write7_to_one_pipe80_rd7.push(one_pipe8_one_pipe8_update_0_write7);
}

inline hw_uint<16> one_pipe80_rd0_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd0 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write0 = one_pipe8.one_pipe8_one_pipe8_update_0_write0_to_one_pipe80_rd0.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write0;
  return 0;
}

inline hw_uint<16> one_pipe80_rd1_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd1 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[1 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write1 = one_pipe8.one_pipe8_one_pipe8_update_0_write1_to_one_pipe80_rd1.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write1;
  return 0;
}

inline hw_uint<16> one_pipe80_rd2_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd2 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[2 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write2 = one_pipe8.one_pipe8_one_pipe8_update_0_write2_to_one_pipe80_rd2.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write2;
  return 0;
}

inline hw_uint<16> one_pipe80_rd3_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd3 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[3 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write3 = one_pipe8.one_pipe8_one_pipe8_update_0_write3_to_one_pipe80_rd3.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write3;
  return 0;
}

inline hw_uint<16> one_pipe80_rd4_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd4 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[4 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write4 = one_pipe8.one_pipe8_one_pipe8_update_0_write4_to_one_pipe80_rd4.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write4;
  return 0;
}

inline hw_uint<16> one_pipe80_rd5_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd5 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[5 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write5 = one_pipe8.one_pipe8_one_pipe8_update_0_write5_to_one_pipe80_rd5.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write5;
  return 0;
}

inline hw_uint<16> one_pipe80_rd6_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd6 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[6 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write6 = one_pipe8.one_pipe8_one_pipe8_update_0_write6_to_one_pipe80_rd6.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write6;
  return 0;
}

inline hw_uint<16> one_pipe80_rd7_select(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // one_pipe80_rd7 read pattern: { one_pipe80_update_0[d0, d1] -> one_pipe8[7 + 8d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Read schedule : { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  // Write schedule: { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
  auto value_one_pipe8_one_pipe8_update_0_write7 = one_pipe8.one_pipe8_one_pipe8_update_0_write7_to_one_pipe80_rd7.peek(/* one reader or all rams */ 0);
  return value_one_pipe8_one_pipe8_update_0_write7;
  return 0;
}

// # of bundles = 2
// one_pipe80_update_0_read
//	one_pipe80_rd0
//	one_pipe80_rd1
//	one_pipe80_rd2
//	one_pipe80_rd3
//	one_pipe80_rd4
//	one_pipe80_rd5
//	one_pipe80_rd6
//	one_pipe80_rd7
inline hw_uint<128> one_pipe8_one_pipe80_update_0_read_bundle_read(one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 8
    // one_pipe80_rd0
    // one_pipe80_rd1
    // one_pipe80_rd2
    // one_pipe80_rd3
    // one_pipe80_rd4
    // one_pipe80_rd5
    // one_pipe80_rd6
    // one_pipe80_rd7

	hw_uint<128> result;
	hw_uint<16> one_pipe80_rd0_res = one_pipe80_rd0_select(one_pipe8, d0, d1, dynamic_address);
	set_at<0, 128>(result, one_pipe80_rd0_res);
	hw_uint<16> one_pipe80_rd1_res = one_pipe80_rd1_select(one_pipe8, d0, d1, dynamic_address);
	set_at<16, 128>(result, one_pipe80_rd1_res);
	hw_uint<16> one_pipe80_rd2_res = one_pipe80_rd2_select(one_pipe8, d0, d1, dynamic_address);
	set_at<32, 128>(result, one_pipe80_rd2_res);
	hw_uint<16> one_pipe80_rd3_res = one_pipe80_rd3_select(one_pipe8, d0, d1, dynamic_address);
	set_at<48, 128>(result, one_pipe80_rd3_res);
	hw_uint<16> one_pipe80_rd4_res = one_pipe80_rd4_select(one_pipe8, d0, d1, dynamic_address);
	set_at<64, 128>(result, one_pipe80_rd4_res);
	hw_uint<16> one_pipe80_rd5_res = one_pipe80_rd5_select(one_pipe8, d0, d1, dynamic_address);
	set_at<80, 128>(result, one_pipe80_rd5_res);
	hw_uint<16> one_pipe80_rd6_res = one_pipe80_rd6_select(one_pipe8, d0, d1, dynamic_address);
	set_at<96, 128>(result, one_pipe80_rd6_res);
	hw_uint<16> one_pipe80_rd7_res = one_pipe80_rd7_select(one_pipe8, d0, d1, dynamic_address);
	set_at<112, 128>(result, one_pipe80_rd7_res);
	return result;
}

// one_pipe8_update_0_write
//	one_pipe8_one_pipe8_update_0_write0
//	one_pipe8_one_pipe8_update_0_write1
//	one_pipe8_one_pipe8_update_0_write2
//	one_pipe8_one_pipe8_update_0_write3
//	one_pipe8_one_pipe8_update_0_write4
//	one_pipe8_one_pipe8_update_0_write5
//	one_pipe8_one_pipe8_update_0_write6
//	one_pipe8_one_pipe8_update_0_write7
inline void one_pipe8_one_pipe8_update_0_write_bundle_write(hw_uint<128>& one_pipe8_update_0_write, one_pipe8_cache& one_pipe8, int d0, int d1, int dynamic_address) {
	hw_uint<16> one_pipe8_one_pipe8_update_0_write0_res = one_pipe8_update_0_write.extract<0, 15>();
	one_pipe8_one_pipe8_update_0_write0_write(one_pipe8_one_pipe8_update_0_write0_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write1_res = one_pipe8_update_0_write.extract<16, 31>();
	one_pipe8_one_pipe8_update_0_write1_write(one_pipe8_one_pipe8_update_0_write1_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write2_res = one_pipe8_update_0_write.extract<32, 47>();
	one_pipe8_one_pipe8_update_0_write2_write(one_pipe8_one_pipe8_update_0_write2_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write3_res = one_pipe8_update_0_write.extract<48, 63>();
	one_pipe8_one_pipe8_update_0_write3_write(one_pipe8_one_pipe8_update_0_write3_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write4_res = one_pipe8_update_0_write.extract<64, 79>();
	one_pipe8_one_pipe8_update_0_write4_write(one_pipe8_one_pipe8_update_0_write4_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write5_res = one_pipe8_update_0_write.extract<80, 95>();
	one_pipe8_one_pipe8_update_0_write5_write(one_pipe8_one_pipe8_update_0_write5_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write6_res = one_pipe8_update_0_write.extract<96, 111>();
	one_pipe8_one_pipe8_update_0_write6_write(one_pipe8_one_pipe8_update_0_write6_res, one_pipe8, d0, d1, dynamic_address);
	hw_uint<16> one_pipe8_one_pipe8_update_0_write7_res = one_pipe8_update_0_write.extract<112, 127>();
	one_pipe8_one_pipe8_update_0_write7_write(one_pipe8_one_pipe8_update_0_write7_res, one_pipe8, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void one_pipe80_update_0(one_pipe8_cache& one_pipe8, HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */one_pipe80, int d0, int d1) {
  // Dynamic address computation

	// Consume: one_pipe8
	auto one_pipe8_0_c__0_value = one_pipe8_one_pipe80_update_0_read_bundle_read(one_pipe8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_8(one_pipe8_0_c__0_value);
	// Produce: one_pipe80
	one_pipe80.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip0_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */in_off_chip0_oc, in_off_chip0_cache& in_off_chip0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0_oc
	auto in_off_chip0_oc_0_c__0_value = in_off_chip0_oc.read();
	auto compute_result = id_unrolled_8(in_off_chip0_oc_0_c__0_value);
	// Produce: in_off_chip0
	in_off_chip0_in_off_chip0_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void one_pipe8_update_0(in_off_chip0_cache& in_off_chip0, one_pipe8_cache& one_pipe8, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0
	auto in_off_chip0_0_c__0_value = in_off_chip0_one_pipe8_update_0_read_bundle_read(in_off_chip0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_8(in_off_chip0_0_c__0_value);
	// Produce: one_pipe8
	one_pipe8_one_pipe8_update_0_write_bundle_write(/* arg names */compute_result, one_pipe8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void one_pipe80_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip0_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */one_pipe80) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("one_pipe80_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_off_chip0_cache in_off_chip0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  one_pipe8_cache one_pipe8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079; one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079; one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
//   { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
// Condition for in_off_chip0_update_0(((-1 + i2 == 0) && (i1 >= 0) && (239 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { one_pipe8_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
// Condition for one_pipe8_update_0(((-2 + i2 == 0) && (i1 >= 0) && (239 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { one_pipe80_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 239 and 0 <= d1 <= 1079 }
// Condition for one_pipe80_update_0(((-3 + i2 == 0) && (i1 >= 0) && (239 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))

  /*
  // Schedules...
    // in_off_chip0_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_off_chip0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // one_pipe80_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
    // one_pipe8_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
for (int c0 = 0; c0 <= 1079; c0++) {
  for (int c1 = 0; c1 <= 239; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      in_off_chip0_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      one_pipe8_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      one_pipe80_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // in_off_chip0_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_off_chip0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // one_pipe80_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // one_pipe8_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 1079; c0++) {
	  for (int c1 = 0; c1 <= 239; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_off_chip0_update_0(in_off_chip0_oc /* buf name */, in_off_chip0, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      one_pipe8_update_0(in_off_chip0 /* buf name */, one_pipe8, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 239) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      one_pipe80_update_0(one_pipe8 /* buf name */, one_pipe80, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void one_pipe80_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip0_oc, HWStream<hw_uint<128> >& /* get_args num ports = 8 */one_pipe80, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    one_pipe80_opt(in_off_chip0_oc, one_pipe80);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_off_chip0_update_0[root = 0, in_off_chip0_0, in_off_chip0_1] -> in_off_chip0_oc[0, 0] : 0 <= in_off_chip0_0 <= 239 and 0 <= in_off_chip0_1 <= 1079 }
const int in_off_chip0_update_0_read_pipe0_num_transfers = 259200;
  // { one_pipe80_update_0[root = 0, one_pipe80_0, one_pipe80_1] -> one_pipe80[0, 0] : 0 <= one_pipe80_0 <= 239 and 0 <= one_pipe80_1 <= 1079 }
const int one_pipe80_update_0_write_pipe0_num_transfers = 259200;


extern "C" {

void one_pipe80_opt_accel(hw_uint<128>* in_off_chip0_update_0_read_pipe0, hw_uint<128>* one_pipe80_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_off_chip0_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = one_pipe80_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_off_chip0_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = one_pipe80_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > in_off_chip0_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > one_pipe80_update_0_write_pipe0_channel;

  burst_read<128>(in_off_chip0_update_0_read_pipe0, in_off_chip0_update_0_read_pipe0_channel, in_off_chip0_update_0_read_pipe0_num_transfers*size);

  one_pipe80_opt_wrapper(in_off_chip0_update_0_read_pipe0_channel, one_pipe80_update_0_write_pipe0_channel, size);

  burst_write<128>(one_pipe80_update_0_write_pipe0, one_pipe80_update_0_write_pipe0_channel, one_pipe80_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void one_pipe80_opt_rdai(HWStream<hw_uint<128> >& in_off_chip0_update_0_read_pipe0, HWStream<hw_uint<128> >&  one_pipe80_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_off_chip0_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = one_pipe80_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  one_pipe80_opt(in_off_chip0_update_0_read_pipe0, one_pipe80_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

