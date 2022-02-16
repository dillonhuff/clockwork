#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct c_x_merged69_0_to_c_pw_math_c68_merged72_52_cache {
	// RAM Box: {[0, 12], [0, 15]}
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

struct c_x_merged69_1_to_c_pw_math_c68_merged72_53_cache {
	// RAM Box: {[1, 13], [0, 15]}
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

struct c_x_merged69_2_to_c_pw_math_c68_merged72_54_cache {
	// RAM Box: {[2, 14], [0, 15]}
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

struct c_x_merged69_3_to_c_pw_math_c68_merged72_55_cache {
	// RAM Box: {[3, 15], [0, 15]}
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

struct c_cache {
  // Reader addrs...
    // { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
    // { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[1 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
    // { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[2 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
    // { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[3 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // # of banks: 4
  c_x_merged69_0_to_c_pw_math_c68_merged72_52_cache c_x_merged69_0_to_c_pw_math_c68_merged72_52;
  c_x_merged69_1_to_c_pw_math_c68_merged72_53_cache c_x_merged69_1_to_c_pw_math_c68_merged72_53;
  c_x_merged69_2_to_c_pw_math_c68_merged72_54_cache c_x_merged69_2_to_c_pw_math_c68_merged72_54;
  c_x_merged69_3_to_c_pw_math_c68_merged72_55_cache c_x_merged69_3_to_c_pw_math_c68_merged72_55;
};



inline void c_x_merged69_0_write(hw_uint<32> & c_x_merged69_0, c_cache& c, int root, int y, int x, int dynamic_address) {
  c.c_x_merged69_0_to_c_pw_math_c68_merged72_52.push(c_x_merged69_0);
}

inline void c_x_merged69_1_write(hw_uint<32> & c_x_merged69_1, c_cache& c, int root, int y, int x, int dynamic_address) {
  c.c_x_merged69_1_to_c_pw_math_c68_merged72_53.push(c_x_merged69_1);
}

inline void c_x_merged69_2_write(hw_uint<32> & c_x_merged69_2, c_cache& c, int root, int y, int x, int dynamic_address) {
  c.c_x_merged69_2_to_c_pw_math_c68_merged72_54.push(c_x_merged69_2);
}

inline void c_x_merged69_3_write(hw_uint<32> & c_x_merged69_3, c_cache& c, int root, int y, int x, int dynamic_address) {
  c.c_x_merged69_3_to_c_pw_math_c68_merged72_55.push(c_x_merged69_3);
}

inline hw_uint<32>  c_pw_math_c68_merged72_52_select(c_cache& c, int root, int pw_math_c67, int pw_math_c68, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // c_pw_math_c68_merged72_52 read pattern: { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Read schedule : { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Write schedule: { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  auto value_c_x_merged69_0 = c.c_x_merged69_0_to_c_pw_math_c68_merged72_52.peek(/* one reader or all rams */ 0);
  return value_c_x_merged69_0;
  return 0;
}

inline hw_uint<32>  c_pw_math_c68_merged72_53_select(c_cache& c, int root, int pw_math_c67, int pw_math_c68, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // c_pw_math_c68_merged72_53 read pattern: { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[1 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Read schedule : { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Write schedule: { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  auto value_c_x_merged69_1 = c.c_x_merged69_1_to_c_pw_math_c68_merged72_53.peek(/* one reader or all rams */ 0);
  return value_c_x_merged69_1;
  return 0;
}

inline hw_uint<32>  c_pw_math_c68_merged72_54_select(c_cache& c, int root, int pw_math_c67, int pw_math_c68, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // c_pw_math_c68_merged72_54 read pattern: { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[2 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Read schedule : { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Write schedule: { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  auto value_c_x_merged69_2 = c.c_x_merged69_2_to_c_pw_math_c68_merged72_54.peek(/* one reader or all rams */ 0);
  return value_c_x_merged69_2;
  return 0;
}

inline hw_uint<32>  c_pw_math_c68_merged72_55_select(c_cache& c, int root, int pw_math_c67, int pw_math_c68, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // c_pw_math_c68_merged72_55 read pattern: { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> c[3 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Read schedule : { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
  // Write schedule: { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  auto value_c_x_merged69_3 = c.c_x_merged69_3_to_c_pw_math_c68_merged72_55.peek(/* one reader or all rams */ 0);
  return value_c_x_merged69_3;
  return 0;
}

// # of bundles = 2
// pw_math_c68_merged72_read
//	c_pw_math_c68_merged72_52
//	c_pw_math_c68_merged72_53
//	c_pw_math_c68_merged72_54
//	c_pw_math_c68_merged72_55
inline hw_uint<128> c_pw_math_c68_merged72_read_bundle_read(c_cache& c, int root, int pw_math_c67, int pw_math_c68, int dynamic_address) {
  // # of ports in bundle: 4
    // c_pw_math_c68_merged72_52
    // c_pw_math_c68_merged72_53
    // c_pw_math_c68_merged72_54
    // c_pw_math_c68_merged72_55

	hw_uint<128> result;
	hw_uint<32>  c_pw_math_c68_merged72_52_res = c_pw_math_c68_merged72_52_select(c, root, pw_math_c67, pw_math_c68, dynamic_address);
	set_at<0, 128>(result, c_pw_math_c68_merged72_52_res);
	hw_uint<32>  c_pw_math_c68_merged72_53_res = c_pw_math_c68_merged72_53_select(c, root, pw_math_c67, pw_math_c68, dynamic_address);
	set_at<32, 128>(result, c_pw_math_c68_merged72_53_res);
	hw_uint<32>  c_pw_math_c68_merged72_54_res = c_pw_math_c68_merged72_54_select(c, root, pw_math_c67, pw_math_c68, dynamic_address);
	set_at<64, 128>(result, c_pw_math_c68_merged72_54_res);
	hw_uint<32>  c_pw_math_c68_merged72_55_res = c_pw_math_c68_merged72_55_select(c, root, pw_math_c67, pw_math_c68, dynamic_address);
	set_at<96, 128>(result, c_pw_math_c68_merged72_55_res);
	return result;
}

// x_merged69_write
//	c_x_merged69_0
//	c_x_merged69_1
//	c_x_merged69_2
//	c_x_merged69_3
inline void c_x_merged69_write_bundle_write(hw_uint<128>& x_merged69_write, c_cache& c, int root, int y, int x, int dynamic_address) {
	hw_uint<32>  c_x_merged69_0_res = x_merged69_write.extract<0, 31>();
	c_x_merged69_0_write(c_x_merged69_0_res, c, root, y, x, dynamic_address);
	hw_uint<32>  c_x_merged69_1_res = x_merged69_write.extract<32, 63>();
	c_x_merged69_1_write(c_x_merged69_1_res, c, root, y, x, dynamic_address);
	hw_uint<32>  c_x_merged69_2_res = x_merged69_write.extract<64, 95>();
	c_x_merged69_2_write(c_x_merged69_2_res, c, root, y, x, dynamic_address);
	hw_uint<32>  c_x_merged69_3_res = x_merged69_write.extract<96, 127>();
	c_x_merged69_3_write(c_x_merged69_3_res, c, root, y, x, dynamic_address);
}

struct in_pw_math_in_oc02_merged66_40_merged_banks_9_cache {
	// RAM Box: {[0, 16], [0, 17]}
	// Capacity: 12
	// # of read delays: 6
  // 0, 1, 5, 6, 10, 11
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 3> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_5() {
		return f4;
	}

