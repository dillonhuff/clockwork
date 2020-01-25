#include "hw_classes.h"

struct write0_cache {
	// Capacity: 131
	// DD expr = 130
	// DD expr = 129
	// DD expr = 128
	// DD expr = 66
	// DD expr = 65
	// DD expr = 64
	// DD expr = 2
	// DD expr = 1
	// DD expr = 0
	// Peak points
	// DD = 0
	// DD = 1
	// DD = 2
	// DD = 64
	// DD = 65
	// DD = 66
	// DD = 128
	// DD = 129
	// DD = 130
	// Break points in parition
	// BP = 0
	// BP = 1
	// BP = 1
	// BP = 2
	// BP = 2
	// BP = 3
	// BP = 64
	// BP = 65
	// BP = 65
	// BP = 66
	// BP = 66
	// BP = 67
	// BP = 128
	// BP = 129
	// BP = 129
	// BP = 130
	// BP = 130
	// Parition [0, 1) capacity = 1
	fifo<1> f0;
	// Parition [1, 2) capacity = 1
	fifo<1> f2;
	// Parition [2, 3) capacity = 1
	fifo<1> f4;
	// Parition [3, 64) capacity = 61
	fifo<61> f5;
	// Parition [64, 65) capacity = 1
	fifo<1> f6;
	// Parition [65, 66) capacity = 1
	fifo<1> f8;
	// Parition [66, 67) capacity = 1
	fifo<1> f10;
	// Parition [67, 128) capacity = 61
	fifo<61> f11;
	// Parition [128, 129) capacity = 1
	fifo<1> f12;
	// Parition [129, 130) capacity = 1
	fifo<1> f14;
	// Parition [130, 130] capacity = 1
	fifo<1> f16;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
	}

	inline int peek_63() {
		return f5.back();
	}

	inline int peek_64() {
		return f6.back();
	}

	inline int peek_65() {
		return f8.back();
	}

	inline int peek_66() {
		return f10.back();
	}

	inline int peek_127() {
		return f11.back();
	}

	inline int peek_128() {
		return f12.back();
	}

	inline int peek_129() {
		return f14.back();
	}

	inline int peek_130() {
		return f16.back();
	}



	inline int peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 63) {
			return f5.back();
		}
		if (offset == 64) {
			return f6.back();
		}
		if (offset == 65) {
			return f8.back();
		}
		if (offset == 66) {
			return f10.back();
		}
		if (offset == 127) {
			return f11.back();
		}
		if (offset == 128) {
			return f12.back();
		}
		if (offset == 129) {
			return f14.back();
		}
		if (offset == 130) {
			return f16.back();
		}
		cout << "Error: Unsupported offset: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void write0_write(InputStream& write0, write0_cache& write0_delay) {
	int write0_value = write0.read(); write0_delay.push(write0_value);
}

// Select if: { read_0_0[i, j] -> write0[i' = i, j' = j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_0_0_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_0_0[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_0_0[i, j] -> 130 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_130();
	return value_write0;
}

// Select if: { read_0_1[i, j] -> write0[i' = i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_0_1_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_0_1[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_0_1[i, j] -> 129 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_129();
	return value_write0;
}

// Select if: { read_0_2[i, j] -> write0[i' = i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_0_2_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_0_2[i, j] : 0 <= i <= 61 and 0 <= j <= 60 } -> { read_0_2[i, j] -> 128 }
// 	is always true on iteration domain: 0
// { read_0_2[i, j = 61] : 0 <= i <= 61 } -> { read_0_2[i, j] -> (67 + j) }
// 	is always true on iteration domain: 0
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (128) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((67 + j)) : 0));
	return value_write0;
}

// Select if: { read_1_0[i, j] -> write0[i' = 1 + i, j' = j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_0_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_1_0[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_1_0[i, j] -> 66 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_66();
	return value_write0;
}

// Select if: { read_1_1[i, j] -> write0[i' = 1 + i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_1_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_1_1[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_1_1[i, j] -> 65 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_65();
	return value_write0;
}

