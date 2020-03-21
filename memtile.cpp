#include "accumulate_3.h"

#include "hw_classes.h"

struct agg_store_agg_from_in_0_cache {
	// Capacity: 6
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 5) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [5, 5] capacity = 1
	fifo<hw_uint<32> , 1> f10;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}

	inline hw_uint<32>  peek_5() {
		return f10.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
		if (offset == 5) {
			return f10.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in agg: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct agg_cache {
  agg_store_agg_from_in_0_cache agg_store_agg_from_in_0;
};



inline void agg_store_agg_from_in_0_write(hw_uint<32> & agg_store_agg_from_in_0, agg_cache& agg) {
	agg.agg_store_agg_from_in_0.push(agg_store_agg_from_in_0);
}

inline hw_uint<32>  agg_store_sram_from_agg_3_select(agg_cache& agg, int root, int qo, int qi) {
  // qpd = { store_sram_from_agg[root, qo, qi] -> (5 - 2 * qi) : root = 0 and 0 <= qo <= 7 and 0 <= qi <= 1 }
	hw_uint<32>  value_agg_store_agg_from_in_0 = agg.agg_store_agg_from_in_0.peek(/* is one piece but not a number */(5 - 2 * qi));
	return value_agg_store_agg_from_in_0;
}

inline hw_uint<32>  agg_store_sram_from_agg_5_select(agg_cache& agg, int root, int qo, int qi) {
  // qpd = { store_sram_from_agg[root, qo, qi] -> (4 - 2 * qi) : root = 0 and 0 <= qo <= 7 and 0 <= qi <= 1 }
	hw_uint<32>  value_agg_store_agg_from_in_0 = agg.agg_store_agg_from_in_0.peek(/* is one piece but not a number */(4 - 2 * qi));
	return value_agg_store_agg_from_in_0;
}

inline hw_uint<32>  agg_store_sram_from_agg_7_select(agg_cache& agg, int root, int qo, int qi) {
  // qpd = { store_sram_from_agg[root, qo, qi] -> 3 : root = 0 and qi = 0 and 0 <= qo <= 7; store_sram_from_agg[root, qo, qi] -> 1 : root = 0 and qi = 1 and 0 <= qo <= 7 }
	hw_uint<32>  value_agg_store_agg_from_in_0 = agg.agg_store_agg_from_in_0.peek(/* Needs general delay string */ (qi == 0 && root == 0 && qo >= 0 && 7 - qo >= 0) ? (3) : (-1 + qi == 0 && root == 0 && qo >= 0 && 7 - qo >= 0) ? (1) : 0);
	return value_agg_store_agg_from_in_0;
}

inline hw_uint<32>  agg_store_sram_from_agg_9_select(agg_cache& agg, int root, int qo, int qi) {
  // qpd = { store_sram_from_agg[root, qo, qi] -> 2 : root = 0 and qi = 0 and 0 <= qo <= 7 }
	hw_uint<32>  value_agg_store_agg_from_in_0 = agg.agg_store_agg_from_in_0.peek(/* Needs general delay string */ (qi == 0 && root == 0 && qo >= 0 && 7 - qo >= 0) ? (2) : 0);
	return value_agg_store_agg_from_in_0;
}

// # of bundles = 3
// agg_store_agg_from_in_0
//	agg_store_agg_from_in_0
inline void agg_agg_store_agg_from_in_0_bundle_write(hw_uint<32>& agg_store_agg_from_in_0, agg_cache& agg) {
	hw_uint<32>  agg_store_agg_from_in_0_res = agg_store_agg_from_in_0.extract<0, 31>();
	agg_store_agg_from_in_0_write(agg_store_agg_from_in_0_res, agg);
}

// store_agg_from_in_write
//	agg_store_agg_from_in_0
inline void agg_store_agg_from_in_write_bundle_write(hw_uint<32>& store_agg_from_in_write, agg_cache& agg) {
	hw_uint<32>  agg_store_agg_from_in_0_res = store_agg_from_in_write.extract<0, 31>();
	agg_store_agg_from_in_0_write(agg_store_agg_from_in_0_res, agg);
}

// store_sram_from_agg_read
//	agg_store_sram_from_agg_3
//	agg_store_sram_from_agg_5
//	agg_store_sram_from_agg_7
//	agg_store_sram_from_agg_9
inline hw_uint<128> agg_store_sram_from_agg_read_bundle_read(agg_cache& agg, int root, int qo, int qi) {
	hw_uint<128> result;
	hw_uint<32>  agg_store_sram_from_agg_3_res = agg_store_sram_from_agg_3_select(agg, root, qo, qi);
	set_at<0, 128>(result, agg_store_sram_from_agg_3_res);
	hw_uint<32>  agg_store_sram_from_agg_5_res = agg_store_sram_from_agg_5_select(agg, root, qo, qi);
	set_at<32, 128>(result, agg_store_sram_from_agg_5_res);
	hw_uint<32>  agg_store_sram_from_agg_7_res = agg_store_sram_from_agg_7_select(agg, root, qo, qi);
	set_at<64, 128>(result, agg_store_sram_from_agg_7_res);
	hw_uint<32>  agg_store_sram_from_agg_9_res = agg_store_sram_from_agg_9_select(agg, root, qo, qi);
	set_at<96, 128>(result, agg_store_sram_from_agg_9_res);
	return result;
}



#include "hw_classes.h"

struct sram_store_sram_from_agg_2_cache {
	// Capacity: 5
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 4] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in sram: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct sram_store_sram_from_agg_4_cache {
	// Capacity: 5
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 4] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in sram: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct sram_store_sram_from_agg_6_cache {
	// Capacity: 5
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 4] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in sram: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct sram_store_sram_from_agg_8_cache {
	// Capacity: 5
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 4) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [4, 4] capacity = 1
	fifo<hw_uint<32> , 1> f8;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_3() {
		return f6.back();
	}

	inline hw_uint<32>  peek_4() {
		return f8.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 3) {
			return f6.back();
		}
		if (offset == 4) {
			return f8.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in sram: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f8.push(f6.back());
		f6.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct sram_cache {
  sram_store_sram_from_agg_2_cache sram_store_sram_from_agg_2;
  sram_store_sram_from_agg_4_cache sram_store_sram_from_agg_4;
  sram_store_sram_from_agg_6_cache sram_store_sram_from_agg_6;
  sram_store_sram_from_agg_8_cache sram_store_sram_from_agg_8;
};



inline void sram_store_sram_from_agg_2_write(hw_uint<32> & sram_store_sram_from_agg_2, sram_cache& sram) {
	sram.sram_store_sram_from_agg_2.push(sram_store_sram_from_agg_2);
}

inline void sram_store_sram_from_agg_4_write(hw_uint<32> & sram_store_sram_from_agg_4, sram_cache& sram) {
	sram.sram_store_sram_from_agg_4.push(sram_store_sram_from_agg_4);
}

inline void sram_store_sram_from_agg_6_write(hw_uint<32> & sram_store_sram_from_agg_6, sram_cache& sram) {
	sram.sram_store_sram_from_agg_6.push(sram_store_sram_from_agg_6);
}

inline void sram_store_sram_from_agg_8_write(hw_uint<32> & sram_store_sram_from_agg_8, sram_cache& sram) {
	sram.sram_store_sram_from_agg_8.push(sram_store_sram_from_agg_8);
}

inline hw_uint<32>  sram_store_tb_from_sram_11_select(sram_cache& sram, int root, int k, int l, int m) {
  // qpd = { store_tb_from_sram[root, k, l, m] -> 4 : root = 0 and l = 1 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 3 : root = 0 and l = 0 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 2 : root = 0 and l = 1 and m = 1 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 1 : root = 0 and l = 0 and m = 1 and 0 <= k <= 5 }
	// lexmax events: { store_tb_from_sram[root = 0, k, l, m] -> store_sram_from_agg[root' = 0, qo = k + m, qi = l] : 0 <= k <= 5 and 0 <= l <= 1 and m >= 0 and -k <= m <= 7 - k and m <= 1; store_tb_from_sram[root = 0, k, l = 1, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 1] : 0 <= k <= 5; store_tb_from_sram[root = 0, k, l = 0, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 0] : 0 <= k <= 5 }
  // sram_store_tb_from_sram_11 read pattern: { store_tb_from_sram[root = 0, k, l, m] -> sram[k + m, 4l] : 0 <= k <= 5 and 0 <= l <= 1 and 0 <= m <= 2 }
  // sram_store_sram_from_agg_2 stores range: { sram[i0, i1] : (i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 <= i1 <= 4 }
    // overlap with reads : { sram[i0, i1] : (i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 <= i1 <= 4 }
  // sram_store_sram_from_agg_4 stores range: { sram[i0, i1] : (-1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 < i1 <= 5 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_6 stores range: { sram[i0, i1] : (2 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 2 <= i1 <= 6 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_8 stores range: { sram[i0, i1] : (1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 3 <= i1 <= 7 }
    // overlap with reads : { sram[i0, i1] : false }
	auto value_sram_store_sram_from_agg_2 = sram.sram_store_sram_from_agg_2.peek(/* Needs general delay string */ (m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (4) : (m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (3) : (-1 + m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (2) : (-1 + m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (1) : 0);
	return value_sram_store_sram_from_agg_2;
}

inline hw_uint<32>  sram_store_tb_from_sram_13_select(sram_cache& sram, int root, int k, int l, int m) {
  // qpd = { store_tb_from_sram[root, k, l, m] -> 4 : root = 0 and l = 1 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 3 : root = 0 and l = 0 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 2 : root = 0 and l = 1 and m = 1 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 1 : root = 0 and l = 0 and m = 1 and 0 <= k <= 5 }
	// lexmax events: { store_tb_from_sram[root = 0, k, l, m] -> store_sram_from_agg[root' = 0, qo = k + m, qi = l] : 0 <= k <= 5 and 0 <= l <= 1 and m >= 0 and -k <= m <= 7 - k and m <= 1; store_tb_from_sram[root = 0, k, l = 1, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 1] : 0 <= k <= 5; store_tb_from_sram[root = 0, k, l = 0, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 0] : 0 <= k <= 5 }
  // sram_store_tb_from_sram_13 read pattern: { store_tb_from_sram[root = 0, k, l, m] -> sram[k + m, 1 + 4l] : 0 <= k <= 5 and 0 <= l <= 1 and 0 <= m <= 2 }
  // sram_store_sram_from_agg_2 stores range: { sram[i0, i1] : (i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 <= i1 <= 4 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_4 stores range: { sram[i0, i1] : (-1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 < i1 <= 5 }
    // overlap with reads : { sram[i0, i1] : (-1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 < i1 <= 5 }
  // sram_store_sram_from_agg_6 stores range: { sram[i0, i1] : (2 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 2 <= i1 <= 6 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_8 stores range: { sram[i0, i1] : (1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 3 <= i1 <= 7 }
    // overlap with reads : { sram[i0, i1] : false }
	auto value_sram_store_sram_from_agg_4 = sram.sram_store_sram_from_agg_4.peek(/* Needs general delay string */ (m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (4) : (m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (3) : (-1 + m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (2) : (-1 + m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (1) : 0);
	return value_sram_store_sram_from_agg_4;
}

inline hw_uint<32>  sram_store_tb_from_sram_15_select(sram_cache& sram, int root, int k, int l, int m) {
  // qpd = { store_tb_from_sram[root, k, l, m] -> 4 : root = 0 and l = 1 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 3 : root = 0 and l = 0 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 2 : root = 0 and l = 1 and m = 1 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 1 : root = 0 and l = 0 and m = 1 and 0 <= k <= 5 }
	// lexmax events: { store_tb_from_sram[root = 0, k, l, m] -> store_sram_from_agg[root' = 0, qo = k + m, qi = l] : 0 <= k <= 5 and 0 <= l <= 1 and m >= 0 and -k <= m <= 7 - k and m <= 1; store_tb_from_sram[root = 0, k, l = 1, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 1] : 0 <= k <= 5; store_tb_from_sram[root = 0, k, l = 0, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 0] : 0 <= k <= 5 }
  // sram_store_tb_from_sram_15 read pattern: { store_tb_from_sram[root = 0, k, l, m] -> sram[k + m, 2 + 4l] : 0 <= k <= 5 and 0 <= l <= 1 and 0 <= m <= 2 }
  // sram_store_sram_from_agg_2 stores range: { sram[i0, i1] : (i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 <= i1 <= 4 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_4 stores range: { sram[i0, i1] : (-1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 < i1 <= 5 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_6 stores range: { sram[i0, i1] : (2 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 2 <= i1 <= 6 }
    // overlap with reads : { sram[i0, i1] : (2 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 2 <= i1 <= 6 }
  // sram_store_sram_from_agg_8 stores range: { sram[i0, i1] : (1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 3 <= i1 <= 7 }
    // overlap with reads : { sram[i0, i1] : false }
	auto value_sram_store_sram_from_agg_6 = sram.sram_store_sram_from_agg_6.peek(/* Needs general delay string */ (m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (4) : (m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (3) : (-1 + m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (2) : (-1 + m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (1) : 0);
	return value_sram_store_sram_from_agg_6;
}

inline hw_uint<32>  sram_store_tb_from_sram_17_select(sram_cache& sram, int root, int k, int l, int m) {
  // qpd = { store_tb_from_sram[root, k, l, m] -> 4 : root = 0 and l = 1 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 3 : root = 0 and l = 0 and m = 0 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 2 : root = 0 and l = 1 and m = 1 and 0 <= k <= 5; store_tb_from_sram[root, k, l, m] -> 1 : root = 0 and l = 0 and m = 1 and 0 <= k <= 5 }
	// lexmax events: { store_tb_from_sram[root = 0, k, l, m] -> store_sram_from_agg[root' = 0, qo = k + m, qi = l] : 0 <= k <= 5 and 0 <= l <= 1 and m >= 0 and -k <= m <= 7 - k and m <= 1; store_tb_from_sram[root = 0, k, l = 1, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 1] : 0 <= k <= 5; store_tb_from_sram[root = 0, k, l = 0, m = 2] -> store_sram_from_agg[root' = 0, qo = 2 + k, qi = 0] : 0 <= k <= 5 }
  // sram_store_tb_from_sram_17 read pattern: { store_tb_from_sram[root = 0, k, l, m] -> sram[k + m, 3 + 4l] : 0 <= k <= 5 and 0 <= l <= 1 and 0 <= m <= 2 }
  // sram_store_sram_from_agg_2 stores range: { sram[i0, i1] : (i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 <= i1 <= 4 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_4 stores range: { sram[i0, i1] : (-1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 0 < i1 <= 5 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_6 stores range: { sram[i0, i1] : (2 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 2 <= i1 <= 6 }
    // overlap with reads : { sram[i0, i1] : false }
  // sram_store_sram_from_agg_8 stores range: { sram[i0, i1] : (1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 3 <= i1 <= 7 }
    // overlap with reads : { sram[i0, i1] : (1 + i1) mod 4 = 0 and 0 <= i0 <= 7 and 3 <= i1 <= 7 }
	auto value_sram_store_sram_from_agg_8 = sram.sram_store_sram_from_agg_8.peek(/* Needs general delay string */ (m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (4) : (m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (3) : (-1 + m == 0 && -1 + l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (2) : (-1 + m == 0 && l == 0 && root == 0 && k >= 0 && 5 - k >= 0) ? (1) : 0);
	return value_sram_store_sram_from_agg_8;
}

// # of bundles = 3
// sram_store_sram_from_agg_2
//	sram_store_sram_from_agg_2
inline void sram_sram_store_sram_from_agg_2_bundle_write(hw_uint<32>& sram_store_sram_from_agg_2, sram_cache& sram) {
	hw_uint<32>  sram_store_sram_from_agg_2_res = sram_store_sram_from_agg_2.extract<0, 31>();
	sram_store_sram_from_agg_2_write(sram_store_sram_from_agg_2_res, sram);
}

// store_sram_from_agg_write
//	sram_store_sram_from_agg_2
//	sram_store_sram_from_agg_4
//	sram_store_sram_from_agg_6
//	sram_store_sram_from_agg_8
inline void sram_store_sram_from_agg_write_bundle_write(hw_uint<128>& store_sram_from_agg_write, sram_cache& sram) {
	hw_uint<32>  sram_store_sram_from_agg_2_res = store_sram_from_agg_write.extract<0, 31>();
	sram_store_sram_from_agg_2_write(sram_store_sram_from_agg_2_res, sram);
	hw_uint<32>  sram_store_sram_from_agg_4_res = store_sram_from_agg_write.extract<32, 63>();
	sram_store_sram_from_agg_4_write(sram_store_sram_from_agg_4_res, sram);
	hw_uint<32>  sram_store_sram_from_agg_6_res = store_sram_from_agg_write.extract<64, 95>();
	sram_store_sram_from_agg_6_write(sram_store_sram_from_agg_6_res, sram);
	hw_uint<32>  sram_store_sram_from_agg_8_res = store_sram_from_agg_write.extract<96, 127>();
	sram_store_sram_from_agg_8_write(sram_store_sram_from_agg_8_res, sram);
}

// store_tb_from_sram_read
//	sram_store_tb_from_sram_11
//	sram_store_tb_from_sram_13
//	sram_store_tb_from_sram_15
//	sram_store_tb_from_sram_17
inline hw_uint<128> sram_store_tb_from_sram_read_bundle_read(sram_cache& sram, int root, int k, int l, int m) {
	hw_uint<128> result;
	hw_uint<32>  sram_store_tb_from_sram_11_res = sram_store_tb_from_sram_11_select(sram, root, k, l, m);
	set_at<0, 128>(result, sram_store_tb_from_sram_11_res);
	hw_uint<32>  sram_store_tb_from_sram_13_res = sram_store_tb_from_sram_13_select(sram, root, k, l, m);
	set_at<32, 128>(result, sram_store_tb_from_sram_13_res);
	hw_uint<32>  sram_store_tb_from_sram_15_res = sram_store_tb_from_sram_15_select(sram, root, k, l, m);
	set_at<64, 128>(result, sram_store_tb_from_sram_15_res);
	hw_uint<32>  sram_store_tb_from_sram_17_res = sram_store_tb_from_sram_17_select(sram, root, k, l, m);
	set_at<96, 128>(result, sram_store_tb_from_sram_17_res);
	return result;
}



#include "hw_classes.h"

struct tb_store_tb_from_sram_10_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in tb: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct tb_store_tb_from_sram_12_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in tb: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct tb_store_tb_from_sram_14_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in tb: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct tb_store_tb_from_sram_16_cache {
	// Capacity: 3
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 2] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in tb: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct tb_cache {
  tb_store_tb_from_sram_10_cache tb_store_tb_from_sram_10;
  tb_store_tb_from_sram_12_cache tb_store_tb_from_sram_12;
  tb_store_tb_from_sram_14_cache tb_store_tb_from_sram_14;
  tb_store_tb_from_sram_16_cache tb_store_tb_from_sram_16;
};



inline void tb_store_tb_from_sram_10_write(hw_uint<32> & tb_store_tb_from_sram_10, tb_cache& tb) {
	tb.tb_store_tb_from_sram_10.push(tb_store_tb_from_sram_10);
}

inline void tb_store_tb_from_sram_12_write(hw_uint<32> & tb_store_tb_from_sram_12, tb_cache& tb) {
	tb.tb_store_tb_from_sram_12.push(tb_store_tb_from_sram_12);
}

inline void tb_store_tb_from_sram_14_write(hw_uint<32> & tb_store_tb_from_sram_14, tb_cache& tb) {
	tb.tb_store_tb_from_sram_14.push(tb_store_tb_from_sram_14);
}

inline void tb_store_tb_from_sram_16_write(hw_uint<32> & tb_store_tb_from_sram_16, tb_cache& tb) {
	tb.tb_store_tb_from_sram_16.push(tb_store_tb_from_sram_16);
}

inline hw_uint<32>  tb_store_out_from_tb_19_select(tb_cache& tb, int root, int a, int b, int c) {
  // qpd = { store_out_from_tb[root, a, b, c] -> 2 : root = 0 and c = 2 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 2 : root = 0 and c = 1 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 2 : root = 0 and c = 0 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 2 : root = 0 and c = 3 and 0 <= a <= 5 and 0 <= b <= 1 }
	// lexmax events: { store_out_from_tb[root = 0, a, b, c = 3] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 0] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 2] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 0] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 1] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 0] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 0] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 0] : 0 <= a <= 5 and 0 <= b <= 1 }
  // tb_store_out_from_tb_19 read pattern: { store_out_from_tb[root = 0, a, b, c] -> tb[a, 0, 4b + c] : 0 <= a <= 5 and 0 <= b <= 1 and 0 <= c <= 3 }
  // tb_store_tb_from_sram_10 stores range: { tb[i0, i1, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 <= i2 <= 4 }
    // overlap with reads : { tb[i0, 0, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i2 <= 4 }
  // tb_store_tb_from_sram_12 stores range: { tb[i0, i1, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 < i2 <= 5 }
    // overlap with reads : { tb[i0, 0, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 < i2 <= 5 }
  // tb_store_tb_from_sram_14 stores range: { tb[i0, i1, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 2 <= i2 <= 6 }
    // overlap with reads : { tb[i0, 0, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 2 <= i2 <= 6 }
  // tb_store_tb_from_sram_16 stores range: { tb[i0, i1, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 3 <= i2 <= 7 }
    // overlap with reads : { tb[i0, 0, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 3 <= i2 <= 7 }
	bool select_store_tb_from_sram = ((/* constraint: { store_out_from_tb[root, a, b, c] : -2 + c = 0 } */
1*c + -2 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -1 + c = 0 } */
1*c + -1 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : c = 0 } */
1*c == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -3 + c = 0 } */
1*c + -3 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0));
	// inpt: tb_store_tb_from_sram_10
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_10 = tb.tb_store_tb_from_sram_10.peek_2();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_10; }
	// inpt: tb_store_tb_from_sram_12
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_12 = tb.tb_store_tb_from_sram_12.peek_2();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_12; }
	// inpt: tb_store_tb_from_sram_14
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_14 = tb.tb_store_tb_from_sram_14.peek_2();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_14; }
	// inpt: tb_store_tb_from_sram_16
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_16 = tb.tb_store_tb_from_sram_16.peek_2();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_16; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " a = " << a  << " b = " << b  << " c = " << c  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  tb_store_out_from_tb_21_select(tb_cache& tb, int root, int a, int b, int c) {
  // qpd = { store_out_from_tb[root, a, b, c] -> 1 : root = 0 and c = 2 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 1 : root = 0 and c = 1 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 1 : root = 0 and c = 0 and 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root, a, b, c] -> 1 : root = 0 and c = 3 and 0 <= a <= 5 and 0 <= b <= 1 }
	// lexmax events: { store_out_from_tb[root = 0, a, b, c = 3] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 1] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 2] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 1] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 1] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 1] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 0] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 1] : 0 <= a <= 5 and 0 <= b <= 1 }
  // tb_store_out_from_tb_21 read pattern: { store_out_from_tb[root = 0, a, b, c] -> tb[a, 1, 4b + c] : 0 <= a <= 5 and 0 <= b <= 1 and 0 <= c <= 3 }
  // tb_store_tb_from_sram_10 stores range: { tb[i0, i1, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 <= i2 <= 4 }
    // overlap with reads : { tb[i0, 1, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i2 <= 4 }
  // tb_store_tb_from_sram_12 stores range: { tb[i0, i1, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 < i2 <= 5 }
    // overlap with reads : { tb[i0, 1, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 < i2 <= 5 }
  // tb_store_tb_from_sram_14 stores range: { tb[i0, i1, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 2 <= i2 <= 6 }
    // overlap with reads : { tb[i0, 1, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 2 <= i2 <= 6 }
  // tb_store_tb_from_sram_16 stores range: { tb[i0, i1, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 3 <= i2 <= 7 }
    // overlap with reads : { tb[i0, 1, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 3 <= i2 <= 7 }
	bool select_store_tb_from_sram = ((/* constraint: { store_out_from_tb[root, a, b, c] : -2 + c = 0 } */
1*c + -2 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -1 + c = 0 } */
1*c + -1 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : c = 0 } */
1*c == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -3 + c = 0 } */
1*c + -3 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0));
	// inpt: tb_store_tb_from_sram_10
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_10 = tb.tb_store_tb_from_sram_10.peek_1();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_10; }
	// inpt: tb_store_tb_from_sram_12
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_12 = tb.tb_store_tb_from_sram_12.peek_1();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_12; }
	// inpt: tb_store_tb_from_sram_14
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_14 = tb.tb_store_tb_from_sram_14.peek_1();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_14; }
	// inpt: tb_store_tb_from_sram_16
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_16 = tb.tb_store_tb_from_sram_16.peek_1();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_16; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " a = " << a  << " b = " << b  << " c = " << c  << endl;
	assert(false);
	return 0;
}

inline hw_uint<32>  tb_store_out_from_tb_23_select(tb_cache& tb, int root, int a, int b, int c) {
  // qpd = {  }
	// lexmax events: { store_out_from_tb[root = 0, a, b, c = 3] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 2] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 2] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 2] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 1] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 2] : 0 <= a <= 5 and 0 <= b <= 1; store_out_from_tb[root = 0, a, b, c = 0] -> store_tb_from_sram[root' = 0, k = a, l = b, m = 2] : 0 <= a <= 5 and 0 <= b <= 1 }
  // tb_store_out_from_tb_23 read pattern: { store_out_from_tb[root = 0, a, b, c] -> tb[a, 2, 4b + c] : 0 <= a <= 5 and 0 <= b <= 1 and 0 <= c <= 3 }
  // tb_store_tb_from_sram_10 stores range: { tb[i0, i1, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 <= i2 <= 4 }
    // overlap with reads : { tb[i0, 2, i2] : (i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i2 <= 4 }
  // tb_store_tb_from_sram_12 stores range: { tb[i0, i1, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 0 < i2 <= 5 }
    // overlap with reads : { tb[i0, 2, i2] : (-1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 < i2 <= 5 }
  // tb_store_tb_from_sram_14 stores range: { tb[i0, i1, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 2 <= i2 <= 6 }
    // overlap with reads : { tb[i0, 2, i2] : (2 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 2 <= i2 <= 6 }
  // tb_store_tb_from_sram_16 stores range: { tb[i0, i1, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 0 <= i1 <= 2 and 3 <= i2 <= 7 }
    // overlap with reads : { tb[i0, 2, i2] : (1 + i2) mod 4 = 0 and 0 <= i0 <= 5 and 3 <= i2 <= 7 }
	bool select_store_tb_from_sram = ((/* constraint: { store_out_from_tb[root, a, b, c] : -2 + c = 0 } */
1*c + -2 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -1 + c = 0 } */
1*c + -1 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : c = 0 } */
1*c == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0) || (/* constraint: { store_out_from_tb[root, a, b, c] : -3 + c = 0 } */
1*c + -3 == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : root = 0 } */
1*root == 0 && /* constraint: { store_out_from_tb[root, a, b, c] : a >= 0 } */
1*a >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 5 - a >= 0 } */
-1*a + 5 >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : b >= 0 } */
1*b >= 0 && /* constraint: { store_out_from_tb[root, a, b, c] : 1 - b >= 0 } */
-1*b + 1 >= 0));
	// inpt: tb_store_tb_from_sram_10
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_10 = tb.tb_store_tb_from_sram_10.peek_0();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_10; }
	// inpt: tb_store_tb_from_sram_12
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_12 = tb.tb_store_tb_from_sram_12.peek_0();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_12; }
	// inpt: tb_store_tb_from_sram_14
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_14 = tb.tb_store_tb_from_sram_14.peek_0();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_14; }
	// inpt: tb_store_tb_from_sram_16
	// k = store_tb_from_sram
	int value_tb_store_tb_from_sram_16 = tb.tb_store_tb_from_sram_16.peek_0();
	if (select_store_tb_from_sram) { return value_tb_store_tb_from_sram_16; }
	cout << "Error: Unsupported offsets: " << " root = " << root  << " a = " << a  << " b = " << b  << " c = " << c  << endl;
	assert(false);
	return 0;
}