	inline hw_uint<32>  peek_6() {
		return f6;
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_10() {
		return f8;
	}

	inline hw_uint<32>  peek_11() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged66_41_merged_banks_9_cache {
	// RAM Box: {[1, 17], [0, 17]}
	// Capacity: 12
	// # of read delays: 6
  // 0, 1, 5, 6, 10, 11
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 3> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 3> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_4() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_5() {
		return f4;
	}

	inline hw_uint<32>  peek_6() {
		return f6;
	}

	inline hw_uint<32>  peek_9() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_10() {
		return f8;
	}

	inline hw_uint<32>  peek_11() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged66_42_merged_banks_9_cache {
	// RAM Box: {[2, 14], [0, 17]}
	// Capacity: 12
	// # of read delays: 4
  // 0, 1, 6, 11
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 4> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_6() {
		return f4;
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 4
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_pw_math_in_oc02_merged66_43_merged_banks_9_cache {
	// RAM Box: {[3, 15], [0, 17]}
	// Capacity: 12
	// # of read delays: 4
  // 0, 1, 6, 11
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 4> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_6() {
		return f4;
	}

	inline hw_uint<32>  peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_11() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 4
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
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
  // Reader addrs...
    // { x_merged69[root = 0, y, x] -> in[4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[5 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[5 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[5 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[1 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
    // { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // # of banks: 4
  in_pw_math_in_oc02_merged66_40_merged_banks_9_cache in_pw_math_in_oc02_merged66_40_merged_banks_9;
  in_pw_math_in_oc02_merged66_41_merged_banks_9_cache in_pw_math_in_oc02_merged66_41_merged_banks_9;
  in_pw_math_in_oc02_merged66_42_merged_banks_9_cache in_pw_math_in_oc02_merged66_42_merged_banks_9;
  in_pw_math_in_oc02_merged66_43_merged_banks_9_cache in_pw_math_in_oc02_merged66_43_merged_banks_9;
};



inline void in_pw_math_in_oc02_merged66_40_write(hw_uint<32> & in_pw_math_in_oc02_merged66_40, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged66_40_merged_banks_9.push(in_pw_math_in_oc02_merged66_40);
}

inline void in_pw_math_in_oc02_merged66_41_write(hw_uint<32> & in_pw_math_in_oc02_merged66_41, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged66_41_merged_banks_9.push(in_pw_math_in_oc02_merged66_41);
}

inline void in_pw_math_in_oc02_merged66_42_write(hw_uint<32> & in_pw_math_in_oc02_merged66_42, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged66_42_merged_banks_9.push(in_pw_math_in_oc02_merged66_42);
}

inline void in_pw_math_in_oc02_merged66_43_write(hw_uint<32> & in_pw_math_in_oc02_merged66_43, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc02_merged66_43_merged_banks_9.push(in_pw_math_in_oc02_merged66_43);
}

inline hw_uint<32>  in_x_merged69_10_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_10 read pattern: { x_merged69[root = 0, y, x] -> in[4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_11_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_11 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_12_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_12 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_13_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_13 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_14_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_14 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_15_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_15 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_16_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_16 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_17_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_17 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_18_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_18 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_19_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_19 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_20_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_20 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_21_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_21 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_22_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_22 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_23_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_23 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_24_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_24 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_10();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_25_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_25 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_26_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_26 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_27_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_27 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_5();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_28_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_28 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_29_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_29 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_30_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_30 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_31_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_31 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_32_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_32 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_10();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_33_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_33 read pattern: { x_merged69[root = 0, y, x] -> in[5 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_10();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_34_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_34 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_35_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_35 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_5();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_36_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_36 read pattern: { x_merged69[root = 0, y, x] -> in[5 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_5();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_37_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_37 read pattern: { x_merged69[root = 0, y, x] -> in[3 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_43 = in.in_pw_math_in_oc02_merged66_43_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc02_merged66_43;
  return 0;
}

inline hw_uint<32>  in_x_merged69_38_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_38 read pattern: { x_merged69[root = 0, y, x] -> in[4 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_39_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_39 read pattern: { x_merged69[root = 0, y, x] -> in[5 + 4x, 2 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_4_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_4 read pattern: { x_merged69[root = 0, y, x] -> in[4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_5_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_5 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_6_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_6 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_11();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

inline hw_uint<32>  in_x_merged69_7_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_7 read pattern: { x_merged69[root = 0, y, x] -> in[4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_40 = in.in_pw_math_in_oc02_merged66_40_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_40;
  return 0;
}

inline hw_uint<32>  in_x_merged69_8_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_8 read pattern: { x_merged69[root = 0, y, x] -> in[1 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_41 = in.in_pw_math_in_oc02_merged66_41_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_41;
  return 0;
}

inline hw_uint<32>  in_x_merged69_9_select(in_cache& in, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged69_9 read pattern: { x_merged69[root = 0, y, x] -> in[2 + 4x, 1 + y] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Read schedule : { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
  // Write schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
  auto value_in_pw_math_in_oc02_merged66_42 = in.in_pw_math_in_oc02_merged66_42_merged_banks_9.peek_6();
  return value_in_pw_math_in_oc02_merged66_42;
  return 0;
}

// # of bundles = 2
// pw_math_in_oc02_merged66_write
//	in_pw_math_in_oc02_merged66_40
//	in_pw_math_in_oc02_merged66_41
//	in_pw_math_in_oc02_merged66_42
//	in_pw_math_in_oc02_merged66_43
inline void in_pw_math_in_oc02_merged66_write_bundle_write(hw_uint<128>& pw_math_in_oc02_merged66_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc02_merged66_40_res = pw_math_in_oc02_merged66_write.extract<0, 31>();
	in_pw_math_in_oc02_merged66_40_write(in_pw_math_in_oc02_merged66_40_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged66_41_res = pw_math_in_oc02_merged66_write.extract<32, 63>();
	in_pw_math_in_oc02_merged66_41_write(in_pw_math_in_oc02_merged66_41_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged66_42_res = pw_math_in_oc02_merged66_write.extract<64, 95>();
	in_pw_math_in_oc02_merged66_42_write(in_pw_math_in_oc02_merged66_42_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc02_merged66_43_res = pw_math_in_oc02_merged66_write.extract<96, 127>();
	in_pw_math_in_oc02_merged66_43_write(in_pw_math_in_oc02_merged66_43_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

// x_merged69_read
//	in_x_merged69_4
//	in_x_merged69_5
//	in_x_merged69_6
//	in_x_merged69_7
//	in_x_merged69_8
//	in_x_merged69_9
//	in_x_merged69_10
//	in_x_merged69_11
//	in_x_merged69_12
//	in_x_merged69_13
//	in_x_merged69_14
//	in_x_merged69_15
//	in_x_merged69_16
//	in_x_merged69_17
//	in_x_merged69_18
//	in_x_merged69_19
//	in_x_merged69_20
//	in_x_merged69_21
//	in_x_merged69_22
//	in_x_merged69_23
//	in_x_merged69_24
//	in_x_merged69_25
//	in_x_merged69_26
//	in_x_merged69_27
//	in_x_merged69_28
//	in_x_merged69_29
//	in_x_merged69_30
//	in_x_merged69_31
//	in_x_merged69_32
//	in_x_merged69_33
//	in_x_merged69_34
//	in_x_merged69_35
//	in_x_merged69_36
//	in_x_merged69_37
//	in_x_merged69_38
//	in_x_merged69_39
inline hw_uint<1152> in_x_merged69_read_bundle_read(in_cache& in, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 36
    // in_x_merged69_4
    // in_x_merged69_5
    // in_x_merged69_6
    // in_x_merged69_7
    // in_x_merged69_8
    // in_x_merged69_9
    // in_x_merged69_10
    // in_x_merged69_11
    // in_x_merged69_12
    // in_x_merged69_13
    // in_x_merged69_14
    // in_x_merged69_15
    // in_x_merged69_16
    // in_x_merged69_17
    // in_x_merged69_18
    // in_x_merged69_19
    // in_x_merged69_20
    // in_x_merged69_21
    // in_x_merged69_22
    // in_x_merged69_23
    // in_x_merged69_24
    // in_x_merged69_25
    // in_x_merged69_26
    // in_x_merged69_27
    // in_x_merged69_28
    // in_x_merged69_29
    // in_x_merged69_30
    // in_x_merged69_31
    // in_x_merged69_32
    // in_x_merged69_33
    // in_x_merged69_34
    // in_x_merged69_35
    // in_x_merged69_36
    // in_x_merged69_37
    // in_x_merged69_38
    // in_x_merged69_39

	hw_uint<1152> result;
	hw_uint<32>  in_x_merged69_4_res = in_x_merged69_4_select(in, root, y, x, dynamic_address);
	set_at<0, 1152>(result, in_x_merged69_4_res);
	hw_uint<32>  in_x_merged69_5_res = in_x_merged69_5_select(in, root, y, x, dynamic_address);
	set_at<32, 1152>(result, in_x_merged69_5_res);
	hw_uint<32>  in_x_merged69_6_res = in_x_merged69_6_select(in, root, y, x, dynamic_address);
	set_at<64, 1152>(result, in_x_merged69_6_res);
	hw_uint<32>  in_x_merged69_7_res = in_x_merged69_7_select(in, root, y, x, dynamic_address);
	set_at<96, 1152>(result, in_x_merged69_7_res);
	hw_uint<32>  in_x_merged69_8_res = in_x_merged69_8_select(in, root, y, x, dynamic_address);
	set_at<128, 1152>(result, in_x_merged69_8_res);
	hw_uint<32>  in_x_merged69_9_res = in_x_merged69_9_select(in, root, y, x, dynamic_address);
	set_at<160, 1152>(result, in_x_merged69_9_res);
	hw_uint<32>  in_x_merged69_10_res = in_x_merged69_10_select(in, root, y, x, dynamic_address);
	set_at<192, 1152>(result, in_x_merged69_10_res);
	hw_uint<32>  in_x_merged69_11_res = in_x_merged69_11_select(in, root, y, x, dynamic_address);
	set_at<224, 1152>(result, in_x_merged69_11_res);
	hw_uint<32>  in_x_merged69_12_res = in_x_merged69_12_select(in, root, y, x, dynamic_address);
	set_at<256, 1152>(result, in_x_merged69_12_res);
	hw_uint<32>  in_x_merged69_13_res = in_x_merged69_13_select(in, root, y, x, dynamic_address);
	set_at<288, 1152>(result, in_x_merged69_13_res);
	hw_uint<32>  in_x_merged69_14_res = in_x_merged69_14_select(in, root, y, x, dynamic_address);
	set_at<320, 1152>(result, in_x_merged69_14_res);
	hw_uint<32>  in_x_merged69_15_res = in_x_merged69_15_select(in, root, y, x, dynamic_address);
	set_at<352, 1152>(result, in_x_merged69_15_res);
	hw_uint<32>  in_x_merged69_16_res = in_x_merged69_16_select(in, root, y, x, dynamic_address);
	set_at<384, 1152>(result, in_x_merged69_16_res);
	hw_uint<32>  in_x_merged69_17_res = in_x_merged69_17_select(in, root, y, x, dynamic_address);
	set_at<416, 1152>(result, in_x_merged69_17_res);
	hw_uint<32>  in_x_merged69_18_res = in_x_merged69_18_select(in, root, y, x, dynamic_address);
	set_at<448, 1152>(result, in_x_merged69_18_res);
	hw_uint<32>  in_x_merged69_19_res = in_x_merged69_19_select(in, root, y, x, dynamic_address);
	set_at<480, 1152>(result, in_x_merged69_19_res);
	hw_uint<32>  in_x_merged69_20_res = in_x_merged69_20_select(in, root, y, x, dynamic_address);
	set_at<512, 1152>(result, in_x_merged69_20_res);
	hw_uint<32>  in_x_merged69_21_res = in_x_merged69_21_select(in, root, y, x, dynamic_address);
	set_at<544, 1152>(result, in_x_merged69_21_res);
	hw_uint<32>  in_x_merged69_22_res = in_x_merged69_22_select(in, root, y, x, dynamic_address);
	set_at<576, 1152>(result, in_x_merged69_22_res);
	hw_uint<32>  in_x_merged69_23_res = in_x_merged69_23_select(in, root, y, x, dynamic_address);
	set_at<608, 1152>(result, in_x_merged69_23_res);
	hw_uint<32>  in_x_merged69_24_res = in_x_merged69_24_select(in, root, y, x, dynamic_address);
	set_at<640, 1152>(result, in_x_merged69_24_res);
	hw_uint<32>  in_x_merged69_25_res = in_x_merged69_25_select(in, root, y, x, dynamic_address);
	set_at<672, 1152>(result, in_x_merged69_25_res);
	hw_uint<32>  in_x_merged69_26_res = in_x_merged69_26_select(in, root, y, x, dynamic_address);
	set_at<704, 1152>(result, in_x_merged69_26_res);
	hw_uint<32>  in_x_merged69_27_res = in_x_merged69_27_select(in, root, y, x, dynamic_address);
	set_at<736, 1152>(result, in_x_merged69_27_res);
	hw_uint<32>  in_x_merged69_28_res = in_x_merged69_28_select(in, root, y, x, dynamic_address);
	set_at<768, 1152>(result, in_x_merged69_28_res);
	hw_uint<32>  in_x_merged69_29_res = in_x_merged69_29_select(in, root, y, x, dynamic_address);
	set_at<800, 1152>(result, in_x_merged69_29_res);
	hw_uint<32>  in_x_merged69_30_res = in_x_merged69_30_select(in, root, y, x, dynamic_address);
	set_at<832, 1152>(result, in_x_merged69_30_res);
	hw_uint<32>  in_x_merged69_31_res = in_x_merged69_31_select(in, root, y, x, dynamic_address);
	set_at<864, 1152>(result, in_x_merged69_31_res);
	hw_uint<32>  in_x_merged69_32_res = in_x_merged69_32_select(in, root, y, x, dynamic_address);
	set_at<896, 1152>(result, in_x_merged69_32_res);
	hw_uint<32>  in_x_merged69_33_res = in_x_merged69_33_select(in, root, y, x, dynamic_address);
	set_at<928, 1152>(result, in_x_merged69_33_res);
	hw_uint<32>  in_x_merged69_34_res = in_x_merged69_34_select(in, root, y, x, dynamic_address);
	set_at<960, 1152>(result, in_x_merged69_34_res);
	hw_uint<32>  in_x_merged69_35_res = in_x_merged69_35_select(in, root, y, x, dynamic_address);
	set_at<992, 1152>(result, in_x_merged69_35_res);
	hw_uint<32>  in_x_merged69_36_res = in_x_merged69_36_select(in, root, y, x, dynamic_address);
	set_at<1024, 1152>(result, in_x_merged69_36_res);
	hw_uint<32>  in_x_merged69_37_res = in_x_merged69_37_select(in, root, y, x, dynamic_address);
	set_at<1056, 1152>(result, in_x_merged69_37_res);
	hw_uint<32>  in_x_merged69_38_res = in_x_merged69_38_select(in, root, y, x, dynamic_address);
	set_at<1088, 1152>(result, in_x_merged69_38_res);
	hw_uint<32>  in_x_merged69_39_res = in_x_merged69_39_select(in, root, y, x, dynamic_address);
	set_at<1120, 1152>(result, in_x_merged69_39_res);
	return result;
}

// Total re-use buffer capacity: 1408 bits


// Operation logic
inline void pw_math_in_oc02_merged66(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc__lp_4_m_pw_math_in_oc02__p__0_rp__c____pw_math_in_oc01_value = in_oc.read();
	auto compute_result = pw_math_in_oc02_cu64(in_oc__lp_4_m_pw_math_in_oc02__p__0_rp__c____pw_math_in_oc01_value);
	// Produce: in
	in_pw_math_in_oc02_merged66_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_c68_merged72(c_cache& c, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */out, int root, int pw_math_c67, int pw_math_c68) {
  // Dynamic address computation

	// Consume: c
	auto c__lp_4_m_pw_math_c68__p__0_rp__c____pw_math_c67_value = c_pw_math_c68_merged72_read_bundle_read(c/* source_delay */, root, pw_math_c67, pw_math_c68, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_c68_cu70(c__lp_4_m_pw_math_c68__p__0_rp__c____pw_math_c67_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void x_merged69(in_cache& in, c_cache& c, int root, int y, int x) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_4_m_x__p__0_rp___p__0_c______y__p__0_value = in_x_merged69_read_bundle_read(in/* source_delay */, root, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = x_cu67(in__lp_4_m_x__p__0_rp___p__0_c______y__p__0_value);
	// Produce: c
	c_x_merged69_write_bundle_write(/* arg names */compute_result, c, root, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void infer_bounds_unroll(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("infer_bounds_unroll_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  c_cache c;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4; x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3; pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
//   { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
// Condition for pw_math_in_oc02_merged66(((((1*i2)) == 0) && (((1*i0)) >= 0) && (((17 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((4 + -1*i1)) >= 0)))
//   { x_merged69[root = 0, y, x] -> [2 + y, 1 + x, 1] : 0 <= y <= 15 and 0 <= x <= 3 }
// Condition for x_merged69(((((-1 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((17 + -1*i0)) >= 0) && (((-1 + 1*i1)) >= 0) && (((4 + -1*i1)) >= 0)))
//   { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> [2 + pw_math_c67, 1 + pw_math_c68, 2] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
// Condition for pw_math_c68_merged72(((((-2 + 1*i2)) == 0) && (((-2 + 1*i0)) >= 0) && (((17 + -1*i0)) >= 0) && (((-1 + 1*i1)) >= 0) && (((4 + -1*i1)) >= 0)))

	for (int c0 = 0; c0 <= 17; c0 += 1)
	  for (int c1 = 0; c1 <= 4; c1 += 1) {
	    pw_math_in_oc02_merged66(in_oc /* buf name */, in, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 1) {
	      x_merged69(in /* buf name */, c, 0, c0 - 2, c1 - 1);
	      pw_math_c68_merged72(c /* buf name */, out, 0, c0 - 2, c1 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void infer_bounds_unroll_wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    infer_bounds_unroll(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[3 + 4pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4; pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[2 + 4pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4; pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[1 + 4pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4; pw_math_in_oc02_merged66[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[4pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 17 and 0 <= pw_math_in_oc02 <= 4 }
const int pw_math_in_oc02_merged66_read_pipe0_num_transfers = 90;
  // { pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> out[3 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3; pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> out[2 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3; pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> out[1 + 4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3; pw_math_c68_merged72[root = 0, pw_math_c67, pw_math_c68] -> out[4pw_math_c68, pw_math_c67] : 0 <= pw_math_c67 <= 15 and 0 <= pw_math_c68 <= 3 }
const int pw_math_c68_merged72_write_pipe0_num_transfers = 64;


extern "C" {

void infer_bounds_unroll_accel(hw_uint<128>* pw_math_in_oc02_merged66_read_pipe0, hw_uint<128>* pw_math_c68_merged72_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc02_merged66_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_c68_merged72_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc02_merged66_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_c68_merged72_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > pw_math_in_oc02_merged66_read_pipe0_channel;
  static HWStream<hw_uint<128> > pw_math_c68_merged72_write_pipe0_channel;

  burst_read<128>(pw_math_in_oc02_merged66_read_pipe0, pw_math_in_oc02_merged66_read_pipe0_channel, pw_math_in_oc02_merged66_read_pipe0_num_transfers*size);

  infer_bounds_unroll_wrapper(pw_math_in_oc02_merged66_read_pipe0_channel, pw_math_c68_merged72_write_pipe0_channel, size);

  burst_write<128>(pw_math_c68_merged72_write_pipe0, pw_math_c68_merged72_write_pipe0_channel, pw_math_c68_merged72_write_pipe0_num_transfers*size);
}

}
extern "C" {

void infer_bounds_unroll_rdai(HWStream<hw_uint<128> >& pw_math_in_oc02_merged66_read_pipe0, HWStream<hw_uint<128> >&  pw_math_c68_merged72_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc02_merged66_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_c68_merged72_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  infer_bounds_unroll(pw_math_in_oc02_merged66_read_pipe0, pw_math_c68_merged72_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

