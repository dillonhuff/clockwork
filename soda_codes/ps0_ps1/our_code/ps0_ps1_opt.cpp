#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: ps0_ps1_opt_compute_units.h
#include "ps0_ps1_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_to_ps_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct bright_bright_update_0_write1_to_ps_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct bright_bright_update_0_write2_to_ps_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct bright_bright_update_0_write3_to_ps_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct bright_cache {
  // # of banks: 4
  bright_bright_update_0_write0_to_ps_rd0_cache bright_bright_update_0_write0_to_ps_rd0;
  bright_bright_update_0_write1_to_ps_rd1_cache bright_bright_update_0_write1_to_ps_rd1;
  bright_bright_update_0_write2_to_ps_rd2_cache bright_bright_update_0_write2_to_ps_rd2;
  bright_bright_update_0_write3_to_ps_rd3_cache bright_bright_update_0_write3_to_ps_rd3;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write0_to_ps_rd0.push(bright_bright_update_0_write0);
}

inline void bright_bright_update_0_write1_write(hw_uint<16>& bright_bright_update_0_write1, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write1_to_ps_rd1.push(bright_bright_update_0_write1);
}

inline void bright_bright_update_0_write2_write(hw_uint<16>& bright_bright_update_0_write2, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write2_to_ps_rd2.push(bright_bright_update_0_write2);
}

inline void bright_bright_update_0_write3_write(hw_uint<16>& bright_bright_update_0_write3, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write3_to_ps_rd3.push(bright_bright_update_0_write3);
}