// # of bundles = 3
// store_out_from_tb_read
//	tb_store_out_from_tb_19
//	tb_store_out_from_tb_21
//	tb_store_out_from_tb_23
inline hw_uint<96> tb_store_out_from_tb_read_bundle_read(tb_cache& tb, int root, int a, int b, int c) {
	hw_uint<96> result;
	hw_uint<32>  tb_store_out_from_tb_19_res = tb_store_out_from_tb_19_select(tb, root, a, b, c);
	set_at<0, 96>(result, tb_store_out_from_tb_19_res);
	hw_uint<32>  tb_store_out_from_tb_21_res = tb_store_out_from_tb_21_select(tb, root, a, b, c);
	set_at<32, 96>(result, tb_store_out_from_tb_21_res);
	hw_uint<32>  tb_store_out_from_tb_23_res = tb_store_out_from_tb_23_select(tb, root, a, b, c);
	set_at<64, 96>(result, tb_store_out_from_tb_23_res);
	return result;
}

// store_tb_from_sram_write
//	tb_store_tb_from_sram_10
//	tb_store_tb_from_sram_12
//	tb_store_tb_from_sram_14
//	tb_store_tb_from_sram_16
inline void tb_store_tb_from_sram_write_bundle_write(hw_uint<128>& store_tb_from_sram_write, tb_cache& tb) {
	hw_uint<32>  tb_store_tb_from_sram_10_res = store_tb_from_sram_write.extract<0, 31>();
	tb_store_tb_from_sram_10_write(tb_store_tb_from_sram_10_res, tb);
	hw_uint<32>  tb_store_tb_from_sram_12_res = store_tb_from_sram_write.extract<32, 63>();
	tb_store_tb_from_sram_12_write(tb_store_tb_from_sram_12_res, tb);
	hw_uint<32>  tb_store_tb_from_sram_14_res = store_tb_from_sram_write.extract<64, 95>();
	tb_store_tb_from_sram_14_write(tb_store_tb_from_sram_14_res, tb);
	hw_uint<32>  tb_store_tb_from_sram_16_res = store_tb_from_sram_write.extract<96, 127>();
	tb_store_tb_from_sram_16_write(tb_store_tb_from_sram_16_res, tb);
}

