#include "t0_opt_compute_units.h"

#include "hw_classes.h"

<<<<<<< HEAD
<<<<<<< HEAD
struct t1_t1_comp_write0_cache {
<<<<<<< HEAD
	// Capacity: 518
=======
=======
struct t1_t1_comp_write0_to_t0_rd0_cache {
>>>>>>> origin/master
	// Capacity: 70
>>>>>>> origin/master
=======
struct t1_t1_comp_write0_merged_banks_5_cache {
	// Capacity: 70
	// # of read delays: 6
	// read delays: 0, 1, 34, 35, 36, 69
>>>>>>> origin/master
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	// Parition [2, 258) capacity = 256
	fifo<hw_uint<32> , 256> f3;
	// Parition [258, 259) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [260, 261) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [261, 517) capacity = 256
	fifo<hw_uint<32> , 256> f9;
	// Parition [517, 517] capacity = 1
=======
=======
>>>>>>> origin/master
	// Parition [2, 34) capacity = 32
	fifo<hw_uint<32> , 32> f3;
	// Parition [34, 35) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [35, 36) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [36, 37) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [37, 69) capacity = 32
	fifo<hw_uint<32> , 32> f9;
	// Parition [69, 69] capacity = 1
<<<<<<< HEAD
>>>>>>> origin/master
	fifo<hw_uint<32> , 1> f10;
=======
>>>>>>> origin/master
=======
	fifo<hw_uint<32> , 1> f10;
>>>>>>> origin/master


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

<<<<<<< HEAD
	inline hw_uint<32>  peek_35() {
		return f1.back();
	}

<<<<<<< HEAD
<<<<<<< HEAD
	inline hw_uint<32>  peek_257() {
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4.back();
	}

	inline hw_uint<32>  peek_259() {
		return f6.back();
	}

	inline hw_uint<32>  peek_260() {
		return f8.back();
	}

	inline hw_uint<32>  peek_516() {
		return f9.back();
	}

	inline hw_uint<32>  peek_517() {
=======
	inline hw_uint<32>  peek_33() {
		return f3.back();
=======
	inline hw_uint<32>  peek_36() {
=======
	inline hw_uint<32>  peek_1() {
>>>>>>> origin/master
		return f2.back();
>>>>>>> origin/master
	}

	inline hw_uint<32>  peek_33() {
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4.back();
	}

	inline hw_uint<32>  peek_35() {
		return f6.back();
	}

	inline hw_uint<32>  peek_36() {
		return f8.back();
	}

	inline hw_uint<32>  peek_68() {
		return f9.back();
	}

	inline hw_uint<32>  peek_69() {
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> origin/master
		return f10.back();
=======
		return f2.back();
>>>>>>> origin/master
=======
		return f10.back();
>>>>>>> origin/master
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		if (offset == 257) {
			return f3.back();
		}
		if (offset == 258) {
			return f4.back();
		}
		if (offset == 259) {
			return f6.back();
		}
		if (offset == 260) {
			return f8.back();
		}
		if (offset == 516) {
			return f9.back();
		}
		if (offset == 517) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1: " << offset << endl;
=======
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd1_cache: " << offset << endl;
>>>>>>> origin/master
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
<<<<<<< HEAD
		f10.push(f9.back());
		f9.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
=======
		f2.push(f1.back());
		f1.push(f0.back());
>>>>>>> origin/master
		f0.push(value);
	}

};

<<<<<<< HEAD
struct t1_t1_comp_write1_cache {
	// Capacity: 518
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 258) capacity = 256
	fifo<hw_uint<32> , 256> f3;
	// Parition [258, 259) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [260, 261) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [261, 517) capacity = 256
	fifo<hw_uint<32> , 256> f9;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f10;
=======
struct t1_t1_comp_write0_to_t0_rd2_cache {
	// Capacity: 70
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 35) capacity = 34
	fifo<hw_uint<32> , 34> f1;
	// Parition [35, 35] capacity = 1
	fifo<hw_uint<32> , 1> f2;
>>>>>>> origin/master


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

<<<<<<< HEAD
	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_257() {
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4.back();
	}

	inline hw_uint<32>  peek_259() {
		return f6.back();
	}

	inline hw_uint<32>  peek_260() {
		return f8.back();
	}

	inline hw_uint<32>  peek_516() {
		return f9.back();
	}

	inline hw_uint<32>  peek_517() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 257) {
			return f3.back();
		}
		if (offset == 258) {
			return f4.back();
		}
		if (offset == 259) {
			return f6.back();
		}
		if (offset == 260) {
			return f8.back();
		}
		if (offset == 516) {
			return f9.back();
		}
		if (offset == 517) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f10.push(f9.back());
		f9.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write2_cache {
	// Capacity: 518
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 258) capacity = 256
	fifo<hw_uint<32> , 256> f3;
	// Parition [258, 259) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [260, 261) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [261, 517) capacity = 256
	fifo<hw_uint<32> , 256> f9;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_257() {
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4.back();
	}

	inline hw_uint<32>  peek_259() {
		return f6.back();
	}

	inline hw_uint<32>  peek_260() {
		return f8.back();
	}

	inline hw_uint<32>  peek_516() {
		return f9.back();
	}

	inline hw_uint<32>  peek_517() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 257) {
			return f3.back();
		}
		if (offset == 258) {
			return f4.back();
		}
		if (offset == 259) {
			return f6.back();
		}
		if (offset == 260) {
			return f8.back();
		}
		if (offset == 516) {
			return f9.back();
		}
		if (offset == 517) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f10.push(f9.back());
		f9.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write3_cache {
	// Capacity: 518
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 258) capacity = 256
	fifo<hw_uint<32> , 256> f3;
	// Parition [258, 259) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [259, 260) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [260, 261) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [261, 517) capacity = 256
	fifo<hw_uint<32> , 256> f9;
	// Parition [517, 517] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_257() {
		return f3.back();
	}

