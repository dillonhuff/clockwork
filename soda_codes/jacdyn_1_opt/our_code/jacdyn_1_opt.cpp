#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jacdyn_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "jacdyn_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct in_in_1_merged575_564_to_in_in_ld1_merged572_560_cache {
	// RAM Box: {[3, 1139], [-15, 1934]}
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

struct in_in_1_merged575_565_to_in_in_ld1_merged572_561_cache {
	// RAM Box: {[2, 1138], [-15, 1934]}
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

struct in_in_1_merged575_566_to_in_in_ld1_merged572_562_cache {
	// RAM Box: {[1, 1137], [-15, 1934]}
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

struct in_in_1_merged575_567_to_in_in_ld1_merged572_563_cache {
	// RAM Box: {[0, 1136], [-15, 1934]}
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

struct in_cache {
  // Reader addrs...
    // { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[3 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
    // { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[2 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
    // { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[1 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
    // { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
  // # of banks: 4
  in_in_1_merged575_564_to_in_in_ld1_merged572_560_cache in_in_1_merged575_564_to_in_in_ld1_merged572_560;
  in_in_1_merged575_565_to_in_in_ld1_merged572_561_cache in_in_1_merged575_565_to_in_in_ld1_merged572_561;
  in_in_1_merged575_566_to_in_in_ld1_merged572_562_cache in_in_1_merged575_566_to_in_in_ld1_merged572_562;
  in_in_1_merged575_567_to_in_in_ld1_merged572_563_cache in_in_1_merged575_567_to_in_in_ld1_merged572_563;
};



inline void in_in_1_merged575_564_write(hw_uint<16>& in_in_1_merged575_564, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged575_564_to_in_in_ld1_merged572_560.push(in_in_1_merged575_564);
}

inline void in_in_1_merged575_565_write(hw_uint<16>& in_in_1_merged575_565, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged575_565_to_in_in_ld1_merged572_561.push(in_in_1_merged575_565);
}

inline void in_in_1_merged575_566_write(hw_uint<16>& in_in_1_merged575_566, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged575_566_to_in_in_ld1_merged572_562.push(in_in_1_merged575_566);
}

inline void in_in_1_merged575_567_write(hw_uint<16>& in_in_1_merged575_567, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged575_567_to_in_in_ld1_merged572_563.push(in_in_1_merged575_567);
}

inline hw_uint<16> in_in_ld1_merged572_560_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged572_560 read pattern: { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[3 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
  // Read schedule : { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  // Write schedule: { in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_in_1_merged575_564 = in.in_in_1_merged575_564_to_in_in_ld1_merged572_560.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged575_564;
  return 0;
}

inline hw_uint<16> in_in_ld1_merged572_561_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged572_561 read pattern: { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[2 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
  // Read schedule : { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  // Write schedule: { in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_in_1_merged575_565 = in.in_in_1_merged575_565_to_in_in_ld1_merged572_561.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged575_565;
  return 0;
}

inline hw_uint<16> in_in_ld1_merged572_562_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged572_562 read pattern: { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[1 + 4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
  // Read schedule : { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  // Write schedule: { in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_in_1_merged575_566 = in.in_in_1_merged575_566_to_in_in_ld1_merged572_562.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged575_566;
  return 0;
}

inline hw_uint<16> in_in_ld1_merged572_563_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged572_563 read pattern: { in_ld1_merged572[root = 0, in_ld2, in_ld1] -> in[4in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 284 }
  // Read schedule : { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  // Write schedule: { in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_in_1_merged575_567 = in.in_in_1_merged575_567_to_in_in_ld1_merged572_563.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged575_567;
  return 0;
}

// # of bundles = 2
// in_1_merged575_write
//	in_in_1_merged575_564
//	in_in_1_merged575_565
//	in_in_1_merged575_566
//	in_in_1_merged575_567
inline void in_in_1_merged575_write_bundle_write(hw_uint<64>& in_1_merged575_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_1_merged575_564_res = in_1_merged575_write.extract<0, 15>();
	in_in_1_merged575_564_write(in_in_1_merged575_564_res, in, root, in_0, in_1, dynamic_address);
	hw_uint<16> in_in_1_merged575_565_res = in_1_merged575_write.extract<16, 31>();
	in_in_1_merged575_565_write(in_in_1_merged575_565_res, in, root, in_0, in_1, dynamic_address);
	hw_uint<16> in_in_1_merged575_566_res = in_1_merged575_write.extract<32, 47>();
	in_in_1_merged575_566_write(in_in_1_merged575_566_res, in, root, in_0, in_1, dynamic_address);
	hw_uint<16> in_in_1_merged575_567_res = in_1_merged575_write.extract<48, 63>();
	in_in_1_merged575_567_write(in_in_1_merged575_567_res, in, root, in_0, in_1, dynamic_address);
}

// in_ld1_merged572_read
//	in_in_ld1_merged572_560
//	in_in_ld1_merged572_561
//	in_in_ld1_merged572_562
//	in_in_ld1_merged572_563
inline hw_uint<64> in_in_ld1_merged572_read_bundle_read(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_in_ld1_merged572_560
    // in_in_ld1_merged572_561
    // in_in_ld1_merged572_562
    // in_in_ld1_merged572_563

	hw_uint<64> result;
	hw_uint<16> in_in_ld1_merged572_560_res = in_in_ld1_merged572_560_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<0, 64>(result, in_in_ld1_merged572_560_res);
	hw_uint<16> in_in_ld1_merged572_561_res = in_in_ld1_merged572_561_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<16, 64>(result, in_in_ld1_merged572_561_res);
	hw_uint<16> in_in_ld1_merged572_562_res = in_in_ld1_merged572_562_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<32, 64>(result, in_in_ld1_merged572_562_res);
	hw_uint<16> in_in_ld1_merged572_563_res = in_in_ld1_merged572_563_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<48, 64>(result, in_in_ld1_merged572_563_res);
	return result;
}

struct in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4_cache {
	// RAM Box: {[3, 1135], [-15, 1934]}
	// Capacity: 572
	// # of read delays: 4
  // 0, 1, 286, 571
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 284> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 284> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_285() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_286() {
		return f4;
	}

	inline hw_uint<16> peek_570() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_571() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4_cache {
	// RAM Box: {[2, 1134], [-15, 1934]}
	// Capacity: 572
	// # of read delays: 4
  // 0, 1, 286, 571
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 284> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 284> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_285() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_286() {
		return f4;
	}

	inline hw_uint<16> peek_570() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_571() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4_cache {
	// RAM Box: {[1, 1133], [-15, 1934]}
	// Capacity: 572
	// # of read delays: 4
  // 0, 1, 286, 571
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 284> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 284> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_285() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_286() {
		return f4;
	}

	inline hw_uint<16> peek_570() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_571() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4_cache {
	// RAM Box: {[0, 1136], [-15, 1933]}
	// Capacity: 572
	// # of read delays: 5
  // 0, 1, 285, 286, 571
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 283> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 284> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_285() {
		return f4;
	}

	inline hw_uint<16> peek_286() {
		return f6;
	}

	inline hw_uint<16> peek_570() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_571() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_cache {
  // Reader addrs...
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
    // { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // # of banks: 4
  in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4;
  in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4;
  in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4;
  in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4;
};



inline void in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged641_548, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged641_548);
}

inline void in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged641_549, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged641_549);
}

inline void in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged641_550, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged641_550);
}

inline void in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged641_551, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged641_551);
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_524_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_524 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4.peek_571();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_525_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_525 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_526_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_526 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4.peek_285();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_527_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_527 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_528_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_528 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4.peek_571();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_529_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_529 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_530_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_530 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[3 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_548;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_531_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_531 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_532_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_532 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4.peek_571();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_533_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_533 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_534_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_534 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_549;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_535_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_535 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_536_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_536 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4.peek_571();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_537_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_537 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_538_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_538 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 4stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_merged_banks_4.peek_286();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_550;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged578_539_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged578_539 read pattern: { stg0_1_merged578[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[4stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 283 }
  // Read schedule : { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged641_551;
  return 0;
}

// # of bundles = 2
// in_to_gp_20_ld65_merged641_write
//	in_FIFO_buf64_in_to_gp_20_ld65_merged641_548
//	in_FIFO_buf64_in_to_gp_20_ld65_merged641_549
//	in_FIFO_buf64_in_to_gp_20_ld65_merged641_550
//	in_FIFO_buf64_in_to_gp_20_ld65_merged641_551
inline void in_FIFO_buf64_in_to_gp_20_ld65_merged641_write_bundle_write(hw_uint<64>& in_to_gp_20_ld65_merged641_write, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_res = in_to_gp_20_ld65_merged641_write.extract<0, 15>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_write(in_FIFO_buf64_in_to_gp_20_ld65_merged641_548_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_res = in_to_gp_20_ld65_merged641_write.extract<16, 31>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_write(in_FIFO_buf64_in_to_gp_20_ld65_merged641_549_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_res = in_to_gp_20_ld65_merged641_write.extract<32, 47>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_write(in_FIFO_buf64_in_to_gp_20_ld65_merged641_550_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_res = in_to_gp_20_ld65_merged641_write.extract<48, 63>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_write(in_FIFO_buf64_in_to_gp_20_ld65_merged641_551_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
}

// stg0_1_merged578_read
//	in_FIFO_buf64_stg0_1_merged578_524
//	in_FIFO_buf64_stg0_1_merged578_525
//	in_FIFO_buf64_stg0_1_merged578_526
//	in_FIFO_buf64_stg0_1_merged578_527
//	in_FIFO_buf64_stg0_1_merged578_528
//	in_FIFO_buf64_stg0_1_merged578_529
//	in_FIFO_buf64_stg0_1_merged578_530
//	in_FIFO_buf64_stg0_1_merged578_531
//	in_FIFO_buf64_stg0_1_merged578_532
//	in_FIFO_buf64_stg0_1_merged578_533
//	in_FIFO_buf64_stg0_1_merged578_534
//	in_FIFO_buf64_stg0_1_merged578_535
//	in_FIFO_buf64_stg0_1_merged578_536
//	in_FIFO_buf64_stg0_1_merged578_537
//	in_FIFO_buf64_stg0_1_merged578_538
//	in_FIFO_buf64_stg0_1_merged578_539
inline hw_uint<256> in_FIFO_buf64_stg0_1_merged578_read_bundle_read(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 16
    // in_FIFO_buf64_stg0_1_merged578_524
    // in_FIFO_buf64_stg0_1_merged578_525
    // in_FIFO_buf64_stg0_1_merged578_526
    // in_FIFO_buf64_stg0_1_merged578_527
    // in_FIFO_buf64_stg0_1_merged578_528
    // in_FIFO_buf64_stg0_1_merged578_529
    // in_FIFO_buf64_stg0_1_merged578_530
    // in_FIFO_buf64_stg0_1_merged578_531
    // in_FIFO_buf64_stg0_1_merged578_532
    // in_FIFO_buf64_stg0_1_merged578_533
    // in_FIFO_buf64_stg0_1_merged578_534
    // in_FIFO_buf64_stg0_1_merged578_535
    // in_FIFO_buf64_stg0_1_merged578_536
    // in_FIFO_buf64_stg0_1_merged578_537
    // in_FIFO_buf64_stg0_1_merged578_538
    // in_FIFO_buf64_stg0_1_merged578_539

	hw_uint<256> result;
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_524_res = in_FIFO_buf64_stg0_1_merged578_524_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 256>(result, in_FIFO_buf64_stg0_1_merged578_524_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_525_res = in_FIFO_buf64_stg0_1_merged578_525_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 256>(result, in_FIFO_buf64_stg0_1_merged578_525_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_526_res = in_FIFO_buf64_stg0_1_merged578_526_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 256>(result, in_FIFO_buf64_stg0_1_merged578_526_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_527_res = in_FIFO_buf64_stg0_1_merged578_527_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 256>(result, in_FIFO_buf64_stg0_1_merged578_527_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_528_res = in_FIFO_buf64_stg0_1_merged578_528_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<64, 256>(result, in_FIFO_buf64_stg0_1_merged578_528_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_529_res = in_FIFO_buf64_stg0_1_merged578_529_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<80, 256>(result, in_FIFO_buf64_stg0_1_merged578_529_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_530_res = in_FIFO_buf64_stg0_1_merged578_530_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<96, 256>(result, in_FIFO_buf64_stg0_1_merged578_530_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_531_res = in_FIFO_buf64_stg0_1_merged578_531_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<112, 256>(result, in_FIFO_buf64_stg0_1_merged578_531_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_532_res = in_FIFO_buf64_stg0_1_merged578_532_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<128, 256>(result, in_FIFO_buf64_stg0_1_merged578_532_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_533_res = in_FIFO_buf64_stg0_1_merged578_533_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<144, 256>(result, in_FIFO_buf64_stg0_1_merged578_533_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_534_res = in_FIFO_buf64_stg0_1_merged578_534_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<160, 256>(result, in_FIFO_buf64_stg0_1_merged578_534_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_535_res = in_FIFO_buf64_stg0_1_merged578_535_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<176, 256>(result, in_FIFO_buf64_stg0_1_merged578_535_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_536_res = in_FIFO_buf64_stg0_1_merged578_536_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<192, 256>(result, in_FIFO_buf64_stg0_1_merged578_536_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_537_res = in_FIFO_buf64_stg0_1_merged578_537_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<208, 256>(result, in_FIFO_buf64_stg0_1_merged578_537_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_538_res = in_FIFO_buf64_stg0_1_merged578_538_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<224, 256>(result, in_FIFO_buf64_stg0_1_merged578_538_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged578_539_res = in_FIFO_buf64_stg0_1_merged578_539_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<240, 256>(result, in_FIFO_buf64_stg0_1_merged578_539_res);
	return result;
}

struct stg0_stg0_1_merged578_520_to_stg0_stg0_ld5_merged649_516_cache {
	// RAM Box: {[3, 1135], [-14, 1933]}
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

struct stg0_stg0_1_merged578_521_to_stg0_stg0_ld5_merged649_517_cache {
	// RAM Box: {[2, 1134], [-14, 1933]}
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

struct stg0_stg0_1_merged578_522_to_stg0_stg0_ld5_merged649_518_cache {
	// RAM Box: {[1, 1133], [-14, 1933]}
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

struct stg0_stg0_1_merged578_523_to_stg0_stg0_ld5_merged649_519_cache {
	// RAM Box: {[0, 1132], [-14, 1933]}
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

struct stg0_cache {
  // Reader addrs...
    // { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[3 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
    // { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[2 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
    // { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[1 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
    // { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
  // # of banks: 4
  stg0_stg0_1_merged578_520_to_stg0_stg0_ld5_merged649_516_cache stg0_stg0_1_merged578_520_to_stg0_stg0_ld5_merged649_516;
  stg0_stg0_1_merged578_521_to_stg0_stg0_ld5_merged649_517_cache stg0_stg0_1_merged578_521_to_stg0_stg0_ld5_merged649_517;
  stg0_stg0_1_merged578_522_to_stg0_stg0_ld5_merged649_518_cache stg0_stg0_1_merged578_522_to_stg0_stg0_ld5_merged649_518;
  stg0_stg0_1_merged578_523_to_stg0_stg0_ld5_merged649_519_cache stg0_stg0_1_merged578_523_to_stg0_stg0_ld5_merged649_519;
};



inline void stg0_stg0_1_merged578_520_write(hw_uint<16>& stg0_stg0_1_merged578_520, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged578_520_to_stg0_stg0_ld5_merged649_516.push(stg0_stg0_1_merged578_520);
}

inline void stg0_stg0_1_merged578_521_write(hw_uint<16>& stg0_stg0_1_merged578_521, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged578_521_to_stg0_stg0_ld5_merged649_517.push(stg0_stg0_1_merged578_521);
}

inline void stg0_stg0_1_merged578_522_write(hw_uint<16>& stg0_stg0_1_merged578_522, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged578_522_to_stg0_stg0_ld5_merged649_518.push(stg0_stg0_1_merged578_522);
}

inline void stg0_stg0_1_merged578_523_write(hw_uint<16>& stg0_stg0_1_merged578_523, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged578_523_to_stg0_stg0_ld5_merged649_519.push(stg0_stg0_1_merged578_523);
}

inline hw_uint<16> stg0_stg0_ld5_merged649_516_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged649_516 read pattern: { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[3 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
  // Read schedule : { stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_stg0_1_merged578_520 = stg0.stg0_stg0_1_merged578_520_to_stg0_stg0_ld5_merged649_516.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged578_520;
  return 0;
}

inline hw_uint<16> stg0_stg0_ld5_merged649_517_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged649_517 read pattern: { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[2 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
  // Read schedule : { stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_stg0_1_merged578_521 = stg0.stg0_stg0_1_merged578_521_to_stg0_stg0_ld5_merged649_517.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged578_521;
  return 0;
}

inline hw_uint<16> stg0_stg0_ld5_merged649_518_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged649_518 read pattern: { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[1 + 4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
  // Read schedule : { stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_stg0_1_merged578_522 = stg0.stg0_stg0_1_merged578_522_to_stg0_stg0_ld5_merged649_518.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged578_522;
  return 0;
}

inline hw_uint<16> stg0_stg0_ld5_merged649_519_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged649_519 read pattern: { stg0_ld5_merged649[root = 0, stg0_ld6, stg0_ld5] -> stg0[4stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 283 }
  // Read schedule : { stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  // Write schedule: { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_stg0_1_merged578_523 = stg0.stg0_stg0_1_merged578_523_to_stg0_stg0_ld5_merged649_519.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged578_523;
  return 0;
}

// # of bundles = 2
// stg0_1_merged578_write
//	stg0_stg0_1_merged578_520
//	stg0_stg0_1_merged578_521
//	stg0_stg0_1_merged578_522
//	stg0_stg0_1_merged578_523
inline void stg0_stg0_1_merged578_write_bundle_write(hw_uint<64>& stg0_1_merged578_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_1_merged578_520_res = stg0_1_merged578_write.extract<0, 15>();
	stg0_stg0_1_merged578_520_write(stg0_stg0_1_merged578_520_res, stg0, root, stg0_0, stg0_1, dynamic_address);
	hw_uint<16> stg0_stg0_1_merged578_521_res = stg0_1_merged578_write.extract<16, 31>();
	stg0_stg0_1_merged578_521_write(stg0_stg0_1_merged578_521_res, stg0, root, stg0_0, stg0_1, dynamic_address);
	hw_uint<16> stg0_stg0_1_merged578_522_res = stg0_1_merged578_write.extract<32, 47>();
	stg0_stg0_1_merged578_522_write(stg0_stg0_1_merged578_522_res, stg0, root, stg0_0, stg0_1, dynamic_address);
	hw_uint<16> stg0_stg0_1_merged578_523_res = stg0_1_merged578_write.extract<48, 63>();
	stg0_stg0_1_merged578_523_write(stg0_stg0_1_merged578_523_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

// stg0_ld5_merged649_read
//	stg0_stg0_ld5_merged649_516
//	stg0_stg0_ld5_merged649_517
//	stg0_stg0_ld5_merged649_518
//	stg0_stg0_ld5_merged649_519
inline hw_uint<64> stg0_stg0_ld5_merged649_read_bundle_read(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_stg0_ld5_merged649_516
    // stg0_stg0_ld5_merged649_517
    // stg0_stg0_ld5_merged649_518
    // stg0_stg0_ld5_merged649_519

	hw_uint<64> result;
	hw_uint<16> stg0_stg0_ld5_merged649_516_res = stg0_stg0_ld5_merged649_516_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<0, 64>(result, stg0_stg0_ld5_merged649_516_res);
	hw_uint<16> stg0_stg0_ld5_merged649_517_res = stg0_stg0_ld5_merged649_517_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<16, 64>(result, stg0_stg0_ld5_merged649_517_res);
	hw_uint<16> stg0_stg0_ld5_merged649_518_res = stg0_stg0_ld5_merged649_518_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<32, 64>(result, stg0_stg0_ld5_merged649_518_res);
	hw_uint<16> stg0_stg0_ld5_merged649_519_res = stg0_stg0_ld5_merged649_519_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<48, 64>(result, stg0_stg0_ld5_merged649_519_res);
	return result;
}

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4_cache {
	// RAM Box: {[3, 1131], [-14, 1933]}
	// Capacity: 570
	// # of read delays: 4
  // 0, 1, 285, 569
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 283> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 283> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_285() {
		return f4;
	}

	inline hw_uint<16> peek_568() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_569() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4_cache {
	// RAM Box: {[2, 1130], [-14, 1933]}
	// Capacity: 570
	// # of read delays: 4
  // 0, 1, 285, 569
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 283> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 283> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_285() {
		return f4;
	}

	inline hw_uint<16> peek_568() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_569() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4_cache {
	// RAM Box: {[1, 1129], [-14, 1933]}
	// Capacity: 570
	// # of read delays: 4
  // 0, 1, 285, 569
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 283> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 283> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_285() {
		return f4;
	}

	inline hw_uint<16> peek_568() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_569() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4_cache {
	// RAM Box: {[0, 1132], [-14, 1932]}
	// Capacity: 570
	// # of read delays: 5
  // 0, 1, 284, 285, 569
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 282> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 283> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_283() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_284() {
		return f4;
	}

	inline hw_uint<16> peek_285() {
		return f6;
	}

	inline hw_uint<16> peek_568() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_569() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 283
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 283 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_cache {
  // Reader addrs...
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
    // { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // # of banks: 4
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4;
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4;
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4;
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4;
};



inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504);
}

inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505);
}

inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506);
}

inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507);
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_308_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_308 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4.peek_569();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_309_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_309 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_310_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_310 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4.peek_284();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_311_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_311 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_312_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_312 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4.peek_569();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_313_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_313 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_314_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_314 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[3 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_315_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_315 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_316_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_316 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4.peek_569();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_317_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_317 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_318_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_318 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_319_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_319 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_320_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_320 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4.peek_569();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_321_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_321 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_322_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_322 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 4stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_merged_banks_4.peek_285();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_323_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged581_323 read pattern: { stg1_1_merged581[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[4stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 282 }
  // Read schedule : { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507;
  return 0;
}

// # of bundles = 2
// stg0_to_gp_84_ld69_merged673_write
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507
inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_write_bundle_write(hw_uint<64>& stg0_to_gp_84_ld69_merged673_write, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_res = stg0_to_gp_84_ld69_merged673_write.extract<0, 15>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_504_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_res = stg0_to_gp_84_ld69_merged673_write.extract<16, 31>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_505_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_res = stg0_to_gp_84_ld69_merged673_write.extract<32, 47>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_506_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_res = stg0_to_gp_84_ld69_merged673_write.extract<48, 63>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_507_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
}

// stg1_1_merged581_read
//	stg0_FIFO_buf68_stg1_1_merged581_308
//	stg0_FIFO_buf68_stg1_1_merged581_309
//	stg0_FIFO_buf68_stg1_1_merged581_310
//	stg0_FIFO_buf68_stg1_1_merged581_311
//	stg0_FIFO_buf68_stg1_1_merged581_312
//	stg0_FIFO_buf68_stg1_1_merged581_313
//	stg0_FIFO_buf68_stg1_1_merged581_314
//	stg0_FIFO_buf68_stg1_1_merged581_315
//	stg0_FIFO_buf68_stg1_1_merged581_316
//	stg0_FIFO_buf68_stg1_1_merged581_317
//	stg0_FIFO_buf68_stg1_1_merged581_318
//	stg0_FIFO_buf68_stg1_1_merged581_319
//	stg0_FIFO_buf68_stg1_1_merged581_320
//	stg0_FIFO_buf68_stg1_1_merged581_321
//	stg0_FIFO_buf68_stg1_1_merged581_322
//	stg0_FIFO_buf68_stg1_1_merged581_323
inline hw_uint<256> stg0_FIFO_buf68_stg1_1_merged581_read_bundle_read(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg0_FIFO_buf68_stg1_1_merged581_308
    // stg0_FIFO_buf68_stg1_1_merged581_309
    // stg0_FIFO_buf68_stg1_1_merged581_310
    // stg0_FIFO_buf68_stg1_1_merged581_311
    // stg0_FIFO_buf68_stg1_1_merged581_312
    // stg0_FIFO_buf68_stg1_1_merged581_313
    // stg0_FIFO_buf68_stg1_1_merged581_314
    // stg0_FIFO_buf68_stg1_1_merged581_315
    // stg0_FIFO_buf68_stg1_1_merged581_316
    // stg0_FIFO_buf68_stg1_1_merged581_317
    // stg0_FIFO_buf68_stg1_1_merged581_318
    // stg0_FIFO_buf68_stg1_1_merged581_319
    // stg0_FIFO_buf68_stg1_1_merged581_320
    // stg0_FIFO_buf68_stg1_1_merged581_321
    // stg0_FIFO_buf68_stg1_1_merged581_322
    // stg0_FIFO_buf68_stg1_1_merged581_323

	hw_uint<256> result;
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_308_res = stg0_FIFO_buf68_stg1_1_merged581_308_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_308_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_309_res = stg0_FIFO_buf68_stg1_1_merged581_309_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_309_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_310_res = stg0_FIFO_buf68_stg1_1_merged581_310_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_310_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_311_res = stg0_FIFO_buf68_stg1_1_merged581_311_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_311_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_312_res = stg0_FIFO_buf68_stg1_1_merged581_312_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<64, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_312_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_313_res = stg0_FIFO_buf68_stg1_1_merged581_313_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<80, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_313_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_314_res = stg0_FIFO_buf68_stg1_1_merged581_314_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<96, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_314_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_315_res = stg0_FIFO_buf68_stg1_1_merged581_315_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<112, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_315_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_316_res = stg0_FIFO_buf68_stg1_1_merged581_316_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<128, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_316_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_317_res = stg0_FIFO_buf68_stg1_1_merged581_317_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<144, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_317_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_318_res = stg0_FIFO_buf68_stg1_1_merged581_318_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<160, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_318_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_319_res = stg0_FIFO_buf68_stg1_1_merged581_319_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<176, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_319_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_320_res = stg0_FIFO_buf68_stg1_1_merged581_320_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<192, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_320_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_321_res = stg0_FIFO_buf68_stg1_1_merged581_321_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<208, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_321_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_322_res = stg0_FIFO_buf68_stg1_1_merged581_322_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<224, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_322_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged581_323_res = stg0_FIFO_buf68_stg1_1_merged581_323_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<240, 256>(result, stg0_FIFO_buf68_stg1_1_merged581_323_res);
	return result;
}

struct stg1_stg1_1_merged581_304_to_stg1_stg1_ld9_merged651_300_cache {
	// RAM Box: {[3, 1131], [-13, 1932]}
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

struct stg1_stg1_1_merged581_305_to_stg1_stg1_ld9_merged651_301_cache {
	// RAM Box: {[2, 1130], [-13, 1932]}
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

struct stg1_stg1_1_merged581_306_to_stg1_stg1_ld9_merged651_302_cache {
	// RAM Box: {[1, 1129], [-13, 1932]}
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

struct stg1_stg1_1_merged581_307_to_stg1_stg1_ld9_merged651_303_cache {
	// RAM Box: {[0, 1128], [-13, 1932]}
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

struct stg1_cache {
  // Reader addrs...
    // { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[3 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
    // { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[2 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
    // { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[1 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
    // { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
  // # of banks: 4
  stg1_stg1_1_merged581_304_to_stg1_stg1_ld9_merged651_300_cache stg1_stg1_1_merged581_304_to_stg1_stg1_ld9_merged651_300;
  stg1_stg1_1_merged581_305_to_stg1_stg1_ld9_merged651_301_cache stg1_stg1_1_merged581_305_to_stg1_stg1_ld9_merged651_301;
  stg1_stg1_1_merged581_306_to_stg1_stg1_ld9_merged651_302_cache stg1_stg1_1_merged581_306_to_stg1_stg1_ld9_merged651_302;
  stg1_stg1_1_merged581_307_to_stg1_stg1_ld9_merged651_303_cache stg1_stg1_1_merged581_307_to_stg1_stg1_ld9_merged651_303;
};



inline void stg1_stg1_1_merged581_304_write(hw_uint<16>& stg1_stg1_1_merged581_304, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged581_304_to_stg1_stg1_ld9_merged651_300.push(stg1_stg1_1_merged581_304);
}

inline void stg1_stg1_1_merged581_305_write(hw_uint<16>& stg1_stg1_1_merged581_305, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged581_305_to_stg1_stg1_ld9_merged651_301.push(stg1_stg1_1_merged581_305);
}

inline void stg1_stg1_1_merged581_306_write(hw_uint<16>& stg1_stg1_1_merged581_306, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged581_306_to_stg1_stg1_ld9_merged651_302.push(stg1_stg1_1_merged581_306);
}

inline void stg1_stg1_1_merged581_307_write(hw_uint<16>& stg1_stg1_1_merged581_307, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged581_307_to_stg1_stg1_ld9_merged651_303.push(stg1_stg1_1_merged581_307);
}

inline hw_uint<16> stg1_stg1_ld9_merged651_300_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged651_300 read pattern: { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[3 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
  // Read schedule : { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_stg1_1_merged581_304 = stg1.stg1_stg1_1_merged581_304_to_stg1_stg1_ld9_merged651_300.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged581_304;
  return 0;
}

inline hw_uint<16> stg1_stg1_ld9_merged651_301_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged651_301 read pattern: { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[2 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
  // Read schedule : { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_stg1_1_merged581_305 = stg1.stg1_stg1_1_merged581_305_to_stg1_stg1_ld9_merged651_301.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged581_305;
  return 0;
}

inline hw_uint<16> stg1_stg1_ld9_merged651_302_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged651_302 read pattern: { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[1 + 4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
  // Read schedule : { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_stg1_1_merged581_306 = stg1.stg1_stg1_1_merged581_306_to_stg1_stg1_ld9_merged651_302.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged581_306;
  return 0;
}

inline hw_uint<16> stg1_stg1_ld9_merged651_303_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged651_303 read pattern: { stg1_ld9_merged651[root = 0, stg1_ld10, stg1_ld9] -> stg1[4stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 282 }
  // Read schedule : { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  // Write schedule: { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_stg1_1_merged581_307 = stg1.stg1_stg1_1_merged581_307_to_stg1_stg1_ld9_merged651_303.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged581_307;
  return 0;
}

// # of bundles = 2
// stg1_1_merged581_write
//	stg1_stg1_1_merged581_304
//	stg1_stg1_1_merged581_305
//	stg1_stg1_1_merged581_306
//	stg1_stg1_1_merged581_307
inline void stg1_stg1_1_merged581_write_bundle_write(hw_uint<64>& stg1_1_merged581_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_1_merged581_304_res = stg1_1_merged581_write.extract<0, 15>();
	stg1_stg1_1_merged581_304_write(stg1_stg1_1_merged581_304_res, stg1, root, stg1_0, stg1_1, dynamic_address);
	hw_uint<16> stg1_stg1_1_merged581_305_res = stg1_1_merged581_write.extract<16, 31>();
	stg1_stg1_1_merged581_305_write(stg1_stg1_1_merged581_305_res, stg1, root, stg1_0, stg1_1, dynamic_address);
	hw_uint<16> stg1_stg1_1_merged581_306_res = stg1_1_merged581_write.extract<32, 47>();
	stg1_stg1_1_merged581_306_write(stg1_stg1_1_merged581_306_res, stg1, root, stg1_0, stg1_1, dynamic_address);
	hw_uint<16> stg1_stg1_1_merged581_307_res = stg1_1_merged581_write.extract<48, 63>();
	stg1_stg1_1_merged581_307_write(stg1_stg1_1_merged581_307_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

// stg1_ld9_merged651_read
//	stg1_stg1_ld9_merged651_300
//	stg1_stg1_ld9_merged651_301
//	stg1_stg1_ld9_merged651_302
//	stg1_stg1_ld9_merged651_303
inline hw_uint<64> stg1_stg1_ld9_merged651_read_bundle_read(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_stg1_ld9_merged651_300
    // stg1_stg1_ld9_merged651_301
    // stg1_stg1_ld9_merged651_302
    // stg1_stg1_ld9_merged651_303

	hw_uint<64> result;
	hw_uint<16> stg1_stg1_ld9_merged651_300_res = stg1_stg1_ld9_merged651_300_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<0, 64>(result, stg1_stg1_ld9_merged651_300_res);
	hw_uint<16> stg1_stg1_ld9_merged651_301_res = stg1_stg1_ld9_merged651_301_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<16, 64>(result, stg1_stg1_ld9_merged651_301_res);
	hw_uint<16> stg1_stg1_ld9_merged651_302_res = stg1_stg1_ld9_merged651_302_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<32, 64>(result, stg1_stg1_ld9_merged651_302_res);
	hw_uint<16> stg1_stg1_ld9_merged651_303_res = stg1_stg1_ld9_merged651_303_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<48, 64>(result, stg1_stg1_ld9_merged651_303_res);
	return result;
}

struct stg10_stg10_1_merged608_484_to_stg10_stg10_ld13_merged629_480_cache {
	// RAM Box: {[3, 1095], [-4, 1923]}
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

struct stg10_stg10_1_merged608_485_to_stg10_stg10_ld13_merged629_481_cache {
	// RAM Box: {[2, 1094], [-4, 1923]}
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

struct stg10_stg10_1_merged608_486_to_stg10_stg10_ld13_merged629_482_cache {
	// RAM Box: {[1, 1093], [-4, 1923]}
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

struct stg10_stg10_1_merged608_487_to_stg10_stg10_ld13_merged629_483_cache {
	// RAM Box: {[0, 1092], [-4, 1923]}
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

struct stg10_cache {
  // Reader addrs...
    // { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[3 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
    // { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[2 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
    // { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[1 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
    // { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
  // # of banks: 4
  stg10_stg10_1_merged608_484_to_stg10_stg10_ld13_merged629_480_cache stg10_stg10_1_merged608_484_to_stg10_stg10_ld13_merged629_480;
  stg10_stg10_1_merged608_485_to_stg10_stg10_ld13_merged629_481_cache stg10_stg10_1_merged608_485_to_stg10_stg10_ld13_merged629_481;
  stg10_stg10_1_merged608_486_to_stg10_stg10_ld13_merged629_482_cache stg10_stg10_1_merged608_486_to_stg10_stg10_ld13_merged629_482;
  stg10_stg10_1_merged608_487_to_stg10_stg10_ld13_merged629_483_cache stg10_stg10_1_merged608_487_to_stg10_stg10_ld13_merged629_483;
};



inline void stg10_stg10_1_merged608_484_write(hw_uint<16>& stg10_stg10_1_merged608_484, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged608_484_to_stg10_stg10_ld13_merged629_480.push(stg10_stg10_1_merged608_484);
}

inline void stg10_stg10_1_merged608_485_write(hw_uint<16>& stg10_stg10_1_merged608_485, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged608_485_to_stg10_stg10_ld13_merged629_481.push(stg10_stg10_1_merged608_485);
}

inline void stg10_stg10_1_merged608_486_write(hw_uint<16>& stg10_stg10_1_merged608_486, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged608_486_to_stg10_stg10_ld13_merged629_482.push(stg10_stg10_1_merged608_486);
}

inline void stg10_stg10_1_merged608_487_write(hw_uint<16>& stg10_stg10_1_merged608_487, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged608_487_to_stg10_stg10_ld13_merged629_483.push(stg10_stg10_1_merged608_487);
}

inline hw_uint<16> stg10_stg10_ld13_merged629_480_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged629_480 read pattern: { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[3 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
  // Read schedule : { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_stg10_1_merged608_484 = stg10.stg10_stg10_1_merged608_484_to_stg10_stg10_ld13_merged629_480.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged608_484;
  return 0;
}

inline hw_uint<16> stg10_stg10_ld13_merged629_481_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged629_481 read pattern: { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[2 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
  // Read schedule : { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_stg10_1_merged608_485 = stg10.stg10_stg10_1_merged608_485_to_stg10_stg10_ld13_merged629_481.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged608_485;
  return 0;
}

inline hw_uint<16> stg10_stg10_ld13_merged629_482_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged629_482 read pattern: { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[1 + 4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
  // Read schedule : { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_stg10_1_merged608_486 = stg10.stg10_stg10_1_merged608_486_to_stg10_stg10_ld13_merged629_482.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged608_486;
  return 0;
}

inline hw_uint<16> stg10_stg10_ld13_merged629_483_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged629_483 read pattern: { stg10_ld13_merged629[root = 0, stg10_ld14, stg10_ld13] -> stg10[4stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 273 }
  // Read schedule : { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_stg10_1_merged608_487 = stg10.stg10_stg10_1_merged608_487_to_stg10_stg10_ld13_merged629_483.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged608_487;
  return 0;
}

// # of bundles = 2
// stg10_1_merged608_write
//	stg10_stg10_1_merged608_484
//	stg10_stg10_1_merged608_485
//	stg10_stg10_1_merged608_486
//	stg10_stg10_1_merged608_487
inline void stg10_stg10_1_merged608_write_bundle_write(hw_uint<64>& stg10_1_merged608_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_1_merged608_484_res = stg10_1_merged608_write.extract<0, 15>();
	stg10_stg10_1_merged608_484_write(stg10_stg10_1_merged608_484_res, stg10, root, stg10_0, stg10_1, dynamic_address);
	hw_uint<16> stg10_stg10_1_merged608_485_res = stg10_1_merged608_write.extract<16, 31>();
	stg10_stg10_1_merged608_485_write(stg10_stg10_1_merged608_485_res, stg10, root, stg10_0, stg10_1, dynamic_address);
	hw_uint<16> stg10_stg10_1_merged608_486_res = stg10_1_merged608_write.extract<32, 47>();
	stg10_stg10_1_merged608_486_write(stg10_stg10_1_merged608_486_res, stg10, root, stg10_0, stg10_1, dynamic_address);
	hw_uint<16> stg10_stg10_1_merged608_487_res = stg10_1_merged608_write.extract<48, 63>();
	stg10_stg10_1_merged608_487_write(stg10_stg10_1_merged608_487_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

// stg10_ld13_merged629_read
//	stg10_stg10_ld13_merged629_480
//	stg10_stg10_ld13_merged629_481
//	stg10_stg10_ld13_merged629_482
//	stg10_stg10_ld13_merged629_483
inline hw_uint<64> stg10_stg10_ld13_merged629_read_bundle_read(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_stg10_ld13_merged629_480
    // stg10_stg10_ld13_merged629_481
    // stg10_stg10_ld13_merged629_482
    // stg10_stg10_ld13_merged629_483

	hw_uint<64> result;
	hw_uint<16> stg10_stg10_ld13_merged629_480_res = stg10_stg10_ld13_merged629_480_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<0, 64>(result, stg10_stg10_ld13_merged629_480_res);
	hw_uint<16> stg10_stg10_ld13_merged629_481_res = stg10_stg10_ld13_merged629_481_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<16, 64>(result, stg10_stg10_ld13_merged629_481_res);
	hw_uint<16> stg10_stg10_ld13_merged629_482_res = stg10_stg10_ld13_merged629_482_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<32, 64>(result, stg10_stg10_ld13_merged629_482_res);
	hw_uint<16> stg10_stg10_ld13_merged629_483_res = stg10_stg10_ld13_merged629_483_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<48, 64>(result, stg10_stg10_ld13_merged629_483_res);
	return result;
}

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4_cache {
	// RAM Box: {[3, 1091], [-4, 1923]}
	// Capacity: 550
	// # of read delays: 4
  // 0, 1, 275, 549
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 273> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 273> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_275() {
		return f4;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_549() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4_cache {
	// RAM Box: {[2, 1090], [-4, 1923]}
	// Capacity: 550
	// # of read delays: 4
  // 0, 1, 275, 549
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 273> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 273> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_275() {
		return f4;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_549() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4_cache {
	// RAM Box: {[1, 1089], [-4, 1923]}
	// Capacity: 550
	// # of read delays: 4
  // 0, 1, 275, 549
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 273> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 273> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_275() {
		return f4;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_549() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4_cache {
	// RAM Box: {[0, 1092], [-4, 1922]}
	// Capacity: 550
	// # of read delays: 5
  // 0, 1, 274, 275, 549
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 272> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 273> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_273() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_274() {
		return f4;
	}

	inline hw_uint<16> peek_275() {
		return f6;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_549() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_cache {
  // Reader addrs...
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
    // { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // # of banks: 4
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4;
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4;
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4;
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4;
};



inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468);
}

inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469);
}

inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470);
}

inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471);
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_452_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_452 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4.peek_549();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_453_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_453 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_454_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_454 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4.peek_274();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_455_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_455 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_456_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_456 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4.peek_549();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_457_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_457 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_458_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_458 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[3 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_459_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_459 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_460_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_460 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4.peek_549();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_461_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_461 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_462_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_462 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_463_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_463 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_464_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_464 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4.peek_549();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_465_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_465 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_466_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_466 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 4stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_merged_banks_4.peek_275();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_467_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged611_467 read pattern: { stg11_1_merged611[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[4stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 272 }
  // Read schedule : { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471;
  return 0;
}

// # of bundles = 2
// stg10_to_gp_412_ld77_merged663_write
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471
inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_write_bundle_write(hw_uint<64>& stg10_to_gp_412_ld77_merged663_write, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_res = stg10_to_gp_412_ld77_merged663_write.extract<0, 15>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_468_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_res = stg10_to_gp_412_ld77_merged663_write.extract<16, 31>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_469_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_res = stg10_to_gp_412_ld77_merged663_write.extract<32, 47>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_470_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_res = stg10_to_gp_412_ld77_merged663_write.extract<48, 63>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_471_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
}

// stg11_1_merged611_read
//	stg10_FIFO_buf76_stg11_1_merged611_452
//	stg10_FIFO_buf76_stg11_1_merged611_453
//	stg10_FIFO_buf76_stg11_1_merged611_454
//	stg10_FIFO_buf76_stg11_1_merged611_455
//	stg10_FIFO_buf76_stg11_1_merged611_456
//	stg10_FIFO_buf76_stg11_1_merged611_457
//	stg10_FIFO_buf76_stg11_1_merged611_458
//	stg10_FIFO_buf76_stg11_1_merged611_459
//	stg10_FIFO_buf76_stg11_1_merged611_460
//	stg10_FIFO_buf76_stg11_1_merged611_461
//	stg10_FIFO_buf76_stg11_1_merged611_462
//	stg10_FIFO_buf76_stg11_1_merged611_463
//	stg10_FIFO_buf76_stg11_1_merged611_464
//	stg10_FIFO_buf76_stg11_1_merged611_465
//	stg10_FIFO_buf76_stg11_1_merged611_466
//	stg10_FIFO_buf76_stg11_1_merged611_467
inline hw_uint<256> stg10_FIFO_buf76_stg11_1_merged611_read_bundle_read(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg10_FIFO_buf76_stg11_1_merged611_452
    // stg10_FIFO_buf76_stg11_1_merged611_453
    // stg10_FIFO_buf76_stg11_1_merged611_454
    // stg10_FIFO_buf76_stg11_1_merged611_455
    // stg10_FIFO_buf76_stg11_1_merged611_456
    // stg10_FIFO_buf76_stg11_1_merged611_457
    // stg10_FIFO_buf76_stg11_1_merged611_458
    // stg10_FIFO_buf76_stg11_1_merged611_459
    // stg10_FIFO_buf76_stg11_1_merged611_460
    // stg10_FIFO_buf76_stg11_1_merged611_461
    // stg10_FIFO_buf76_stg11_1_merged611_462
    // stg10_FIFO_buf76_stg11_1_merged611_463
    // stg10_FIFO_buf76_stg11_1_merged611_464
    // stg10_FIFO_buf76_stg11_1_merged611_465
    // stg10_FIFO_buf76_stg11_1_merged611_466
    // stg10_FIFO_buf76_stg11_1_merged611_467

	hw_uint<256> result;
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_452_res = stg10_FIFO_buf76_stg11_1_merged611_452_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_452_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_453_res = stg10_FIFO_buf76_stg11_1_merged611_453_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_453_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_454_res = stg10_FIFO_buf76_stg11_1_merged611_454_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_454_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_455_res = stg10_FIFO_buf76_stg11_1_merged611_455_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_455_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_456_res = stg10_FIFO_buf76_stg11_1_merged611_456_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<64, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_456_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_457_res = stg10_FIFO_buf76_stg11_1_merged611_457_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<80, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_457_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_458_res = stg10_FIFO_buf76_stg11_1_merged611_458_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<96, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_458_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_459_res = stg10_FIFO_buf76_stg11_1_merged611_459_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<112, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_459_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_460_res = stg10_FIFO_buf76_stg11_1_merged611_460_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<128, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_460_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_461_res = stg10_FIFO_buf76_stg11_1_merged611_461_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<144, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_461_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_462_res = stg10_FIFO_buf76_stg11_1_merged611_462_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<160, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_462_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_463_res = stg10_FIFO_buf76_stg11_1_merged611_463_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<176, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_463_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_464_res = stg10_FIFO_buf76_stg11_1_merged611_464_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<192, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_464_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_465_res = stg10_FIFO_buf76_stg11_1_merged611_465_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<208, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_465_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_466_res = stg10_FIFO_buf76_stg11_1_merged611_466_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<224, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_466_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged611_467_res = stg10_FIFO_buf76_stg11_1_merged611_467_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<240, 256>(result, stg10_FIFO_buf76_stg11_1_merged611_467_res);
	return result;
}

struct stg11_stg11_1_merged611_448_to_stg11_stg11_ld17_merged653_444_cache {
	// RAM Box: {[3, 1091], [-3, 1922]}
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

struct stg11_stg11_1_merged611_449_to_stg11_stg11_ld17_merged653_445_cache {
	// RAM Box: {[2, 1090], [-3, 1922]}
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

struct stg11_stg11_1_merged611_450_to_stg11_stg11_ld17_merged653_446_cache {
	// RAM Box: {[1, 1089], [-3, 1922]}
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

struct stg11_stg11_1_merged611_451_to_stg11_stg11_ld17_merged653_447_cache {
	// RAM Box: {[0, 1088], [-3, 1922]}
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

struct stg11_cache {
  // Reader addrs...
    // { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[3 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
    // { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[2 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
    // { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[1 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
    // { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
  // # of banks: 4
  stg11_stg11_1_merged611_448_to_stg11_stg11_ld17_merged653_444_cache stg11_stg11_1_merged611_448_to_stg11_stg11_ld17_merged653_444;
  stg11_stg11_1_merged611_449_to_stg11_stg11_ld17_merged653_445_cache stg11_stg11_1_merged611_449_to_stg11_stg11_ld17_merged653_445;
  stg11_stg11_1_merged611_450_to_stg11_stg11_ld17_merged653_446_cache stg11_stg11_1_merged611_450_to_stg11_stg11_ld17_merged653_446;
  stg11_stg11_1_merged611_451_to_stg11_stg11_ld17_merged653_447_cache stg11_stg11_1_merged611_451_to_stg11_stg11_ld17_merged653_447;
};



inline void stg11_stg11_1_merged611_448_write(hw_uint<16>& stg11_stg11_1_merged611_448, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged611_448_to_stg11_stg11_ld17_merged653_444.push(stg11_stg11_1_merged611_448);
}

inline void stg11_stg11_1_merged611_449_write(hw_uint<16>& stg11_stg11_1_merged611_449, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged611_449_to_stg11_stg11_ld17_merged653_445.push(stg11_stg11_1_merged611_449);
}

inline void stg11_stg11_1_merged611_450_write(hw_uint<16>& stg11_stg11_1_merged611_450, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged611_450_to_stg11_stg11_ld17_merged653_446.push(stg11_stg11_1_merged611_450);
}

inline void stg11_stg11_1_merged611_451_write(hw_uint<16>& stg11_stg11_1_merged611_451, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged611_451_to_stg11_stg11_ld17_merged653_447.push(stg11_stg11_1_merged611_451);
}

inline hw_uint<16> stg11_stg11_ld17_merged653_444_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged653_444 read pattern: { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[3 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
  // Read schedule : { stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_stg11_1_merged611_448 = stg11.stg11_stg11_1_merged611_448_to_stg11_stg11_ld17_merged653_444.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged611_448;
  return 0;
}

inline hw_uint<16> stg11_stg11_ld17_merged653_445_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged653_445 read pattern: { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[2 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
  // Read schedule : { stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_stg11_1_merged611_449 = stg11.stg11_stg11_1_merged611_449_to_stg11_stg11_ld17_merged653_445.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged611_449;
  return 0;
}

inline hw_uint<16> stg11_stg11_ld17_merged653_446_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged653_446 read pattern: { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[1 + 4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
  // Read schedule : { stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_stg11_1_merged611_450 = stg11.stg11_stg11_1_merged611_450_to_stg11_stg11_ld17_merged653_446.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged611_450;
  return 0;
}

inline hw_uint<16> stg11_stg11_ld17_merged653_447_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged653_447 read pattern: { stg11_ld17_merged653[root = 0, stg11_ld18, stg11_ld17] -> stg11[4stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 272 }
  // Read schedule : { stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  // Write schedule: { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_stg11_1_merged611_451 = stg11.stg11_stg11_1_merged611_451_to_stg11_stg11_ld17_merged653_447.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged611_451;
  return 0;
}

// # of bundles = 2
// stg11_1_merged611_write
//	stg11_stg11_1_merged611_448
//	stg11_stg11_1_merged611_449
//	stg11_stg11_1_merged611_450
//	stg11_stg11_1_merged611_451
inline void stg11_stg11_1_merged611_write_bundle_write(hw_uint<64>& stg11_1_merged611_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_1_merged611_448_res = stg11_1_merged611_write.extract<0, 15>();
	stg11_stg11_1_merged611_448_write(stg11_stg11_1_merged611_448_res, stg11, root, stg11_0, stg11_1, dynamic_address);
	hw_uint<16> stg11_stg11_1_merged611_449_res = stg11_1_merged611_write.extract<16, 31>();
	stg11_stg11_1_merged611_449_write(stg11_stg11_1_merged611_449_res, stg11, root, stg11_0, stg11_1, dynamic_address);
	hw_uint<16> stg11_stg11_1_merged611_450_res = stg11_1_merged611_write.extract<32, 47>();
	stg11_stg11_1_merged611_450_write(stg11_stg11_1_merged611_450_res, stg11, root, stg11_0, stg11_1, dynamic_address);
	hw_uint<16> stg11_stg11_1_merged611_451_res = stg11_1_merged611_write.extract<48, 63>();
	stg11_stg11_1_merged611_451_write(stg11_stg11_1_merged611_451_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

// stg11_ld17_merged653_read
//	stg11_stg11_ld17_merged653_444
//	stg11_stg11_ld17_merged653_445
//	stg11_stg11_ld17_merged653_446
//	stg11_stg11_ld17_merged653_447
inline hw_uint<64> stg11_stg11_ld17_merged653_read_bundle_read(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_stg11_ld17_merged653_444
    // stg11_stg11_ld17_merged653_445
    // stg11_stg11_ld17_merged653_446
    // stg11_stg11_ld17_merged653_447

	hw_uint<64> result;
	hw_uint<16> stg11_stg11_ld17_merged653_444_res = stg11_stg11_ld17_merged653_444_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<0, 64>(result, stg11_stg11_ld17_merged653_444_res);
	hw_uint<16> stg11_stg11_ld17_merged653_445_res = stg11_stg11_ld17_merged653_445_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<16, 64>(result, stg11_stg11_ld17_merged653_445_res);
	hw_uint<16> stg11_stg11_ld17_merged653_446_res = stg11_stg11_ld17_merged653_446_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<32, 64>(result, stg11_stg11_ld17_merged653_446_res);
	hw_uint<16> stg11_stg11_ld17_merged653_447_res = stg11_stg11_ld17_merged653_447_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<48, 64>(result, stg11_stg11_ld17_merged653_447_res);
	return result;
}

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4_cache {
	// RAM Box: {[3, 1087], [-3, 1922]}
	// Capacity: 548
	// # of read delays: 4
  // 0, 1, 274, 547
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 272> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 272> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_273() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_274() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_547() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4_cache {
	// RAM Box: {[2, 1086], [-3, 1922]}
	// Capacity: 548
	// # of read delays: 4
  // 0, 1, 274, 547
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 272> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 272> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_273() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_274() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_547() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4_cache {
	// RAM Box: {[1, 1085], [-3, 1922]}
	// Capacity: 548
	// # of read delays: 4
  // 0, 1, 274, 547
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 272> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 272> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_273() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_274() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_547() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4_cache {
	// RAM Box: {[0, 1088], [-3, 1921]}
	// Capacity: 548
	// # of read delays: 5
  // 0, 1, 273, 274, 547
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 271> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 272> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_273() {
		return f4;
	}

	inline hw_uint<16> peek_274() {
		return f6;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_547() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 272
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 272 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_cache {
  // Reader addrs...
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
    // { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // # of banks: 4
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4;
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4;
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4;
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4;
};



inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432);
}

inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433);
}

inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434);
}

inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435);
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_416_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_416 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4.peek_547();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_417_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_417 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_418_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_418 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4.peek_273();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_419_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_419 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_420_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_420 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4.peek_547();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_421_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_421 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_422_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_422 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[3 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_423_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_423 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_424_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_424 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4.peek_547();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_425_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_425 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_426_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_426 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_427_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_427 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_428_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_428 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4.peek_547();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_429_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_429 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_430_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_430 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 4stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_merged_banks_4.peek_274();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_431_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged614_431 read pattern: { stg12_1_merged614[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[4stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 271 }
  // Read schedule : { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435;
  return 0;
}

// # of bundles = 2
// stg11_to_gp_516_ld81_merged675_write
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435
inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_write_bundle_write(hw_uint<64>& stg11_to_gp_516_ld81_merged675_write, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_res = stg11_to_gp_516_ld81_merged675_write.extract<0, 15>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_432_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_res = stg11_to_gp_516_ld81_merged675_write.extract<16, 31>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_433_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_res = stg11_to_gp_516_ld81_merged675_write.extract<32, 47>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_434_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_res = stg11_to_gp_516_ld81_merged675_write.extract<48, 63>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_435_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
}

// stg12_1_merged614_read
//	stg11_FIFO_buf80_stg12_1_merged614_416
//	stg11_FIFO_buf80_stg12_1_merged614_417
//	stg11_FIFO_buf80_stg12_1_merged614_418
//	stg11_FIFO_buf80_stg12_1_merged614_419
//	stg11_FIFO_buf80_stg12_1_merged614_420
//	stg11_FIFO_buf80_stg12_1_merged614_421
//	stg11_FIFO_buf80_stg12_1_merged614_422
//	stg11_FIFO_buf80_stg12_1_merged614_423
//	stg11_FIFO_buf80_stg12_1_merged614_424
//	stg11_FIFO_buf80_stg12_1_merged614_425
//	stg11_FIFO_buf80_stg12_1_merged614_426
//	stg11_FIFO_buf80_stg12_1_merged614_427
//	stg11_FIFO_buf80_stg12_1_merged614_428
//	stg11_FIFO_buf80_stg12_1_merged614_429
//	stg11_FIFO_buf80_stg12_1_merged614_430
//	stg11_FIFO_buf80_stg12_1_merged614_431
inline hw_uint<256> stg11_FIFO_buf80_stg12_1_merged614_read_bundle_read(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg11_FIFO_buf80_stg12_1_merged614_416
    // stg11_FIFO_buf80_stg12_1_merged614_417
    // stg11_FIFO_buf80_stg12_1_merged614_418
    // stg11_FIFO_buf80_stg12_1_merged614_419
    // stg11_FIFO_buf80_stg12_1_merged614_420
    // stg11_FIFO_buf80_stg12_1_merged614_421
    // stg11_FIFO_buf80_stg12_1_merged614_422
    // stg11_FIFO_buf80_stg12_1_merged614_423
    // stg11_FIFO_buf80_stg12_1_merged614_424
    // stg11_FIFO_buf80_stg12_1_merged614_425
    // stg11_FIFO_buf80_stg12_1_merged614_426
    // stg11_FIFO_buf80_stg12_1_merged614_427
    // stg11_FIFO_buf80_stg12_1_merged614_428
    // stg11_FIFO_buf80_stg12_1_merged614_429
    // stg11_FIFO_buf80_stg12_1_merged614_430
    // stg11_FIFO_buf80_stg12_1_merged614_431

	hw_uint<256> result;
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_416_res = stg11_FIFO_buf80_stg12_1_merged614_416_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_416_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_417_res = stg11_FIFO_buf80_stg12_1_merged614_417_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_417_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_418_res = stg11_FIFO_buf80_stg12_1_merged614_418_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_418_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_419_res = stg11_FIFO_buf80_stg12_1_merged614_419_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_419_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_420_res = stg11_FIFO_buf80_stg12_1_merged614_420_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<64, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_420_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_421_res = stg11_FIFO_buf80_stg12_1_merged614_421_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<80, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_421_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_422_res = stg11_FIFO_buf80_stg12_1_merged614_422_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<96, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_422_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_423_res = stg11_FIFO_buf80_stg12_1_merged614_423_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<112, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_423_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_424_res = stg11_FIFO_buf80_stg12_1_merged614_424_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<128, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_424_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_425_res = stg11_FIFO_buf80_stg12_1_merged614_425_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<144, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_425_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_426_res = stg11_FIFO_buf80_stg12_1_merged614_426_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<160, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_426_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_427_res = stg11_FIFO_buf80_stg12_1_merged614_427_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<176, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_427_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_428_res = stg11_FIFO_buf80_stg12_1_merged614_428_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<192, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_428_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_429_res = stg11_FIFO_buf80_stg12_1_merged614_429_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<208, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_429_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_430_res = stg11_FIFO_buf80_stg12_1_merged614_430_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<224, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_430_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged614_431_res = stg11_FIFO_buf80_stg12_1_merged614_431_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<240, 256>(result, stg11_FIFO_buf80_stg12_1_merged614_431_res);
	return result;
}

struct stg12_stg12_1_merged614_412_to_stg12_stg12_ld21_merged631_408_cache {
	// RAM Box: {[3, 1087], [-2, 1921]}
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

struct stg12_stg12_1_merged614_413_to_stg12_stg12_ld21_merged631_409_cache {
	// RAM Box: {[2, 1086], [-2, 1921]}
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

struct stg12_stg12_1_merged614_414_to_stg12_stg12_ld21_merged631_410_cache {
	// RAM Box: {[1, 1085], [-2, 1921]}
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

struct stg12_stg12_1_merged614_415_to_stg12_stg12_ld21_merged631_411_cache {
	// RAM Box: {[0, 1084], [-2, 1921]}
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

struct stg12_cache {
  // Reader addrs...
    // { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[3 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
    // { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[2 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
    // { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[1 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
    // { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
  // # of banks: 4
  stg12_stg12_1_merged614_412_to_stg12_stg12_ld21_merged631_408_cache stg12_stg12_1_merged614_412_to_stg12_stg12_ld21_merged631_408;
  stg12_stg12_1_merged614_413_to_stg12_stg12_ld21_merged631_409_cache stg12_stg12_1_merged614_413_to_stg12_stg12_ld21_merged631_409;
  stg12_stg12_1_merged614_414_to_stg12_stg12_ld21_merged631_410_cache stg12_stg12_1_merged614_414_to_stg12_stg12_ld21_merged631_410;
  stg12_stg12_1_merged614_415_to_stg12_stg12_ld21_merged631_411_cache stg12_stg12_1_merged614_415_to_stg12_stg12_ld21_merged631_411;
};



inline void stg12_stg12_1_merged614_412_write(hw_uint<16>& stg12_stg12_1_merged614_412, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged614_412_to_stg12_stg12_ld21_merged631_408.push(stg12_stg12_1_merged614_412);
}

inline void stg12_stg12_1_merged614_413_write(hw_uint<16>& stg12_stg12_1_merged614_413, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged614_413_to_stg12_stg12_ld21_merged631_409.push(stg12_stg12_1_merged614_413);
}

inline void stg12_stg12_1_merged614_414_write(hw_uint<16>& stg12_stg12_1_merged614_414, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged614_414_to_stg12_stg12_ld21_merged631_410.push(stg12_stg12_1_merged614_414);
}

inline void stg12_stg12_1_merged614_415_write(hw_uint<16>& stg12_stg12_1_merged614_415, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged614_415_to_stg12_stg12_ld21_merged631_411.push(stg12_stg12_1_merged614_415);
}

inline hw_uint<16> stg12_stg12_ld21_merged631_408_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged631_408 read pattern: { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[3 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
  // Read schedule : { stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_stg12_1_merged614_412 = stg12.stg12_stg12_1_merged614_412_to_stg12_stg12_ld21_merged631_408.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged614_412;
  return 0;
}

inline hw_uint<16> stg12_stg12_ld21_merged631_409_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged631_409 read pattern: { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[2 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
  // Read schedule : { stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_stg12_1_merged614_413 = stg12.stg12_stg12_1_merged614_413_to_stg12_stg12_ld21_merged631_409.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged614_413;
  return 0;
}

inline hw_uint<16> stg12_stg12_ld21_merged631_410_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged631_410 read pattern: { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[1 + 4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
  // Read schedule : { stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_stg12_1_merged614_414 = stg12.stg12_stg12_1_merged614_414_to_stg12_stg12_ld21_merged631_410.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged614_414;
  return 0;
}

inline hw_uint<16> stg12_stg12_ld21_merged631_411_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged631_411 read pattern: { stg12_ld21_merged631[root = 0, stg12_ld22, stg12_ld21] -> stg12[4stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 271 }
  // Read schedule : { stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  // Write schedule: { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_stg12_1_merged614_415 = stg12.stg12_stg12_1_merged614_415_to_stg12_stg12_ld21_merged631_411.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged614_415;
  return 0;
}

// # of bundles = 2
// stg12_1_merged614_write
//	stg12_stg12_1_merged614_412
//	stg12_stg12_1_merged614_413
//	stg12_stg12_1_merged614_414
//	stg12_stg12_1_merged614_415
inline void stg12_stg12_1_merged614_write_bundle_write(hw_uint<64>& stg12_1_merged614_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_1_merged614_412_res = stg12_1_merged614_write.extract<0, 15>();
	stg12_stg12_1_merged614_412_write(stg12_stg12_1_merged614_412_res, stg12, root, stg12_0, stg12_1, dynamic_address);
	hw_uint<16> stg12_stg12_1_merged614_413_res = stg12_1_merged614_write.extract<16, 31>();
	stg12_stg12_1_merged614_413_write(stg12_stg12_1_merged614_413_res, stg12, root, stg12_0, stg12_1, dynamic_address);
	hw_uint<16> stg12_stg12_1_merged614_414_res = stg12_1_merged614_write.extract<32, 47>();
	stg12_stg12_1_merged614_414_write(stg12_stg12_1_merged614_414_res, stg12, root, stg12_0, stg12_1, dynamic_address);
	hw_uint<16> stg12_stg12_1_merged614_415_res = stg12_1_merged614_write.extract<48, 63>();
	stg12_stg12_1_merged614_415_write(stg12_stg12_1_merged614_415_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

// stg12_ld21_merged631_read
//	stg12_stg12_ld21_merged631_408
//	stg12_stg12_ld21_merged631_409
//	stg12_stg12_ld21_merged631_410
//	stg12_stg12_ld21_merged631_411
inline hw_uint<64> stg12_stg12_ld21_merged631_read_bundle_read(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_stg12_ld21_merged631_408
    // stg12_stg12_ld21_merged631_409
    // stg12_stg12_ld21_merged631_410
    // stg12_stg12_ld21_merged631_411

	hw_uint<64> result;
	hw_uint<16> stg12_stg12_ld21_merged631_408_res = stg12_stg12_ld21_merged631_408_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<0, 64>(result, stg12_stg12_ld21_merged631_408_res);
	hw_uint<16> stg12_stg12_ld21_merged631_409_res = stg12_stg12_ld21_merged631_409_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<16, 64>(result, stg12_stg12_ld21_merged631_409_res);
	hw_uint<16> stg12_stg12_ld21_merged631_410_res = stg12_stg12_ld21_merged631_410_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<32, 64>(result, stg12_stg12_ld21_merged631_410_res);
	hw_uint<16> stg12_stg12_ld21_merged631_411_res = stg12_stg12_ld21_merged631_411_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<48, 64>(result, stg12_stg12_ld21_merged631_411_res);
	return result;
}

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4_cache {
	// RAM Box: {[3, 1083], [-2, 1921]}
	// Capacity: 546
	// # of read delays: 4
  // 0, 1, 273, 545
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 271> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 271> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_273() {
		return f4;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_545() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4_cache {
	// RAM Box: {[2, 1082], [-2, 1921]}
	// Capacity: 546
	// # of read delays: 4
  // 0, 1, 273, 545
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 271> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 271> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_273() {
		return f4;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_545() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4_cache {
	// RAM Box: {[1, 1081], [-2, 1921]}
	// Capacity: 546
	// # of read delays: 4
  // 0, 1, 273, 545
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 271> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 271> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_273() {
		return f4;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_545() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4_cache {
	// RAM Box: {[0, 1084], [-2, 1920]}
	// Capacity: 546
	// # of read delays: 5
  // 0, 1, 272, 273, 545
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 270> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 271> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_272() {
		return f4;
	}

	inline hw_uint<16> peek_273() {
		return f6;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_545() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_cache {
  // Reader addrs...
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
    // { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // # of banks: 4
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4;
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4;
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4;
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4;
};



inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396);
}

inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397);
}

inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398);
}

inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399);
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_380_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_380 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4.peek_545();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_381_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_381 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_382_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_382 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4.peek_272();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_383_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_383 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_384_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_384 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4.peek_545();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_385_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_385 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_386_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_386 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[3 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_387_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_387 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_388_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_388 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4.peek_545();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_389_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_389 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_390_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_390 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_391_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_391 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_392_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_392 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4.peek_545();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_393_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_393 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_394_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_394 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 4stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_merged_banks_4.peek_273();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_395_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged617_395 read pattern: { stg13_1_merged617[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[4stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 270 }
  // Read schedule : { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399;
  return 0;
}

// # of bundles = 2
// stg12_to_gp_620_ld85_merged665_write
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399
inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_write_bundle_write(hw_uint<64>& stg12_to_gp_620_ld85_merged665_write, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_res = stg12_to_gp_620_ld85_merged665_write.extract<0, 15>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_396_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_res = stg12_to_gp_620_ld85_merged665_write.extract<16, 31>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_397_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_res = stg12_to_gp_620_ld85_merged665_write.extract<32, 47>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_398_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_res = stg12_to_gp_620_ld85_merged665_write.extract<48, 63>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_399_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
}

// stg13_1_merged617_read
//	stg12_FIFO_buf84_stg13_1_merged617_380
//	stg12_FIFO_buf84_stg13_1_merged617_381
//	stg12_FIFO_buf84_stg13_1_merged617_382
//	stg12_FIFO_buf84_stg13_1_merged617_383
//	stg12_FIFO_buf84_stg13_1_merged617_384
//	stg12_FIFO_buf84_stg13_1_merged617_385
//	stg12_FIFO_buf84_stg13_1_merged617_386
//	stg12_FIFO_buf84_stg13_1_merged617_387
//	stg12_FIFO_buf84_stg13_1_merged617_388
//	stg12_FIFO_buf84_stg13_1_merged617_389
//	stg12_FIFO_buf84_stg13_1_merged617_390
//	stg12_FIFO_buf84_stg13_1_merged617_391
//	stg12_FIFO_buf84_stg13_1_merged617_392
//	stg12_FIFO_buf84_stg13_1_merged617_393
//	stg12_FIFO_buf84_stg13_1_merged617_394
//	stg12_FIFO_buf84_stg13_1_merged617_395
inline hw_uint<256> stg12_FIFO_buf84_stg13_1_merged617_read_bundle_read(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg12_FIFO_buf84_stg13_1_merged617_380
    // stg12_FIFO_buf84_stg13_1_merged617_381
    // stg12_FIFO_buf84_stg13_1_merged617_382
    // stg12_FIFO_buf84_stg13_1_merged617_383
    // stg12_FIFO_buf84_stg13_1_merged617_384
    // stg12_FIFO_buf84_stg13_1_merged617_385
    // stg12_FIFO_buf84_stg13_1_merged617_386
    // stg12_FIFO_buf84_stg13_1_merged617_387
    // stg12_FIFO_buf84_stg13_1_merged617_388
    // stg12_FIFO_buf84_stg13_1_merged617_389
    // stg12_FIFO_buf84_stg13_1_merged617_390
    // stg12_FIFO_buf84_stg13_1_merged617_391
    // stg12_FIFO_buf84_stg13_1_merged617_392
    // stg12_FIFO_buf84_stg13_1_merged617_393
    // stg12_FIFO_buf84_stg13_1_merged617_394
    // stg12_FIFO_buf84_stg13_1_merged617_395

	hw_uint<256> result;
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_380_res = stg12_FIFO_buf84_stg13_1_merged617_380_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_380_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_381_res = stg12_FIFO_buf84_stg13_1_merged617_381_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_381_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_382_res = stg12_FIFO_buf84_stg13_1_merged617_382_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_382_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_383_res = stg12_FIFO_buf84_stg13_1_merged617_383_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_383_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_384_res = stg12_FIFO_buf84_stg13_1_merged617_384_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<64, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_384_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_385_res = stg12_FIFO_buf84_stg13_1_merged617_385_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<80, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_385_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_386_res = stg12_FIFO_buf84_stg13_1_merged617_386_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<96, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_386_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_387_res = stg12_FIFO_buf84_stg13_1_merged617_387_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<112, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_387_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_388_res = stg12_FIFO_buf84_stg13_1_merged617_388_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<128, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_388_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_389_res = stg12_FIFO_buf84_stg13_1_merged617_389_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<144, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_389_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_390_res = stg12_FIFO_buf84_stg13_1_merged617_390_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<160, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_390_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_391_res = stg12_FIFO_buf84_stg13_1_merged617_391_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<176, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_391_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_392_res = stg12_FIFO_buf84_stg13_1_merged617_392_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<192, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_392_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_393_res = stg12_FIFO_buf84_stg13_1_merged617_393_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<208, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_393_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_394_res = stg12_FIFO_buf84_stg13_1_merged617_394_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<224, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_394_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged617_395_res = stg12_FIFO_buf84_stg13_1_merged617_395_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<240, 256>(result, stg12_FIFO_buf84_stg13_1_merged617_395_res);
	return result;
}

struct stg13_stg13_1_merged617_376_to_stg13_stg13_ld25_merged655_372_cache {
	// RAM Box: {[3, 1083], [-1, 1920]}
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

struct stg13_stg13_1_merged617_377_to_stg13_stg13_ld25_merged655_373_cache {
	// RAM Box: {[2, 1082], [-1, 1920]}
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

struct stg13_stg13_1_merged617_378_to_stg13_stg13_ld25_merged655_374_cache {
	// RAM Box: {[1, 1081], [-1, 1920]}
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

struct stg13_stg13_1_merged617_379_to_stg13_stg13_ld25_merged655_375_cache {
	// RAM Box: {[0, 1080], [-1, 1920]}
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

struct stg13_cache {
  // Reader addrs...
    // { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[3 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
    // { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[2 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
    // { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[1 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
    // { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
  // # of banks: 4
  stg13_stg13_1_merged617_376_to_stg13_stg13_ld25_merged655_372_cache stg13_stg13_1_merged617_376_to_stg13_stg13_ld25_merged655_372;
  stg13_stg13_1_merged617_377_to_stg13_stg13_ld25_merged655_373_cache stg13_stg13_1_merged617_377_to_stg13_stg13_ld25_merged655_373;
  stg13_stg13_1_merged617_378_to_stg13_stg13_ld25_merged655_374_cache stg13_stg13_1_merged617_378_to_stg13_stg13_ld25_merged655_374;
  stg13_stg13_1_merged617_379_to_stg13_stg13_ld25_merged655_375_cache stg13_stg13_1_merged617_379_to_stg13_stg13_ld25_merged655_375;
};



inline void stg13_stg13_1_merged617_376_write(hw_uint<16>& stg13_stg13_1_merged617_376, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged617_376_to_stg13_stg13_ld25_merged655_372.push(stg13_stg13_1_merged617_376);
}

inline void stg13_stg13_1_merged617_377_write(hw_uint<16>& stg13_stg13_1_merged617_377, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged617_377_to_stg13_stg13_ld25_merged655_373.push(stg13_stg13_1_merged617_377);
}

inline void stg13_stg13_1_merged617_378_write(hw_uint<16>& stg13_stg13_1_merged617_378, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged617_378_to_stg13_stg13_ld25_merged655_374.push(stg13_stg13_1_merged617_378);
}

inline void stg13_stg13_1_merged617_379_write(hw_uint<16>& stg13_stg13_1_merged617_379, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged617_379_to_stg13_stg13_ld25_merged655_375.push(stg13_stg13_1_merged617_379);
}

inline hw_uint<16> stg13_stg13_ld25_merged655_372_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged655_372 read pattern: { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[3 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
  // Read schedule : { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_stg13_1_merged617_376 = stg13.stg13_stg13_1_merged617_376_to_stg13_stg13_ld25_merged655_372.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged617_376;
  return 0;
}

inline hw_uint<16> stg13_stg13_ld25_merged655_373_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged655_373 read pattern: { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[2 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
  // Read schedule : { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_stg13_1_merged617_377 = stg13.stg13_stg13_1_merged617_377_to_stg13_stg13_ld25_merged655_373.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged617_377;
  return 0;
}

inline hw_uint<16> stg13_stg13_ld25_merged655_374_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged655_374 read pattern: { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[1 + 4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
  // Read schedule : { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_stg13_1_merged617_378 = stg13.stg13_stg13_1_merged617_378_to_stg13_stg13_ld25_merged655_374.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged617_378;
  return 0;
}

inline hw_uint<16> stg13_stg13_ld25_merged655_375_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged655_375 read pattern: { stg13_ld25_merged655[root = 0, stg13_ld26, stg13_ld25] -> stg13[4stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 270 }
  // Read schedule : { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  // Write schedule: { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_stg13_1_merged617_379 = stg13.stg13_stg13_1_merged617_379_to_stg13_stg13_ld25_merged655_375.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged617_379;
  return 0;
}

// # of bundles = 2
// stg13_1_merged617_write
//	stg13_stg13_1_merged617_376
//	stg13_stg13_1_merged617_377
//	stg13_stg13_1_merged617_378
//	stg13_stg13_1_merged617_379
inline void stg13_stg13_1_merged617_write_bundle_write(hw_uint<64>& stg13_1_merged617_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_1_merged617_376_res = stg13_1_merged617_write.extract<0, 15>();
	stg13_stg13_1_merged617_376_write(stg13_stg13_1_merged617_376_res, stg13, root, stg13_0, stg13_1, dynamic_address);
	hw_uint<16> stg13_stg13_1_merged617_377_res = stg13_1_merged617_write.extract<16, 31>();
	stg13_stg13_1_merged617_377_write(stg13_stg13_1_merged617_377_res, stg13, root, stg13_0, stg13_1, dynamic_address);
	hw_uint<16> stg13_stg13_1_merged617_378_res = stg13_1_merged617_write.extract<32, 47>();
	stg13_stg13_1_merged617_378_write(stg13_stg13_1_merged617_378_res, stg13, root, stg13_0, stg13_1, dynamic_address);
	hw_uint<16> stg13_stg13_1_merged617_379_res = stg13_1_merged617_write.extract<48, 63>();
	stg13_stg13_1_merged617_379_write(stg13_stg13_1_merged617_379_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

// stg13_ld25_merged655_read
//	stg13_stg13_ld25_merged655_372
//	stg13_stg13_ld25_merged655_373
//	stg13_stg13_ld25_merged655_374
//	stg13_stg13_ld25_merged655_375
inline hw_uint<64> stg13_stg13_ld25_merged655_read_bundle_read(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_stg13_ld25_merged655_372
    // stg13_stg13_ld25_merged655_373
    // stg13_stg13_ld25_merged655_374
    // stg13_stg13_ld25_merged655_375

	hw_uint<64> result;
	hw_uint<16> stg13_stg13_ld25_merged655_372_res = stg13_stg13_ld25_merged655_372_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<0, 64>(result, stg13_stg13_ld25_merged655_372_res);
	hw_uint<16> stg13_stg13_ld25_merged655_373_res = stg13_stg13_ld25_merged655_373_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<16, 64>(result, stg13_stg13_ld25_merged655_373_res);
	hw_uint<16> stg13_stg13_ld25_merged655_374_res = stg13_stg13_ld25_merged655_374_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<32, 64>(result, stg13_stg13_ld25_merged655_374_res);
	hw_uint<16> stg13_stg13_ld25_merged655_375_res = stg13_stg13_ld25_merged655_375_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<48, 64>(result, stg13_stg13_ld25_merged655_375_res);
	return result;
}

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4_cache {
	// RAM Box: {[3, 1079], [-1, 1920]}
	// Capacity: 544
	// # of read delays: 4
  // 0, 1, 272, 543
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 270> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 270> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_272() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4_cache {
	// RAM Box: {[2, 1078], [-1, 1920]}
	// Capacity: 544
	// # of read delays: 4
  // 0, 1, 272, 543
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 270> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 270> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_272() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4_cache {
	// RAM Box: {[1, 1077], [-1, 1920]}
	// Capacity: 544
	// # of read delays: 4
  // 0, 1, 272, 543
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 270> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 270> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_272() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4_cache {
	// RAM Box: {[0, 1080], [-1, 1919]}
	// Capacity: 544
	// # of read delays: 5
  // 0, 1, 271, 272, 543
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 269> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 270> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_270() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_271() {
		return f4;
	}

	inline hw_uint<16> peek_272() {
		return f6;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_543() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 270
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 270 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_cache {
  // Reader addrs...
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
    // { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // # of banks: 4
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4;
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4;
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4;
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4;
};



inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360);
}

inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361);
}

inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362);
}

inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363);
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_344_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_344 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4.peek_543();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_345_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_345 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_346_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_346 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4.peek_271();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_347_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_347 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_348_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_348 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4.peek_543();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_349_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_349 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_350_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_350 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[3 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_351_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_351 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_352_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_352 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4.peek_543();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_353_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_353 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_354_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_354 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_355_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_355 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_356_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_356 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4.peek_543();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_357_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_357 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_358_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_358 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 4stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_merged_banks_4.peek_272();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_359_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged620_359 read pattern: { stg14_1_merged620[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[4stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 269 }
  // Read schedule : { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363;
  return 0;
}

// # of bundles = 2
// stg13_to_gp_724_ld89_merged643_write
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363
inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_write_bundle_write(hw_uint<64>& stg13_to_gp_724_ld89_merged643_write, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_res = stg13_to_gp_724_ld89_merged643_write.extract<0, 15>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_360_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_res = stg13_to_gp_724_ld89_merged643_write.extract<16, 31>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_361_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_res = stg13_to_gp_724_ld89_merged643_write.extract<32, 47>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_362_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_res = stg13_to_gp_724_ld89_merged643_write.extract<48, 63>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_363_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
}

// stg14_1_merged620_read
//	stg13_FIFO_buf88_stg14_1_merged620_344
//	stg13_FIFO_buf88_stg14_1_merged620_345
//	stg13_FIFO_buf88_stg14_1_merged620_346
//	stg13_FIFO_buf88_stg14_1_merged620_347
//	stg13_FIFO_buf88_stg14_1_merged620_348
//	stg13_FIFO_buf88_stg14_1_merged620_349
//	stg13_FIFO_buf88_stg14_1_merged620_350
//	stg13_FIFO_buf88_stg14_1_merged620_351
//	stg13_FIFO_buf88_stg14_1_merged620_352
//	stg13_FIFO_buf88_stg14_1_merged620_353
//	stg13_FIFO_buf88_stg14_1_merged620_354
//	stg13_FIFO_buf88_stg14_1_merged620_355
//	stg13_FIFO_buf88_stg14_1_merged620_356
//	stg13_FIFO_buf88_stg14_1_merged620_357
//	stg13_FIFO_buf88_stg14_1_merged620_358
//	stg13_FIFO_buf88_stg14_1_merged620_359
inline hw_uint<256> stg13_FIFO_buf88_stg14_1_merged620_read_bundle_read(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg13_FIFO_buf88_stg14_1_merged620_344
    // stg13_FIFO_buf88_stg14_1_merged620_345
    // stg13_FIFO_buf88_stg14_1_merged620_346
    // stg13_FIFO_buf88_stg14_1_merged620_347
    // stg13_FIFO_buf88_stg14_1_merged620_348
    // stg13_FIFO_buf88_stg14_1_merged620_349
    // stg13_FIFO_buf88_stg14_1_merged620_350
    // stg13_FIFO_buf88_stg14_1_merged620_351
    // stg13_FIFO_buf88_stg14_1_merged620_352
    // stg13_FIFO_buf88_stg14_1_merged620_353
    // stg13_FIFO_buf88_stg14_1_merged620_354
    // stg13_FIFO_buf88_stg14_1_merged620_355
    // stg13_FIFO_buf88_stg14_1_merged620_356
    // stg13_FIFO_buf88_stg14_1_merged620_357
    // stg13_FIFO_buf88_stg14_1_merged620_358
    // stg13_FIFO_buf88_stg14_1_merged620_359

	hw_uint<256> result;
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_344_res = stg13_FIFO_buf88_stg14_1_merged620_344_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_344_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_345_res = stg13_FIFO_buf88_stg14_1_merged620_345_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_345_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_346_res = stg13_FIFO_buf88_stg14_1_merged620_346_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_346_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_347_res = stg13_FIFO_buf88_stg14_1_merged620_347_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_347_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_348_res = stg13_FIFO_buf88_stg14_1_merged620_348_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<64, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_348_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_349_res = stg13_FIFO_buf88_stg14_1_merged620_349_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<80, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_349_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_350_res = stg13_FIFO_buf88_stg14_1_merged620_350_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<96, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_350_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_351_res = stg13_FIFO_buf88_stg14_1_merged620_351_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<112, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_351_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_352_res = stg13_FIFO_buf88_stg14_1_merged620_352_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<128, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_352_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_353_res = stg13_FIFO_buf88_stg14_1_merged620_353_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<144, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_353_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_354_res = stg13_FIFO_buf88_stg14_1_merged620_354_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<160, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_354_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_355_res = stg13_FIFO_buf88_stg14_1_merged620_355_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<176, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_355_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_356_res = stg13_FIFO_buf88_stg14_1_merged620_356_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<192, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_356_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_357_res = stg13_FIFO_buf88_stg14_1_merged620_357_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<208, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_357_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_358_res = stg13_FIFO_buf88_stg14_1_merged620_358_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<224, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_358_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged620_359_res = stg13_FIFO_buf88_stg14_1_merged620_359_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<240, 256>(result, stg13_FIFO_buf88_stg14_1_merged620_359_res);
	return result;
}

struct stg14_stg14_1_merged620_340_to_stg14_stg14_ld29_merged633_336_cache {
	// RAM Box: {[3, 1079], [0, 1919]}
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

struct stg14_stg14_1_merged620_341_to_stg14_stg14_ld29_merged633_337_cache {
	// RAM Box: {[2, 1078], [0, 1919]}
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

struct stg14_stg14_1_merged620_342_to_stg14_stg14_ld29_merged633_338_cache {
	// RAM Box: {[1, 1077], [0, 1919]}
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

struct stg14_stg14_1_merged620_343_to_stg14_stg14_ld29_merged633_339_cache {
	// RAM Box: {[0, 1076], [0, 1919]}
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

struct stg14_cache {
  // Reader addrs...
    // { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[3 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
    // { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[2 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
    // { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[1 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
    // { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
  // # of banks: 4
  stg14_stg14_1_merged620_340_to_stg14_stg14_ld29_merged633_336_cache stg14_stg14_1_merged620_340_to_stg14_stg14_ld29_merged633_336;
  stg14_stg14_1_merged620_341_to_stg14_stg14_ld29_merged633_337_cache stg14_stg14_1_merged620_341_to_stg14_stg14_ld29_merged633_337;
  stg14_stg14_1_merged620_342_to_stg14_stg14_ld29_merged633_338_cache stg14_stg14_1_merged620_342_to_stg14_stg14_ld29_merged633_338;
  stg14_stg14_1_merged620_343_to_stg14_stg14_ld29_merged633_339_cache stg14_stg14_1_merged620_343_to_stg14_stg14_ld29_merged633_339;
};



inline void stg14_stg14_1_merged620_340_write(hw_uint<16>& stg14_stg14_1_merged620_340, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged620_340_to_stg14_stg14_ld29_merged633_336.push(stg14_stg14_1_merged620_340);
}

inline void stg14_stg14_1_merged620_341_write(hw_uint<16>& stg14_stg14_1_merged620_341, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged620_341_to_stg14_stg14_ld29_merged633_337.push(stg14_stg14_1_merged620_341);
}

inline void stg14_stg14_1_merged620_342_write(hw_uint<16>& stg14_stg14_1_merged620_342, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged620_342_to_stg14_stg14_ld29_merged633_338.push(stg14_stg14_1_merged620_342);
}

inline void stg14_stg14_1_merged620_343_write(hw_uint<16>& stg14_stg14_1_merged620_343, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged620_343_to_stg14_stg14_ld29_merged633_339.push(stg14_stg14_1_merged620_343);
}

inline hw_uint<16> stg14_stg14_ld29_merged633_336_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged633_336 read pattern: { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[3 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
  // Read schedule : { stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_stg14_1_merged620_340 = stg14.stg14_stg14_1_merged620_340_to_stg14_stg14_ld29_merged633_336.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged620_340;
  return 0;
}

inline hw_uint<16> stg14_stg14_ld29_merged633_337_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged633_337 read pattern: { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[2 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
  // Read schedule : { stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_stg14_1_merged620_341 = stg14.stg14_stg14_1_merged620_341_to_stg14_stg14_ld29_merged633_337.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged620_341;
  return 0;
}

inline hw_uint<16> stg14_stg14_ld29_merged633_338_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged633_338 read pattern: { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[1 + 4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
  // Read schedule : { stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_stg14_1_merged620_342 = stg14.stg14_stg14_1_merged620_342_to_stg14_stg14_ld29_merged633_338.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged620_342;
  return 0;
}

inline hw_uint<16> stg14_stg14_ld29_merged633_339_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged633_339 read pattern: { stg14_ld29_merged633[root = 0, stg14_ld30, stg14_ld29] -> stg14[4stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 269 }
  // Read schedule : { stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_stg14_1_merged620_343 = stg14.stg14_stg14_1_merged620_343_to_stg14_stg14_ld29_merged633_339.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged620_343;
  return 0;
}

// # of bundles = 2
// stg14_1_merged620_write
//	stg14_stg14_1_merged620_340
//	stg14_stg14_1_merged620_341
//	stg14_stg14_1_merged620_342
//	stg14_stg14_1_merged620_343
inline void stg14_stg14_1_merged620_write_bundle_write(hw_uint<64>& stg14_1_merged620_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_1_merged620_340_res = stg14_1_merged620_write.extract<0, 15>();
	stg14_stg14_1_merged620_340_write(stg14_stg14_1_merged620_340_res, stg14, root, stg14_0, stg14_1, dynamic_address);
	hw_uint<16> stg14_stg14_1_merged620_341_res = stg14_1_merged620_write.extract<16, 31>();
	stg14_stg14_1_merged620_341_write(stg14_stg14_1_merged620_341_res, stg14, root, stg14_0, stg14_1, dynamic_address);
	hw_uint<16> stg14_stg14_1_merged620_342_res = stg14_1_merged620_write.extract<32, 47>();
	stg14_stg14_1_merged620_342_write(stg14_stg14_1_merged620_342_res, stg14, root, stg14_0, stg14_1, dynamic_address);
	hw_uint<16> stg14_stg14_1_merged620_343_res = stg14_1_merged620_write.extract<48, 63>();
	stg14_stg14_1_merged620_343_write(stg14_stg14_1_merged620_343_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

// stg14_ld29_merged633_read
//	stg14_stg14_ld29_merged633_336
//	stg14_stg14_ld29_merged633_337
//	stg14_stg14_ld29_merged633_338
//	stg14_stg14_ld29_merged633_339
inline hw_uint<64> stg14_stg14_ld29_merged633_read_bundle_read(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
  // # of ports in bundle: 4
    // stg14_stg14_ld29_merged633_336
    // stg14_stg14_ld29_merged633_337
    // stg14_stg14_ld29_merged633_338
    // stg14_stg14_ld29_merged633_339

	hw_uint<64> result;
	hw_uint<16> stg14_stg14_ld29_merged633_336_res = stg14_stg14_ld29_merged633_336_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<0, 64>(result, stg14_stg14_ld29_merged633_336_res);
	hw_uint<16> stg14_stg14_ld29_merged633_337_res = stg14_stg14_ld29_merged633_337_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<16, 64>(result, stg14_stg14_ld29_merged633_337_res);
	hw_uint<16> stg14_stg14_ld29_merged633_338_res = stg14_stg14_ld29_merged633_338_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<32, 64>(result, stg14_stg14_ld29_merged633_338_res);
	hw_uint<16> stg14_stg14_ld29_merged633_339_res = stg14_stg14_ld29_merged633_339_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<48, 64>(result, stg14_stg14_ld29_merged633_339_res);
	return result;
}

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_544_cache {
	// RAM Box: {[3, 1079], [0, 1919]}
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

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_545_cache {
	// RAM Box: {[2, 1078], [0, 1919]}
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

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_546_cache {
	// RAM Box: {[1, 1077], [0, 1919]}
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

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_547_cache {
	// RAM Box: {[0, 1076], [0, 1919]}
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

struct stg14_FIFO_buf92_cache {
  // Reader addrs...
    // { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[3 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
    // { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[2 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
    // { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[1 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
    // { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
  // # of banks: 4
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_544_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_544;
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_545_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_545;
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_546_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_546;
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_547_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_547;
};



inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_544.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324);
}

inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_545.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325);
}

inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_546.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326);
}

inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_547.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327);
}

inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_544_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdyn_1_1_merged623_544 read pattern: { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[3 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
  // Read schedule : { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_544.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324;
  return 0;
}

inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_545_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdyn_1_1_merged623_545 read pattern: { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[2 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
  // Read schedule : { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_545.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325;
  return 0;
}

inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_546_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdyn_1_1_merged623_546 read pattern: { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[1 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
  // Read schedule : { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_546.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326;
  return 0;
}

inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_547_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdyn_1_1_merged623_547 read pattern: { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
  // Read schedule : { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  // Write schedule: { stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_to_stg14_FIFO_buf92_jacdyn_1_1_merged623_547.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327;
  return 0;
}

// # of bundles = 2
// jacdyn_1_1_merged623_read
//	stg14_FIFO_buf92_jacdyn_1_1_merged623_544
//	stg14_FIFO_buf92_jacdyn_1_1_merged623_545
//	stg14_FIFO_buf92_jacdyn_1_1_merged623_546
//	stg14_FIFO_buf92_jacdyn_1_1_merged623_547
inline hw_uint<64> stg14_FIFO_buf92_jacdyn_1_1_merged623_read_bundle_read(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg14_FIFO_buf92_jacdyn_1_1_merged623_544
    // stg14_FIFO_buf92_jacdyn_1_1_merged623_545
    // stg14_FIFO_buf92_jacdyn_1_1_merged623_546
    // stg14_FIFO_buf92_jacdyn_1_1_merged623_547

	hw_uint<64> result;
	hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_544_res = stg14_FIFO_buf92_jacdyn_1_1_merged623_544_select(stg14_FIFO_buf92, root, jacdyn_1_0, jacdyn_1_1, dynamic_address);
	set_at<0, 64>(result, stg14_FIFO_buf92_jacdyn_1_1_merged623_544_res);
	hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_545_res = stg14_FIFO_buf92_jacdyn_1_1_merged623_545_select(stg14_FIFO_buf92, root, jacdyn_1_0, jacdyn_1_1, dynamic_address);
	set_at<16, 64>(result, stg14_FIFO_buf92_jacdyn_1_1_merged623_545_res);
	hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_546_res = stg14_FIFO_buf92_jacdyn_1_1_merged623_546_select(stg14_FIFO_buf92, root, jacdyn_1_0, jacdyn_1_1, dynamic_address);
	set_at<32, 64>(result, stg14_FIFO_buf92_jacdyn_1_1_merged623_546_res);
	hw_uint<16> stg14_FIFO_buf92_jacdyn_1_1_merged623_547_res = stg14_FIFO_buf92_jacdyn_1_1_merged623_547_select(stg14_FIFO_buf92, root, jacdyn_1_0, jacdyn_1_1, dynamic_address);
	set_at<48, 64>(result, stg14_FIFO_buf92_jacdyn_1_1_merged623_547_res);
	return result;
}

// stg14_to_gp_128_ld93_merged677_write
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327
inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_write_bundle_write(hw_uint<64>& stg14_to_gp_128_ld93_merged677_write, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_res = stg14_to_gp_128_ld93_merged677_write.extract<0, 15>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_324_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_res = stg14_to_gp_128_ld93_merged677_write.extract<16, 31>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_325_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_res = stg14_to_gp_128_ld93_merged677_write.extract<32, 47>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_326_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_res = stg14_to_gp_128_ld93_merged677_write.extract<48, 63>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_327_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
}

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4_cache {
	// RAM Box: {[3, 1127], [-13, 1932]}
	// Capacity: 568
	// # of read delays: 4
  // 0, 1, 284, 567
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 282> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 282> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_283() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_284() {
		return f4;
	}

	inline hw_uint<16> peek_566() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_567() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4_cache {
	// RAM Box: {[2, 1126], [-13, 1932]}
	// Capacity: 568
	// # of read delays: 4
  // 0, 1, 284, 567
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 282> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 282> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_283() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_284() {
		return f4;
	}

	inline hw_uint<16> peek_566() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_567() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4_cache {
	// RAM Box: {[1, 1125], [-13, 1932]}
	// Capacity: 568
	// # of read delays: 4
  // 0, 1, 284, 567
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 282> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 282> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_283() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_284() {
		return f4;
	}

	inline hw_uint<16> peek_566() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_567() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4_cache {
	// RAM Box: {[0, 1128], [-13, 1931]}
	// Capacity: 568
	// # of read delays: 5
  // 0, 1, 283, 284, 567
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 281> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 282> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_282() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_283() {
		return f4;
	}

	inline hw_uint<16> peek_284() {
		return f6;
	}

	inline hw_uint<16> peek_566() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_567() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_cache {
  // Reader addrs...
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
    // { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // # of banks: 4
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4;
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4;
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4;
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4;
};



inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288);
}

inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289);
}

inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290);
}

inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291);
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_272_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_272 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4.peek_567();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_273_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_273 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_274_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_274 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4.peek_283();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_275_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_275 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_276_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_276 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4.peek_567();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_277_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_277 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_278_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_278 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[3 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_279_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_279 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_280_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_280 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4.peek_567();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_281_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_281 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_282_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_282 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_283_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_283 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_284_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_284 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4.peek_567();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_285_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_285 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_286_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_286 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 4stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_merged_banks_4.peek_284();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_287_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged584_287 read pattern: { stg2_1_merged584[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[4stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 281 }
  // Read schedule : { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291;
  return 0;
}

// # of bundles = 2
// stg1_to_gp_98_ld73_merged625_write
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291
inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_write_bundle_write(hw_uint<64>& stg1_to_gp_98_ld73_merged625_write, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_res = stg1_to_gp_98_ld73_merged625_write.extract<0, 15>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_288_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_res = stg1_to_gp_98_ld73_merged625_write.extract<16, 31>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_289_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_res = stg1_to_gp_98_ld73_merged625_write.extract<32, 47>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_290_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_res = stg1_to_gp_98_ld73_merged625_write.extract<48, 63>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_291_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
}

// stg2_1_merged584_read
//	stg1_FIFO_buf72_stg2_1_merged584_272
//	stg1_FIFO_buf72_stg2_1_merged584_273
//	stg1_FIFO_buf72_stg2_1_merged584_274
//	stg1_FIFO_buf72_stg2_1_merged584_275
//	stg1_FIFO_buf72_stg2_1_merged584_276
//	stg1_FIFO_buf72_stg2_1_merged584_277
//	stg1_FIFO_buf72_stg2_1_merged584_278
//	stg1_FIFO_buf72_stg2_1_merged584_279
//	stg1_FIFO_buf72_stg2_1_merged584_280
//	stg1_FIFO_buf72_stg2_1_merged584_281
//	stg1_FIFO_buf72_stg2_1_merged584_282
//	stg1_FIFO_buf72_stg2_1_merged584_283
//	stg1_FIFO_buf72_stg2_1_merged584_284
//	stg1_FIFO_buf72_stg2_1_merged584_285
//	stg1_FIFO_buf72_stg2_1_merged584_286
//	stg1_FIFO_buf72_stg2_1_merged584_287
inline hw_uint<256> stg1_FIFO_buf72_stg2_1_merged584_read_bundle_read(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg1_FIFO_buf72_stg2_1_merged584_272
    // stg1_FIFO_buf72_stg2_1_merged584_273
    // stg1_FIFO_buf72_stg2_1_merged584_274
    // stg1_FIFO_buf72_stg2_1_merged584_275
    // stg1_FIFO_buf72_stg2_1_merged584_276
    // stg1_FIFO_buf72_stg2_1_merged584_277
    // stg1_FIFO_buf72_stg2_1_merged584_278
    // stg1_FIFO_buf72_stg2_1_merged584_279
    // stg1_FIFO_buf72_stg2_1_merged584_280
    // stg1_FIFO_buf72_stg2_1_merged584_281
    // stg1_FIFO_buf72_stg2_1_merged584_282
    // stg1_FIFO_buf72_stg2_1_merged584_283
    // stg1_FIFO_buf72_stg2_1_merged584_284
    // stg1_FIFO_buf72_stg2_1_merged584_285
    // stg1_FIFO_buf72_stg2_1_merged584_286
    // stg1_FIFO_buf72_stg2_1_merged584_287

	hw_uint<256> result;
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_272_res = stg1_FIFO_buf72_stg2_1_merged584_272_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_272_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_273_res = stg1_FIFO_buf72_stg2_1_merged584_273_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_273_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_274_res = stg1_FIFO_buf72_stg2_1_merged584_274_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_274_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_275_res = stg1_FIFO_buf72_stg2_1_merged584_275_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_275_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_276_res = stg1_FIFO_buf72_stg2_1_merged584_276_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<64, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_276_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_277_res = stg1_FIFO_buf72_stg2_1_merged584_277_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<80, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_277_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_278_res = stg1_FIFO_buf72_stg2_1_merged584_278_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<96, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_278_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_279_res = stg1_FIFO_buf72_stg2_1_merged584_279_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<112, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_279_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_280_res = stg1_FIFO_buf72_stg2_1_merged584_280_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<128, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_280_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_281_res = stg1_FIFO_buf72_stg2_1_merged584_281_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<144, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_281_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_282_res = stg1_FIFO_buf72_stg2_1_merged584_282_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<160, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_282_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_283_res = stg1_FIFO_buf72_stg2_1_merged584_283_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<176, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_283_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_284_res = stg1_FIFO_buf72_stg2_1_merged584_284_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<192, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_284_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_285_res = stg1_FIFO_buf72_stg2_1_merged584_285_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<208, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_285_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_286_res = stg1_FIFO_buf72_stg2_1_merged584_286_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<224, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_286_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged584_287_res = stg1_FIFO_buf72_stg2_1_merged584_287_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<240, 256>(result, stg1_FIFO_buf72_stg2_1_merged584_287_res);
	return result;
}

struct stg2_stg2_1_merged584_268_to_stg2_stg2_ld33_merged635_264_cache {
	// RAM Box: {[3, 1127], [-12, 1931]}
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

struct stg2_stg2_1_merged584_269_to_stg2_stg2_ld33_merged635_265_cache {
	// RAM Box: {[2, 1126], [-12, 1931]}
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

struct stg2_stg2_1_merged584_270_to_stg2_stg2_ld33_merged635_266_cache {
	// RAM Box: {[1, 1125], [-12, 1931]}
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

struct stg2_stg2_1_merged584_271_to_stg2_stg2_ld33_merged635_267_cache {
	// RAM Box: {[0, 1124], [-12, 1931]}
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

struct stg2_cache {
  // Reader addrs...
    // { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[3 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
    // { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[2 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
    // { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[1 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
    // { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
  // # of banks: 4
  stg2_stg2_1_merged584_268_to_stg2_stg2_ld33_merged635_264_cache stg2_stg2_1_merged584_268_to_stg2_stg2_ld33_merged635_264;
  stg2_stg2_1_merged584_269_to_stg2_stg2_ld33_merged635_265_cache stg2_stg2_1_merged584_269_to_stg2_stg2_ld33_merged635_265;
  stg2_stg2_1_merged584_270_to_stg2_stg2_ld33_merged635_266_cache stg2_stg2_1_merged584_270_to_stg2_stg2_ld33_merged635_266;
  stg2_stg2_1_merged584_271_to_stg2_stg2_ld33_merged635_267_cache stg2_stg2_1_merged584_271_to_stg2_stg2_ld33_merged635_267;
};



inline void stg2_stg2_1_merged584_268_write(hw_uint<16>& stg2_stg2_1_merged584_268, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged584_268_to_stg2_stg2_ld33_merged635_264.push(stg2_stg2_1_merged584_268);
}

inline void stg2_stg2_1_merged584_269_write(hw_uint<16>& stg2_stg2_1_merged584_269, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged584_269_to_stg2_stg2_ld33_merged635_265.push(stg2_stg2_1_merged584_269);
}

inline void stg2_stg2_1_merged584_270_write(hw_uint<16>& stg2_stg2_1_merged584_270, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged584_270_to_stg2_stg2_ld33_merged635_266.push(stg2_stg2_1_merged584_270);
}

inline void stg2_stg2_1_merged584_271_write(hw_uint<16>& stg2_stg2_1_merged584_271, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged584_271_to_stg2_stg2_ld33_merged635_267.push(stg2_stg2_1_merged584_271);
}

inline hw_uint<16> stg2_stg2_ld33_merged635_264_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged635_264 read pattern: { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[3 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
  // Read schedule : { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_stg2_1_merged584_268 = stg2.stg2_stg2_1_merged584_268_to_stg2_stg2_ld33_merged635_264.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged584_268;
  return 0;
}

inline hw_uint<16> stg2_stg2_ld33_merged635_265_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged635_265 read pattern: { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[2 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
  // Read schedule : { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_stg2_1_merged584_269 = stg2.stg2_stg2_1_merged584_269_to_stg2_stg2_ld33_merged635_265.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged584_269;
  return 0;
}

inline hw_uint<16> stg2_stg2_ld33_merged635_266_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged635_266 read pattern: { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[1 + 4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
  // Read schedule : { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_stg2_1_merged584_270 = stg2.stg2_stg2_1_merged584_270_to_stg2_stg2_ld33_merged635_266.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged584_270;
  return 0;
}

inline hw_uint<16> stg2_stg2_ld33_merged635_267_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged635_267 read pattern: { stg2_ld33_merged635[root = 0, stg2_ld34, stg2_ld33] -> stg2[4stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 281 }
  // Read schedule : { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  // Write schedule: { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_stg2_1_merged584_271 = stg2.stg2_stg2_1_merged584_271_to_stg2_stg2_ld33_merged635_267.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged584_271;
  return 0;
}

// # of bundles = 2
// stg2_1_merged584_write
//	stg2_stg2_1_merged584_268
//	stg2_stg2_1_merged584_269
//	stg2_stg2_1_merged584_270
//	stg2_stg2_1_merged584_271
inline void stg2_stg2_1_merged584_write_bundle_write(hw_uint<64>& stg2_1_merged584_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_1_merged584_268_res = stg2_1_merged584_write.extract<0, 15>();
	stg2_stg2_1_merged584_268_write(stg2_stg2_1_merged584_268_res, stg2, root, stg2_0, stg2_1, dynamic_address);
	hw_uint<16> stg2_stg2_1_merged584_269_res = stg2_1_merged584_write.extract<16, 31>();
	stg2_stg2_1_merged584_269_write(stg2_stg2_1_merged584_269_res, stg2, root, stg2_0, stg2_1, dynamic_address);
	hw_uint<16> stg2_stg2_1_merged584_270_res = stg2_1_merged584_write.extract<32, 47>();
	stg2_stg2_1_merged584_270_write(stg2_stg2_1_merged584_270_res, stg2, root, stg2_0, stg2_1, dynamic_address);
	hw_uint<16> stg2_stg2_1_merged584_271_res = stg2_1_merged584_write.extract<48, 63>();
	stg2_stg2_1_merged584_271_write(stg2_stg2_1_merged584_271_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

// stg2_ld33_merged635_read
//	stg2_stg2_ld33_merged635_264
//	stg2_stg2_ld33_merged635_265
//	stg2_stg2_ld33_merged635_266
//	stg2_stg2_ld33_merged635_267
inline hw_uint<64> stg2_stg2_ld33_merged635_read_bundle_read(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_stg2_ld33_merged635_264
    // stg2_stg2_ld33_merged635_265
    // stg2_stg2_ld33_merged635_266
    // stg2_stg2_ld33_merged635_267

	hw_uint<64> result;
	hw_uint<16> stg2_stg2_ld33_merged635_264_res = stg2_stg2_ld33_merged635_264_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<0, 64>(result, stg2_stg2_ld33_merged635_264_res);
	hw_uint<16> stg2_stg2_ld33_merged635_265_res = stg2_stg2_ld33_merged635_265_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<16, 64>(result, stg2_stg2_ld33_merged635_265_res);
	hw_uint<16> stg2_stg2_ld33_merged635_266_res = stg2_stg2_ld33_merged635_266_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<32, 64>(result, stg2_stg2_ld33_merged635_266_res);
	hw_uint<16> stg2_stg2_ld33_merged635_267_res = stg2_stg2_ld33_merged635_267_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<48, 64>(result, stg2_stg2_ld33_merged635_267_res);
	return result;
}

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4_cache {
	// RAM Box: {[3, 1123], [-12, 1931]}
	// Capacity: 566
	// # of read delays: 4
  // 0, 1, 283, 565
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 281> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 281> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_282() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_283() {
		return f4;
	}

	inline hw_uint<16> peek_564() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_565() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4_cache {
	// RAM Box: {[2, 1122], [-12, 1931]}
	// Capacity: 566
	// # of read delays: 4
  // 0, 1, 283, 565
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 281> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 281> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_282() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_283() {
		return f4;
	}

	inline hw_uint<16> peek_564() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_565() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4_cache {
	// RAM Box: {[1, 1121], [-12, 1931]}
	// Capacity: 566
	// # of read delays: 4
  // 0, 1, 283, 565
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 281> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 281> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_282() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_283() {
		return f4;
	}

	inline hw_uint<16> peek_564() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_565() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4_cache {
	// RAM Box: {[0, 1124], [-12, 1930]}
	// Capacity: 566
	// # of read delays: 5
  // 0, 1, 282, 283, 565
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 280> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 281> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_281() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_282() {
		return f4;
	}

	inline hw_uint<16> peek_283() {
		return f6;
	}

	inline hw_uint<16> peek_564() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_565() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 281
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 281 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_cache {
  // Reader addrs...
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
    // { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // # of banks: 4
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4;
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4;
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4;
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4;
};



inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252);
}

inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253);
}

inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254);
}

inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255);
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_236_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_236 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4.peek_565();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_237_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_237 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_238_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_238 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4.peek_282();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_239_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_239 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_240_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_240 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4.peek_565();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_241_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_241 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_242_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_242 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[3 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_243_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_243 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_244_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_244 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4.peek_565();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_245_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_245 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_246_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_246 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_247_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_247 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_248_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_248 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4.peek_565();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_249_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_249 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_250_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_250 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 4stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_merged_banks_4.peek_283();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_251_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged587_251 read pattern: { stg3_1_merged587[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[4stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 280 }
  // Read schedule : { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255;
  return 0;
}

// # of bundles = 2
// stg2_to_gp_1032_ld97_merged679_write
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255
inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_write_bundle_write(hw_uint<64>& stg2_to_gp_1032_ld97_merged679_write, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_res = stg2_to_gp_1032_ld97_merged679_write.extract<0, 15>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_252_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_res = stg2_to_gp_1032_ld97_merged679_write.extract<16, 31>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_253_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_res = stg2_to_gp_1032_ld97_merged679_write.extract<32, 47>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_254_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_res = stg2_to_gp_1032_ld97_merged679_write.extract<48, 63>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_255_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
}

// stg3_1_merged587_read
//	stg2_FIFO_buf96_stg3_1_merged587_236
//	stg2_FIFO_buf96_stg3_1_merged587_237
//	stg2_FIFO_buf96_stg3_1_merged587_238
//	stg2_FIFO_buf96_stg3_1_merged587_239
//	stg2_FIFO_buf96_stg3_1_merged587_240
//	stg2_FIFO_buf96_stg3_1_merged587_241
//	stg2_FIFO_buf96_stg3_1_merged587_242
//	stg2_FIFO_buf96_stg3_1_merged587_243
//	stg2_FIFO_buf96_stg3_1_merged587_244
//	stg2_FIFO_buf96_stg3_1_merged587_245
//	stg2_FIFO_buf96_stg3_1_merged587_246
//	stg2_FIFO_buf96_stg3_1_merged587_247
//	stg2_FIFO_buf96_stg3_1_merged587_248
//	stg2_FIFO_buf96_stg3_1_merged587_249
//	stg2_FIFO_buf96_stg3_1_merged587_250
//	stg2_FIFO_buf96_stg3_1_merged587_251
inline hw_uint<256> stg2_FIFO_buf96_stg3_1_merged587_read_bundle_read(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg2_FIFO_buf96_stg3_1_merged587_236
    // stg2_FIFO_buf96_stg3_1_merged587_237
    // stg2_FIFO_buf96_stg3_1_merged587_238
    // stg2_FIFO_buf96_stg3_1_merged587_239
    // stg2_FIFO_buf96_stg3_1_merged587_240
    // stg2_FIFO_buf96_stg3_1_merged587_241
    // stg2_FIFO_buf96_stg3_1_merged587_242
    // stg2_FIFO_buf96_stg3_1_merged587_243
    // stg2_FIFO_buf96_stg3_1_merged587_244
    // stg2_FIFO_buf96_stg3_1_merged587_245
    // stg2_FIFO_buf96_stg3_1_merged587_246
    // stg2_FIFO_buf96_stg3_1_merged587_247
    // stg2_FIFO_buf96_stg3_1_merged587_248
    // stg2_FIFO_buf96_stg3_1_merged587_249
    // stg2_FIFO_buf96_stg3_1_merged587_250
    // stg2_FIFO_buf96_stg3_1_merged587_251

	hw_uint<256> result;
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_236_res = stg2_FIFO_buf96_stg3_1_merged587_236_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_236_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_237_res = stg2_FIFO_buf96_stg3_1_merged587_237_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_237_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_238_res = stg2_FIFO_buf96_stg3_1_merged587_238_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_238_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_239_res = stg2_FIFO_buf96_stg3_1_merged587_239_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_239_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_240_res = stg2_FIFO_buf96_stg3_1_merged587_240_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<64, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_240_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_241_res = stg2_FIFO_buf96_stg3_1_merged587_241_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<80, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_241_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_242_res = stg2_FIFO_buf96_stg3_1_merged587_242_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<96, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_242_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_243_res = stg2_FIFO_buf96_stg3_1_merged587_243_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<112, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_243_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_244_res = stg2_FIFO_buf96_stg3_1_merged587_244_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<128, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_244_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_245_res = stg2_FIFO_buf96_stg3_1_merged587_245_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<144, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_245_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_246_res = stg2_FIFO_buf96_stg3_1_merged587_246_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<160, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_246_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_247_res = stg2_FIFO_buf96_stg3_1_merged587_247_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<176, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_247_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_248_res = stg2_FIFO_buf96_stg3_1_merged587_248_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<192, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_248_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_249_res = stg2_FIFO_buf96_stg3_1_merged587_249_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<208, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_249_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_250_res = stg2_FIFO_buf96_stg3_1_merged587_250_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<224, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_250_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged587_251_res = stg2_FIFO_buf96_stg3_1_merged587_251_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<240, 256>(result, stg2_FIFO_buf96_stg3_1_merged587_251_res);
	return result;
}

struct stg3_stg3_1_merged587_232_to_stg3_stg3_ld37_merged657_228_cache {
	// RAM Box: {[3, 1123], [-11, 1930]}
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

struct stg3_stg3_1_merged587_233_to_stg3_stg3_ld37_merged657_229_cache {
	// RAM Box: {[2, 1122], [-11, 1930]}
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

struct stg3_stg3_1_merged587_234_to_stg3_stg3_ld37_merged657_230_cache {
	// RAM Box: {[1, 1121], [-11, 1930]}
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

struct stg3_stg3_1_merged587_235_to_stg3_stg3_ld37_merged657_231_cache {
	// RAM Box: {[0, 1120], [-11, 1930]}
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

struct stg3_cache {
  // Reader addrs...
    // { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[3 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
    // { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[2 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
    // { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[1 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
    // { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
  // # of banks: 4
  stg3_stg3_1_merged587_232_to_stg3_stg3_ld37_merged657_228_cache stg3_stg3_1_merged587_232_to_stg3_stg3_ld37_merged657_228;
  stg3_stg3_1_merged587_233_to_stg3_stg3_ld37_merged657_229_cache stg3_stg3_1_merged587_233_to_stg3_stg3_ld37_merged657_229;
  stg3_stg3_1_merged587_234_to_stg3_stg3_ld37_merged657_230_cache stg3_stg3_1_merged587_234_to_stg3_stg3_ld37_merged657_230;
  stg3_stg3_1_merged587_235_to_stg3_stg3_ld37_merged657_231_cache stg3_stg3_1_merged587_235_to_stg3_stg3_ld37_merged657_231;
};



inline void stg3_stg3_1_merged587_232_write(hw_uint<16>& stg3_stg3_1_merged587_232, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged587_232_to_stg3_stg3_ld37_merged657_228.push(stg3_stg3_1_merged587_232);
}

inline void stg3_stg3_1_merged587_233_write(hw_uint<16>& stg3_stg3_1_merged587_233, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged587_233_to_stg3_stg3_ld37_merged657_229.push(stg3_stg3_1_merged587_233);
}

inline void stg3_stg3_1_merged587_234_write(hw_uint<16>& stg3_stg3_1_merged587_234, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged587_234_to_stg3_stg3_ld37_merged657_230.push(stg3_stg3_1_merged587_234);
}

inline void stg3_stg3_1_merged587_235_write(hw_uint<16>& stg3_stg3_1_merged587_235, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged587_235_to_stg3_stg3_ld37_merged657_231.push(stg3_stg3_1_merged587_235);
}

inline hw_uint<16> stg3_stg3_ld37_merged657_228_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged657_228 read pattern: { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[3 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
  // Read schedule : { stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_stg3_1_merged587_232 = stg3.stg3_stg3_1_merged587_232_to_stg3_stg3_ld37_merged657_228.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged587_232;
  return 0;
}

inline hw_uint<16> stg3_stg3_ld37_merged657_229_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged657_229 read pattern: { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[2 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
  // Read schedule : { stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_stg3_1_merged587_233 = stg3.stg3_stg3_1_merged587_233_to_stg3_stg3_ld37_merged657_229.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged587_233;
  return 0;
}

inline hw_uint<16> stg3_stg3_ld37_merged657_230_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged657_230 read pattern: { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[1 + 4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
  // Read schedule : { stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_stg3_1_merged587_234 = stg3.stg3_stg3_1_merged587_234_to_stg3_stg3_ld37_merged657_230.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged587_234;
  return 0;
}

inline hw_uint<16> stg3_stg3_ld37_merged657_231_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged657_231 read pattern: { stg3_ld37_merged657[root = 0, stg3_ld38, stg3_ld37] -> stg3[4stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 280 }
  // Read schedule : { stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  // Write schedule: { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_stg3_1_merged587_235 = stg3.stg3_stg3_1_merged587_235_to_stg3_stg3_ld37_merged657_231.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged587_235;
  return 0;
}

// # of bundles = 2
// stg3_1_merged587_write
//	stg3_stg3_1_merged587_232
//	stg3_stg3_1_merged587_233
//	stg3_stg3_1_merged587_234
//	stg3_stg3_1_merged587_235
inline void stg3_stg3_1_merged587_write_bundle_write(hw_uint<64>& stg3_1_merged587_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_1_merged587_232_res = stg3_1_merged587_write.extract<0, 15>();
	stg3_stg3_1_merged587_232_write(stg3_stg3_1_merged587_232_res, stg3, root, stg3_0, stg3_1, dynamic_address);
	hw_uint<16> stg3_stg3_1_merged587_233_res = stg3_1_merged587_write.extract<16, 31>();
	stg3_stg3_1_merged587_233_write(stg3_stg3_1_merged587_233_res, stg3, root, stg3_0, stg3_1, dynamic_address);
	hw_uint<16> stg3_stg3_1_merged587_234_res = stg3_1_merged587_write.extract<32, 47>();
	stg3_stg3_1_merged587_234_write(stg3_stg3_1_merged587_234_res, stg3, root, stg3_0, stg3_1, dynamic_address);
	hw_uint<16> stg3_stg3_1_merged587_235_res = stg3_1_merged587_write.extract<48, 63>();
	stg3_stg3_1_merged587_235_write(stg3_stg3_1_merged587_235_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

// stg3_ld37_merged657_read
//	stg3_stg3_ld37_merged657_228
//	stg3_stg3_ld37_merged657_229
//	stg3_stg3_ld37_merged657_230
//	stg3_stg3_ld37_merged657_231
inline hw_uint<64> stg3_stg3_ld37_merged657_read_bundle_read(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_stg3_ld37_merged657_228
    // stg3_stg3_ld37_merged657_229
    // stg3_stg3_ld37_merged657_230
    // stg3_stg3_ld37_merged657_231

	hw_uint<64> result;
	hw_uint<16> stg3_stg3_ld37_merged657_228_res = stg3_stg3_ld37_merged657_228_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<0, 64>(result, stg3_stg3_ld37_merged657_228_res);
	hw_uint<16> stg3_stg3_ld37_merged657_229_res = stg3_stg3_ld37_merged657_229_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<16, 64>(result, stg3_stg3_ld37_merged657_229_res);
	hw_uint<16> stg3_stg3_ld37_merged657_230_res = stg3_stg3_ld37_merged657_230_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<32, 64>(result, stg3_stg3_ld37_merged657_230_res);
	hw_uint<16> stg3_stg3_ld37_merged657_231_res = stg3_stg3_ld37_merged657_231_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<48, 64>(result, stg3_stg3_ld37_merged657_231_res);
	return result;
}

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4_cache {
	// RAM Box: {[3, 1119], [-11, 1930]}
	// Capacity: 564
	// # of read delays: 4
  // 0, 1, 282, 563
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 280> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 280> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_281() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_282() {
		return f4;
	}

	inline hw_uint<16> peek_562() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_563() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4_cache {
	// RAM Box: {[2, 1118], [-11, 1930]}
	// Capacity: 564
	// # of read delays: 4
  // 0, 1, 282, 563
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 280> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 280> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_281() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_282() {
		return f4;
	}

	inline hw_uint<16> peek_562() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_563() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4_cache {
	// RAM Box: {[1, 1117], [-11, 1930]}
	// Capacity: 564
	// # of read delays: 4
  // 0, 1, 282, 563
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 280> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 280> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_281() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_282() {
		return f4;
	}

	inline hw_uint<16> peek_562() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_563() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4_cache {
	// RAM Box: {[0, 1120], [-11, 1929]}
	// Capacity: 564
	// # of read delays: 5
  // 0, 1, 281, 282, 563
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 279> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 280> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_281() {
		return f4;
	}

	inline hw_uint<16> peek_282() {
		return f6;
	}

	inline hw_uint<16> peek_562() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_563() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_cache {
  // Reader addrs...
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
    // { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // # of banks: 4
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4;
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4;
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4;
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4;
};



inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216);
}

inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217);
}

inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218);
}

inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219);
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_200_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_200 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4.peek_563();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_201_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_201 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_202_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_202 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4.peek_281();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_203_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_203 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_204_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_204 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4.peek_563();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_205_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_205 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_206_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_206 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[3 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_207_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_207 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_208_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_208 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4.peek_563();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_209_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_209 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_210_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_210 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_211_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_211 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_212_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_212 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4.peek_563();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_213_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_213 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_214_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_214 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 4stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_merged_banks_4.peek_282();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_215_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged590_215 read pattern: { stg4_1_merged590[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[4stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 279 }
  // Read schedule : { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219;
  return 0;
}

// # of bundles = 2
// stg3_to_gp_1136_ld101_merged667_write
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219
inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_write_bundle_write(hw_uint<64>& stg3_to_gp_1136_ld101_merged667_write, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_res = stg3_to_gp_1136_ld101_merged667_write.extract<0, 15>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_216_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_res = stg3_to_gp_1136_ld101_merged667_write.extract<16, 31>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_217_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_res = stg3_to_gp_1136_ld101_merged667_write.extract<32, 47>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_218_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_res = stg3_to_gp_1136_ld101_merged667_write.extract<48, 63>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_219_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
}

// stg4_1_merged590_read
//	stg3_FIFO_buf100_stg4_1_merged590_200
//	stg3_FIFO_buf100_stg4_1_merged590_201
//	stg3_FIFO_buf100_stg4_1_merged590_202
//	stg3_FIFO_buf100_stg4_1_merged590_203
//	stg3_FIFO_buf100_stg4_1_merged590_204
//	stg3_FIFO_buf100_stg4_1_merged590_205
//	stg3_FIFO_buf100_stg4_1_merged590_206
//	stg3_FIFO_buf100_stg4_1_merged590_207
//	stg3_FIFO_buf100_stg4_1_merged590_208
//	stg3_FIFO_buf100_stg4_1_merged590_209
//	stg3_FIFO_buf100_stg4_1_merged590_210
//	stg3_FIFO_buf100_stg4_1_merged590_211
//	stg3_FIFO_buf100_stg4_1_merged590_212
//	stg3_FIFO_buf100_stg4_1_merged590_213
//	stg3_FIFO_buf100_stg4_1_merged590_214
//	stg3_FIFO_buf100_stg4_1_merged590_215
inline hw_uint<256> stg3_FIFO_buf100_stg4_1_merged590_read_bundle_read(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg3_FIFO_buf100_stg4_1_merged590_200
    // stg3_FIFO_buf100_stg4_1_merged590_201
    // stg3_FIFO_buf100_stg4_1_merged590_202
    // stg3_FIFO_buf100_stg4_1_merged590_203
    // stg3_FIFO_buf100_stg4_1_merged590_204
    // stg3_FIFO_buf100_stg4_1_merged590_205
    // stg3_FIFO_buf100_stg4_1_merged590_206
    // stg3_FIFO_buf100_stg4_1_merged590_207
    // stg3_FIFO_buf100_stg4_1_merged590_208
    // stg3_FIFO_buf100_stg4_1_merged590_209
    // stg3_FIFO_buf100_stg4_1_merged590_210
    // stg3_FIFO_buf100_stg4_1_merged590_211
    // stg3_FIFO_buf100_stg4_1_merged590_212
    // stg3_FIFO_buf100_stg4_1_merged590_213
    // stg3_FIFO_buf100_stg4_1_merged590_214
    // stg3_FIFO_buf100_stg4_1_merged590_215

	hw_uint<256> result;
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_200_res = stg3_FIFO_buf100_stg4_1_merged590_200_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_200_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_201_res = stg3_FIFO_buf100_stg4_1_merged590_201_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_201_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_202_res = stg3_FIFO_buf100_stg4_1_merged590_202_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_202_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_203_res = stg3_FIFO_buf100_stg4_1_merged590_203_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_203_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_204_res = stg3_FIFO_buf100_stg4_1_merged590_204_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<64, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_204_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_205_res = stg3_FIFO_buf100_stg4_1_merged590_205_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<80, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_205_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_206_res = stg3_FIFO_buf100_stg4_1_merged590_206_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<96, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_206_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_207_res = stg3_FIFO_buf100_stg4_1_merged590_207_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<112, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_207_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_208_res = stg3_FIFO_buf100_stg4_1_merged590_208_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<128, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_208_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_209_res = stg3_FIFO_buf100_stg4_1_merged590_209_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<144, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_209_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_210_res = stg3_FIFO_buf100_stg4_1_merged590_210_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<160, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_210_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_211_res = stg3_FIFO_buf100_stg4_1_merged590_211_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<176, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_211_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_212_res = stg3_FIFO_buf100_stg4_1_merged590_212_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<192, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_212_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_213_res = stg3_FIFO_buf100_stg4_1_merged590_213_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<208, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_213_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_214_res = stg3_FIFO_buf100_stg4_1_merged590_214_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<224, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_214_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged590_215_res = stg3_FIFO_buf100_stg4_1_merged590_215_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<240, 256>(result, stg3_FIFO_buf100_stg4_1_merged590_215_res);
	return result;
}

struct stg4_stg4_1_merged590_196_to_stg4_stg4_ld41_merged637_192_cache {
	// RAM Box: {[3, 1119], [-10, 1929]}
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

struct stg4_stg4_1_merged590_197_to_stg4_stg4_ld41_merged637_193_cache {
	// RAM Box: {[2, 1118], [-10, 1929]}
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

struct stg4_stg4_1_merged590_198_to_stg4_stg4_ld41_merged637_194_cache {
	// RAM Box: {[1, 1117], [-10, 1929]}
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

struct stg4_stg4_1_merged590_199_to_stg4_stg4_ld41_merged637_195_cache {
	// RAM Box: {[0, 1116], [-10, 1929]}
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

struct stg4_cache {
  // Reader addrs...
    // { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[3 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
    // { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[2 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
    // { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[1 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
    // { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
  // # of banks: 4
  stg4_stg4_1_merged590_196_to_stg4_stg4_ld41_merged637_192_cache stg4_stg4_1_merged590_196_to_stg4_stg4_ld41_merged637_192;
  stg4_stg4_1_merged590_197_to_stg4_stg4_ld41_merged637_193_cache stg4_stg4_1_merged590_197_to_stg4_stg4_ld41_merged637_193;
  stg4_stg4_1_merged590_198_to_stg4_stg4_ld41_merged637_194_cache stg4_stg4_1_merged590_198_to_stg4_stg4_ld41_merged637_194;
  stg4_stg4_1_merged590_199_to_stg4_stg4_ld41_merged637_195_cache stg4_stg4_1_merged590_199_to_stg4_stg4_ld41_merged637_195;
};



inline void stg4_stg4_1_merged590_196_write(hw_uint<16>& stg4_stg4_1_merged590_196, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged590_196_to_stg4_stg4_ld41_merged637_192.push(stg4_stg4_1_merged590_196);
}

inline void stg4_stg4_1_merged590_197_write(hw_uint<16>& stg4_stg4_1_merged590_197, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged590_197_to_stg4_stg4_ld41_merged637_193.push(stg4_stg4_1_merged590_197);
}

inline void stg4_stg4_1_merged590_198_write(hw_uint<16>& stg4_stg4_1_merged590_198, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged590_198_to_stg4_stg4_ld41_merged637_194.push(stg4_stg4_1_merged590_198);
}

inline void stg4_stg4_1_merged590_199_write(hw_uint<16>& stg4_stg4_1_merged590_199, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged590_199_to_stg4_stg4_ld41_merged637_195.push(stg4_stg4_1_merged590_199);
}

inline hw_uint<16> stg4_stg4_ld41_merged637_192_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged637_192 read pattern: { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[3 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
  // Read schedule : { stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_stg4_1_merged590_196 = stg4.stg4_stg4_1_merged590_196_to_stg4_stg4_ld41_merged637_192.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged590_196;
  return 0;
}

inline hw_uint<16> stg4_stg4_ld41_merged637_193_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged637_193 read pattern: { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[2 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
  // Read schedule : { stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_stg4_1_merged590_197 = stg4.stg4_stg4_1_merged590_197_to_stg4_stg4_ld41_merged637_193.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged590_197;
  return 0;
}

inline hw_uint<16> stg4_stg4_ld41_merged637_194_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged637_194 read pattern: { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[1 + 4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
  // Read schedule : { stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_stg4_1_merged590_198 = stg4.stg4_stg4_1_merged590_198_to_stg4_stg4_ld41_merged637_194.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged590_198;
  return 0;
}

inline hw_uint<16> stg4_stg4_ld41_merged637_195_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged637_195 read pattern: { stg4_ld41_merged637[root = 0, stg4_ld42, stg4_ld41] -> stg4[4stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 279 }
  // Read schedule : { stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  // Write schedule: { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_stg4_1_merged590_199 = stg4.stg4_stg4_1_merged590_199_to_stg4_stg4_ld41_merged637_195.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged590_199;
  return 0;
}

// # of bundles = 2
// stg4_1_merged590_write
//	stg4_stg4_1_merged590_196
//	stg4_stg4_1_merged590_197
//	stg4_stg4_1_merged590_198
//	stg4_stg4_1_merged590_199
inline void stg4_stg4_1_merged590_write_bundle_write(hw_uint<64>& stg4_1_merged590_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_1_merged590_196_res = stg4_1_merged590_write.extract<0, 15>();
	stg4_stg4_1_merged590_196_write(stg4_stg4_1_merged590_196_res, stg4, root, stg4_0, stg4_1, dynamic_address);
	hw_uint<16> stg4_stg4_1_merged590_197_res = stg4_1_merged590_write.extract<16, 31>();
	stg4_stg4_1_merged590_197_write(stg4_stg4_1_merged590_197_res, stg4, root, stg4_0, stg4_1, dynamic_address);
	hw_uint<16> stg4_stg4_1_merged590_198_res = stg4_1_merged590_write.extract<32, 47>();
	stg4_stg4_1_merged590_198_write(stg4_stg4_1_merged590_198_res, stg4, root, stg4_0, stg4_1, dynamic_address);
	hw_uint<16> stg4_stg4_1_merged590_199_res = stg4_1_merged590_write.extract<48, 63>();
	stg4_stg4_1_merged590_199_write(stg4_stg4_1_merged590_199_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

// stg4_ld41_merged637_read
//	stg4_stg4_ld41_merged637_192
//	stg4_stg4_ld41_merged637_193
//	stg4_stg4_ld41_merged637_194
//	stg4_stg4_ld41_merged637_195
inline hw_uint<64> stg4_stg4_ld41_merged637_read_bundle_read(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_stg4_ld41_merged637_192
    // stg4_stg4_ld41_merged637_193
    // stg4_stg4_ld41_merged637_194
    // stg4_stg4_ld41_merged637_195

	hw_uint<64> result;
	hw_uint<16> stg4_stg4_ld41_merged637_192_res = stg4_stg4_ld41_merged637_192_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<0, 64>(result, stg4_stg4_ld41_merged637_192_res);
	hw_uint<16> stg4_stg4_ld41_merged637_193_res = stg4_stg4_ld41_merged637_193_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<16, 64>(result, stg4_stg4_ld41_merged637_193_res);
	hw_uint<16> stg4_stg4_ld41_merged637_194_res = stg4_stg4_ld41_merged637_194_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<32, 64>(result, stg4_stg4_ld41_merged637_194_res);
	hw_uint<16> stg4_stg4_ld41_merged637_195_res = stg4_stg4_ld41_merged637_195_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<48, 64>(result, stg4_stg4_ld41_merged637_195_res);
	return result;
}

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4_cache {
	// RAM Box: {[3, 1115], [-10, 1929]}
	// Capacity: 562
	// # of read delays: 4
  // 0, 1, 281, 561
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 279> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 279> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_281() {
		return f4;
	}

	inline hw_uint<16> peek_560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_561() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4_cache {
	// RAM Box: {[2, 1114], [-10, 1929]}
	// Capacity: 562
	// # of read delays: 4
  // 0, 1, 281, 561
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 279> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 279> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_281() {
		return f4;
	}

	inline hw_uint<16> peek_560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_561() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4_cache {
	// RAM Box: {[1, 1113], [-10, 1929]}
	// Capacity: 562
	// # of read delays: 4
  // 0, 1, 281, 561
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 279> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 279> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_281() {
		return f4;
	}

	inline hw_uint<16> peek_560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_561() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4_cache {
	// RAM Box: {[0, 1116], [-10, 1928]}
	// Capacity: 562
	// # of read delays: 5
  // 0, 1, 280, 281, 561
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 278> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 279> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_279() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_280() {
		return f4;
	}

	inline hw_uint<16> peek_281() {
		return f6;
	}

	inline hw_uint<16> peek_560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_561() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 279
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 279 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_cache {
  // Reader addrs...
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
    // { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // # of banks: 4
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4;
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4;
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4;
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4;
};



inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180);
}

inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181);
}

inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182);
}

inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183);
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_164_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_164 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4.peek_561();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_165_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_165 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_166_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_166 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4.peek_280();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_167_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_167 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_168_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_168 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4.peek_561();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_169_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_169 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_170_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_170 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[3 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_171_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_171 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_172_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_172 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4.peek_561();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_173_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_173 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_174_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_174 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_175_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_175 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_176_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_176 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4.peek_561();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_177_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_177 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_178_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_178 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 4stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_merged_banks_4.peek_281();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_179_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged593_179 read pattern: { stg5_1_merged593[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[4stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 278 }
  // Read schedule : { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183;
  return 0;
}

// # of bundles = 2
// stg4_to_gp_1240_ld105_merged570_write
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183
inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_write_bundle_write(hw_uint<64>& stg4_to_gp_1240_ld105_merged570_write, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_res = stg4_to_gp_1240_ld105_merged570_write.extract<0, 15>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_180_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_res = stg4_to_gp_1240_ld105_merged570_write.extract<16, 31>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_181_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_res = stg4_to_gp_1240_ld105_merged570_write.extract<32, 47>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_182_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_res = stg4_to_gp_1240_ld105_merged570_write.extract<48, 63>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_183_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
}

// stg5_1_merged593_read
//	stg4_FIFO_buf104_stg5_1_merged593_164
//	stg4_FIFO_buf104_stg5_1_merged593_165
//	stg4_FIFO_buf104_stg5_1_merged593_166
//	stg4_FIFO_buf104_stg5_1_merged593_167
//	stg4_FIFO_buf104_stg5_1_merged593_168
//	stg4_FIFO_buf104_stg5_1_merged593_169
//	stg4_FIFO_buf104_stg5_1_merged593_170
//	stg4_FIFO_buf104_stg5_1_merged593_171
//	stg4_FIFO_buf104_stg5_1_merged593_172
//	stg4_FIFO_buf104_stg5_1_merged593_173
//	stg4_FIFO_buf104_stg5_1_merged593_174
//	stg4_FIFO_buf104_stg5_1_merged593_175
//	stg4_FIFO_buf104_stg5_1_merged593_176
//	stg4_FIFO_buf104_stg5_1_merged593_177
//	stg4_FIFO_buf104_stg5_1_merged593_178
//	stg4_FIFO_buf104_stg5_1_merged593_179
inline hw_uint<256> stg4_FIFO_buf104_stg5_1_merged593_read_bundle_read(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg4_FIFO_buf104_stg5_1_merged593_164
    // stg4_FIFO_buf104_stg5_1_merged593_165
    // stg4_FIFO_buf104_stg5_1_merged593_166
    // stg4_FIFO_buf104_stg5_1_merged593_167
    // stg4_FIFO_buf104_stg5_1_merged593_168
    // stg4_FIFO_buf104_stg5_1_merged593_169
    // stg4_FIFO_buf104_stg5_1_merged593_170
    // stg4_FIFO_buf104_stg5_1_merged593_171
    // stg4_FIFO_buf104_stg5_1_merged593_172
    // stg4_FIFO_buf104_stg5_1_merged593_173
    // stg4_FIFO_buf104_stg5_1_merged593_174
    // stg4_FIFO_buf104_stg5_1_merged593_175
    // stg4_FIFO_buf104_stg5_1_merged593_176
    // stg4_FIFO_buf104_stg5_1_merged593_177
    // stg4_FIFO_buf104_stg5_1_merged593_178
    // stg4_FIFO_buf104_stg5_1_merged593_179

	hw_uint<256> result;
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_164_res = stg4_FIFO_buf104_stg5_1_merged593_164_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_164_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_165_res = stg4_FIFO_buf104_stg5_1_merged593_165_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_165_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_166_res = stg4_FIFO_buf104_stg5_1_merged593_166_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_166_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_167_res = stg4_FIFO_buf104_stg5_1_merged593_167_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_167_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_168_res = stg4_FIFO_buf104_stg5_1_merged593_168_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<64, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_168_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_169_res = stg4_FIFO_buf104_stg5_1_merged593_169_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<80, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_169_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_170_res = stg4_FIFO_buf104_stg5_1_merged593_170_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<96, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_170_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_171_res = stg4_FIFO_buf104_stg5_1_merged593_171_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<112, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_171_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_172_res = stg4_FIFO_buf104_stg5_1_merged593_172_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<128, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_172_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_173_res = stg4_FIFO_buf104_stg5_1_merged593_173_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<144, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_173_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_174_res = stg4_FIFO_buf104_stg5_1_merged593_174_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<160, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_174_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_175_res = stg4_FIFO_buf104_stg5_1_merged593_175_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<176, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_175_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_176_res = stg4_FIFO_buf104_stg5_1_merged593_176_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<192, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_176_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_177_res = stg4_FIFO_buf104_stg5_1_merged593_177_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<208, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_177_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_178_res = stg4_FIFO_buf104_stg5_1_merged593_178_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<224, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_178_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged593_179_res = stg4_FIFO_buf104_stg5_1_merged593_179_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<240, 256>(result, stg4_FIFO_buf104_stg5_1_merged593_179_res);
	return result;
}

struct stg5_stg5_1_merged593_160_to_stg5_stg5_ld45_merged659_156_cache {
	// RAM Box: {[3, 1115], [-9, 1928]}
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

struct stg5_stg5_1_merged593_161_to_stg5_stg5_ld45_merged659_157_cache {
	// RAM Box: {[2, 1114], [-9, 1928]}
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

struct stg5_stg5_1_merged593_162_to_stg5_stg5_ld45_merged659_158_cache {
	// RAM Box: {[1, 1113], [-9, 1928]}
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

struct stg5_stg5_1_merged593_163_to_stg5_stg5_ld45_merged659_159_cache {
	// RAM Box: {[0, 1112], [-9, 1928]}
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

struct stg5_cache {
  // Reader addrs...
    // { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[3 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
    // { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[2 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
    // { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[1 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
    // { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
  // # of banks: 4
  stg5_stg5_1_merged593_160_to_stg5_stg5_ld45_merged659_156_cache stg5_stg5_1_merged593_160_to_stg5_stg5_ld45_merged659_156;
  stg5_stg5_1_merged593_161_to_stg5_stg5_ld45_merged659_157_cache stg5_stg5_1_merged593_161_to_stg5_stg5_ld45_merged659_157;
  stg5_stg5_1_merged593_162_to_stg5_stg5_ld45_merged659_158_cache stg5_stg5_1_merged593_162_to_stg5_stg5_ld45_merged659_158;
  stg5_stg5_1_merged593_163_to_stg5_stg5_ld45_merged659_159_cache stg5_stg5_1_merged593_163_to_stg5_stg5_ld45_merged659_159;
};



inline void stg5_stg5_1_merged593_160_write(hw_uint<16>& stg5_stg5_1_merged593_160, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged593_160_to_stg5_stg5_ld45_merged659_156.push(stg5_stg5_1_merged593_160);
}

inline void stg5_stg5_1_merged593_161_write(hw_uint<16>& stg5_stg5_1_merged593_161, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged593_161_to_stg5_stg5_ld45_merged659_157.push(stg5_stg5_1_merged593_161);
}

inline void stg5_stg5_1_merged593_162_write(hw_uint<16>& stg5_stg5_1_merged593_162, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged593_162_to_stg5_stg5_ld45_merged659_158.push(stg5_stg5_1_merged593_162);
}

inline void stg5_stg5_1_merged593_163_write(hw_uint<16>& stg5_stg5_1_merged593_163, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged593_163_to_stg5_stg5_ld45_merged659_159.push(stg5_stg5_1_merged593_163);
}

inline hw_uint<16> stg5_stg5_ld45_merged659_156_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged659_156 read pattern: { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[3 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
  // Read schedule : { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_stg5_1_merged593_160 = stg5.stg5_stg5_1_merged593_160_to_stg5_stg5_ld45_merged659_156.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged593_160;
  return 0;
}

inline hw_uint<16> stg5_stg5_ld45_merged659_157_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged659_157 read pattern: { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[2 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
  // Read schedule : { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_stg5_1_merged593_161 = stg5.stg5_stg5_1_merged593_161_to_stg5_stg5_ld45_merged659_157.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged593_161;
  return 0;
}

inline hw_uint<16> stg5_stg5_ld45_merged659_158_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged659_158 read pattern: { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[1 + 4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
  // Read schedule : { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_stg5_1_merged593_162 = stg5.stg5_stg5_1_merged593_162_to_stg5_stg5_ld45_merged659_158.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged593_162;
  return 0;
}

inline hw_uint<16> stg5_stg5_ld45_merged659_159_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged659_159 read pattern: { stg5_ld45_merged659[root = 0, stg5_ld46, stg5_ld45] -> stg5[4stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 278 }
  // Read schedule : { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  // Write schedule: { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_stg5_1_merged593_163 = stg5.stg5_stg5_1_merged593_163_to_stg5_stg5_ld45_merged659_159.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged593_163;
  return 0;
}

// # of bundles = 2
// stg5_1_merged593_write
//	stg5_stg5_1_merged593_160
//	stg5_stg5_1_merged593_161
//	stg5_stg5_1_merged593_162
//	stg5_stg5_1_merged593_163
inline void stg5_stg5_1_merged593_write_bundle_write(hw_uint<64>& stg5_1_merged593_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_1_merged593_160_res = stg5_1_merged593_write.extract<0, 15>();
	stg5_stg5_1_merged593_160_write(stg5_stg5_1_merged593_160_res, stg5, root, stg5_0, stg5_1, dynamic_address);
	hw_uint<16> stg5_stg5_1_merged593_161_res = stg5_1_merged593_write.extract<16, 31>();
	stg5_stg5_1_merged593_161_write(stg5_stg5_1_merged593_161_res, stg5, root, stg5_0, stg5_1, dynamic_address);
	hw_uint<16> stg5_stg5_1_merged593_162_res = stg5_1_merged593_write.extract<32, 47>();
	stg5_stg5_1_merged593_162_write(stg5_stg5_1_merged593_162_res, stg5, root, stg5_0, stg5_1, dynamic_address);
	hw_uint<16> stg5_stg5_1_merged593_163_res = stg5_1_merged593_write.extract<48, 63>();
	stg5_stg5_1_merged593_163_write(stg5_stg5_1_merged593_163_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

// stg5_ld45_merged659_read
//	stg5_stg5_ld45_merged659_156
//	stg5_stg5_ld45_merged659_157
//	stg5_stg5_ld45_merged659_158
//	stg5_stg5_ld45_merged659_159
inline hw_uint<64> stg5_stg5_ld45_merged659_read_bundle_read(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_stg5_ld45_merged659_156
    // stg5_stg5_ld45_merged659_157
    // stg5_stg5_ld45_merged659_158
    // stg5_stg5_ld45_merged659_159

	hw_uint<64> result;
	hw_uint<16> stg5_stg5_ld45_merged659_156_res = stg5_stg5_ld45_merged659_156_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<0, 64>(result, stg5_stg5_ld45_merged659_156_res);
	hw_uint<16> stg5_stg5_ld45_merged659_157_res = stg5_stg5_ld45_merged659_157_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<16, 64>(result, stg5_stg5_ld45_merged659_157_res);
	hw_uint<16> stg5_stg5_ld45_merged659_158_res = stg5_stg5_ld45_merged659_158_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<32, 64>(result, stg5_stg5_ld45_merged659_158_res);
	hw_uint<16> stg5_stg5_ld45_merged659_159_res = stg5_stg5_ld45_merged659_159_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<48, 64>(result, stg5_stg5_ld45_merged659_159_res);
	return result;
}

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4_cache {
	// RAM Box: {[3, 1111], [-9, 1928]}
	// Capacity: 560
	// # of read delays: 4
  // 0, 1, 280, 559
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 278> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 278> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_279() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_280() {
		return f4;
	}

	inline hw_uint<16> peek_558() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_559() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4_cache {
	// RAM Box: {[2, 1110], [-9, 1928]}
	// Capacity: 560
	// # of read delays: 4
  // 0, 1, 280, 559
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 278> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 278> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_279() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_280() {
		return f4;
	}

	inline hw_uint<16> peek_558() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_559() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4_cache {
	// RAM Box: {[1, 1109], [-9, 1928]}
	// Capacity: 560
	// # of read delays: 4
  // 0, 1, 280, 559
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 278> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 278> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_279() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_280() {
		return f4;
	}

	inline hw_uint<16> peek_558() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_559() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4_cache {
	// RAM Box: {[0, 1112], [-9, 1927]}
	// Capacity: 560
	// # of read delays: 5
  // 0, 1, 279, 280, 559
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 277> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 278> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_278() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_279() {
		return f4;
	}

	inline hw_uint<16> peek_280() {
		return f6;
	}

	inline hw_uint<16> peek_558() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_559() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_cache {
  // Reader addrs...
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
    // { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // # of banks: 4
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4;
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4;
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4;
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4;
};



inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144);
}

inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145);
}

inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146);
}

inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147);
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_128_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_128 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4.peek_559();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_129_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_129 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_130_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_130 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4.peek_279();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_131_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_131 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_132_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_132 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4.peek_559();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_133_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_133 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_134_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_134 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[3 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_135_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_135 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_136_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_136 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4.peek_559();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_137_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_137 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_138_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_138 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_139_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_139 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_140_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_140 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4.peek_559();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_141_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_141 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_142_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_142 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 4stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_merged_banks_4.peek_280();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_143_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged596_143 read pattern: { stg6_1_merged596[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[4stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 277 }
  // Read schedule : { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147;
  return 0;
}

// # of bundles = 2
// stg5_to_gp_1344_ld109_merged681_write
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147
inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_write_bundle_write(hw_uint<64>& stg5_to_gp_1344_ld109_merged681_write, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_res = stg5_to_gp_1344_ld109_merged681_write.extract<0, 15>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_144_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_res = stg5_to_gp_1344_ld109_merged681_write.extract<16, 31>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_145_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_res = stg5_to_gp_1344_ld109_merged681_write.extract<32, 47>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_146_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_res = stg5_to_gp_1344_ld109_merged681_write.extract<48, 63>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_147_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
}

// stg6_1_merged596_read
//	stg5_FIFO_buf108_stg6_1_merged596_128
//	stg5_FIFO_buf108_stg6_1_merged596_129
//	stg5_FIFO_buf108_stg6_1_merged596_130
//	stg5_FIFO_buf108_stg6_1_merged596_131
//	stg5_FIFO_buf108_stg6_1_merged596_132
//	stg5_FIFO_buf108_stg6_1_merged596_133
//	stg5_FIFO_buf108_stg6_1_merged596_134
//	stg5_FIFO_buf108_stg6_1_merged596_135
//	stg5_FIFO_buf108_stg6_1_merged596_136
//	stg5_FIFO_buf108_stg6_1_merged596_137
//	stg5_FIFO_buf108_stg6_1_merged596_138
//	stg5_FIFO_buf108_stg6_1_merged596_139
//	stg5_FIFO_buf108_stg6_1_merged596_140
//	stg5_FIFO_buf108_stg6_1_merged596_141
//	stg5_FIFO_buf108_stg6_1_merged596_142
//	stg5_FIFO_buf108_stg6_1_merged596_143
inline hw_uint<256> stg5_FIFO_buf108_stg6_1_merged596_read_bundle_read(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg5_FIFO_buf108_stg6_1_merged596_128
    // stg5_FIFO_buf108_stg6_1_merged596_129
    // stg5_FIFO_buf108_stg6_1_merged596_130
    // stg5_FIFO_buf108_stg6_1_merged596_131
    // stg5_FIFO_buf108_stg6_1_merged596_132
    // stg5_FIFO_buf108_stg6_1_merged596_133
    // stg5_FIFO_buf108_stg6_1_merged596_134
    // stg5_FIFO_buf108_stg6_1_merged596_135
    // stg5_FIFO_buf108_stg6_1_merged596_136
    // stg5_FIFO_buf108_stg6_1_merged596_137
    // stg5_FIFO_buf108_stg6_1_merged596_138
    // stg5_FIFO_buf108_stg6_1_merged596_139
    // stg5_FIFO_buf108_stg6_1_merged596_140
    // stg5_FIFO_buf108_stg6_1_merged596_141
    // stg5_FIFO_buf108_stg6_1_merged596_142
    // stg5_FIFO_buf108_stg6_1_merged596_143

	hw_uint<256> result;
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_128_res = stg5_FIFO_buf108_stg6_1_merged596_128_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_128_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_129_res = stg5_FIFO_buf108_stg6_1_merged596_129_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_129_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_130_res = stg5_FIFO_buf108_stg6_1_merged596_130_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_130_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_131_res = stg5_FIFO_buf108_stg6_1_merged596_131_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_131_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_132_res = stg5_FIFO_buf108_stg6_1_merged596_132_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<64, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_132_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_133_res = stg5_FIFO_buf108_stg6_1_merged596_133_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<80, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_133_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_134_res = stg5_FIFO_buf108_stg6_1_merged596_134_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<96, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_134_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_135_res = stg5_FIFO_buf108_stg6_1_merged596_135_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<112, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_135_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_136_res = stg5_FIFO_buf108_stg6_1_merged596_136_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<128, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_136_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_137_res = stg5_FIFO_buf108_stg6_1_merged596_137_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<144, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_137_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_138_res = stg5_FIFO_buf108_stg6_1_merged596_138_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<160, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_138_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_139_res = stg5_FIFO_buf108_stg6_1_merged596_139_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<176, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_139_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_140_res = stg5_FIFO_buf108_stg6_1_merged596_140_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<192, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_140_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_141_res = stg5_FIFO_buf108_stg6_1_merged596_141_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<208, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_141_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_142_res = stg5_FIFO_buf108_stg6_1_merged596_142_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<224, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_142_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged596_143_res = stg5_FIFO_buf108_stg6_1_merged596_143_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<240, 256>(result, stg5_FIFO_buf108_stg6_1_merged596_143_res);
	return result;
}

struct stg6_stg6_1_merged596_124_to_stg6_stg6_ld49_merged627_120_cache {
	// RAM Box: {[3, 1111], [-8, 1927]}
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

struct stg6_stg6_1_merged596_125_to_stg6_stg6_ld49_merged627_121_cache {
	// RAM Box: {[2, 1110], [-8, 1927]}
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

struct stg6_stg6_1_merged596_126_to_stg6_stg6_ld49_merged627_122_cache {
	// RAM Box: {[1, 1109], [-8, 1927]}
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

struct stg6_stg6_1_merged596_127_to_stg6_stg6_ld49_merged627_123_cache {
	// RAM Box: {[0, 1108], [-8, 1927]}
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

struct stg6_cache {
  // Reader addrs...
    // { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[3 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
    // { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[2 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
    // { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[1 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
    // { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
  // # of banks: 4
  stg6_stg6_1_merged596_124_to_stg6_stg6_ld49_merged627_120_cache stg6_stg6_1_merged596_124_to_stg6_stg6_ld49_merged627_120;
  stg6_stg6_1_merged596_125_to_stg6_stg6_ld49_merged627_121_cache stg6_stg6_1_merged596_125_to_stg6_stg6_ld49_merged627_121;
  stg6_stg6_1_merged596_126_to_stg6_stg6_ld49_merged627_122_cache stg6_stg6_1_merged596_126_to_stg6_stg6_ld49_merged627_122;
  stg6_stg6_1_merged596_127_to_stg6_stg6_ld49_merged627_123_cache stg6_stg6_1_merged596_127_to_stg6_stg6_ld49_merged627_123;
};



inline void stg6_stg6_1_merged596_124_write(hw_uint<16>& stg6_stg6_1_merged596_124, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged596_124_to_stg6_stg6_ld49_merged627_120.push(stg6_stg6_1_merged596_124);
}

inline void stg6_stg6_1_merged596_125_write(hw_uint<16>& stg6_stg6_1_merged596_125, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged596_125_to_stg6_stg6_ld49_merged627_121.push(stg6_stg6_1_merged596_125);
}

inline void stg6_stg6_1_merged596_126_write(hw_uint<16>& stg6_stg6_1_merged596_126, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged596_126_to_stg6_stg6_ld49_merged627_122.push(stg6_stg6_1_merged596_126);
}

inline void stg6_stg6_1_merged596_127_write(hw_uint<16>& stg6_stg6_1_merged596_127, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged596_127_to_stg6_stg6_ld49_merged627_123.push(stg6_stg6_1_merged596_127);
}

inline hw_uint<16> stg6_stg6_ld49_merged627_120_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged627_120 read pattern: { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[3 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
  // Read schedule : { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_stg6_1_merged596_124 = stg6.stg6_stg6_1_merged596_124_to_stg6_stg6_ld49_merged627_120.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged596_124;
  return 0;
}

inline hw_uint<16> stg6_stg6_ld49_merged627_121_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged627_121 read pattern: { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[2 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
  // Read schedule : { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_stg6_1_merged596_125 = stg6.stg6_stg6_1_merged596_125_to_stg6_stg6_ld49_merged627_121.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged596_125;
  return 0;
}

inline hw_uint<16> stg6_stg6_ld49_merged627_122_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged627_122 read pattern: { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[1 + 4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
  // Read schedule : { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_stg6_1_merged596_126 = stg6.stg6_stg6_1_merged596_126_to_stg6_stg6_ld49_merged627_122.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged596_126;
  return 0;
}

inline hw_uint<16> stg6_stg6_ld49_merged627_123_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged627_123 read pattern: { stg6_ld49_merged627[root = 0, stg6_ld50, stg6_ld49] -> stg6[4stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 277 }
  // Read schedule : { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  // Write schedule: { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_stg6_1_merged596_127 = stg6.stg6_stg6_1_merged596_127_to_stg6_stg6_ld49_merged627_123.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged596_127;
  return 0;
}

// # of bundles = 2
// stg6_1_merged596_write
//	stg6_stg6_1_merged596_124
//	stg6_stg6_1_merged596_125
//	stg6_stg6_1_merged596_126
//	stg6_stg6_1_merged596_127
inline void stg6_stg6_1_merged596_write_bundle_write(hw_uint<64>& stg6_1_merged596_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_1_merged596_124_res = stg6_1_merged596_write.extract<0, 15>();
	stg6_stg6_1_merged596_124_write(stg6_stg6_1_merged596_124_res, stg6, root, stg6_0, stg6_1, dynamic_address);
	hw_uint<16> stg6_stg6_1_merged596_125_res = stg6_1_merged596_write.extract<16, 31>();
	stg6_stg6_1_merged596_125_write(stg6_stg6_1_merged596_125_res, stg6, root, stg6_0, stg6_1, dynamic_address);
	hw_uint<16> stg6_stg6_1_merged596_126_res = stg6_1_merged596_write.extract<32, 47>();
	stg6_stg6_1_merged596_126_write(stg6_stg6_1_merged596_126_res, stg6, root, stg6_0, stg6_1, dynamic_address);
	hw_uint<16> stg6_stg6_1_merged596_127_res = stg6_1_merged596_write.extract<48, 63>();
	stg6_stg6_1_merged596_127_write(stg6_stg6_1_merged596_127_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

// stg6_ld49_merged627_read
//	stg6_stg6_ld49_merged627_120
//	stg6_stg6_ld49_merged627_121
//	stg6_stg6_ld49_merged627_122
//	stg6_stg6_ld49_merged627_123
inline hw_uint<64> stg6_stg6_ld49_merged627_read_bundle_read(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_stg6_ld49_merged627_120
    // stg6_stg6_ld49_merged627_121
    // stg6_stg6_ld49_merged627_122
    // stg6_stg6_ld49_merged627_123

	hw_uint<64> result;
	hw_uint<16> stg6_stg6_ld49_merged627_120_res = stg6_stg6_ld49_merged627_120_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<0, 64>(result, stg6_stg6_ld49_merged627_120_res);
	hw_uint<16> stg6_stg6_ld49_merged627_121_res = stg6_stg6_ld49_merged627_121_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<16, 64>(result, stg6_stg6_ld49_merged627_121_res);
	hw_uint<16> stg6_stg6_ld49_merged627_122_res = stg6_stg6_ld49_merged627_122_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<32, 64>(result, stg6_stg6_ld49_merged627_122_res);
	hw_uint<16> stg6_stg6_ld49_merged627_123_res = stg6_stg6_ld49_merged627_123_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<48, 64>(result, stg6_stg6_ld49_merged627_123_res);
	return result;
}

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4_cache {
	// RAM Box: {[3, 1107], [-8, 1927]}
	// Capacity: 558
	// # of read delays: 4
  // 0, 1, 279, 557
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 277> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 277> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_278() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_279() {
		return f4;
	}

	inline hw_uint<16> peek_556() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_557() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4_cache {
	// RAM Box: {[2, 1106], [-8, 1927]}
	// Capacity: 558
	// # of read delays: 4
  // 0, 1, 279, 557
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 277> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 277> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_278() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_279() {
		return f4;
	}

	inline hw_uint<16> peek_556() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_557() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4_cache {
	// RAM Box: {[1, 1105], [-8, 1927]}
	// Capacity: 558
	// # of read delays: 4
  // 0, 1, 279, 557
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 277> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 277> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_278() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_279() {
		return f4;
	}

	inline hw_uint<16> peek_556() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_557() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4_cache {
	// RAM Box: {[0, 1108], [-8, 1926]}
	// Capacity: 558
	// # of read delays: 5
  // 0, 1, 278, 279, 557
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 276> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 277> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_277() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_278() {
		return f4;
	}

	inline hw_uint<16> peek_279() {
		return f6;
	}

	inline hw_uint<16> peek_556() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_557() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 277
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 277 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_cache {
  // Reader addrs...
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
    // { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // # of banks: 4
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4;
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4;
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4;
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4;
};



inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108);
}

inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109);
}

inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110);
}

inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111);
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_100_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_100 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4.peek_557();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_101_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_101 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_102_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_102 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_103_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_103 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_104_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_104 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4.peek_557();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_105_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_105 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_106_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_106 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_107_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_107 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_92_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_92 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4.peek_557();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_93_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_93 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_94_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_94 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[4 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_merged_banks_4.peek_278();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_95_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_95 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_96_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_96 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4.peek_557();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_97_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_97 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_98_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_98 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[3 + 4stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_merged_banks_4.peek_279();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_99_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged599_99 read pattern: { stg7_1_merged599[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 4stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 276 }
  // Read schedule : { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109;
  return 0;
}

// # of bundles = 2
// stg6_to_gp_1448_ld113_merged669_write
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111
inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_write_bundle_write(hw_uint<64>& stg6_to_gp_1448_ld113_merged669_write, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_res = stg6_to_gp_1448_ld113_merged669_write.extract<0, 15>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_108_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_res = stg6_to_gp_1448_ld113_merged669_write.extract<16, 31>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_109_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_res = stg6_to_gp_1448_ld113_merged669_write.extract<32, 47>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_110_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_res = stg6_to_gp_1448_ld113_merged669_write.extract<48, 63>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_111_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
}

// stg7_1_merged599_read
//	stg6_FIFO_buf112_stg7_1_merged599_92
//	stg6_FIFO_buf112_stg7_1_merged599_93
//	stg6_FIFO_buf112_stg7_1_merged599_94
//	stg6_FIFO_buf112_stg7_1_merged599_95
//	stg6_FIFO_buf112_stg7_1_merged599_96
//	stg6_FIFO_buf112_stg7_1_merged599_97
//	stg6_FIFO_buf112_stg7_1_merged599_98
//	stg6_FIFO_buf112_stg7_1_merged599_99
//	stg6_FIFO_buf112_stg7_1_merged599_100
//	stg6_FIFO_buf112_stg7_1_merged599_101
//	stg6_FIFO_buf112_stg7_1_merged599_102
//	stg6_FIFO_buf112_stg7_1_merged599_103
//	stg6_FIFO_buf112_stg7_1_merged599_104
//	stg6_FIFO_buf112_stg7_1_merged599_105
//	stg6_FIFO_buf112_stg7_1_merged599_106
//	stg6_FIFO_buf112_stg7_1_merged599_107
inline hw_uint<256> stg6_FIFO_buf112_stg7_1_merged599_read_bundle_read(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg6_FIFO_buf112_stg7_1_merged599_92
    // stg6_FIFO_buf112_stg7_1_merged599_93
    // stg6_FIFO_buf112_stg7_1_merged599_94
    // stg6_FIFO_buf112_stg7_1_merged599_95
    // stg6_FIFO_buf112_stg7_1_merged599_96
    // stg6_FIFO_buf112_stg7_1_merged599_97
    // stg6_FIFO_buf112_stg7_1_merged599_98
    // stg6_FIFO_buf112_stg7_1_merged599_99
    // stg6_FIFO_buf112_stg7_1_merged599_100
    // stg6_FIFO_buf112_stg7_1_merged599_101
    // stg6_FIFO_buf112_stg7_1_merged599_102
    // stg6_FIFO_buf112_stg7_1_merged599_103
    // stg6_FIFO_buf112_stg7_1_merged599_104
    // stg6_FIFO_buf112_stg7_1_merged599_105
    // stg6_FIFO_buf112_stg7_1_merged599_106
    // stg6_FIFO_buf112_stg7_1_merged599_107

	hw_uint<256> result;
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_92_res = stg6_FIFO_buf112_stg7_1_merged599_92_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_92_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_93_res = stg6_FIFO_buf112_stg7_1_merged599_93_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_93_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_94_res = stg6_FIFO_buf112_stg7_1_merged599_94_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_94_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_95_res = stg6_FIFO_buf112_stg7_1_merged599_95_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_95_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_96_res = stg6_FIFO_buf112_stg7_1_merged599_96_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<64, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_96_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_97_res = stg6_FIFO_buf112_stg7_1_merged599_97_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<80, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_97_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_98_res = stg6_FIFO_buf112_stg7_1_merged599_98_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<96, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_98_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_99_res = stg6_FIFO_buf112_stg7_1_merged599_99_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<112, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_99_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_100_res = stg6_FIFO_buf112_stg7_1_merged599_100_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<128, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_100_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_101_res = stg6_FIFO_buf112_stg7_1_merged599_101_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<144, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_101_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_102_res = stg6_FIFO_buf112_stg7_1_merged599_102_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<160, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_102_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_103_res = stg6_FIFO_buf112_stg7_1_merged599_103_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<176, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_103_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_104_res = stg6_FIFO_buf112_stg7_1_merged599_104_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<192, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_104_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_105_res = stg6_FIFO_buf112_stg7_1_merged599_105_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<208, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_105_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_106_res = stg6_FIFO_buf112_stg7_1_merged599_106_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<224, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_106_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged599_107_res = stg6_FIFO_buf112_stg7_1_merged599_107_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<240, 256>(result, stg6_FIFO_buf112_stg7_1_merged599_107_res);
	return result;
}

struct stg7_stg7_1_merged599_88_to_stg7_stg7_ld53_merged661_84_cache {
	// RAM Box: {[3, 1107], [-7, 1926]}
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

struct stg7_stg7_1_merged599_89_to_stg7_stg7_ld53_merged661_85_cache {
	// RAM Box: {[2, 1106], [-7, 1926]}
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

struct stg7_stg7_1_merged599_90_to_stg7_stg7_ld53_merged661_86_cache {
	// RAM Box: {[1, 1105], [-7, 1926]}
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

struct stg7_stg7_1_merged599_91_to_stg7_stg7_ld53_merged661_87_cache {
	// RAM Box: {[0, 1104], [-7, 1926]}
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

struct stg7_cache {
  // Reader addrs...
    // { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[3 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
    // { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[2 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
    // { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[1 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
    // { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
  // # of banks: 4
  stg7_stg7_1_merged599_88_to_stg7_stg7_ld53_merged661_84_cache stg7_stg7_1_merged599_88_to_stg7_stg7_ld53_merged661_84;
  stg7_stg7_1_merged599_89_to_stg7_stg7_ld53_merged661_85_cache stg7_stg7_1_merged599_89_to_stg7_stg7_ld53_merged661_85;
  stg7_stg7_1_merged599_90_to_stg7_stg7_ld53_merged661_86_cache stg7_stg7_1_merged599_90_to_stg7_stg7_ld53_merged661_86;
  stg7_stg7_1_merged599_91_to_stg7_stg7_ld53_merged661_87_cache stg7_stg7_1_merged599_91_to_stg7_stg7_ld53_merged661_87;
};



inline void stg7_stg7_1_merged599_88_write(hw_uint<16>& stg7_stg7_1_merged599_88, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged599_88_to_stg7_stg7_ld53_merged661_84.push(stg7_stg7_1_merged599_88);
}

inline void stg7_stg7_1_merged599_89_write(hw_uint<16>& stg7_stg7_1_merged599_89, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged599_89_to_stg7_stg7_ld53_merged661_85.push(stg7_stg7_1_merged599_89);
}

inline void stg7_stg7_1_merged599_90_write(hw_uint<16>& stg7_stg7_1_merged599_90, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged599_90_to_stg7_stg7_ld53_merged661_86.push(stg7_stg7_1_merged599_90);
}

inline void stg7_stg7_1_merged599_91_write(hw_uint<16>& stg7_stg7_1_merged599_91, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged599_91_to_stg7_stg7_ld53_merged661_87.push(stg7_stg7_1_merged599_91);
}

inline hw_uint<16> stg7_stg7_ld53_merged661_84_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged661_84 read pattern: { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[3 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
  // Read schedule : { stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_stg7_1_merged599_88 = stg7.stg7_stg7_1_merged599_88_to_stg7_stg7_ld53_merged661_84.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged599_88;
  return 0;
}

inline hw_uint<16> stg7_stg7_ld53_merged661_85_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged661_85 read pattern: { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[2 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
  // Read schedule : { stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_stg7_1_merged599_89 = stg7.stg7_stg7_1_merged599_89_to_stg7_stg7_ld53_merged661_85.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged599_89;
  return 0;
}

inline hw_uint<16> stg7_stg7_ld53_merged661_86_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged661_86 read pattern: { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[1 + 4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
  // Read schedule : { stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_stg7_1_merged599_90 = stg7.stg7_stg7_1_merged599_90_to_stg7_stg7_ld53_merged661_86.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged599_90;
  return 0;
}

inline hw_uint<16> stg7_stg7_ld53_merged661_87_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged661_87 read pattern: { stg7_ld53_merged661[root = 0, stg7_ld54, stg7_ld53] -> stg7[4stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 276 }
  // Read schedule : { stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  // Write schedule: { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_stg7_1_merged599_91 = stg7.stg7_stg7_1_merged599_91_to_stg7_stg7_ld53_merged661_87.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged599_91;
  return 0;
}

// # of bundles = 2
// stg7_1_merged599_write
//	stg7_stg7_1_merged599_88
//	stg7_stg7_1_merged599_89
//	stg7_stg7_1_merged599_90
//	stg7_stg7_1_merged599_91
inline void stg7_stg7_1_merged599_write_bundle_write(hw_uint<64>& stg7_1_merged599_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_1_merged599_88_res = stg7_1_merged599_write.extract<0, 15>();
	stg7_stg7_1_merged599_88_write(stg7_stg7_1_merged599_88_res, stg7, root, stg7_0, stg7_1, dynamic_address);
	hw_uint<16> stg7_stg7_1_merged599_89_res = stg7_1_merged599_write.extract<16, 31>();
	stg7_stg7_1_merged599_89_write(stg7_stg7_1_merged599_89_res, stg7, root, stg7_0, stg7_1, dynamic_address);
	hw_uint<16> stg7_stg7_1_merged599_90_res = stg7_1_merged599_write.extract<32, 47>();
	stg7_stg7_1_merged599_90_write(stg7_stg7_1_merged599_90_res, stg7, root, stg7_0, stg7_1, dynamic_address);
	hw_uint<16> stg7_stg7_1_merged599_91_res = stg7_1_merged599_write.extract<48, 63>();
	stg7_stg7_1_merged599_91_write(stg7_stg7_1_merged599_91_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

// stg7_ld53_merged661_read
//	stg7_stg7_ld53_merged661_84
//	stg7_stg7_ld53_merged661_85
//	stg7_stg7_ld53_merged661_86
//	stg7_stg7_ld53_merged661_87
inline hw_uint<64> stg7_stg7_ld53_merged661_read_bundle_read(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_stg7_ld53_merged661_84
    // stg7_stg7_ld53_merged661_85
    // stg7_stg7_ld53_merged661_86
    // stg7_stg7_ld53_merged661_87

	hw_uint<64> result;
	hw_uint<16> stg7_stg7_ld53_merged661_84_res = stg7_stg7_ld53_merged661_84_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<0, 64>(result, stg7_stg7_ld53_merged661_84_res);
	hw_uint<16> stg7_stg7_ld53_merged661_85_res = stg7_stg7_ld53_merged661_85_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<16, 64>(result, stg7_stg7_ld53_merged661_85_res);
	hw_uint<16> stg7_stg7_ld53_merged661_86_res = stg7_stg7_ld53_merged661_86_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<32, 64>(result, stg7_stg7_ld53_merged661_86_res);
	hw_uint<16> stg7_stg7_ld53_merged661_87_res = stg7_stg7_ld53_merged661_87_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<48, 64>(result, stg7_stg7_ld53_merged661_87_res);
	return result;
}

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4_cache {
	// RAM Box: {[3, 1103], [-7, 1926]}
	// Capacity: 556
	// # of read delays: 4
  // 0, 1, 278, 555
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 276> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 276> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_277() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_278() {
		return f4;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_555() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4_cache {
	// RAM Box: {[2, 1102], [-7, 1926]}
	// Capacity: 556
	// # of read delays: 4
  // 0, 1, 278, 555
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 276> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 276> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_277() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_278() {
		return f4;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_555() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4_cache {
	// RAM Box: {[1, 1101], [-7, 1926]}
	// Capacity: 556
	// # of read delays: 4
  // 0, 1, 278, 555
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 276> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 276> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_277() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_278() {
		return f4;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_555() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4_cache {
	// RAM Box: {[0, 1104], [-7, 1925]}
	// Capacity: 556
	// # of read delays: 5
  // 0, 1, 277, 278, 555
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 275> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 276> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_277() {
		return f4;
	}

	inline hw_uint<16> peek_278() {
		return f6;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_555() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_cache {
  // Reader addrs...
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
    // { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // # of banks: 4
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4;
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4;
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4;
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4;
};



inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72);
}

inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73);
}

inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74);
}

inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75);
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_56_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_56 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4.peek_555();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_57_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_57 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_58_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_58 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4.peek_277();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_59_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_59 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_60_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_60 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4.peek_555();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_61_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_61 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_62_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_62 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[3 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_63_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_63 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_64_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_64 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4.peek_555();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_65_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_65 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_66_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_66 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_67_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_67 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_68_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_68 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4.peek_555();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_69_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_69 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_70_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_70 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 4stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_merged_banks_4.peek_278();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_71_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged602_71 read pattern: { stg8_1_merged602[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[4stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 275 }
  // Read schedule : { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75;
  return 0;
}

// # of bundles = 2
// stg7_to_gp_1552_ld117_merged683_write
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75
inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_write_bundle_write(hw_uint<64>& stg7_to_gp_1552_ld117_merged683_write, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_res = stg7_to_gp_1552_ld117_merged683_write.extract<0, 15>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_72_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_res = stg7_to_gp_1552_ld117_merged683_write.extract<16, 31>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_73_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_res = stg7_to_gp_1552_ld117_merged683_write.extract<32, 47>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_74_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_res = stg7_to_gp_1552_ld117_merged683_write.extract<48, 63>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_75_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
}

// stg8_1_merged602_read
//	stg7_FIFO_buf116_stg8_1_merged602_56
//	stg7_FIFO_buf116_stg8_1_merged602_57
//	stg7_FIFO_buf116_stg8_1_merged602_58
//	stg7_FIFO_buf116_stg8_1_merged602_59
//	stg7_FIFO_buf116_stg8_1_merged602_60
//	stg7_FIFO_buf116_stg8_1_merged602_61
//	stg7_FIFO_buf116_stg8_1_merged602_62
//	stg7_FIFO_buf116_stg8_1_merged602_63
//	stg7_FIFO_buf116_stg8_1_merged602_64
//	stg7_FIFO_buf116_stg8_1_merged602_65
//	stg7_FIFO_buf116_stg8_1_merged602_66
//	stg7_FIFO_buf116_stg8_1_merged602_67
//	stg7_FIFO_buf116_stg8_1_merged602_68
//	stg7_FIFO_buf116_stg8_1_merged602_69
//	stg7_FIFO_buf116_stg8_1_merged602_70
//	stg7_FIFO_buf116_stg8_1_merged602_71
inline hw_uint<256> stg7_FIFO_buf116_stg8_1_merged602_read_bundle_read(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg7_FIFO_buf116_stg8_1_merged602_56
    // stg7_FIFO_buf116_stg8_1_merged602_57
    // stg7_FIFO_buf116_stg8_1_merged602_58
    // stg7_FIFO_buf116_stg8_1_merged602_59
    // stg7_FIFO_buf116_stg8_1_merged602_60
    // stg7_FIFO_buf116_stg8_1_merged602_61
    // stg7_FIFO_buf116_stg8_1_merged602_62
    // stg7_FIFO_buf116_stg8_1_merged602_63
    // stg7_FIFO_buf116_stg8_1_merged602_64
    // stg7_FIFO_buf116_stg8_1_merged602_65
    // stg7_FIFO_buf116_stg8_1_merged602_66
    // stg7_FIFO_buf116_stg8_1_merged602_67
    // stg7_FIFO_buf116_stg8_1_merged602_68
    // stg7_FIFO_buf116_stg8_1_merged602_69
    // stg7_FIFO_buf116_stg8_1_merged602_70
    // stg7_FIFO_buf116_stg8_1_merged602_71

	hw_uint<256> result;
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_56_res = stg7_FIFO_buf116_stg8_1_merged602_56_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_56_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_57_res = stg7_FIFO_buf116_stg8_1_merged602_57_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_57_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_58_res = stg7_FIFO_buf116_stg8_1_merged602_58_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_58_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_59_res = stg7_FIFO_buf116_stg8_1_merged602_59_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_59_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_60_res = stg7_FIFO_buf116_stg8_1_merged602_60_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<64, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_60_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_61_res = stg7_FIFO_buf116_stg8_1_merged602_61_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<80, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_61_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_62_res = stg7_FIFO_buf116_stg8_1_merged602_62_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<96, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_62_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_63_res = stg7_FIFO_buf116_stg8_1_merged602_63_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<112, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_63_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_64_res = stg7_FIFO_buf116_stg8_1_merged602_64_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<128, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_64_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_65_res = stg7_FIFO_buf116_stg8_1_merged602_65_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<144, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_65_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_66_res = stg7_FIFO_buf116_stg8_1_merged602_66_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<160, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_66_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_67_res = stg7_FIFO_buf116_stg8_1_merged602_67_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<176, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_67_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_68_res = stg7_FIFO_buf116_stg8_1_merged602_68_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<192, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_68_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_69_res = stg7_FIFO_buf116_stg8_1_merged602_69_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<208, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_69_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_70_res = stg7_FIFO_buf116_stg8_1_merged602_70_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<224, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_70_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged602_71_res = stg7_FIFO_buf116_stg8_1_merged602_71_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<240, 256>(result, stg7_FIFO_buf116_stg8_1_merged602_71_res);
	return result;
}

struct stg8_stg8_1_merged602_52_to_stg8_stg8_ld57_merged639_48_cache {
	// RAM Box: {[3, 1103], [-6, 1925]}
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

struct stg8_stg8_1_merged602_53_to_stg8_stg8_ld57_merged639_49_cache {
	// RAM Box: {[2, 1102], [-6, 1925]}
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

struct stg8_stg8_1_merged602_54_to_stg8_stg8_ld57_merged639_50_cache {
	// RAM Box: {[1, 1101], [-6, 1925]}
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

struct stg8_stg8_1_merged602_55_to_stg8_stg8_ld57_merged639_51_cache {
	// RAM Box: {[0, 1100], [-6, 1925]}
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

struct stg8_cache {
  // Reader addrs...
    // { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[3 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
    // { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[2 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
    // { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[1 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
    // { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
  // # of banks: 4
  stg8_stg8_1_merged602_52_to_stg8_stg8_ld57_merged639_48_cache stg8_stg8_1_merged602_52_to_stg8_stg8_ld57_merged639_48;
  stg8_stg8_1_merged602_53_to_stg8_stg8_ld57_merged639_49_cache stg8_stg8_1_merged602_53_to_stg8_stg8_ld57_merged639_49;
  stg8_stg8_1_merged602_54_to_stg8_stg8_ld57_merged639_50_cache stg8_stg8_1_merged602_54_to_stg8_stg8_ld57_merged639_50;
  stg8_stg8_1_merged602_55_to_stg8_stg8_ld57_merged639_51_cache stg8_stg8_1_merged602_55_to_stg8_stg8_ld57_merged639_51;
};



inline void stg8_stg8_1_merged602_52_write(hw_uint<16>& stg8_stg8_1_merged602_52, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged602_52_to_stg8_stg8_ld57_merged639_48.push(stg8_stg8_1_merged602_52);
}

inline void stg8_stg8_1_merged602_53_write(hw_uint<16>& stg8_stg8_1_merged602_53, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged602_53_to_stg8_stg8_ld57_merged639_49.push(stg8_stg8_1_merged602_53);
}

inline void stg8_stg8_1_merged602_54_write(hw_uint<16>& stg8_stg8_1_merged602_54, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged602_54_to_stg8_stg8_ld57_merged639_50.push(stg8_stg8_1_merged602_54);
}

inline void stg8_stg8_1_merged602_55_write(hw_uint<16>& stg8_stg8_1_merged602_55, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged602_55_to_stg8_stg8_ld57_merged639_51.push(stg8_stg8_1_merged602_55);
}

inline hw_uint<16> stg8_stg8_ld57_merged639_48_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged639_48 read pattern: { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[3 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
  // Read schedule : { stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_stg8_1_merged602_52 = stg8.stg8_stg8_1_merged602_52_to_stg8_stg8_ld57_merged639_48.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged602_52;
  return 0;
}

inline hw_uint<16> stg8_stg8_ld57_merged639_49_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged639_49 read pattern: { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[2 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
  // Read schedule : { stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_stg8_1_merged602_53 = stg8.stg8_stg8_1_merged602_53_to_stg8_stg8_ld57_merged639_49.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged602_53;
  return 0;
}

inline hw_uint<16> stg8_stg8_ld57_merged639_50_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged639_50 read pattern: { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[1 + 4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
  // Read schedule : { stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_stg8_1_merged602_54 = stg8.stg8_stg8_1_merged602_54_to_stg8_stg8_ld57_merged639_50.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged602_54;
  return 0;
}

inline hw_uint<16> stg8_stg8_ld57_merged639_51_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged639_51 read pattern: { stg8_ld57_merged639[root = 0, stg8_ld58, stg8_ld57] -> stg8[4stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 275 }
  // Read schedule : { stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  // Write schedule: { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_stg8_1_merged602_55 = stg8.stg8_stg8_1_merged602_55_to_stg8_stg8_ld57_merged639_51.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged602_55;
  return 0;
}

// # of bundles = 2
// stg8_1_merged602_write
//	stg8_stg8_1_merged602_52
//	stg8_stg8_1_merged602_53
//	stg8_stg8_1_merged602_54
//	stg8_stg8_1_merged602_55
inline void stg8_stg8_1_merged602_write_bundle_write(hw_uint<64>& stg8_1_merged602_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_1_merged602_52_res = stg8_1_merged602_write.extract<0, 15>();
	stg8_stg8_1_merged602_52_write(stg8_stg8_1_merged602_52_res, stg8, root, stg8_0, stg8_1, dynamic_address);
	hw_uint<16> stg8_stg8_1_merged602_53_res = stg8_1_merged602_write.extract<16, 31>();
	stg8_stg8_1_merged602_53_write(stg8_stg8_1_merged602_53_res, stg8, root, stg8_0, stg8_1, dynamic_address);
	hw_uint<16> stg8_stg8_1_merged602_54_res = stg8_1_merged602_write.extract<32, 47>();
	stg8_stg8_1_merged602_54_write(stg8_stg8_1_merged602_54_res, stg8, root, stg8_0, stg8_1, dynamic_address);
	hw_uint<16> stg8_stg8_1_merged602_55_res = stg8_1_merged602_write.extract<48, 63>();
	stg8_stg8_1_merged602_55_write(stg8_stg8_1_merged602_55_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

// stg8_ld57_merged639_read
//	stg8_stg8_ld57_merged639_48
//	stg8_stg8_ld57_merged639_49
//	stg8_stg8_ld57_merged639_50
//	stg8_stg8_ld57_merged639_51
inline hw_uint<64> stg8_stg8_ld57_merged639_read_bundle_read(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_stg8_ld57_merged639_48
    // stg8_stg8_ld57_merged639_49
    // stg8_stg8_ld57_merged639_50
    // stg8_stg8_ld57_merged639_51

	hw_uint<64> result;
	hw_uint<16> stg8_stg8_ld57_merged639_48_res = stg8_stg8_ld57_merged639_48_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<0, 64>(result, stg8_stg8_ld57_merged639_48_res);
	hw_uint<16> stg8_stg8_ld57_merged639_49_res = stg8_stg8_ld57_merged639_49_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<16, 64>(result, stg8_stg8_ld57_merged639_49_res);
	hw_uint<16> stg8_stg8_ld57_merged639_50_res = stg8_stg8_ld57_merged639_50_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<32, 64>(result, stg8_stg8_ld57_merged639_50_res);
	hw_uint<16> stg8_stg8_ld57_merged639_51_res = stg8_stg8_ld57_merged639_51_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<48, 64>(result, stg8_stg8_ld57_merged639_51_res);
	return result;
}

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4_cache {
	// RAM Box: {[3, 1099], [-6, 1925]}
	// Capacity: 554
	// # of read delays: 4
  // 0, 1, 277, 553
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 275> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 275> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_277() {
		return f4;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_553() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4_cache {
	// RAM Box: {[2, 1098], [-6, 1925]}
	// Capacity: 554
	// # of read delays: 4
  // 0, 1, 277, 553
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 275> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 275> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_277() {
		return f4;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_553() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4_cache {
	// RAM Box: {[1, 1097], [-6, 1925]}
	// Capacity: 554
	// # of read delays: 4
  // 0, 1, 277, 553
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 275> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 275> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_277() {
		return f4;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_553() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4_cache {
	// RAM Box: {[0, 1100], [-6, 1924]}
	// Capacity: 554
	// # of read delays: 5
  // 0, 1, 276, 277, 553
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 274> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 275> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_276() {
		return f4;
	}

	inline hw_uint<16> peek_277() {
		return f6;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_553() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 275
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 275 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_cache {
  // Reader addrs...
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
    // { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // # of banks: 4
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4;
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4;
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4;
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4;
};



inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36);
}

inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37);
}

inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38);
}

inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39);
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_20_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_20 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4.peek_553();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_21_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_21 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_22_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_22 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4.peek_276();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_23_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_23 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_24_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_24 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4.peek_553();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_25_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_25 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_26_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_26 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[3 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_27_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_27 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_28_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_28 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4.peek_553();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_29_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_29 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_30_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_30 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_31_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_31 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_32_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_32 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4.peek_553();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_33_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_33 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_34_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_34 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 4stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_merged_banks_4.peek_277();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_35_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged605_35 read pattern: { stg9_1_merged605[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[4stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 274 }
  // Read schedule : { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39;
  return 0;
}

// # of bundles = 2
// stg8_to_gp_1656_ld121_merged647_write
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39
inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_write_bundle_write(hw_uint<64>& stg8_to_gp_1656_ld121_merged647_write, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_res = stg8_to_gp_1656_ld121_merged647_write.extract<0, 15>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_36_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_res = stg8_to_gp_1656_ld121_merged647_write.extract<16, 31>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_37_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_res = stg8_to_gp_1656_ld121_merged647_write.extract<32, 47>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_38_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_res = stg8_to_gp_1656_ld121_merged647_write.extract<48, 63>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_39_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
}

// stg9_1_merged605_read
//	stg8_FIFO_buf120_stg9_1_merged605_20
//	stg8_FIFO_buf120_stg9_1_merged605_21
//	stg8_FIFO_buf120_stg9_1_merged605_22
//	stg8_FIFO_buf120_stg9_1_merged605_23
//	stg8_FIFO_buf120_stg9_1_merged605_24
//	stg8_FIFO_buf120_stg9_1_merged605_25
//	stg8_FIFO_buf120_stg9_1_merged605_26
//	stg8_FIFO_buf120_stg9_1_merged605_27
//	stg8_FIFO_buf120_stg9_1_merged605_28
//	stg8_FIFO_buf120_stg9_1_merged605_29
//	stg8_FIFO_buf120_stg9_1_merged605_30
//	stg8_FIFO_buf120_stg9_1_merged605_31
//	stg8_FIFO_buf120_stg9_1_merged605_32
//	stg8_FIFO_buf120_stg9_1_merged605_33
//	stg8_FIFO_buf120_stg9_1_merged605_34
//	stg8_FIFO_buf120_stg9_1_merged605_35
inline hw_uint<256> stg8_FIFO_buf120_stg9_1_merged605_read_bundle_read(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg8_FIFO_buf120_stg9_1_merged605_20
    // stg8_FIFO_buf120_stg9_1_merged605_21
    // stg8_FIFO_buf120_stg9_1_merged605_22
    // stg8_FIFO_buf120_stg9_1_merged605_23
    // stg8_FIFO_buf120_stg9_1_merged605_24
    // stg8_FIFO_buf120_stg9_1_merged605_25
    // stg8_FIFO_buf120_stg9_1_merged605_26
    // stg8_FIFO_buf120_stg9_1_merged605_27
    // stg8_FIFO_buf120_stg9_1_merged605_28
    // stg8_FIFO_buf120_stg9_1_merged605_29
    // stg8_FIFO_buf120_stg9_1_merged605_30
    // stg8_FIFO_buf120_stg9_1_merged605_31
    // stg8_FIFO_buf120_stg9_1_merged605_32
    // stg8_FIFO_buf120_stg9_1_merged605_33
    // stg8_FIFO_buf120_stg9_1_merged605_34
    // stg8_FIFO_buf120_stg9_1_merged605_35

	hw_uint<256> result;
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_20_res = stg8_FIFO_buf120_stg9_1_merged605_20_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_20_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_21_res = stg8_FIFO_buf120_stg9_1_merged605_21_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_21_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_22_res = stg8_FIFO_buf120_stg9_1_merged605_22_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_22_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_23_res = stg8_FIFO_buf120_stg9_1_merged605_23_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_23_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_24_res = stg8_FIFO_buf120_stg9_1_merged605_24_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<64, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_24_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_25_res = stg8_FIFO_buf120_stg9_1_merged605_25_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<80, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_25_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_26_res = stg8_FIFO_buf120_stg9_1_merged605_26_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<96, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_26_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_27_res = stg8_FIFO_buf120_stg9_1_merged605_27_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<112, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_27_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_28_res = stg8_FIFO_buf120_stg9_1_merged605_28_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<128, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_28_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_29_res = stg8_FIFO_buf120_stg9_1_merged605_29_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<144, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_29_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_30_res = stg8_FIFO_buf120_stg9_1_merged605_30_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<160, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_30_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_31_res = stg8_FIFO_buf120_stg9_1_merged605_31_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<176, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_31_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_32_res = stg8_FIFO_buf120_stg9_1_merged605_32_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<192, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_32_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_33_res = stg8_FIFO_buf120_stg9_1_merged605_33_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<208, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_33_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_34_res = stg8_FIFO_buf120_stg9_1_merged605_34_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<224, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_34_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged605_35_res = stg8_FIFO_buf120_stg9_1_merged605_35_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<240, 256>(result, stg8_FIFO_buf120_stg9_1_merged605_35_res);
	return result;
}

struct stg9_stg9_1_merged605_16_to_stg9_stg9_ld61_merged671_12_cache {
	// RAM Box: {[3, 1099], [-5, 1924]}
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

struct stg9_stg9_1_merged605_17_to_stg9_stg9_ld61_merged671_13_cache {
	// RAM Box: {[2, 1098], [-5, 1924]}
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

struct stg9_stg9_1_merged605_18_to_stg9_stg9_ld61_merged671_14_cache {
	// RAM Box: {[1, 1097], [-5, 1924]}
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

struct stg9_stg9_1_merged605_19_to_stg9_stg9_ld61_merged671_15_cache {
	// RAM Box: {[0, 1096], [-5, 1924]}
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

struct stg9_cache {
  // Reader addrs...
    // { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[3 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
    // { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[2 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
    // { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[1 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
    // { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
  // # of banks: 4
  stg9_stg9_1_merged605_16_to_stg9_stg9_ld61_merged671_12_cache stg9_stg9_1_merged605_16_to_stg9_stg9_ld61_merged671_12;
  stg9_stg9_1_merged605_17_to_stg9_stg9_ld61_merged671_13_cache stg9_stg9_1_merged605_17_to_stg9_stg9_ld61_merged671_13;
  stg9_stg9_1_merged605_18_to_stg9_stg9_ld61_merged671_14_cache stg9_stg9_1_merged605_18_to_stg9_stg9_ld61_merged671_14;
  stg9_stg9_1_merged605_19_to_stg9_stg9_ld61_merged671_15_cache stg9_stg9_1_merged605_19_to_stg9_stg9_ld61_merged671_15;
};



inline void stg9_stg9_1_merged605_16_write(hw_uint<16>& stg9_stg9_1_merged605_16, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged605_16_to_stg9_stg9_ld61_merged671_12.push(stg9_stg9_1_merged605_16);
}

inline void stg9_stg9_1_merged605_17_write(hw_uint<16>& stg9_stg9_1_merged605_17, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged605_17_to_stg9_stg9_ld61_merged671_13.push(stg9_stg9_1_merged605_17);
}

inline void stg9_stg9_1_merged605_18_write(hw_uint<16>& stg9_stg9_1_merged605_18, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged605_18_to_stg9_stg9_ld61_merged671_14.push(stg9_stg9_1_merged605_18);
}

inline void stg9_stg9_1_merged605_19_write(hw_uint<16>& stg9_stg9_1_merged605_19, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged605_19_to_stg9_stg9_ld61_merged671_15.push(stg9_stg9_1_merged605_19);
}

inline hw_uint<16> stg9_stg9_ld61_merged671_12_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged671_12 read pattern: { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[3 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
  // Read schedule : { stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_stg9_1_merged605_16 = stg9.stg9_stg9_1_merged605_16_to_stg9_stg9_ld61_merged671_12.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged605_16;
  return 0;
}

inline hw_uint<16> stg9_stg9_ld61_merged671_13_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged671_13 read pattern: { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[2 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
  // Read schedule : { stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_stg9_1_merged605_17 = stg9.stg9_stg9_1_merged605_17_to_stg9_stg9_ld61_merged671_13.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged605_17;
  return 0;
}

inline hw_uint<16> stg9_stg9_ld61_merged671_14_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged671_14 read pattern: { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[1 + 4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
  // Read schedule : { stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_stg9_1_merged605_18 = stg9.stg9_stg9_1_merged605_18_to_stg9_stg9_ld61_merged671_14.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged605_18;
  return 0;
}

inline hw_uint<16> stg9_stg9_ld61_merged671_15_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged671_15 read pattern: { stg9_ld61_merged671[root = 0, stg9_ld62, stg9_ld61] -> stg9[4stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 274 }
  // Read schedule : { stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  // Write schedule: { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_stg9_1_merged605_19 = stg9.stg9_stg9_1_merged605_19_to_stg9_stg9_ld61_merged671_15.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged605_19;
  return 0;
}

// # of bundles = 2
// stg9_1_merged605_write
//	stg9_stg9_1_merged605_16
//	stg9_stg9_1_merged605_17
//	stg9_stg9_1_merged605_18
//	stg9_stg9_1_merged605_19
inline void stg9_stg9_1_merged605_write_bundle_write(hw_uint<64>& stg9_1_merged605_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_1_merged605_16_res = stg9_1_merged605_write.extract<0, 15>();
	stg9_stg9_1_merged605_16_write(stg9_stg9_1_merged605_16_res, stg9, root, stg9_0, stg9_1, dynamic_address);
	hw_uint<16> stg9_stg9_1_merged605_17_res = stg9_1_merged605_write.extract<16, 31>();
	stg9_stg9_1_merged605_17_write(stg9_stg9_1_merged605_17_res, stg9, root, stg9_0, stg9_1, dynamic_address);
	hw_uint<16> stg9_stg9_1_merged605_18_res = stg9_1_merged605_write.extract<32, 47>();
	stg9_stg9_1_merged605_18_write(stg9_stg9_1_merged605_18_res, stg9, root, stg9_0, stg9_1, dynamic_address);
	hw_uint<16> stg9_stg9_1_merged605_19_res = stg9_1_merged605_write.extract<48, 63>();
	stg9_stg9_1_merged605_19_write(stg9_stg9_1_merged605_19_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

// stg9_ld61_merged671_read
//	stg9_stg9_ld61_merged671_12
//	stg9_stg9_ld61_merged671_13
//	stg9_stg9_ld61_merged671_14
//	stg9_stg9_ld61_merged671_15
inline hw_uint<64> stg9_stg9_ld61_merged671_read_bundle_read(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_stg9_ld61_merged671_12
    // stg9_stg9_ld61_merged671_13
    // stg9_stg9_ld61_merged671_14
    // stg9_stg9_ld61_merged671_15

	hw_uint<64> result;
	hw_uint<16> stg9_stg9_ld61_merged671_12_res = stg9_stg9_ld61_merged671_12_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<0, 64>(result, stg9_stg9_ld61_merged671_12_res);
	hw_uint<16> stg9_stg9_ld61_merged671_13_res = stg9_stg9_ld61_merged671_13_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<16, 64>(result, stg9_stg9_ld61_merged671_13_res);
	hw_uint<16> stg9_stg9_ld61_merged671_14_res = stg9_stg9_ld61_merged671_14_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<32, 64>(result, stg9_stg9_ld61_merged671_14_res);
	hw_uint<16> stg9_stg9_ld61_merged671_15_res = stg9_stg9_ld61_merged671_15_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<48, 64>(result, stg9_stg9_ld61_merged671_15_res);
	return result;
}

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4_cache {
	// RAM Box: {[3, 1095], [-5, 1924]}
	// Capacity: 552
	// # of read delays: 4
  // 0, 1, 276, 551
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 274> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 274> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_276() {
		return f4;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_551() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4_cache {
	// RAM Box: {[2, 1094], [-5, 1924]}
	// Capacity: 552
	// # of read delays: 4
  // 0, 1, 276, 551
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 274> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 274> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_276() {
		return f4;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_551() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4_cache {
	// RAM Box: {[1, 1093], [-5, 1924]}
	// Capacity: 552
	// # of read delays: 4
  // 0, 1, 276, 551
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 274> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 274> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_275() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_276() {
		return f4;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_551() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4_cache {
	// RAM Box: {[0, 1096], [-5, 1923]}
	// Capacity: 552
	// # of read delays: 5
  // 0, 1, 275, 276, 551
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 273> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 274> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_274() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_275() {
		return f4;
	}

	inline hw_uint<16> peek_276() {
		return f6;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_551() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 273
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 273 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_cache {
  // Reader addrs...
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
    // { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // # of banks: 4
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4;
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4;
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4;
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4;
};



inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0);
}

inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1);
}

inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2);
}

inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3);
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_488_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_488 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4.peek_551();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_489_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_489 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_490_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_490 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4.peek_275();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_491_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_491 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_492_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_492 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4.peek_551();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_493_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_493 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_494_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_494 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[3 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_495_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_495 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_496_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_496 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4.peek_551();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_497_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_497 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_498_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_498 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_499_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_499 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_500_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_500 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4.peek_551();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_501_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_501 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_502_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_502 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 4stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_merged_banks_4.peek_276();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_503_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged608_503 read pattern: { stg10_1_merged608[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[4stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 273 }
  // Read schedule : { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
  // Write schedule: { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3;
  return 0;
}

// # of bundles = 2
// stg10_1_merged608_read
//	stg9_FIFO_buf124_stg10_1_merged608_488
//	stg9_FIFO_buf124_stg10_1_merged608_489
//	stg9_FIFO_buf124_stg10_1_merged608_490
//	stg9_FIFO_buf124_stg10_1_merged608_491
//	stg9_FIFO_buf124_stg10_1_merged608_492
//	stg9_FIFO_buf124_stg10_1_merged608_493
//	stg9_FIFO_buf124_stg10_1_merged608_494
//	stg9_FIFO_buf124_stg10_1_merged608_495
//	stg9_FIFO_buf124_stg10_1_merged608_496
//	stg9_FIFO_buf124_stg10_1_merged608_497
//	stg9_FIFO_buf124_stg10_1_merged608_498
//	stg9_FIFO_buf124_stg10_1_merged608_499
//	stg9_FIFO_buf124_stg10_1_merged608_500
//	stg9_FIFO_buf124_stg10_1_merged608_501
//	stg9_FIFO_buf124_stg10_1_merged608_502
//	stg9_FIFO_buf124_stg10_1_merged608_503
inline hw_uint<256> stg9_FIFO_buf124_stg10_1_merged608_read_bundle_read(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 16
    // stg9_FIFO_buf124_stg10_1_merged608_488
    // stg9_FIFO_buf124_stg10_1_merged608_489
    // stg9_FIFO_buf124_stg10_1_merged608_490
    // stg9_FIFO_buf124_stg10_1_merged608_491
    // stg9_FIFO_buf124_stg10_1_merged608_492
    // stg9_FIFO_buf124_stg10_1_merged608_493
    // stg9_FIFO_buf124_stg10_1_merged608_494
    // stg9_FIFO_buf124_stg10_1_merged608_495
    // stg9_FIFO_buf124_stg10_1_merged608_496
    // stg9_FIFO_buf124_stg10_1_merged608_497
    // stg9_FIFO_buf124_stg10_1_merged608_498
    // stg9_FIFO_buf124_stg10_1_merged608_499
    // stg9_FIFO_buf124_stg10_1_merged608_500
    // stg9_FIFO_buf124_stg10_1_merged608_501
    // stg9_FIFO_buf124_stg10_1_merged608_502
    // stg9_FIFO_buf124_stg10_1_merged608_503

	hw_uint<256> result;
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_488_res = stg9_FIFO_buf124_stg10_1_merged608_488_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_488_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_489_res = stg9_FIFO_buf124_stg10_1_merged608_489_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_489_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_490_res = stg9_FIFO_buf124_stg10_1_merged608_490_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_490_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_491_res = stg9_FIFO_buf124_stg10_1_merged608_491_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_491_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_492_res = stg9_FIFO_buf124_stg10_1_merged608_492_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<64, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_492_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_493_res = stg9_FIFO_buf124_stg10_1_merged608_493_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<80, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_493_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_494_res = stg9_FIFO_buf124_stg10_1_merged608_494_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<96, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_494_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_495_res = stg9_FIFO_buf124_stg10_1_merged608_495_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<112, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_495_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_496_res = stg9_FIFO_buf124_stg10_1_merged608_496_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<128, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_496_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_497_res = stg9_FIFO_buf124_stg10_1_merged608_497_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<144, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_497_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_498_res = stg9_FIFO_buf124_stg10_1_merged608_498_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<160, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_498_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_499_res = stg9_FIFO_buf124_stg10_1_merged608_499_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<176, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_499_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_500_res = stg9_FIFO_buf124_stg10_1_merged608_500_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<192, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_500_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_501_res = stg9_FIFO_buf124_stg10_1_merged608_501_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<208, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_501_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_502_res = stg9_FIFO_buf124_stg10_1_merged608_502_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<224, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_502_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged608_503_res = stg9_FIFO_buf124_stg10_1_merged608_503_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<240, 256>(result, stg9_FIFO_buf124_stg10_1_merged608_503_res);
	return result;
}

// stg9_to_gp_360_ld125_merged645_write
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3
inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_write_bundle_write(hw_uint<64>& stg9_to_gp_360_ld125_merged645_write, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_res = stg9_to_gp_360_ld125_merged645_write.extract<0, 15>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_0_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_res = stg9_to_gp_360_ld125_merged645_write.extract<16, 31>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_1_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_res = stg9_to_gp_360_ld125_merged645_write.extract<32, 47>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_2_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_res = stg9_to_gp_360_ld125_merged645_write.extract<48, 63>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_3_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
}

// Operation logic
inline void in_1_merged575(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */in_off_chip, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m__lp_4_m_in_1__p__3_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value = in_off_chip.read();
	auto compute_result = in_1_cu573(in_off_chip_1_m__lp_4_m_in_1__p__3_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value);
	// Produce: in
	in_in_1_merged575_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_ld1_merged572(in_cache& in, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */in_to_gp_20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_4_m_in_ld1__p__3_rp__c______lp_in_ld2__p___m_15_rp__value = in_in_ld1_merged572_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in_ld1_cu571(in__lp_4_m_in_ld1__p__3_rp__c______lp_in_ld2__p___m_15_rp__value);
	// Produce: in_to_gp_20
	in_to_gp_20.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_0_in_ld2_(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 4 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_to_gp_20) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_0_in_ld2__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284; in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
//   { in_ld1_merged572[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
// Condition for in_ld1_merged572(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { in_1_merged575[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
// Condition for in_1_merged575(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1949 and 0 <= i2 <= 284 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_1_merged575(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_ld1_merged572(in /* buf name */, in_to_gp_20, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg14_to_gp_128_ld93_merged677(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg14_to_gp_128, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_to_gp_128
	auto stg14_to_gp_128__lp_4_m_stg14_to_gp_128_ld93__p__3_rp__c____stg14_to_gp_128_ld94_value = stg14_to_gp_128.read();
	auto compute_result = stg14_to_gp_128_ld93_cu676(stg14_to_gp_128__lp_4_m_stg14_to_gp_128_ld93__p__3_rp__c____stg14_to_gp_128_ld94_value);
	// Produce: stg14_FIFO_buf92
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged677_write_bundle_write(/* arg names */compute_result, stg14_FIFO_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacdyn_1_1_merged623(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */jacdyn_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_FIFO_buf92
	auto stg14_FIFO_buf92_1_m__lp_4_m_jacdyn_1_1__p__3_rp___p__0_c____1_m_jacdyn_1_0__p__0_value = stg14_FIFO_buf92_jacdyn_1_1_merged623_read_bundle_read(stg14_FIFO_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacdyn_1_1_cu621(stg14_FIFO_buf92_1_m__lp_4_m_jacdyn_1_1__p__3_rp___p__0_c____1_m_jacdyn_1_0__p__0_value);
	// Produce: jacdyn_1
	jacdyn_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_jacdyn_1_0_stg14_to_gp_128_ld94_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg14_to_gp_128, HWStream<hw_uint<64> >& /* get_args num ports = 4 */jacdyn_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_jacdyn_1_0_stg14_to_gp_128_ld94__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg14_FIFO_buf92_cache stg14_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269; stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
//   { jacdyn_1_1_merged623[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
// Condition for jacdyn_1_1_merged623(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg14_to_gp_128_ld93_merged677[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
// Condition for stg14_to_gp_128_ld93_merged677(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 284 and 47 <= i3 <= 48 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 30; i1 <= 1949; i1++) {
	    for (int i2 = 15; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg14_to_gp_128_ld93_merged677(stg14_to_gp_128 /* buf name */, stg14_FIFO_buf92, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          jacdyn_1_1_merged623(stg14_FIFO_buf92 /* buf name */, jacdyn_1, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg2_to_gp_1032_ld97_merged679(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg2_to_gp_1032, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_to_gp_1032
	auto stg2_to_gp_1032__lp_4_m_stg2_to_gp_1032_ld97__p__3_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value = stg2_to_gp_1032.read();
	auto compute_result = stg2_to_gp_1032_ld97_cu678(stg2_to_gp_1032__lp_4_m_stg2_to_gp_1032_ld97__p__3_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value);
	// Produce: stg2_FIFO_buf96
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged679_write_bundle_write(/* arg names */compute_result, stg2_FIFO_buf96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_1_merged587(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, stg3_cache& stg3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_FIFO_buf96
	auto stg2_FIFO_buf96_1_m__lp_4_m_stg3_1__p__3_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value = stg2_FIFO_buf96_stg3_1_merged587_read_bundle_read(stg2_FIFO_buf96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_1_cu585(stg2_FIFO_buf96_1_m__lp_4_m_stg3_1__p__3_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value);
	// Produce: stg3
	stg3_stg3_1_merged587_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_ld37_merged657(stg3_cache& stg3, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg3_to_gp_1136, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3__lp_4_m_stg3_ld37__p__3_rp__c______lp_stg3_ld38__p___m_11_rp__value = stg3_stg3_ld37_merged657_read_bundle_read(stg3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_ld37_cu656(stg3__lp_4_m_stg3_ld37__p__3_rp__c______lp_stg3_ld38__p___m_11_rp__value);
	// Produce: stg3_to_gp_1136
	stg3_to_gp_1136.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg2_to_gp_1032, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg3_to_gp_1136) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg2_FIFO_buf96_cache stg2_FIFO_buf96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280; stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280; stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
//   { stg3_1_merged587[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
// Condition for stg3_1_merged587(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg3_ld37_merged657[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
// Condition for stg3_ld37_merged657(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg2_to_gp_1032_ld97_merged679[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
// Condition for stg2_to_gp_1032_ld97_merged679(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1949 and 4 <= i2 <= 284 and 12 <= i3 <= 13; [0, i1, i2, 11] : 6 <= i1 <= 1949 and 3 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 6; i1 <= 1949; i1++) {
	    for (int i2 = 3; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg2_to_gp_1032_ld97_merged679(stg2_to_gp_1032 /* buf name */, stg2_FIFO_buf96, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_1_merged587(stg2_FIFO_buf96 /* buf name */, stg3, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_ld37_merged657(stg3 /* buf name */, stg3_to_gp_1136, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg3_to_gp_1136_ld101_merged667(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg3_to_gp_1136, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_to_gp_1136
	auto stg3_to_gp_1136__lp_4_m_stg3_to_gp_1136_ld101__p__3_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value = stg3_to_gp_1136.read();
	auto compute_result = stg3_to_gp_1136_ld101_cu666(stg3_to_gp_1136__lp_4_m_stg3_to_gp_1136_ld101__p__3_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value);
	// Produce: stg3_FIFO_buf100
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged667_write_bundle_write(/* arg names */compute_result, stg3_FIFO_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_1_merged590(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, stg4_cache& stg4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_FIFO_buf100
	auto stg3_FIFO_buf100_1_m__lp_4_m_stg4_1__p__3_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value = stg3_FIFO_buf100_stg4_1_merged590_read_bundle_read(stg3_FIFO_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_1_cu588(stg3_FIFO_buf100_1_m__lp_4_m_stg4_1__p__3_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value);
	// Produce: stg4
	stg4_stg4_1_merged590_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_ld41_merged637(stg4_cache& stg4, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg4_to_gp_1240, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4__lp_4_m_stg4_ld41__p__3_rp__c______lp_stg4_ld42__p___m_10_rp__value = stg4_stg4_ld41_merged637_read_bundle_read(stg4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_ld41_cu636(stg4__lp_4_m_stg4_ld41__p__3_rp__c______lp_stg4_ld42__p___m_10_rp__value);
	// Produce: stg4_to_gp_1240
	stg4_to_gp_1240.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg3_to_gp_1136, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg4_to_gp_1240) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg3_FIFO_buf100_cache stg3_FIFO_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280; stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279; stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
//   { stg3_to_gp_1136_ld101_merged667[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 280 }
// Condition for stg3_to_gp_1136_ld101_merged667(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg4_ld41_merged637[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
// Condition for stg4_ld41_merged637(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg4_1_merged590[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
// Condition for stg4_1_merged590(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 10 <= i1 <= 1949 and 5 <= i2 <= 284 and 15 <= i3 <= 16; [0, i1, i2, 14] : 8 <= i1 <= 1949 and 4 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1949; i1++) {
	    for (int i2 = 4; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg3_to_gp_1136_ld101_merged667(stg3_to_gp_1136 /* buf name */, stg3_FIFO_buf100, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_1_merged590(stg3_FIFO_buf100 /* buf name */, stg4, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_ld41_merged637(stg4 /* buf name */, stg4_to_gp_1240, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg4_to_gp_1240_ld105_merged570(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg4_to_gp_1240, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_to_gp_1240
	auto stg4_to_gp_1240__lp_4_m_stg4_to_gp_1240_ld105__p__3_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value = stg4_to_gp_1240.read();
	auto compute_result = stg4_to_gp_1240_ld105_cu569(stg4_to_gp_1240__lp_4_m_stg4_to_gp_1240_ld105__p__3_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value);
	// Produce: stg4_FIFO_buf104
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged570_write_bundle_write(/* arg names */compute_result, stg4_FIFO_buf104, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_1_merged593(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, stg5_cache& stg5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_FIFO_buf104
	auto stg4_FIFO_buf104_1_m__lp_4_m_stg5_1__p__3_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value = stg4_FIFO_buf104_stg5_1_merged593_read_bundle_read(stg4_FIFO_buf104/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_1_cu591(stg4_FIFO_buf104_1_m__lp_4_m_stg5_1__p__3_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value);
	// Produce: stg5
	stg5_stg5_1_merged593_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_ld45_merged659(stg5_cache& stg5, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg5_to_gp_1344, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5__lp_4_m_stg5_ld45__p__3_rp__c______lp_stg5_ld46__p___m_9_rp__value = stg5_stg5_ld45_merged659_read_bundle_read(stg5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_ld45_cu658(stg5__lp_4_m_stg5_ld45__p__3_rp__c______lp_stg5_ld46__p___m_9_rp__value);
	// Produce: stg5_to_gp_1344
	stg5_to_gp_1344.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg4_to_gp_1240, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg5_to_gp_1344) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg4_FIFO_buf104_cache stg4_FIFO_buf104;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278; stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278; stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
//   { stg5_ld45_merged659[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
// Condition for stg5_ld45_merged659(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg5_1_merged593[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
// Condition for stg5_1_merged593(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg4_to_gp_1240_ld105_merged570[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 279 }
// Condition for stg4_to_gp_1240_ld105_merged570(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 12 <= i1 <= 1949 and 6 <= i2 <= 284 and 18 <= i3 <= 19; [0, i1, i2, 17] : 10 <= i1 <= 1949 and 5 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 10; i1 <= 1949; i1++) {
	    for (int i2 = 5; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg4_to_gp_1240_ld105_merged570(stg4_to_gp_1240 /* buf name */, stg4_FIFO_buf104, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_1_merged593(stg4_FIFO_buf104 /* buf name */, stg5, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_ld45_merged659(stg5 /* buf name */, stg5_to_gp_1344, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg5_to_gp_1344_ld109_merged681(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg5_to_gp_1344, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_to_gp_1344
	auto stg5_to_gp_1344__lp_4_m_stg5_to_gp_1344_ld109__p__3_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value = stg5_to_gp_1344.read();
	auto compute_result = stg5_to_gp_1344_ld109_cu680(stg5_to_gp_1344__lp_4_m_stg5_to_gp_1344_ld109__p__3_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value);
	// Produce: stg5_FIFO_buf108
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged681_write_bundle_write(/* arg names */compute_result, stg5_FIFO_buf108, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_1_merged596(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, stg6_cache& stg6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_FIFO_buf108
	auto stg5_FIFO_buf108_1_m__lp_4_m_stg6_1__p__3_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value = stg5_FIFO_buf108_stg6_1_merged596_read_bundle_read(stg5_FIFO_buf108/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_1_cu594(stg5_FIFO_buf108_1_m__lp_4_m_stg6_1__p__3_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value);
	// Produce: stg6
	stg6_stg6_1_merged596_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_ld49_merged627(stg6_cache& stg6, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg6_to_gp_1448, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6__lp_4_m_stg6_ld49__p__3_rp__c______lp_stg6_ld50__p___m_8_rp__value = stg6_stg6_ld49_merged627_read_bundle_read(stg6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_ld49_cu626(stg6__lp_4_m_stg6_ld49__p__3_rp__c______lp_stg6_ld50__p___m_8_rp__value);
	// Produce: stg6_to_gp_1448
	stg6_to_gp_1448.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg5_to_gp_1344, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg6_to_gp_1448) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg5_FIFO_buf108_cache stg5_FIFO_buf108;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277; stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278; stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
//   { stg6_ld49_merged627[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
// Condition for stg6_ld49_merged627(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg5_to_gp_1344_ld109_merged681[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 278 }
// Condition for stg5_to_gp_1344_ld109_merged681(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg6_1_merged596[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
// Condition for stg6_1_merged596(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 1949 and 7 <= i2 <= 284 and 21 <= i3 <= 22; [0, i1, i2, 20] : 12 <= i1 <= 1949 and 6 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 12; i1 <= 1949; i1++) {
	    for (int i2 = 6; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg5_to_gp_1344_ld109_merged681(stg5_to_gp_1344 /* buf name */, stg5_FIFO_buf108, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_1_merged596(stg5_FIFO_buf108 /* buf name */, stg6, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_ld49_merged627(stg6 /* buf name */, stg6_to_gp_1448, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg6_to_gp_1448_ld113_merged669(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg6_to_gp_1448, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_to_gp_1448
	auto stg6_to_gp_1448__lp_4_m_stg6_to_gp_1448_ld113__p__3_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value = stg6_to_gp_1448.read();
	auto compute_result = stg6_to_gp_1448_ld113_cu668(stg6_to_gp_1448__lp_4_m_stg6_to_gp_1448_ld113__p__3_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value);
	// Produce: stg6_FIFO_buf112
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged669_write_bundle_write(/* arg names */compute_result, stg6_FIFO_buf112, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_1_merged599(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, stg7_cache& stg7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_FIFO_buf112
	auto stg6_FIFO_buf112_1_m__lp_4_m_stg7_1__p__3_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value = stg6_FIFO_buf112_stg7_1_merged599_read_bundle_read(stg6_FIFO_buf112/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_1_cu597(stg6_FIFO_buf112_1_m__lp_4_m_stg7_1__p__3_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value);
	// Produce: stg7
	stg7_stg7_1_merged599_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_ld53_merged661(stg7_cache& stg7, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg7_to_gp_1552, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7__lp_4_m_stg7_ld53__p__3_rp__c______lp_stg7_ld54__p___m_7_rp__value = stg7_stg7_ld53_merged661_read_bundle_read(stg7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_ld53_cu660(stg7__lp_4_m_stg7_ld53__p__3_rp__c______lp_stg7_ld54__p___m_7_rp__value);
	// Produce: stg7_to_gp_1552
	stg7_to_gp_1552.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg6_to_gp_1448, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg7_to_gp_1552) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg6_FIFO_buf112_cache stg6_FIFO_buf112;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276; stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276; stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
//   { stg7_1_merged599[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
// Condition for stg7_1_merged599(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg7_ld53_merged661[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
// Condition for stg7_ld53_merged661(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg6_to_gp_1448_ld113_merged669[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 277 }
// Condition for stg6_to_gp_1448_ld113_merged669(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 16 <= i1 <= 1949 and 8 <= i2 <= 284 and 24 <= i3 <= 25; [0, i1, i2, 23] : 14 <= i1 <= 1949 and 7 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 14; i1 <= 1949; i1++) {
	    for (int i2 = 7; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg6_to_gp_1448_ld113_merged669(stg6_to_gp_1448 /* buf name */, stg6_FIFO_buf112, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_1_merged599(stg6_FIFO_buf112 /* buf name */, stg7, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_ld53_merged661(stg7 /* buf name */, stg7_to_gp_1552, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg7_to_gp_1552_ld117_merged683(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg7_to_gp_1552, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_to_gp_1552
	auto stg7_to_gp_1552__lp_4_m_stg7_to_gp_1552_ld117__p__3_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value = stg7_to_gp_1552.read();
	auto compute_result = stg7_to_gp_1552_ld117_cu682(stg7_to_gp_1552__lp_4_m_stg7_to_gp_1552_ld117__p__3_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value);
	// Produce: stg7_FIFO_buf116
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged683_write_bundle_write(/* arg names */compute_result, stg7_FIFO_buf116, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_1_merged602(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, stg8_cache& stg8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_FIFO_buf116
	auto stg7_FIFO_buf116_1_m__lp_4_m_stg8_1__p__3_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value = stg7_FIFO_buf116_stg8_1_merged602_read_bundle_read(stg7_FIFO_buf116/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_1_cu600(stg7_FIFO_buf116_1_m__lp_4_m_stg8_1__p__3_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value);
	// Produce: stg8
	stg8_stg8_1_merged602_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_ld57_merged639(stg8_cache& stg8, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg8_to_gp_1656, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8__lp_4_m_stg8_ld57__p__3_rp__c______lp_stg8_ld58__p___m_6_rp__value = stg8_stg8_ld57_merged639_read_bundle_read(stg8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_ld57_cu638(stg8__lp_4_m_stg8_ld57__p__3_rp__c______lp_stg8_ld58__p___m_6_rp__value);
	// Produce: stg8_to_gp_1656
	stg8_to_gp_1656.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg7_to_gp_1552, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg8_to_gp_1656) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg7_FIFO_buf116_cache stg7_FIFO_buf116;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276; stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275; stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
//   { stg7_to_gp_1552_ld117_merged683[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 276 }
// Condition for stg7_to_gp_1552_ld117_merged683(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg8_1_merged602[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
// Condition for stg8_1_merged602(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg8_ld57_merged639[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
// Condition for stg8_ld57_merged639(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 18 <= i1 <= 1949 and 9 <= i2 <= 284 and 27 <= i3 <= 28; [0, i1, i2, 26] : 16 <= i1 <= 1949 and 8 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 16; i1 <= 1949; i1++) {
	    for (int i2 = 8; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg7_to_gp_1552_ld117_merged683(stg7_to_gp_1552 /* buf name */, stg7_FIFO_buf116, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_1_merged602(stg7_FIFO_buf116 /* buf name */, stg8, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_ld57_merged639(stg8 /* buf name */, stg8_to_gp_1656, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg8_to_gp_1656_ld121_merged647(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg8_to_gp_1656, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_to_gp_1656
	auto stg8_to_gp_1656__lp_4_m_stg8_to_gp_1656_ld121__p__3_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value = stg8_to_gp_1656.read();
	auto compute_result = stg8_to_gp_1656_ld121_cu646(stg8_to_gp_1656__lp_4_m_stg8_to_gp_1656_ld121__p__3_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value);
	// Produce: stg8_FIFO_buf120
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged647_write_bundle_write(/* arg names */compute_result, stg8_FIFO_buf120, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_1_merged605(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, stg9_cache& stg9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_FIFO_buf120
	auto stg8_FIFO_buf120_1_m__lp_4_m_stg9_1__p__3_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value = stg8_FIFO_buf120_stg9_1_merged605_read_bundle_read(stg8_FIFO_buf120/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_1_cu603(stg8_FIFO_buf120_1_m__lp_4_m_stg9_1__p__3_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value);
	// Produce: stg9
	stg9_stg9_1_merged605_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_ld61_merged671(stg9_cache& stg9, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg9_to_gp_360, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9__lp_4_m_stg9_ld61__p__3_rp__c______lp_stg9_ld62__p___m_5_rp__value = stg9_stg9_ld61_merged671_read_bundle_read(stg9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_ld61_cu670(stg9__lp_4_m_stg9_ld61__p__3_rp__c______lp_stg9_ld62__p___m_5_rp__value);
	// Produce: stg9_to_gp_360
	stg9_to_gp_360.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg8_to_gp_1656, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg9_to_gp_360) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg8_FIFO_buf120_cache stg8_FIFO_buf120;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274; stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275; stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
//   { stg9_1_merged605[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
// Condition for stg9_1_merged605(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg8_to_gp_1656_ld121_merged647[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 275 }
// Condition for stg8_to_gp_1656_ld121_merged647(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg9_ld61_merged671[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
// Condition for stg9_ld61_merged671(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 20 <= i1 <= 1949 and 10 <= i2 <= 284 and 30 <= i3 <= 31; [0, i1, i2, 29] : 18 <= i1 <= 1949 and 9 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 18; i1 <= 1949; i1++) {
	    for (int i2 = 9; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg8_to_gp_1656_ld121_merged647(stg8_to_gp_1656 /* buf name */, stg8_FIFO_buf120, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_1_merged605(stg8_FIFO_buf120 /* buf name */, stg9, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_ld61_merged671(stg9 /* buf name */, stg9_to_gp_360, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void in_to_gp_20_ld65_merged641(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */in_to_gp_20, in_FIFO_buf64_cache& in_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_20
	auto in_to_gp_20__lp_4_m_in_to_gp_20_ld65__p__3_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value = in_to_gp_20.read();
	auto compute_result = in_to_gp_20_ld65_cu640(in_to_gp_20__lp_4_m_in_to_gp_20_ld65__p__3_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value);
	// Produce: in_FIFO_buf64
	in_FIFO_buf64_in_to_gp_20_ld65_merged641_write_bundle_write(/* arg names */compute_result, in_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_1_merged578(in_FIFO_buf64_cache& in_FIFO_buf64, stg0_cache& stg0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf64
	auto in_FIFO_buf64_1_m__lp_4_m_stg0_1__p__3_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value = in_FIFO_buf64_stg0_1_merged578_read_bundle_read(in_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_1_cu576(in_FIFO_buf64_1_m__lp_4_m_stg0_1__p__3_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value);
	// Produce: stg0
	stg0_stg0_1_merged578_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_ld5_merged649(stg0_cache& stg0, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg0_to_gp_84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0__lp_4_m_stg0_ld5__p__3_rp__c______lp_stg0_ld6__p___m_14_rp__value = stg0_stg0_ld5_merged649_read_bundle_read(stg0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_ld5_cu648(stg0__lp_4_m_stg0_ld5__p__3_rp__c______lp_stg0_ld6__p___m_14_rp__value);
	// Produce: stg0_to_gp_84
	stg0_to_gp_84.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_to_gp_20, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg0_to_gp_84) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf64_cache in_FIFO_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284; stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283; stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
//   { in_to_gp_20_ld65_merged641[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 284 }
// Condition for in_to_gp_20_ld65_merged641(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg0_ld5_merged649[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
// Condition for stg0_ld5_merged649(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg0_1_merged578[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
// Condition for stg0_1_merged578(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1949 and 0 < i2 <= 284 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1949 and 0 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_to_gp_20_ld65_merged641(in_to_gp_20 /* buf name */, in_FIFO_buf64, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_1_merged578(in_FIFO_buf64 /* buf name */, stg0, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_ld5_merged649(stg0 /* buf name */, stg0_to_gp_84, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg9_to_gp_360_ld125_merged645(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg9_to_gp_360, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_to_gp_360
	auto stg9_to_gp_360__lp_4_m_stg9_to_gp_360_ld125__p__3_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value = stg9_to_gp_360.read();
	auto compute_result = stg9_to_gp_360_ld125_cu644(stg9_to_gp_360__lp_4_m_stg9_to_gp_360_ld125__p__3_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value);
	// Produce: stg9_FIFO_buf124
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged645_write_bundle_write(/* arg names */compute_result, stg9_FIFO_buf124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_1_merged608(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, stg10_cache& stg10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_FIFO_buf124
	auto stg9_FIFO_buf124_1_m__lp_4_m_stg10_1__p__3_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value = stg9_FIFO_buf124_stg10_1_merged608_read_bundle_read(stg9_FIFO_buf124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_1_cu606(stg9_FIFO_buf124_1_m__lp_4_m_stg10_1__p__3_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value);
	// Produce: stg10
	stg10_stg10_1_merged608_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_ld13_merged629(stg10_cache& stg10, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg10_to_gp_412, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10__lp_4_m_stg10_ld13__p__3_rp__c______lp_stg10_ld14__p___m_4_rp__value = stg10_stg10_ld13_merged629_read_bundle_read(stg10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_ld13_cu628(stg10__lp_4_m_stg10_ld13__p__3_rp__c______lp_stg10_ld14__p___m_4_rp__value);
	// Produce: stg10_to_gp_412
	stg10_to_gp_412.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg9_to_gp_360, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg10_to_gp_412) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_cache stg10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_FIFO_buf124_cache stg9_FIFO_buf124;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273; stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274; stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
//   { stg10_ld13_merged629[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
// Condition for stg10_ld13_merged629(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg9_to_gp_360_ld125_merged645[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 274 }
// Condition for stg9_to_gp_360_ld125_merged645(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg10_1_merged608[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
// Condition for stg10_1_merged608(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 22 <= i1 <= 1949 and 11 <= i2 <= 284 and 33 <= i3 <= 34; [0, i1, i2, 32] : 20 <= i1 <= 1949 and 10 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 20; i1 <= 1949; i1++) {
	    for (int i2 = 10; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg9_to_gp_360_ld125_merged645(stg9_to_gp_360 /* buf name */, stg9_FIFO_buf124, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_1_merged608(stg9_FIFO_buf124 /* buf name */, stg10, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_ld13_merged629(stg10 /* buf name */, stg10_to_gp_412, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg10_to_gp_412_ld77_merged663(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg10_to_gp_412, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_to_gp_412
	auto stg10_to_gp_412__lp_4_m_stg10_to_gp_412_ld77__p__3_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value = stg10_to_gp_412.read();
	auto compute_result = stg10_to_gp_412_ld77_cu662(stg10_to_gp_412__lp_4_m_stg10_to_gp_412_ld77__p__3_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value);
	// Produce: stg10_FIFO_buf76
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged663_write_bundle_write(/* arg names */compute_result, stg10_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_1_merged611(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, stg11_cache& stg11, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_FIFO_buf76
	auto stg10_FIFO_buf76_1_m__lp_4_m_stg11_1__p__3_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value = stg10_FIFO_buf76_stg11_1_merged611_read_bundle_read(stg10_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_1_cu609(stg10_FIFO_buf76_1_m__lp_4_m_stg11_1__p__3_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value);
	// Produce: stg11
	stg11_stg11_1_merged611_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_ld17_merged653(stg11_cache& stg11, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg11_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11__lp_4_m_stg11_ld17__p__3_rp__c______lp_stg11_ld18__p___m_3_rp__value = stg11_stg11_ld17_merged653_read_bundle_read(stg11/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_ld17_cu652(stg11__lp_4_m_stg11_ld17__p__3_rp__c______lp_stg11_ld18__p___m_3_rp__value);
	// Produce: stg11_to_gp_516
	stg11_to_gp_516.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg10_to_gp_412, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg11_to_gp_516) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_FIFO_buf76_cache stg10_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg11_cache stg11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272; stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272; stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
//   { stg11_1_merged611[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
// Condition for stg11_1_merged611(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg11_ld17_merged653[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
// Condition for stg11_ld17_merged653(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg10_to_gp_412_ld77_merged663[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 273 }
// Condition for stg10_to_gp_412_ld77_merged663(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 24 <= i1 <= 1949 and 12 <= i2 <= 284 and 36 <= i3 <= 37; [0, i1, i2, 35] : 22 <= i1 <= 1949 and 11 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 22; i1 <= 1949; i1++) {
	    for (int i2 = 11; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg10_to_gp_412_ld77_merged663(stg10_to_gp_412 /* buf name */, stg10_FIFO_buf76, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_1_merged611(stg10_FIFO_buf76 /* buf name */, stg11, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_ld17_merged653(stg11 /* buf name */, stg11_to_gp_516, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg11_to_gp_516_ld81_merged675(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg11_to_gp_516, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_to_gp_516
	auto stg11_to_gp_516__lp_4_m_stg11_to_gp_516_ld81__p__3_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value = stg11_to_gp_516.read();
	auto compute_result = stg11_to_gp_516_ld81_cu674(stg11_to_gp_516__lp_4_m_stg11_to_gp_516_ld81__p__3_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value);
	// Produce: stg11_FIFO_buf80
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged675_write_bundle_write(/* arg names */compute_result, stg11_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_1_merged614(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, stg12_cache& stg12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_FIFO_buf80
	auto stg11_FIFO_buf80_1_m__lp_4_m_stg12_1__p__3_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value = stg11_FIFO_buf80_stg12_1_merged614_read_bundle_read(stg11_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_1_cu612(stg11_FIFO_buf80_1_m__lp_4_m_stg12_1__p__3_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value);
	// Produce: stg12
	stg12_stg12_1_merged614_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_ld21_merged631(stg12_cache& stg12, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg12_to_gp_620, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12__lp_4_m_stg12_ld21__p__3_rp__c______lp_stg12_ld22__p___m_2_rp__value = stg12_stg12_ld21_merged631_read_bundle_read(stg12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_ld21_cu630(stg12__lp_4_m_stg12_ld21__p__3_rp__c______lp_stg12_ld22__p___m_2_rp__value);
	// Produce: stg12_to_gp_620
	stg12_to_gp_620.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg11_to_gp_516, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg12_to_gp_620) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg11_FIFO_buf80_cache stg11_FIFO_buf80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg12_cache stg12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271; stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271; stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
//   { stg12_1_merged614[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
// Condition for stg12_1_merged614(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg12_ld21_merged631[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
// Condition for stg12_ld21_merged631(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg11_to_gp_516_ld81_merged675[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 272 }
// Condition for stg11_to_gp_516_ld81_merged675(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 26 <= i1 <= 1949 and 13 <= i2 <= 284 and 39 <= i3 <= 40; [0, i1, i2, 38] : 24 <= i1 <= 1949 and 12 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 24; i1 <= 1949; i1++) {
	    for (int i2 = 12; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg11_to_gp_516_ld81_merged675(stg11_to_gp_516 /* buf name */, stg11_FIFO_buf80, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_1_merged614(stg11_FIFO_buf80 /* buf name */, stg12, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_ld21_merged631(stg12 /* buf name */, stg12_to_gp_620, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg12_to_gp_620_ld85_merged665(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg12_to_gp_620, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_to_gp_620
	auto stg12_to_gp_620__lp_4_m_stg12_to_gp_620_ld85__p__3_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value = stg12_to_gp_620.read();
	auto compute_result = stg12_to_gp_620_ld85_cu664(stg12_to_gp_620__lp_4_m_stg12_to_gp_620_ld85__p__3_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value);
	// Produce: stg12_FIFO_buf84
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged665_write_bundle_write(/* arg names */compute_result, stg12_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_1_merged617(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, stg13_cache& stg13, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_FIFO_buf84
	auto stg12_FIFO_buf84_1_m__lp_4_m_stg13_1__p__3_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value = stg12_FIFO_buf84_stg13_1_merged617_read_bundle_read(stg12_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_1_cu615(stg12_FIFO_buf84_1_m__lp_4_m_stg13_1__p__3_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value);
	// Produce: stg13
	stg13_stg13_1_merged617_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_ld25_merged655(stg13_cache& stg13, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg13_to_gp_724, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13__lp_4_m_stg13_ld25__p__3_rp__c______lp_stg13_ld26__p___m_1_rp__value = stg13_stg13_ld25_merged655_read_bundle_read(stg13/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_ld25_cu654(stg13__lp_4_m_stg13_ld25__p__3_rp__c______lp_stg13_ld26__p___m_1_rp__value);
	// Produce: stg13_to_gp_724
	stg13_to_gp_724.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg12_to_gp_620, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg13_to_gp_724) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg12_FIFO_buf84_cache stg12_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg13_cache stg13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270; stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270; stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
//   { stg13_ld25_merged655[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
// Condition for stg13_ld25_merged655(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg13_1_merged617[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
// Condition for stg13_1_merged617(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg12_to_gp_620_ld85_merged665[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 271 }
// Condition for stg12_to_gp_620_ld85_merged665(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 28 <= i1 <= 1949 and 14 <= i2 <= 284 and 42 <= i3 <= 43; [0, i1, i2, 41] : 26 <= i1 <= 1949 and 13 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 26; i1 <= 1949; i1++) {
	    for (int i2 = 13; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg12_to_gp_620_ld85_merged665(stg12_to_gp_620 /* buf name */, stg12_FIFO_buf84, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_1_merged617(stg12_FIFO_buf84 /* buf name */, stg13, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_ld25_merged655(stg13 /* buf name */, stg13_to_gp_724, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg13_to_gp_724_ld89_merged643(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg13_to_gp_724, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_to_gp_724
	auto stg13_to_gp_724__lp_4_m_stg13_to_gp_724_ld89__p__3_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value = stg13_to_gp_724.read();
	auto compute_result = stg13_to_gp_724_ld89_cu642(stg13_to_gp_724__lp_4_m_stg13_to_gp_724_ld89__p__3_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value);
	// Produce: stg13_FIFO_buf88
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged643_write_bundle_write(/* arg names */compute_result, stg13_FIFO_buf88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_1_merged620(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, stg14_cache& stg14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_FIFO_buf88
	auto stg13_FIFO_buf88_1_m__lp_4_m_stg14_1__p__3_rp___p__0_c____1_m_stg14_0__p___m_1_value = stg13_FIFO_buf88_stg14_1_merged620_read_bundle_read(stg13_FIFO_buf88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_1_cu618(stg13_FIFO_buf88_1_m__lp_4_m_stg14_1__p__3_rp___p__0_c____1_m_stg14_0__p___m_1_value);
	// Produce: stg14
	stg14_stg14_1_merged620_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_ld29_merged633(stg14_cache& stg14, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg14_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14__lp_4_m_stg14_ld29__p__3_rp__c____stg14_ld30_value = stg14_stg14_ld29_merged633_read_bundle_read(stg14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_ld29_cu632(stg14__lp_4_m_stg14_ld29__p__3_rp__c____stg14_ld30_value);
	// Produce: stg14_to_gp_128
	stg14_to_gp_128.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg13_to_gp_724, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg14_to_gp_128) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg13_FIFO_buf88_cache stg13_FIFO_buf88;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg14_cache stg14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270; stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269; stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
//   { stg13_to_gp_724_ld89_merged643[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 270 }
// Condition for stg13_to_gp_724_ld89_merged643(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg14_1_merged620[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
// Condition for stg14_1_merged620(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg14_ld29_merged633[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 269 }
// Condition for stg14_ld29_merged633(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 284 and 45 <= i3 <= 46; [0, i1, i2, 44] : 28 <= i1 <= 1949 and 14 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 28; i1 <= 1949; i1++) {
	    for (int i2 = 14; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg13_to_gp_724_ld89_merged643(stg13_to_gp_724 /* buf name */, stg13_FIFO_buf88, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_1_merged620(stg13_FIFO_buf88 /* buf name */, stg14, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_ld29_merged633(stg14 /* buf name */, stg14_to_gp_128, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg0_to_gp_84_ld69_merged673(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg0_to_gp_84, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_to_gp_84
	auto stg0_to_gp_84__lp_4_m_stg0_to_gp_84_ld69__p__3_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value = stg0_to_gp_84.read();
	auto compute_result = stg0_to_gp_84_ld69_cu672(stg0_to_gp_84__lp_4_m_stg0_to_gp_84_ld69__p__3_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value);
	// Produce: stg0_FIFO_buf68
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged673_write_bundle_write(/* arg names */compute_result, stg0_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_1_merged581(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, stg1_cache& stg1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_FIFO_buf68
	auto stg0_FIFO_buf68_1_m__lp_4_m_stg1_1__p__3_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value = stg0_FIFO_buf68_stg1_1_merged581_read_bundle_read(stg0_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_1_cu579(stg0_FIFO_buf68_1_m__lp_4_m_stg1_1__p__3_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value);
	// Produce: stg1
	stg1_stg1_1_merged581_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_ld9_merged651(stg1_cache& stg1, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg1_to_gp_98, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1__lp_4_m_stg1_ld9__p__3_rp__c______lp_stg1_ld10__p___m_13_rp__value = stg1_stg1_ld9_merged651_read_bundle_read(stg1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_ld9_cu650(stg1__lp_4_m_stg1_ld9__p__3_rp__c______lp_stg1_ld10__p___m_13_rp__value);
	// Produce: stg1_to_gp_98
	stg1_to_gp_98.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg0_to_gp_84, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg1_to_gp_98) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg0_FIFO_buf68_cache stg0_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282; stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282; stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
//   { stg1_ld9_merged651[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
// Condition for stg1_ld9_merged651(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg1_1_merged581[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
// Condition for stg1_1_merged581(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg0_to_gp_84_ld69_merged673[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 283 }
// Condition for stg0_to_gp_84_ld69_merged673(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1949 and 2 <= i2 <= 284 and 6 <= i3 <= 7; [0, i1, i2, 5] : 2 <= i1 <= 1949 and 0 < i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 2; i1 <= 1949; i1++) {
	    for (int i2 = 1; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg0_to_gp_84_ld69_merged673(stg0_to_gp_84 /* buf name */, stg0_FIFO_buf68, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_1_merged581(stg0_FIFO_buf68 /* buf name */, stg1, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_ld9_merged651(stg1 /* buf name */, stg1_to_gp_98, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg2_ld33_merged635(stg2_cache& stg2, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg2_to_gp_1032, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2__lp_4_m_stg2_ld33__p__3_rp__c______lp_stg2_ld34__p___m_12_rp__value = stg2_stg2_ld33_merged635_read_bundle_read(stg2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_ld33_cu634(stg2__lp_4_m_stg2_ld33__p__3_rp__c______lp_stg2_ld34__p___m_12_rp__value);
	// Produce: stg2_to_gp_1032
	stg2_to_gp_1032.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_to_gp_98_ld73_merged625(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */stg1_to_gp_98, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_to_gp_98
	auto stg1_to_gp_98__lp_4_m_stg1_to_gp_98_ld73__p__3_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value = stg1_to_gp_98.read();
	auto compute_result = stg1_to_gp_98_ld73_cu624(stg1_to_gp_98__lp_4_m_stg1_to_gp_98_ld73__p__3_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value);
	// Produce: stg1_FIFO_buf72
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged625_write_bundle_write(/* arg names */compute_result, stg1_FIFO_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_1_merged584(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, stg2_cache& stg2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_FIFO_buf72
	auto stg1_FIFO_buf72_1_m__lp_4_m_stg2_1__p__3_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value = stg1_FIFO_buf72_stg2_1_merged584_read_bundle_read(stg1_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_1_cu582(stg1_FIFO_buf72_1_m__lp_4_m_stg2_1__p__3_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value);
	// Produce: stg2
	stg2_stg2_1_merged584_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg1_to_gp_98, HWStream<hw_uint<64> >& /* get_args num ports = 4 */stg2_to_gp_1032) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg1_FIFO_buf72_cache stg1_FIFO_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281; stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281; stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
//   { stg2_ld33_merged635[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
// Condition for stg2_ld33_merged635(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg2_1_merged584[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 281 }
// Condition for stg2_1_merged584(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))
//   { stg1_to_gp_98_ld73_merged625[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 282 }
// Condition for stg1_to_gp_98_ld73_merged625(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((284 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1949 and 3 <= i2 <= 284 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1949 and 2 <= i2 <= 284 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 4; i1 <= 1949; i1++) {
	    for (int i2 = 2; i2 <= 284; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg1_to_gp_98_ld73_merged625(stg1_to_gp_98 /* buf name */, stg1_FIFO_buf72, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_1_merged584(stg1_FIFO_buf72 /* buf name */, stg2, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_ld33_merged635(stg2 /* buf name */, stg2_to_gp_1032, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void jacdyn_1_opt(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 4 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */jacdyn_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacdyn_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<64> > in_to_gp_20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_20.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg14_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg14_to_gp_128.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg2_to_gp_1032;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg2_to_gp_1032.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg3_to_gp_1136;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg3_to_gp_1136.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg4_to_gp_1240;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg4_to_gp_1240.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg5_to_gp_1344;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg5_to_gp_1344.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg6_to_gp_1448;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg6_to_gp_1448.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg7_to_gp_1552;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg7_to_gp_1552.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg8_to_gp_1656;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg8_to_gp_1656.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg9_to_gp_360;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg9_to_gp_360.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg0_to_gp_84;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg0_to_gp_84.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg10_to_gp_412;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg10_to_gp_412.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg11_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg11_to_gp_516.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg12_to_gp_620;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg12_to_gp_620.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg13_to_gp_724;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg13_to_gp_724.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > stg1_to_gp_98;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg1_to_gp_98.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_in_0_in_ld2_(in_off_chip, in_to_gp_20);
  Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(in_to_gp_20, stg0_to_gp_84);
  Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(stg0_to_gp_84, stg1_to_gp_98);
  Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(stg1_to_gp_98, stg2_to_gp_1032);
  Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(stg2_to_gp_1032, stg3_to_gp_1136);
  Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(stg3_to_gp_1136, stg4_to_gp_1240);
  Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(stg4_to_gp_1240, stg5_to_gp_1344);
  Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(stg5_to_gp_1344, stg6_to_gp_1448);
  Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(stg6_to_gp_1448, stg7_to_gp_1552);
  Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(stg7_to_gp_1552, stg8_to_gp_1656);
  Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(stg8_to_gp_1656, stg9_to_gp_360);
  Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(stg9_to_gp_360, stg10_to_gp_412);
  Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(stg10_to_gp_412, stg11_to_gp_516);
  Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(stg11_to_gp_516, stg12_to_gp_620);
  Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(stg12_to_gp_620, stg13_to_gp_724);
  Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(stg13_to_gp_724, stg14_to_gp_128);
  Extracted_jacdyn_1_0_stg14_to_gp_128_ld94_(stg14_to_gp_128, jacdyn_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacdyn_1_opt_wrapper(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 4 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */jacdyn_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jacdyn_1_opt(in_off_chip, jacdyn_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_1_merged575[root = 0, in_0, in_1] -> in_off_chip[3 + 4in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 284; in_1_merged575[root = 0, in_0, in_1] -> in_off_chip[2 + 4in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 284; in_1_merged575[root = 0, in_0, in_1] -> in_off_chip[1 + 4in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 284; in_1_merged575[root = 0, in_0, in_1] -> in_off_chip[4in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 284 }
const int in_1_merged575_read_pipe0_num_transfers = 555750;
  // { jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> jacdyn_1[3 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269; jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> jacdyn_1[2 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269; jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> jacdyn_1[1 + 4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269; jacdyn_1_1_merged623[root = 0, jacdyn_1_0, jacdyn_1_1] -> jacdyn_1[4jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 1919 and 0 <= jacdyn_1_1 <= 269 }
const int jacdyn_1_1_merged623_write_pipe0_num_transfers = 518400;


extern "C" {

void jacdyn_1_opt_accel(hw_uint<64>* in_1_merged575_read_pipe0, hw_uint<64>* jacdyn_1_1_merged623_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_1_merged575_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacdyn_1_1_merged623_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_1_merged575_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jacdyn_1_1_merged623_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > in_1_merged575_read_pipe0_channel;
  static HWStream<hw_uint<64> > jacdyn_1_1_merged623_write_pipe0_channel;

  burst_read<64>(in_1_merged575_read_pipe0, in_1_merged575_read_pipe0_channel, in_1_merged575_read_pipe0_num_transfers*size);

  jacdyn_1_opt_wrapper(in_1_merged575_read_pipe0_channel, jacdyn_1_1_merged623_write_pipe0_channel, size);

  burst_write<64>(jacdyn_1_1_merged623_write_pipe0, jacdyn_1_1_merged623_write_pipe0_channel, jacdyn_1_1_merged623_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jacdyn_1_opt_rdai(HWStream<hw_uint<64> >& in_1_merged575_read_pipe0, HWStream<hw_uint<64> >&  jacdyn_1_1_merged623_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_1_merged575_read_pipe0
#pragma HLS INTERFACE axis register port = jacdyn_1_1_merged623_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jacdyn_1_opt(in_1_merged575_read_pipe0, jacdyn_1_1_merged623_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