// tb_store_tb_from_sram_10
//	tb_store_tb_from_sram_10
inline void tb_tb_store_tb_from_sram_10_bundle_write(hw_uint<32>& tb_store_tb_from_sram_10, tb_cache& tb) {
	hw_uint<32>  tb_store_tb_from_sram_10_res = tb_store_tb_from_sram_10.extract<0, 31>();
	tb_store_tb_from_sram_10_write(tb_store_tb_from_sram_10_res, tb);
}





// Operation logic
inline void store_agg_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, agg_cache& agg, int root, int po, int pi) {
	// Consume: in
	auto in_po_c_pi_value = in.read();
	// Produce: agg
	agg_store_agg_from_in_write_bundle_write(in_po_c_pi_value, agg);
}

inline void store_sram_from_agg(agg_cache& agg, sram_cache& sram, int root, int qo, int qi) {
	// Consume: agg
	auto agg_qo_c__qi_m_4_value = agg_store_sram_from_agg_read_bundle_read(agg/* source_delay */, root, qo, qi);
	// Produce: sram
	sram_store_sram_from_agg_write_bundle_write(agg_qo_c__qi_m_4_value, sram);
}

inline void store_sram_from_agg(agg_cache& agg, sram_cache& sram, int root, int qo, int qi) {
	// Consume: agg
	auto agg_qo_c__qi_m_4_p_1_value = agg_store_sram_from_agg_read_bundle_read(agg/* source_delay */, root, qo, qi);
	// Produce: sram
	sram_store_sram_from_agg_write_bundle_write(agg_qo_c__qi_m_4_p_1_value, sram);
}

