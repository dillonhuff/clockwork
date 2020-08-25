#include "hw_classes.h"

struct I_write_0_merged_banks_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 131
	// # of read delays: 9
  // 0, 1, 2, 64, 65, 66, 128, 129, 130
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 61> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 61> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_64() {
		return f6;
	}

	inline hw_uint<32>  peek_65() {
		return f8;
	}

	inline hw_uint<32>  peek_66() {
		return f10;
	}

	inline hw_uint<32>  peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_128() {
		return f12;
	}

	inline hw_uint<32>  peek_129() {
		return f14;
	}

	inline hw_uint<32>  peek_130() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct I_cache {
  // # of banks: 1
  I_write_0_merged_banks_9_cache I_write_0_merged_banks_9;
};



inline void I_write_0_write(hw_uint<32> & I_write_0, I_cache& I, int root, int pr, int pc, int dynamic_address) {
  I.I_write_0_merged_banks_9.push(I_write_0);
}

inline hw_uint<32>  I_read_0_10_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_10 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_64();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_11_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_11 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_0();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_3_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_3 read pattern: { read_0[root = 0, lr, lc] -> I[lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_130();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_4_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_4 read pattern: { read_0[root = 0, lr, lc] -> I[lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_66();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_5_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_5 read pattern: { read_0[root = 0, lr, lc] -> I[lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_2();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_6_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_6 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_129();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_7_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_7 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_65();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_8_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_8 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_1();
  return value_I_write_0;
  return 0;
}

inline hw_uint<32>  I_read_0_9_select(I_cache& I, int root, int lr, int lc, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_9 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_128();
  return value_I_write_0;
  return 0;
}

// # of bundles = 2
// read_0_read
//	I_read_0_3
//	I_read_0_4
//	I_read_0_5
//	I_read_0_6
//	I_read_0_7
//	I_read_0_8
//	I_read_0_9
//	I_read_0_10
//	I_read_0_11
inline hw_uint<288> I_read_0_read_bundle_read(I_cache& I, int root, int lr, int lc, int dynamic_address) {
  // # of ports in bundle: 9
    // I_read_0_3
    // I_read_0_4
    // I_read_0_5
    // I_read_0_6
    // I_read_0_7
    // I_read_0_8
    // I_read_0_9
    // I_read_0_10
    // I_read_0_11

	hw_uint<288> result;
	hw_uint<32>  I_read_0_3_res = I_read_0_3_select(I, root, lr, lc, dynamic_address);
	set_at<0, 288>(result, I_read_0_3_res);
	hw_uint<32>  I_read_0_4_res = I_read_0_4_select(I, root, lr, lc, dynamic_address);
	set_at<32, 288>(result, I_read_0_4_res);
	hw_uint<32>  I_read_0_5_res = I_read_0_5_select(I, root, lr, lc, dynamic_address);
	set_at<64, 288>(result, I_read_0_5_res);
	hw_uint<32>  I_read_0_6_res = I_read_0_6_select(I, root, lr, lc, dynamic_address);
	set_at<96, 288>(result, I_read_0_6_res);
	hw_uint<32>  I_read_0_7_res = I_read_0_7_select(I, root, lr, lc, dynamic_address);
	set_at<128, 288>(result, I_read_0_7_res);
	hw_uint<32>  I_read_0_8_res = I_read_0_8_select(I, root, lr, lc, dynamic_address);
	set_at<160, 288>(result, I_read_0_8_res);
	hw_uint<32>  I_read_0_9_res = I_read_0_9_select(I, root, lr, lc, dynamic_address);
	set_at<192, 288>(result, I_read_0_9_res);
	hw_uint<32>  I_read_0_10_res = I_read_0_10_select(I, root, lr, lc, dynamic_address);
	set_at<224, 288>(result, I_read_0_10_res);
	hw_uint<32>  I_read_0_11_res = I_read_0_11_select(I, root, lr, lc, dynamic_address);
	set_at<256, 288>(result, I_read_0_11_res);
	return result;
}

// write_write
//	I_write_0
inline void I_write_write_bundle_write(InputStream<hw_uint<32> >& write_write, I_cache& I, int root, int pr, int pc, int dynamic_address) {
	hw_uint<32> data_write_write = write_write.read();
	hw_uint<32>  I_write_0_res = data_write_write.extract<0, 31>();
	I_write_0_write(I_write_0_res, I, root, pr, pc, dynamic_address);
}

void I(OutputStream<hw_uint<288> >& read_0_read, InputStream<hw_uint<32> >& write_write) {
	I_write_0_cache I_write_0_delay;

	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	    write(0, c0, c1);
	    if (c0 >= 2 && c1 >= 2)
	      read_0(0, c0 - 2, c1 - 2);
	  }
	
}
