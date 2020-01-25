#include "hw_classes.h"

struct write_cache {
	// Capacity: 3
	// DD expr = 2
	// DD expr = 1
	// DD expr = 0
	// Peak points
	// DD = 0
	// DD = 1
	// DD = 2
	// Break points in parition
	// BP = 0
	// BP = 1
	// BP = 1
	// BP = 2
	// BP = 2
	// Parition [0, 1) capacity = 1
	fifo<1> f0;
	// Parition [1, 2) capacity = 1
	fifo<1> f2;
	// Parition [2, 2] capacity = 1
	fifo<1> f4;


	inline int peek_0() {
		return f0.back();
	}

	inline int peek_1() {
		return f2.back();
	}

	inline int peek_2() {
		return f4.back();
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
		cout << "Error: Unsupported offset: " << offset << endl;
		assert(false);
		return 0;

	}

	inline void push(const int value) {
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};



inline void write_write(InputStream& write, write_cache& write_delay) {
	int write_value = write.read(); write_delay.push(write_value);
}

// Select if: { read0[i] -> write[i' = i] : 0 <= i <= 7 }
inline int read0_select(write_cache& write_delay
, int i) {
// Pieces...
// { read0[i] : 0 <= i <= 7 } -> { read0[i] -> 2 }
// 	is always true on iteration domain: 1
	int value_write = write_delay.peek_2();
	return value_write;
}

// Select if: { read1[i] -> write[i' = 1 + i] : 0 <= i <= 7 }
inline int read1_select(write_cache& write_delay
, int i) {
// Pieces...
// { read1[i] : 0 <= i <= 7 } -> { read1[i] -> 1 }
// 	is always true on iteration domain: 1
	int value_write = write_delay.peek_1();
	return value_write;
}

// Select if: { read2[i] -> write[i' = 2 + i] : 0 <= i <= 7 }
inline int read2_select(write_cache& write_delay
, int i) {
// Pieces...
	int value_write = write_delay.peek_0();
	return value_write;
}

// Bundles...
// read0
//	read0
inline int read0_bundle_action(write_cache& write_delay, int i) {
	int read0_res = read0_select(write_delay, i);
	return read0_res;
}

// read1
//	read1
inline int read1_bundle_action(write_cache& write_delay, int i) {
	int read1_res = read1_select(write_delay, i);
	return read1_res;
}

// read2
//	read2
inline int read2_bundle_action(write_cache& write_delay, int i) {
	int read2_res = read2_select(write_delay, i);
	return read2_res;
}

// write
//	write
inline void write_bundle_action(InputStream& write, write_cache& write_delay) {
	write_write(write, write_delay);
}



void shift_reg(OutputStream& read0
, OutputStream& read1
, OutputStream& read2
, InputStream& write
) {
	write_cache write_delay;

	for (int c0 = 0; c0 <= 9; c0 += 1) {
	  write_write(write, write_delay);
	  if (c0 >= 2) {
	    read2.write(read2_bundle_action(write_delay, c0 - 2));
	    read1.write(read1_bundle_action(write_delay, c0 - 2));
	    read0.write(read0_bundle_action(write_delay, c0 - 2));
	  }
	}
	
}