inline void store_sram_from_agg(agg_cache& agg, sram_cache& sram, int root, int qo, int qi) {
	// Consume: agg
	auto agg_qo_c__qi_m_4_p_2_value = agg_store_sram_from_agg_read_bundle_read(agg/* source_delay */, root, qo, qi);
	// Produce: sram
	sram_store_sram_from_agg_write_bundle_write(agg_qo_c__qi_m_4_p_2_value, sram);
}

inline void store_sram_from_agg(agg_cache& agg, sram_cache& sram, int root, int qo, int qi) {
	// Consume: agg
	auto agg_qo_c__qi_m_4_p_3_value = agg_store_sram_from_agg_read_bundle_read(agg/* source_delay */, root, qo, qi);
	// Produce: sram
	sram_store_sram_from_agg_write_bundle_write(agg_qo_c__qi_m_4_p_3_value, sram);
}

inline void store_tb_from_sram(sram_cache& sram, tb_cache& tb, int root, int k, int l, int m) {
	// Consume: sram
	auto sram__lp_k_p_m_rp__c__l_m_4_value = sram_store_tb_from_sram_read_bundle_read(sram/* source_delay */, root, k, l, m);
	// Produce: tb
	tb_store_tb_from_sram_write_bundle_write(sram__lp_k_p_m_rp__c__l_m_4_value, tb);
}