	inline hw_uint<32>  peek_258() {
		return f4.back();
	}

	inline hw_uint<32>  peek_259() {
		return f6.back();
	}

	inline hw_uint<32>  peek_260() {
		return f8.back();
	}

	inline hw_uint<32>  peek_516() {
		return f9.back();
	}

	inline hw_uint<32>  peek_517() {
		return f10.back();
	}

=======
	inline hw_uint<32>  peek_34() {
		return f1.back();
	}

	inline hw_uint<32>  peek_35() {
		return f2.back();
	}

>>>>>>> origin/master


	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
<<<<<<< HEAD
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 257) {
			return f3.back();
		}
		if (offset == 258) {
			return f4.back();
		}
		if (offset == 259) {
			return f6.back();
		}
		if (offset == 260) {
			return f8.back();
		}
		if (offset == 516) {
			return f9.back();
		}
		if (offset == 517) {
=======
		if (offset == 33) {
			return f3.back();
=======
>>>>>>> origin/master
=======
		if (offset == 33) {
			return f3.back();
>>>>>>> origin/master
		}
		if (offset == 34) {
			return f4.back();
		}
		if (offset == 35) {
			return f6.back();
		}
<<<<<<< HEAD
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd2_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write0_to_t0_rd3_cache {
	// Capacity: 70
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
<<<<<<< HEAD
		if (offset == 69) {
>>>>>>> origin/master
			return f10.back();
=======
		if (offset == 1) {
			return f2.back();
>>>>>>> origin/master
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_to_t0_rd3_cache: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_t1_comp_write0_to_t0_rd4_cache {
	// Capacity: 70
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 34) capacity = 33
	fifo<hw_uint<32> , 33> f1;
	// Parition [34, 34] capacity = 1
	fifo<hw_uint<32> , 1> f2;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_33() {
		return f1.back();
	}

	inline hw_uint<32>  peek_34() {
		return f2.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
=======
		if (offset == 36) {
			return f8.back();
>>>>>>> origin/master
		}
		if (offset == 68) {
			return f9.back();
		}
		if (offset == 69) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in t1_t1_comp_write0_merged_banks_5: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f10.push(f9.back());
		f9.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct t1_cache {
<<<<<<< HEAD
<<<<<<< HEAD
  t1_t1_comp_write0_cache t1_t1_comp_write0;
<<<<<<< HEAD
  t1_t1_comp_write1_cache t1_t1_comp_write1;
  t1_t1_comp_write2_cache t1_t1_comp_write2;
  t1_t1_comp_write3_cache t1_t1_comp_write3;
=======
>>>>>>> origin/master
=======
  t1_t1_comp_write0_to_t0_rd0_cache bank_t1_t1_comp_write0_to_t0_rd0;
  t1_t1_comp_write0_to_t0_rd1_cache bank_t1_t1_comp_write0_to_t0_rd1;
  t1_t1_comp_write0_to_t0_rd2_cache bank_t1_t1_comp_write0_to_t0_rd2;
  t1_t1_comp_write0_to_t0_rd3_cache bank_t1_t1_comp_write0_to_t0_rd3;
  t1_t1_comp_write0_to_t0_rd4_cache bank_t1_t1_comp_write0_to_t0_rd4;
>>>>>>> origin/master
=======
  t1_t1_comp_write0_merged_banks_5_cache t1_t1_comp_write0_merged_banks_5;
>>>>>>> origin/master
};



<<<<<<< HEAD
inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1) {
	t1.t1_t1_comp_write0.push(t1_t1_comp_write0);
}

inline void t1_t1_comp_write1_write(hw_uint<32> & t1_t1_comp_write1, t1_cache& t1) {
	t1.t1_t1_comp_write1.push(t1_t1_comp_write1);
}

inline void t1_t1_comp_write2_write(hw_uint<32> & t1_t1_comp_write2, t1_cache& t1) {
	t1.t1_t1_comp_write2.push(t1_t1_comp_write2);
}

inline void t1_t1_comp_write3_write(hw_uint<32> & t1_t1_comp_write3, t1_cache& t1) {
	t1.t1_t1_comp_write3.push(t1_t1_comp_write3);
}

inline hw_uint<32>  t0_rd0_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 260 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd0 read pattern: { t0_comp[d0, d1] -> t1[-1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1019 and 0 <= i1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3.peek_260();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  t0_rd1_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 517 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd1 read pattern: { t0_comp[d0, d1] -> t1[4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 4 = 0 and 0 <= i0 <= 1020 and -1 <= i1 <= 1022 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_517();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd10_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 517 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd10 read pattern: { t0_comp[d0, d1] -> t1[3 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 4 = 0 and 3 <= i0 <= 1023 and -1 <= i1 <= 1022 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3.peek_517();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  t0_rd11_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 259 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd11 read pattern: { t0_comp[d0, d1] -> t1[3 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 4 = 0 and 3 <= i0 <= 1023 and 0 <= i1 <= 1023 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3.peek_259();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  t0_rd12_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd12 read pattern: { t0_comp[d0, d1] -> t1[3 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (1 + i0) mod 4 = 0 and 3 <= i0 <= 1023 and 0 < i1 <= 1024 }
	auto value_t1_t1_comp_write3 = t1.t1_t1_comp_write3.peek_1();
	return value_t1_t1_comp_write3;
}

inline hw_uint<32>  t0_rd13_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 258 : 0 <= d0 <= 254 and 0 <= d1 <= 1023; t0_comp[d0, d1] -> (3 + d0) : d0 = 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd13 read pattern: { t0_comp[d0, d1] -> t1[4 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 4 = 0 and 4 <= i0 <= 1024 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_258();
=======
inline void t1_t1_comp_write0_write(hw_uint<32> & t1_t1_comp_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_comp_write0_merged_banks_5.push(t1_t1_comp_write0);
}

inline hw_uint<32>  t0_rd0_select(t1_cache& t1, int d0, int d1) {
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = -1 + d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd0 read pattern: { t0_comp[d0, d1] -> t1[-1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_5.peek_36();
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd1_select(t1_cache& t1, int d0, int d1) {
<<<<<<< HEAD
  // qpd = { t0_comp[d0, d1] -> 69 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
<<<<<<< HEAD
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_69();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd1 read pattern: { t0_comp[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : -1 <= i0 <= 32 and -1 <= i1 <= 28 }
    // overlap with reads : { t1[i0, i1] : 0 <= i0 <= 31 and -1 <= i1 <= 26 }
	auto value_t1_t1_comp_write0 = t1.bank_t1_t1_comp_write0_to_t0_rd1.peek_69();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd1 read pattern: { t0_comp[d0, d1] -> t1[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_5.peek_69();
>>>>>>> origin/master
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd2_select(t1_cache& t1, int d0, int d1) {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  // qpd = { t0_comp[d0, d1] -> 259 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd2 read pattern: { t0_comp[d0, d1] -> t1[4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 4 = 0 and 0 <= i0 <= 1020 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_259();
=======
  // qpd = { t0_comp[d0, d1] -> 35 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
=======
  // qpd = { t0_comp[d0, d1] -> 35 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
<<<<<<< HEAD
>>>>>>> origin/master
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_35();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd2 read pattern: { t0_comp[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : -1 <= i0 <= 32 and -1 <= i1 <= 28 }
    // overlap with reads : { t1[i0, i1] : 0 <= i0 <= 31 and 0 <= i1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.bank_t1_t1_comp_write0_to_t0_rd2.peek_35();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd2 read pattern: { t0_comp[d0, d1] -> t1[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_5.peek_35();
>>>>>>> origin/master
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd3_select(t1_cache& t1, int d0, int d1) {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd3 read pattern: { t0_comp[d0, d1] -> t1[4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (i0) mod 4 = 0 and 0 <= i0 <= 1020 and 0 < i1 <= 1024 }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1();
=======
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
=======
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
<<<<<<< HEAD
>>>>>>> origin/master
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_1();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd3 read pattern: { t0_comp[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : -1 <= i0 <= 32 and -1 <= i1 <= 28 }
    // overlap with reads : { t1[i0, i1] : 0 <= i0 <= 31 and 0 < i1 <= 28 }
	auto value_t1_t1_comp_write0 = t1.bank_t1_t1_comp_write0_to_t0_rd3.peek_1();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd3 read pattern: { t0_comp[d0, d1] -> t1[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_5.peek_1();
>>>>>>> origin/master
	return value_t1_t1_comp_write0;
}

inline hw_uint<32>  t0_rd4_select(t1_cache& t1, int d0, int d1) {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  // qpd = { t0_comp[d0, d1] -> 517 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd4 read pattern: { t0_comp[d0, d1] -> t1[1 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (-1 + i0) mod 4 = 0 and 0 < i0 <= 1021 and -1 <= i1 <= 1022 }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_517();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  t0_rd5_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 259 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd5 read pattern: { t0_comp[d0, d1] -> t1[1 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (-1 + i0) mod 4 = 0 and 0 < i0 <= 1021 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_259();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  t0_rd6_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd6 read pattern: { t0_comp[d0, d1] -> t1[1 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (-1 + i0) mod 4 = 0 and 0 < i0 <= 1021 and 0 < i1 <= 1024 }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write1 = t1.t1_t1_comp_write1.peek_1();
	return value_t1_t1_comp_write1;
}

inline hw_uint<32>  t0_rd7_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 517 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd7 read pattern: { t0_comp[d0, d1] -> t1[2 + 4d0, -1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (2 + i0) mod 4 = 0 and 2 <= i0 <= 1022 and -1 <= i1 <= 1022 }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2.peek_517();
	return value_t1_t1_comp_write2;
}

inline hw_uint<32>  t0_rd8_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 259 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd8 read pattern: { t0_comp[d0, d1] -> t1[2 + 4d0, d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (2 + i0) mod 4 = 0 and 2 <= i0 <= 1022 and 0 <= i1 <= 1023 }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2.peek_259();
	return value_t1_t1_comp_write2;
}

inline hw_uint<32>  t0_rd9_select(t1_cache& t1, int d0, int d1) {
  // qpd = { t0_comp[d0, d1] -> 1 : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = d0, d1' = 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t0_rd9 read pattern: { t0_comp[d0, d1] -> t1[2 + 4d0, 1 + d1] : 0 <= d0 <= 255 and 0 <= d1 <= 1023 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : (i0) mod 4 = 0 and -4 <= i0 <= 1024 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write1 stores range: { t1[i0, i1] : (-1 + i0) mod 4 = 0 and -3 <= i0 <= 1025 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
  // t1_t1_comp_write2 stores range: { t1[i0, i1] : (2 + i0) mod 4 = 0 and -2 <= i0 <= 1026 and -1 <= i1 <= 1024 }
    // overlap with reads : { t1[i0, i1] : (2 + i0) mod 4 = 0 and 2 <= i0 <= 1022 and 0 < i1 <= 1024 }
  // t1_t1_comp_write3 stores range: { t1[i0, i1] : (1 + i0) mod 4 = 0 and -1 <= i0 <= 1027 and -1 <= i1 <= 1024 }
    // overlap with reads : {  }
	auto value_t1_t1_comp_write2 = t1.t1_t1_comp_write2.peek_1();
	return value_t1_t1_comp_write2;
=======
  // qpd = { t0_comp[d0, d1] -> 34 : 0 <= d0 <= 30 and 0 <= d1 <= 31; t0_comp[d0, d1] -> (3 + d0) : d0 = 31 and 0 <= d1 <= 31 }
=======
  // qpd = { t0_comp[d0, d1] -> 34 : 0 <= d0 <= 30 and 0 <= d1 <= 27; t0_comp[d0, d1] -> (3 + d0) : d0 = 31 and 0 <= d1 <= 27 }
<<<<<<< HEAD
>>>>>>> origin/master
	hw_uint<32>  value_t1_t1_comp_write0 = t1.t1_t1_comp_write0.peek_34();
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd4 read pattern: { t0_comp[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t1_t1_comp_write0 stores range: { t1[i0, i1] : -1 <= i0 <= 32 and -1 <= i1 <= 28 }
    // overlap with reads : { t1[i0, i1] : 0 < i0 <= 32 and 0 <= i1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.bank_t1_t1_comp_write0_to_t0_rd4.peek_34();
>>>>>>> origin/master
=======
	// lexmax events: { t0_comp[d0, d1] -> t1_comp[d0' = 1 + d0, d1' = d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
  // t0_rd4 read pattern: { t0_comp[d0, d1] -> t1[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 27 }
	auto value_t1_t1_comp_write0 = t1.t1_t1_comp_write0_merged_banks_5.peek_34();
>>>>>>> origin/master
	return value_t1_t1_comp_write0;
>>>>>>> origin/master
}

// # of bundles = 2
// t0_comp_read
//	t0_rd0
//	t0_rd1
//	t0_rd2
//	t0_rd3
//	t0_rd4
<<<<<<< HEAD
//	t0_rd5
//	t0_rd6
//	t0_rd7
//	t0_rd8
//	t0_rd9
//	t0_rd10
//	t0_rd11
//	t0_rd12
//	t0_rd13
inline hw_uint<448> t1_t0_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<448> result;
	hw_uint<32>  t0_rd0_res = t0_rd0_select(t1, d0, d1);
	set_at<0, 448>(result, t0_rd0_res);
	hw_uint<32>  t0_rd1_res = t0_rd1_select(t1, d0, d1);
	set_at<32, 448>(result, t0_rd1_res);
	hw_uint<32>  t0_rd2_res = t0_rd2_select(t1, d0, d1);
	set_at<64, 448>(result, t0_rd2_res);
	hw_uint<32>  t0_rd3_res = t0_rd3_select(t1, d0, d1);
	set_at<96, 448>(result, t0_rd3_res);
	hw_uint<32>  t0_rd4_res = t0_rd4_select(t1, d0, d1);
	set_at<128, 448>(result, t0_rd4_res);
	hw_uint<32>  t0_rd5_res = t0_rd5_select(t1, d0, d1);
	set_at<160, 448>(result, t0_rd5_res);
	hw_uint<32>  t0_rd6_res = t0_rd6_select(t1, d0, d1);
	set_at<192, 448>(result, t0_rd6_res);
	hw_uint<32>  t0_rd7_res = t0_rd7_select(t1, d0, d1);
	set_at<224, 448>(result, t0_rd7_res);
	hw_uint<32>  t0_rd8_res = t0_rd8_select(t1, d0, d1);
	set_at<256, 448>(result, t0_rd8_res);
	hw_uint<32>  t0_rd9_res = t0_rd9_select(t1, d0, d1);
	set_at<288, 448>(result, t0_rd9_res);
	hw_uint<32>  t0_rd10_res = t0_rd10_select(t1, d0, d1);
	set_at<320, 448>(result, t0_rd10_res);
	hw_uint<32>  t0_rd11_res = t0_rd11_select(t1, d0, d1);
	set_at<352, 448>(result, t0_rd11_res);
	hw_uint<32>  t0_rd12_res = t0_rd12_select(t1, d0, d1);
	set_at<384, 448>(result, t0_rd12_res);
	hw_uint<32>  t0_rd13_res = t0_rd13_select(t1, d0, d1);
	set_at<416, 448>(result, t0_rd13_res);
=======
inline hw_uint<160> t1_t0_comp_read_bundle_read(t1_cache& t1, int d0, int d1) {
	hw_uint<160> result;
	hw_uint<32>  t0_rd0_res = t0_rd0_select(t1, d0, d1);
	set_at<0, 160>(result, t0_rd0_res);
	hw_uint<32>  t0_rd1_res = t0_rd1_select(t1, d0, d1);
	set_at<32, 160>(result, t0_rd1_res);
	hw_uint<32>  t0_rd2_res = t0_rd2_select(t1, d0, d1);
	set_at<64, 160>(result, t0_rd2_res);
	hw_uint<32>  t0_rd3_res = t0_rd3_select(t1, d0, d1);
	set_at<96, 160>(result, t0_rd3_res);
	hw_uint<32>  t0_rd4_res = t0_rd4_select(t1, d0, d1);
	set_at<128, 160>(result, t0_rd4_res);
>>>>>>> origin/master
	return result;
}

// t1_comp_write
//	t1_t1_comp_write0
<<<<<<< HEAD
//	t1_t1_comp_write1
//	t1_t1_comp_write2
//	t1_t1_comp_write3
inline void t1_t1_comp_write_bundle_write(hw_uint<128>& t1_comp_write, t1_cache& t1) {
	hw_uint<32>  t1_t1_comp_write0_res = t1_comp_write.extract<0, 31>();
	t1_t1_comp_write0_write(t1_t1_comp_write0_res, t1);
	hw_uint<32>  t1_t1_comp_write1_res = t1_comp_write.extract<32, 63>();
	t1_t1_comp_write1_write(t1_t1_comp_write1_res, t1);
	hw_uint<32>  t1_t1_comp_write2_res = t1_comp_write.extract<64, 95>();
	t1_t1_comp_write2_write(t1_t1_comp_write2_res, t1);
	hw_uint<32>  t1_t1_comp_write3_res = t1_comp_write.extract<96, 127>();
	t1_t1_comp_write3_write(t1_t1_comp_write3_res, t1);
=======
inline void t1_t1_comp_write_bundle_write(hw_uint<32>& t1_comp_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_comp_write0_res = t1_comp_write.extract<0, 31>();
	t1_t1_comp_write0_write(t1_t1_comp_write0_res, t1, d0, d1);
>>>>>>> origin/master
}





// Operation logic
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
inline void t0_comp(t1_cache& t1, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */t0, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute_unrolled_4(t1_0_c__0_value);
=======
inline void t1_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1, d0, d1);
}

=======
>>>>>>> origin/master
inline void t0_comp(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t0, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
>>>>>>> origin/master
	// Produce: t0
	t0.write(compute_result);
}

<<<<<<< HEAD
<<<<<<< HEAD
inline void t1_comp(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id_unrolled_4(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1);
}

// Driver function
void t0_opt_kernel(HWStream<hw_uint<128> >& /* get_args num ports = 4 */t1_arg, HWStream<hw_uint<128> >& /* get_args num ports = 4 */t0) {
  t1_cache t1;
#pragma HLS dependence variable=t1 inter false

	for (int c0 = -1; c0 <= 1024; c0 += 1)
	  for (int c1 = -1; c1 <= 256; c1 += 1) {
#pragma HLS pipeline II=1
=======
=======
=======
>>>>>>> origin/master
inline void t1_comp(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_comp_write_bundle_write(compute_result, t1, d0, d1);
}

<<<<<<< HEAD
>>>>>>> origin/master
=======
inline void t0_comp(t1_cache& t1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */t0, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_t0_comp_read_bundle_read(t1/* source_delay */, d0, d1);
	auto compute_result = jacobi2d_compute(t1_0_c__0_value);
	// Produce: t0
	t0.write(compute_result);
}

>>>>>>> origin/master
// Driver function
void t0_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */t1_arg, HWStream<hw_uint<32> >& /* get_args num ports = 1 */t0) {
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=t1 inter false
#endif // __VIVADO_SYNTH__

<<<<<<< HEAD
	for (int c0 = -1; c0 <= 32; c0 += 1)
	  for (int c1 = -1; c1 <= 32; c1 += 1) {
>>>>>>> origin/master
	    t1_comp(t1_arg, t1, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	      t0_comp(t1, t0, c1 - 1, c0 - 1);
=======
/* CUSTOM CODE STRING
for (int c0 = -1; c0 <= 28; c0++) {
  for (int c1 = -1; c1 <= 32; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 28) && ((c0 - 0) % 1 == 0)) {
      t1_comp((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 28) && ((c0 - 1) % 1 == 0)) {
      t0_comp((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

*/
	for (int c0 = -1; c0 <= 28; c0++) {
	  for (int c1 = -1; c1 <= 32; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 32) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 28) && ((c0 - 0) % 1 == 0)) {
	      t1_comp(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 32) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 28) && ((c0 - 1) % 1 == 0)) {
	      t0_comp(t1, t0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
>>>>>>> origin/master
	  }
	}
	
}