// Select if: { read_1_2[i, j] -> write0[i' = 1 + i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_2_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_1_2[i, j] : 0 <= i <= 61 and 0 <= j <= 60 } -> { read_1_2[i, j] -> 64 }
// 	is always true on iteration domain: 0
// { read_1_2[i, j = 61] : 0 <= i <= 61 } -> { read_1_2[i, j] -> (3 + j) }
// 	is always true on iteration domain: 0
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (64) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((3 + j)) : 0));
	return value_write0;
}

// Select if: { read_2_0[i, j] -> write0[i' = 2 + i, j' = j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_0_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_2_0[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_2_0[i, j] -> 2 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_2();
	return value_write0;
}

// Select if: { read_2_1[i, j] -> write0[i' = 2 + i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_1_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
// { read_2_1[i, j] : 0 <= i <= 61 and 0 <= j <= 61 } -> { read_2_1[i, j] -> 1 }
// 	is always true on iteration domain: 1
	int value_write0 = write0_delay.peek_1();
	return value_write0;
}

// Select if: { read_2_2[i, j] -> write0[i' = 2 + i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_2_select(write0_cache& write0_delay
, int i, int j) {
// Pieces...
	int value_write0 = write0_delay.peek_0();
	return value_write0;
}

// Bundles...
// read_0_0
//	read_0_0
inline int read_0_0_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_0_0_res = read_0_0_select(write0_delay, i, j);
	return read_0_0_res;
}

// read_0_1
//	read_0_1
inline int read_0_1_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_0_1_res = read_0_1_select(write0_delay, i, j);
	return read_0_1_res;
}

// read_0_2
//	read_0_2
inline int read_0_2_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_0_2_res = read_0_2_select(write0_delay, i, j);
	return read_0_2_res;
}

// read_1_0
//	read_1_0
inline int read_1_0_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_1_0_res = read_1_0_select(write0_delay, i, j);
	return read_1_0_res;
}

// read_1_1
//	read_1_1
inline int read_1_1_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_1_1_res = read_1_1_select(write0_delay, i, j);
	return read_1_1_res;
}

// read_1_2
//	read_1_2
inline int read_1_2_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_1_2_res = read_1_2_select(write0_delay, i, j);
	return read_1_2_res;
}

// read_2_0
//	read_2_0
inline int read_2_0_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_2_0_res = read_2_0_select(write0_delay, i, j);
	return read_2_0_res;
}

// read_2_1
//	read_2_1
inline int read_2_1_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_2_1_res = read_2_1_select(write0_delay, i, j);
	return read_2_1_res;
}

// read_2_2
//	read_2_2
inline int read_2_2_bundle_action(write0_cache& write0_delay, int i, int j) {
	int read_2_2_res = read_2_2_select(write0_delay, i, j);
	return read_2_2_res;
}

// write0
//	write0
inline void write0_bundle_action(InputStream& write0, write0_cache& write0_delay) {
	write0_write(write0, write0_delay);
}



void linebuffer_3x3(OutputStream& read_0_0
, OutputStream& read_0_1
, OutputStream& read_0_2
, OutputStream& read_1_0
, OutputStream& read_1_1
, OutputStream& read_1_2
, OutputStream& read_2_0
, OutputStream& read_2_1
, OutputStream& read_2_2
, InputStream& write0
) {
	write0_cache write0_delay;

	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	    write0_write(write0, write0_delay);
	    if (c0 >= 2 && c1 >= 2) {
	      read_1_0.write(read_1_0_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_0_1.write(read_0_1_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_2_1.write(read_2_1_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_2_2.write(read_2_2_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_2_0.write(read_2_0_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_1_1.write(read_1_1_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_0_2.write(read_0_2_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_0_0.write(read_0_0_bundle_action(write0_delay, c0 - 2, c1 - 2));
	      read_1_2.write(read_1_2_bundle_action(write0_delay, c0 - 2, c1 - 2));
	    }
	  }
	
}