inline void store_tb_from_sram(sram_cache& sram, tb_cache& tb, int root, int k, int l, int m) {
	// Consume: sram
	auto sram__lp_k_p_m_rp__c__l_m_4_p_1_value = sram_store_tb_from_sram_read_bundle_read(sram/* source_delay */, root, k, l, m);
	// Produce: tb
	tb_store_tb_from_sram_write_bundle_write(sram__lp_k_p_m_rp__c__l_m_4_p_1_value, tb);
}

inline void store_tb_from_sram(sram_cache& sram, tb_cache& tb, int root, int k, int l, int m) {
	// Consume: sram
	auto sram__lp_k_p_m_rp__c__l_m_4_p_2_value = sram_store_tb_from_sram_read_bundle_read(sram/* source_delay */, root, k, l, m);
	// Produce: tb
	tb_store_tb_from_sram_write_bundle_write(sram__lp_k_p_m_rp__c__l_m_4_p_2_value, tb);
}

inline void store_tb_from_sram(sram_cache& sram, tb_cache& tb, int root, int k, int l, int m) {
	// Consume: sram
	auto sram__lp_k_p_m_rp__c__l_m_4_p_3_value = sram_store_tb_from_sram_read_bundle_read(sram/* source_delay */, root, k, l, m);
	// Produce: tb
	tb_store_tb_from_sram_write_bundle_write(sram__lp_k_p_m_rp__c__l_m_4_p_3_value, tb);
}

