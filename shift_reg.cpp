#include "hw_classes.h"

struct write_cache {
	// Capacity: 3
	// DD expr = { read0[i] -> 2 : 0 <= i <= 7 }
	// Bound       = { max(2) }
	// Bound  as C = 2
	// DD from read0 = (i >= 0 && 7 - i >= 0) ? (2) : 0
	// DD expr = { read1[i] -> 1 : 0 <= i <= 7 }
	// Bound       = { max(1) }
	// Bound  as C = 1
	// DD from read1 = (i >= 0 && 7 - i >= 0) ? (1) : 0
	// DD expr = { read2[i] -> 0 }
	// Bound       = { 0 }
	// Bound  as C = 0
	// DD from read2 = 0
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
	int value_write = write_delay.peek(((i >= 0 && 7 - i >= 0) ? (2) : 0));
	return value_write;
}

// Select if: { read1[i] -> write[i' = 1 + i] : 0 <= i <= 7 }
inline int read1_select(write_cache& write_delay
, int i) {
	int value_write = write_delay.peek(((i >= 0 && 7 - i >= 0) ? (1) : 0));
	return value_write;
}

// Select if: { read2[i] -> write[i' = 2 + i] : 0 <= i <= 7 }
inline int read2_select(write_cache& write_delay
, int i) {
	int value_write = write_delay.peek((0));
	return value_write;
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
	    read2.write(read2_select(write_delay, c0 - 2));
	    read1.write(read1_select(write_delay, c0 - 2));
	    read0.write(read0_select(write_delay, c0 - 2));
	  }
	}
	
}