inline hw_uint<16> ps_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd0 read pattern: { ps_update_0[d0, d1] -> bright[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_to_ps_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> ps_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd1 read pattern: { ps_update_0[d0, d1] -> bright[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_to_ps_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> ps_rd2_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd2 read pattern: { ps_update_0[d0, d1] -> bright[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write2 = bright.bright_bright_update_0_write2_to_ps_rd2.peek(/* one reader or all rams */ 0);
  return value_bright_bright_update_0_write2;
  return 0;
}

inline hw_uint<16> ps_rd3_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd3 read pattern: { ps_update_0[d0, d1] -> bright[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_bright_bright_update_0_write3 = bright.bright_bright_update_0_write3_to_ps_rd3.peek(/* one reader or all rams */ 0);
  return value_bright_bright_update_0_write3;
  return 0;
}

// # of bundles = 2
// bright_update_0_write
//	bright_bright_update_0_write0
//	bright_bright_update_0_write1
//	bright_bright_update_0_write2
//	bright_bright_update_0_write3
inline void bright_bright_update_0_write_bundle_write(hw_uint<64>& bright_update_0_write, bright_cache& bright, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1, dynamic_address);
	hw_uint<16> bright_bright_update_0_write1_res = bright_update_0_write.extract<16, 31>();
	bright_bright_update_0_write1_write(bright_bright_update_0_write1_res, bright, d0, d1, dynamic_address);
	hw_uint<16> bright_bright_update_0_write2_res = bright_update_0_write.extract<32, 47>();
	bright_bright_update_0_write2_write(bright_bright_update_0_write2_res, bright, d0, d1, dynamic_address);
	hw_uint<16> bright_bright_update_0_write3_res = bright_update_0_write.extract<48, 63>();
	bright_bright_update_0_write3_write(bright_bright_update_0_write3_res, bright, d0, d1, dynamic_address);
}

// ps_update_0_read
//	ps_rd0
//	ps_rd1
//	ps_rd2
//	ps_rd3
inline hw_uint<64> bright_ps_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // ps_rd0
    // ps_rd1
    // ps_rd2
    // ps_rd3

	hw_uint<64> result;
	hw_uint<16> ps_rd0_res = ps_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 64>(result, ps_rd0_res);
	hw_uint<16> ps_rd1_res = ps_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 64>(result, ps_rd1_res);
	hw_uint<16> ps_rd2_res = ps_rd2_select(bright, d0, d1, dynamic_address);
	set_at<32, 64>(result, ps_rd2_res);
	hw_uint<16> ps_rd3_res = ps_rd3_select(bright, d0, d1, dynamic_address);
	set_at<48, 64>(result, ps_rd3_res);
	return result;
}

#include "hw_classes.h"

struct dark_dark_update_0_write0_to_ps_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct dark_dark_update_0_write1_to_ps_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct dark_dark_update_0_write2_to_ps_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct dark_dark_update_0_write3_to_ps_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct dark_cache {
  // # of banks: 4
  dark_dark_update_0_write0_to_ps_rd0_cache dark_dark_update_0_write0_to_ps_rd0;
  dark_dark_update_0_write1_to_ps_rd1_cache dark_dark_update_0_write1_to_ps_rd1;
  dark_dark_update_0_write2_to_ps_rd2_cache dark_dark_update_0_write2_to_ps_rd2;
  dark_dark_update_0_write3_to_ps_rd3_cache dark_dark_update_0_write3_to_ps_rd3;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write0_to_ps_rd0.push(dark_dark_update_0_write0);
}

inline void dark_dark_update_0_write1_write(hw_uint<16>& dark_dark_update_0_write1, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write1_to_ps_rd1.push(dark_dark_update_0_write1);
}

inline void dark_dark_update_0_write2_write(hw_uint<16>& dark_dark_update_0_write2, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write2_to_ps_rd2.push(dark_dark_update_0_write2);
}

inline void dark_dark_update_0_write3_write(hw_uint<16>& dark_dark_update_0_write3, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write3_to_ps_rd3.push(dark_dark_update_0_write3);
}

inline hw_uint<16> ps_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd0 read pattern: { ps_update_0[d0, d1] -> dark[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_to_ps_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> ps_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd1 read pattern: { ps_update_0[d0, d1] -> dark[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_to_ps_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> ps_rd2_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd2 read pattern: { ps_update_0[d0, d1] -> dark[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write2 = dark.dark_dark_update_0_write2_to_ps_rd2.peek(/* one reader or all rams */ 0);
  return value_dark_dark_update_0_write2;
  return 0;
}

inline hw_uint<16> ps_rd3_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps_rd3 read pattern: { ps_update_0[d0, d1] -> dark[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_dark_dark_update_0_write3 = dark.dark_dark_update_0_write3_to_ps_rd3.peek(/* one reader or all rams */ 0);
  return value_dark_dark_update_0_write3;
  return 0;
}

// # of bundles = 2
// dark_update_0_write
//	dark_dark_update_0_write0
//	dark_dark_update_0_write1
//	dark_dark_update_0_write2
//	dark_dark_update_0_write3
inline void dark_dark_update_0_write_bundle_write(hw_uint<64>& dark_update_0_write, dark_cache& dark, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1, dynamic_address);
	hw_uint<16> dark_dark_update_0_write1_res = dark_update_0_write.extract<16, 31>();
	dark_dark_update_0_write1_write(dark_dark_update_0_write1_res, dark, d0, d1, dynamic_address);
	hw_uint<16> dark_dark_update_0_write2_res = dark_update_0_write.extract<32, 47>();
	dark_dark_update_0_write2_write(dark_dark_update_0_write2_res, dark, d0, d1, dynamic_address);
	hw_uint<16> dark_dark_update_0_write3_res = dark_update_0_write.extract<48, 63>();
	dark_dark_update_0_write3_write(dark_dark_update_0_write3_res, dark, d0, d1, dynamic_address);
}

// ps_update_0_read
//	ps_rd0
//	ps_rd1
//	ps_rd2
//	ps_rd3
inline hw_uint<64> dark_ps_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // ps_rd0
    // ps_rd1
    // ps_rd2
    // ps_rd3

	hw_uint<64> result;
	hw_uint<16> ps_rd0_res = ps_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 64>(result, ps_rd0_res);
	hw_uint<16> ps_rd1_res = ps_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 64>(result, ps_rd1_res);
	hw_uint<16> ps_rd2_res = ps_rd2_select(dark, d0, d1, dynamic_address);
	set_at<32, 64>(result, ps_rd2_res);
	hw_uint<16> ps_rd3_res = ps_rd3_select(dark, d0, d1, dynamic_address);
	set_at<48, 64>(result, ps_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_cache {
  // # of banks: 4
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd1 read pattern: { bright_update_0[d0, d1] -> in[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd2 read pattern: { bright_update_0[d0, d1] -> in[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> bright_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd3 read pattern: { bright_update_0[d0, d1] -> in[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd1 read pattern: { dark_update_0[d0, d1] -> in[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd2 read pattern: { dark_update_0[d0, d1] -> in[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> dark_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd3 read pattern: { dark_update_0[d0, d1] -> in[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
//	bright_rd1
//	bright_rd2
//	bright_rd3
inline hw_uint<64> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // bright_rd0
    // bright_rd1
    // bright_rd2
    // bright_rd3

	hw_uint<64> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 64>(result, bright_rd0_res);
	hw_uint<16> bright_rd1_res = bright_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 64>(result, bright_rd1_res);
	hw_uint<16> bright_rd2_res = bright_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 64>(result, bright_rd2_res);
	hw_uint<16> bright_rd3_res = bright_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 64>(result, bright_rd3_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
//	dark_rd1
//	dark_rd2
//	dark_rd3
inline hw_uint<64> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // dark_rd0
    // dark_rd1
    // dark_rd2
    // dark_rd3

	hw_uint<64> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 64>(result, dark_rd0_res);
	hw_uint<16> dark_rd1_res = dark_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 64>(result, dark_rd1_res);
	hw_uint<16> dark_rd2_res = dark_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 64>(result, dark_rd2_res);
	hw_uint<16> dark_rd3_res = dark_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 64>(result, dark_rd3_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
inline void in_in_update_0_write_bundle_write(hw_uint<64>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 958], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 959], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip0_cache {
  // # of banks: 2
  in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2_cache in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2;
  in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2_cache in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2;
};



inline void in_off_chip0_in_off_chip0_update_0_write0_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write0, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.push(in_off_chip0_in_off_chip0_update_0_write0);
}

inline void in_off_chip0_in_off_chip0_update_0_write1_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write1, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2.push(in_off_chip0_in_off_chip0_update_0_write1);
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd0 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write0 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd1 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write0 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd2_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd2 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write1 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write1;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd3_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd3 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_in_off_chip0_update_0_write1 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write1_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_read
//	in_off_chip0_oc_in_off_chip1_oc_rd0
//	in_off_chip0_oc_in_off_chip1_oc_rd1
//	in_off_chip0_oc_in_off_chip1_oc_rd2
//	in_off_chip0_oc_in_off_chip1_oc_rd3
inline hw_uint<64> in_off_chip0_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_off_chip0_oc_in_off_chip1_oc_rd0
    // in_off_chip0_oc_in_off_chip1_oc_rd1
    // in_off_chip0_oc_in_off_chip1_oc_rd2
    // in_off_chip0_oc_in_off_chip1_oc_rd3

	hw_uint<64> result;
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_res = in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd0_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_res = in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd1_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd2_res = in_off_chip0_oc_in_off_chip1_oc_rd2_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd2_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd3_res = in_off_chip0_oc_in_off_chip1_oc_rd3_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd3_res);
	return result;
}

// in_off_chip0_update_0_write
//	in_off_chip0_in_off_chip0_update_0_write0
//	in_off_chip0_in_off_chip0_update_0_write1
inline void in_off_chip0_in_off_chip0_update_0_write_bundle_write(hw_uint<32>& in_off_chip0_update_0_write, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write0_res = in_off_chip0_update_0_write.extract<0, 15>();
	in_off_chip0_in_off_chip0_update_0_write0_write(in_off_chip0_in_off_chip0_update_0_write0_res, in_off_chip0, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write1_res = in_off_chip0_update_0_write.extract<16, 31>();
	in_off_chip0_in_off_chip0_update_0_write1_write(in_off_chip0_in_off_chip0_update_0_write1_res, in_off_chip0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_to_in_rd2_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_to_in_rd3_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct in_off_chip0_oc_in_off_chip1_oc_cache {
  // # of banks: 4
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0;
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1;
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_to_in_rd2_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_to_in_rd2;
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_to_in_rd3_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_to_in_rd3;
};



inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0);
}

inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1);
}

inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_to_in_rd2.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2);
}

inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_to_in_rd3.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3);
}

inline hw_uint<16> in_rd0_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd0 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0;
  return 0;
}

inline hw_uint<16> in_rd1_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd1 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1;
  return 0;
}

inline hw_uint<16> in_rd2_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd2 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_to_in_rd2.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2;
  return 0;
}

inline hw_uint<16> in_rd3_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd3 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_to_in_rd3.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_write
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3
inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write_bundle_write(hw_uint<64>& in_off_chip0_oc_in_off_chip1_oc_update_0_write, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<0, 15>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<16, 31>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<32, 47>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write2_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<48, 63>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write3_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
}

// in_update_0_read
//	in_rd0
//	in_rd1
//	in_rd2
//	in_rd3
inline hw_uint<64> in_off_chip0_oc_in_off_chip1_oc_in_update_0_read_bundle_read(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_rd0
    // in_rd1
    // in_rd2
    // in_rd3

	hw_uint<64> result;
	hw_uint<16> in_rd0_res = in_rd0_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_rd0_res);
	hw_uint<16> in_rd1_res = in_rd1_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_rd1_res);
	hw_uint<16> in_rd2_res = in_rd2_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_rd2_res);
	hw_uint<16> in_rd3_res = in_rd3_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 958], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 959], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip1_cache {
  // # of banks: 2
  in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2_cache in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2;
  in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2_cache in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2;
};



inline void in_off_chip1_in_off_chip1_update_0_write0_write(hw_uint<16>& in_off_chip1_in_off_chip1_update_0_write0, in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
  in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.push(in_off_chip1_in_off_chip1_update_0_write0);
}

inline void in_off_chip1_in_off_chip1_update_0_write1_write(hw_uint<16>& in_off_chip1_in_off_chip1_update_0_write1, in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
  in_off_chip1.in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2.push(in_off_chip1_in_off_chip1_update_0_write1);
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd0 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip1_in_off_chip1_update_0_write0 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd1 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip1_in_off_chip1_update_0_write0 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd2_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd2 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip1_in_off_chip1_update_0_write1 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd3_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd3 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[1 + 2d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_in_off_chip1_in_off_chip1_update_0_write1 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write1_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_read
//	in_off_chip0_oc_in_off_chip1_oc_rd0
//	in_off_chip0_oc_in_off_chip1_oc_rd1
//	in_off_chip0_oc_in_off_chip1_oc_rd2
//	in_off_chip0_oc_in_off_chip1_oc_rd3
inline hw_uint<64> in_off_chip1_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_off_chip0_oc_in_off_chip1_oc_rd0
    // in_off_chip0_oc_in_off_chip1_oc_rd1
    // in_off_chip0_oc_in_off_chip1_oc_rd2
    // in_off_chip0_oc_in_off_chip1_oc_rd3

	hw_uint<64> result;
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_res = in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd0_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_res = in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd1_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd2_res = in_off_chip0_oc_in_off_chip1_oc_rd2_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd2_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd3_res = in_off_chip0_oc_in_off_chip1_oc_rd3_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_off_chip0_oc_in_off_chip1_oc_rd3_res);
	return result;
}

// in_off_chip1_update_0_write
//	in_off_chip1_in_off_chip1_update_0_write0
//	in_off_chip1_in_off_chip1_update_0_write1
inline void in_off_chip1_in_off_chip1_update_0_write_bundle_write(hw_uint<32>& in_off_chip1_update_0_write, in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip1_in_off_chip1_update_0_write0_res = in_off_chip1_update_0_write.extract<0, 15>();
	in_off_chip1_in_off_chip1_update_0_write0_write(in_off_chip1_in_off_chip1_update_0_write0_res, in_off_chip1, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip1_in_off_chip1_update_0_write1_res = in_off_chip1_update_0_write.extract<16, 31>();
	in_off_chip1_in_off_chip1_update_0_write1_write(in_off_chip1_in_off_chip1_update_0_write1_res, in_off_chip1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct ps_ps_update_0_write0_to_ps0_rd0_cache {
	// RAM Box: {[0, 1916], [0, 1079]}
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

struct ps_ps_update_0_write2_to_ps0_rd1_cache {
	// RAM Box: {[2, 1918], [0, 1079]}
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

struct ps_ps_update_0_write1_to_ps1_rd0_cache {
	// RAM Box: {[1, 1917], [0, 1079]}
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

struct ps_ps_update_0_write3_to_ps1_rd1_cache {
	// RAM Box: {[3, 1919], [0, 1079]}
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

struct ps_cache {
  // # of banks: 4
  ps_ps_update_0_write0_to_ps0_rd0_cache ps_ps_update_0_write0_to_ps0_rd0;
  ps_ps_update_0_write2_to_ps0_rd1_cache ps_ps_update_0_write2_to_ps0_rd1;
  ps_ps_update_0_write1_to_ps1_rd0_cache ps_ps_update_0_write1_to_ps1_rd0;
  ps_ps_update_0_write3_to_ps1_rd1_cache ps_ps_update_0_write3_to_ps1_rd1;
};



inline void ps_ps_update_0_write0_write(hw_uint<16>& ps_ps_update_0_write0, ps_cache& ps, int d0, int d1, int dynamic_address) {
  ps.ps_ps_update_0_write0_to_ps0_rd0.push(ps_ps_update_0_write0);
}

inline void ps_ps_update_0_write1_write(hw_uint<16>& ps_ps_update_0_write1, ps_cache& ps, int d0, int d1, int dynamic_address) {
  ps.ps_ps_update_0_write1_to_ps1_rd0.push(ps_ps_update_0_write1);
}

inline void ps_ps_update_0_write2_write(hw_uint<16>& ps_ps_update_0_write2, ps_cache& ps, int d0, int d1, int dynamic_address) {
  ps.ps_ps_update_0_write2_to_ps0_rd1.push(ps_ps_update_0_write2);
}

inline void ps_ps_update_0_write3_write(hw_uint<16>& ps_ps_update_0_write3, ps_cache& ps, int d0, int d1, int dynamic_address) {
  ps.ps_ps_update_0_write3_to_ps1_rd1.push(ps_ps_update_0_write3);
}

inline hw_uint<16> ps0_rd0_select(ps_cache& ps, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps0_rd0 read pattern: { ps0_update_0[d0, d1] -> ps[4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps0_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_ps_ps_update_0_write0 = ps.ps_ps_update_0_write0_to_ps0_rd0.peek(/* one reader or all rams */ 0);
  return value_ps_ps_update_0_write0;
  return 0;
}

inline hw_uint<16> ps0_rd1_select(ps_cache& ps, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps0_rd1 read pattern: { ps0_update_0[d0, d1] -> ps[2 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps0_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_ps_ps_update_0_write2 = ps.ps_ps_update_0_write2_to_ps0_rd1.peek(/* one reader or all rams */ 0);
  return value_ps_ps_update_0_write2;
  return 0;
}

inline hw_uint<16> ps1_rd0_select(ps_cache& ps, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps1_rd0 read pattern: { ps1_update_0[d0, d1] -> ps[1 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps1_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_ps_ps_update_0_write1 = ps.ps_ps_update_0_write1_to_ps1_rd0.peek(/* one reader or all rams */ 0);
  return value_ps_ps_update_0_write1;
  return 0;
}

inline hw_uint<16> ps1_rd1_select(ps_cache& ps, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps1_rd1 read pattern: { ps1_update_0[d0, d1] -> ps[3 + 4d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Read schedule : { ps1_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  // Write schedule: { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
  auto value_ps_ps_update_0_write3 = ps.ps_ps_update_0_write3_to_ps1_rd1.peek(/* one reader or all rams */ 0);
  return value_ps_ps_update_0_write3;
  return 0;
}

// # of bundles = 3
// ps0_update_0_read
//	ps0_rd0
//	ps0_rd1
inline hw_uint<32> ps_ps0_update_0_read_bundle_read(ps_cache& ps, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // ps0_rd0
    // ps0_rd1

	hw_uint<32> result;
	hw_uint<16> ps0_rd0_res = ps0_rd0_select(ps, d0, d1, dynamic_address);
	set_at<0, 32>(result, ps0_rd0_res);
	hw_uint<16> ps0_rd1_res = ps0_rd1_select(ps, d0, d1, dynamic_address);
	set_at<16, 32>(result, ps0_rd1_res);
	return result;
}

// ps1_update_0_read
//	ps1_rd0
//	ps1_rd1
inline hw_uint<32> ps_ps1_update_0_read_bundle_read(ps_cache& ps, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // ps1_rd0
    // ps1_rd1

	hw_uint<32> result;
	hw_uint<16> ps1_rd0_res = ps1_rd0_select(ps, d0, d1, dynamic_address);
	set_at<0, 32>(result, ps1_rd0_res);
	hw_uint<16> ps1_rd1_res = ps1_rd1_select(ps, d0, d1, dynamic_address);
	set_at<16, 32>(result, ps1_rd1_res);
	return result;
}

// ps_update_0_write
//	ps_ps_update_0_write0
//	ps_ps_update_0_write1
//	ps_ps_update_0_write2
//	ps_ps_update_0_write3
inline void ps_ps_update_0_write_bundle_write(hw_uint<64>& ps_update_0_write, ps_cache& ps, int d0, int d1, int dynamic_address) {
	hw_uint<16> ps_ps_update_0_write0_res = ps_update_0_write.extract<0, 15>();
	ps_ps_update_0_write0_write(ps_ps_update_0_write0_res, ps, d0, d1, dynamic_address);
	hw_uint<16> ps_ps_update_0_write1_res = ps_update_0_write.extract<16, 31>();
	ps_ps_update_0_write1_write(ps_ps_update_0_write1_res, ps, d0, d1, dynamic_address);
	hw_uint<16> ps_ps_update_0_write2_res = ps_update_0_write.extract<32, 47>();
	ps_ps_update_0_write2_write(ps_ps_update_0_write2_res, ps, d0, d1, dynamic_address);
	hw_uint<16> ps_ps_update_0_write3_res = ps_update_0_write.extract<48, 63>();
	ps_ps_update_0_write3_write(ps_ps_update_0_write3_res, ps, d0, d1, dynamic_address);
}



// Operation logic
inline void in_off_chip0_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_off_chip0_oc, in_off_chip0_cache& in_off_chip0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0_oc
	auto in_off_chip0_oc_0_c__0_value = in_off_chip0_oc.read();
	auto compute_result = id_unrolled_2(in_off_chip0_oc_0_c__0_value);
	// Produce: in_off_chip0
	in_off_chip0_in_off_chip0_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip1_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_off_chip1_oc, in_off_chip1_cache& in_off_chip1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip1_oc
	auto in_off_chip1_oc_0_c__0_value = in_off_chip1_oc.read();
	auto compute_result = id_unrolled_2(in_off_chip1_oc_0_c__0_value);
	// Produce: in_off_chip1
	in_off_chip1_in_off_chip1_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip0_oc_in_off_chip1_oc_update_0(in_off_chip0_cache& in_off_chip0, in_off_chip1_cache& in_off_chip1, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0
	auto in_off_chip0_0_c__0_value = in_off_chip0_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in_off_chip1
	auto in_off_chip1_0_c__0_value = in_off_chip1_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = interleave_unrolled_4(in_off_chip0_0_c__0_value, in_off_chip1_0_c__0_value, d0);
	// Produce: in_off_chip0_oc_in_off_chip1_oc
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip0_oc_in_off_chip1_oc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0_oc_in_off_chip1_oc
	auto in_off_chip0_oc_in_off_chip1_oc_0_c__0_value = in_off_chip0_oc_in_off_chip1_oc_in_update_0_read_bundle_read(in_off_chip0_oc_in_off_chip1_oc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_off_chip0_oc_in_off_chip1_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_4(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(/* arg names */compute_result, dark, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps1_update_0(ps_cache& ps, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */ps1, int d0, int d1) {
  // Dynamic address computation

	// Consume: ps
	auto ps_0_c__0_value = ps_ps1_update_0_read_bundle_read(ps/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(ps_0_c__0_value);
	// Produce: ps1
	ps1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(/* arg names */compute_result, bright, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps_update_0(bright_cache& bright, dark_cache& dark, ps_cache& ps, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_ps_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark
	auto dark_0_c__0_value = dark_ps_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_4(bright_0_c__0_value, dark_0_c__0_value);
	// Produce: ps
	ps_ps_update_0_write_bundle_write(/* arg names */compute_result, ps, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps0_update_0(ps_cache& ps, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */ps0, int d0, int d1) {
  // Dynamic address computation

	// Consume: ps
	auto ps_0_c__0_value = ps_ps0_update_0_read_bundle_read(ps/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(ps_0_c__0_value);
	// Produce: ps0
	ps0.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ps0_ps1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip0_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip1_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */ps0, HWStream<hw_uint<32> >& /* get_args num ports = 2 */ps1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ps0_ps1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip0_cache in_off_chip0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip0_oc_in_off_chip1_oc_cache in_off_chip0_oc_in_off_chip1_oc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip1_cache in_off_chip1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  ps_cache ps;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; ps0_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079; ps1_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
//   { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for in_off_chip1_update_0(((-3 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for bright_update_0(((-7 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { ps_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for ps_update_0(((-8 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for in_off_chip0_update_0(((-1 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for dark_update_0(((-6 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for in_off_chip0_oc_in_off_chip1_oc_update_0(((-4 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { ps0_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for ps0_update_0(((-10 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for in_update_0(((-5 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))
//   { ps1_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 479 and 0 <= d1 <= 1079 }
// Condition for ps1_update_0(((-9 + i2 == 0) && (i1 >= 0) && (479 - i1 >= 0) && (i0 >= 0) && (1079 - i0 >= 0)))

  /*
for (int c0 = 0; c0 <= 1079; c0 += 1)
  for (int c1 = 0; c1 <= 479; c1 += 1) {
    in_off_chip0_update_0(c1, c0);
    in_off_chip1_update_0(c1, c0);
    in_off_chip0_oc_in_off_chip1_oc_update_0(c1, c0);
    in_update_0(c1, c0);
    dark_update_0(c1, c0);
    bright_update_0(c1, c0);
    ps_update_0(c1, c0);
    ps1_update_0(c1, c0);
    ps0_update_0(c1, c0);
  }

  */
	for (int c0 = 0; c0 <= 1079; c0 += 1)
	  for (int c1 = 0; c1 <= 479; c1 += 1) {
	    in_off_chip0_update_0(in_off_chip0_oc /* buf name */, in_off_chip0, c1, c0);
	    in_off_chip1_update_0(in_off_chip1_oc /* buf name */, in_off_chip1, c1, c0);
	    in_off_chip0_oc_in_off_chip1_oc_update_0(in_off_chip0 /* buf name */, in_off_chip1 /* buf name */, in_off_chip0_oc_in_off_chip1_oc, c1, c0);
	    in_update_0(in_off_chip0_oc_in_off_chip1_oc /* buf name */, in, c1, c0);
	    dark_update_0(in /* buf name */, dark, c1, c0);
	    bright_update_0(in /* buf name */, bright, c1, c0);
	    ps_update_0(bright /* buf name */, dark /* buf name */, ps, c1, c0);
	    ps1_update_0(ps /* buf name */, ps1, c1, c0);
	    ps0_update_0(ps /* buf name */, ps0, c1, c0);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
  // { in_off_chip0_update_0[root = 0, in_off_chip0_0, in_off_chip0_1] -> in_off_chip0_oc[0, 0] : 0 <= in_off_chip0_0 <= 479 and 0 <= in_off_chip0_1 <= 1079 }
const int in_off_chip0_update_0_read_num_transfers = 518400;
  // { in_off_chip1_update_0[root = 0, in_off_chip1_0, in_off_chip1_1] -> in_off_chip1_oc[0, 0] : 0 <= in_off_chip1_0 <= 479 and 0 <= in_off_chip1_1 <= 1079 }
const int in_off_chip1_update_0_read_num_transfers = 518400;
  // { ps0_update_0[root = 0, ps0_0, ps0_1] -> ps0[0, 0] : 0 <= ps0_0 <= 479 and 0 <= ps0_1 <= 1079 }
const int ps0_update_0_write_num_transfers = 518400;
  // { ps1_update_0[root = 0, ps1_0, ps1_1] -> ps1[0, 0] : 0 <= ps1_0 <= 479 and 0 <= ps1_1 <= 1079 }
const int ps1_update_0_write_num_transfers = 518400;


extern "C" {

static void read_in_off_chip0_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = in_off_chip0_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_in_off_chip1_update_0_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = in_off_chip1_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_ps0_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = ps0_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

static void write_ps1_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = ps1_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void ps0_ps1_opt_accel(hw_uint<32>* in_off_chip0_update_0_read, hw_uint<32>* in_off_chip1_update_0_read, hw_uint<32>* ps0_update_0_write, hw_uint<32>* ps1_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_off_chip0_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = in_off_chip1_update_0_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = ps0_update_0_write offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = ps1_update_0_write offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = in_off_chip0_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = in_off_chip1_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = ps0_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = ps1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > in_off_chip0_update_0_read_channel;
  static HWStream<hw_uint<32> > in_off_chip1_update_0_read_channel;
  static HWStream<hw_uint<32> > ps0_update_0_write_channel;
  static HWStream<hw_uint<32> > ps1_update_0_write_channel;

  read_in_off_chip0_update_0_read(in_off_chip0_update_0_read, in_off_chip0_update_0_read_channel, size);
  read_in_off_chip1_update_0_read(in_off_chip1_update_0_read, in_off_chip1_update_0_read_channel, size);

  ps0_ps1_opt(in_off_chip0_update_0_read_channel, in_off_chip1_update_0_read_channel, ps0_update_0_write_channel, ps1_update_0_write_channel);

  write_ps0_update_0_write(ps0_update_0_write, ps0_update_0_write_channel, size);
  write_ps1_update_0_write(ps1_update_0_write, ps1_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