inline void store_out_from_tb(tb_cache& tb, HWStream<hw_uint<96> >& /* buffer_args num ports = 3 */out, int root, int a, int b, int c) {
	// Consume: tb
	auto tb_a_c__0_c__4_m_b__p__c_value = tb_store_out_from_tb_read_bundle_read(tb/* source_delay */, root, a, b, c);
	// Produce: out
	out.write(tb_a_c__0_c__4_m_b__p__c_value);
}

inline void store_out_from_tb(tb_cache& tb, HWStream<hw_uint<96> >& /* buffer_args num ports = 3 */out, int root, int a, int b, int c) {
	// Consume: tb
	auto tb_a_c__1_c__4_m_b__p__c_value = tb_store_out_from_tb_read_bundle_read(tb/* source_delay */, root, a, b, c);
	// Produce: out
	out.write(tb_a_c__1_c__4_m_b__p__c_value);
}

inline void store_out_from_tb(tb_cache& tb, HWStream<hw_uint<96> >& /* buffer_args num ports = 3 */out, int root, int a, int b, int c) {
	// Consume: tb
	auto tb_a_c__2_c__4_m_b__p__c_value = tb_store_out_from_tb_read_bundle_read(tb/* source_delay */, root, a, b, c);
	// Produce: out
	out.write(tb_a_c__2_c__4_m_b__p__c_value);
}

