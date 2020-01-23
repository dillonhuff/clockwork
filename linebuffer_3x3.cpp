#include "hw_classes.h"

struct write0_cache {
	// Capacity: 131
	// DD expr = { read_0_0[i, j] -> 130 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(130) }
	// Bound  as C = 130
	// DD from read_0_0 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (130) : 0
	// DD expr = { read_0_1[i, j] -> 129 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(129) }
	// Bound  as C = 129
	// DD from read_0_1 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (129) : 0
	// DD expr = { read_0_2[i, j] -> 128 : 0 <= i <= 61 and 0 <= j <= 60; read_0_2[i, j] -> (67 + j) : j = 61 and 0 <= i <= 61 }
	// Bound       = { max(128) }
	// Bound  as C = 128
	// DD from read_0_2 = (i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (128) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((67 + j)) : 0
	// DD expr = { read_1_0[i, j] -> 66 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(66) }
	// Bound  as C = 66
	// DD from read_1_0 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (66) : 0
	// DD expr = { read_1_1[i, j] -> 65 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(65) }
	// Bound  as C = 65
	// DD from read_1_1 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (65) : 0
	// DD expr = { read_1_2[i, j] -> 64 : 0 <= i <= 61 and 0 <= j <= 60; read_1_2[i, j] -> (3 + j) : j = 61 and 0 <= i <= 61 }
	// Bound       = { max(64) }
	// Bound  as C = 64
	// DD from read_1_2 = (i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (64) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((3 + j)) : 0
	// DD expr = { read_2_0[i, j] -> 2 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(2) }
	// Bound  as C = 2
	// DD from read_2_0 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (2) : 0
	// DD expr = { read_2_1[i, j] -> 1 : 0 <= i <= 61 and 0 <= j <= 61 }
	// Bound       = { max(1) }
	// Bound  as C = 1
	// DD from read_2_1 = (i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (1) : 0
	// DD expr = { read_2_2[i, j] -> 0 }
	// Bound       = { 0 }
	// Bound  as C = 0
	// DD from read_2_2 = 0
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
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (130) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_0_1[i, j] -> write0[i' = i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_0_1_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (129) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_0_2[i, j] -> write0[i' = i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_0_2_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (128) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((67 + j)) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_1_0[i, j] -> write0[i' = 1 + i, j' = j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_0_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (66) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_1_1[i, j] -> write0[i' = 1 + i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_1_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (65) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_1_2[i, j] -> write0[i' = 1 + i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_1_2_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 60 - j >= 0) ? (64) : (-61 + j == 0 && i >= 0 && 61 - i >= 0) ? ((3 + j)) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_2_0[i, j] -> write0[i' = 2 + i, j' = j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_0_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (2) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_2_1[i, j] -> write0[i' = 2 + i, j' = 1 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_1_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek(((i >= 0 && 61 - i >= 0 && j >= 0 && 61 - j >= 0) ? (1) : 0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
}

// Select if: { read_2_2[i, j] -> write0[i' = 2 + i, j' = 2 + j] : 0 <= i <= 61 and 0 <= j <= 61 }
inline int read_2_2_select(write0_cache& write0_delay
, int i, int j) {
	bool select_write0 = ((1*i + 0*j + 0  >= 0 && -1*i + 0*j + 61  >= 0 && 0*i + 1*j + 0  >= 0 && 0*i + -1*j + 61  >= 0));
	int value_write0 = write0_delay.peek((0));
	if (select_write0) { return value_write0; }
	assert(false);
	return 0;
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
	      read_1_0.write(read_1_0_select(write0_delay, c0 - 2, c1 - 2));
	      read_0_1.write(read_0_1_select(write0_delay, c0 - 2, c1 - 2));
	      read_2_1.write(read_2_1_select(write0_delay, c0 - 2, c1 - 2));
	      read_2_2.write(read_2_2_select(write0_delay, c0 - 2, c1 - 2));
	      read_2_0.write(read_2_0_select(write0_delay, c0 - 2, c1 - 2));
	      read_1_1.write(read_1_1_select(write0_delay, c0 - 2, c1 - 2));
	      read_0_2.write(read_0_2_select(write0_delay, c0 - 2, c1 - 2));
	      read_0_0.write(read_0_0_select(write0_delay, c0 - 2, c1 - 2));
	      read_1_2.write(read_1_2_select(write0_delay, c0 - 2, c1 - 2));
	    }
	  }
	
}