// Driver function
void memtile(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<96> >& /* no bundle get_args num ports = 3 */out) {
  agg_cache agg;
  sram_cache sram;
  tb_cache tb;
	for (int c0 = 0; c0 <= 7; c0 += 1) {
	  if (c0 >= 2) {
	    for (int c1 = 0; c1 <= 1; c1 += 1) {
	      if (c1 == 0)
	        for (int c2 = 0; c2 <= 2; c2 += 1)
	          store_agg_from_in(in, agg, 0, c0, c2);
	      for (int c2 = 3; c2 <= 8; c2 += 1) {
	        if (c1 == 0 && c2 <= 7) {
	          store_agg_from_in(in, agg, 0, c0, c2);
	          if (c2 >= 5 && (c2 + 1) % 2 == 0)
	            store_sram_from_agg(agg, sram, agg, sram, agg, sram, agg, sram, 0, c0, (c2 - 5) / 2);
	        }
	        if (c2 <= 5)
	          store_tb_from_sram(sram, tb, sram, tb, sram, tb, sram, tb, 0, c0 - 2, c1, c2 - 3);
	        if (c2 >= 5)
	          store_out_from_tb(tb, out, tb, out, tb, out, 0, c0 - 2, c1, c2 - 5);
	      }
	    }
	  } else {
	    for (int c2 = 0; c2 <= 7; c2 += 1) {
	      store_agg_from_in(in, agg, 0, c0, c2);
	      if (c2 >= 5 && (c2 + 1) % 2 == 0)
	        store_sram_from_agg(agg, sram, agg, sram, agg, sram, agg, sram, 0, c0, (c2 - 5) / 2);
	    }
	  }
	}
	
}
