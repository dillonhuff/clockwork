#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_write_0_merged_banks_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 131
	// # of read delays: 9
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
  I_write_0_merged_banks_9_cache I_write_0_merged_banks_9;
};



inline void I_write_0_write(hw_uint<32> & I_write_0, I_cache& I, int root, int pr, int pc) {
  I.I_write_0_merged_banks_9.push(I_write_0);
}

inline hw_uint<32>  I_read_0_10_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_10 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 64 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 60; read_0[root, lr, lc] -> (3 + lc) : root = 0 and lc = 61 and 0 <= lr <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_64();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_11_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_11 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: {  }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_0();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_3_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_3 read pattern: { read_0[root = 0, lr, lc] -> I[lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 130 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_130();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_4_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_4 read pattern: { read_0[root = 0, lr, lc] -> I[lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 66 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_66();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_5_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_5 read pattern: { read_0[root = 0, lr, lc] -> I[lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 2 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_2();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_6_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_6 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 129 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_129();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_7_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_7 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, 1 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 65 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_65();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_8_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_8 read pattern: { read_0[root = 0, lr, lc] -> I[1 + lc, 2 + lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 1 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_1();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_read_0_9_select(I_cache& I, int root, int lr, int lc) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_read_0_9 read pattern: { read_0[root = 0, lr, lc] -> I[2 + lc, lr] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Read schedule : { read_0[root = 0, lr, lc] -> [2 + lr, 2 + lc, 1] : 0 <= lr <= 61 and 0 <= lc <= 61 }
  // Write schedule: { write[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 63 and 0 <= pc <= 63 }
  // DD fold: { read_0[root, lr, lc] -> 128 : root = 0 and 0 <= lr <= 61 and 0 <= lc <= 60; read_0[root, lr, lc] -> (67 + lc) : root = 0 and lc = 61 and 0 <= lr <= 61 }
  auto value_I_write_0 = I.I_write_0_merged_banks_9.peek_128();
  return value_I_write_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " lr = " << lr  << " lc = " << lc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 3
// I_write_0
//	I_write_0
inline void I_I_write_0_bundle_write(hw_uint<32>& I_write_0, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_write_0_res = I_write_0.extract<0, 31>();
	I_write_0_write(I_write_0_res, I, root, pr, pc);
}

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
inline hw_uint<288> I_read_0_read_bundle_read(I_cache& I, int root, int lr, int lc) {
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
	hw_uint<32>  I_read_0_3_res = I_read_0_3_select(I, root, lr, lc);
	set_at<0, 288>(result, I_read_0_3_res);
	hw_uint<32>  I_read_0_4_res = I_read_0_4_select(I, root, lr, lc);
	set_at<32, 288>(result, I_read_0_4_res);
	hw_uint<32>  I_read_0_5_res = I_read_0_5_select(I, root, lr, lc);
	set_at<64, 288>(result, I_read_0_5_res);
	hw_uint<32>  I_read_0_6_res = I_read_0_6_select(I, root, lr, lc);
	set_at<96, 288>(result, I_read_0_6_res);
	hw_uint<32>  I_read_0_7_res = I_read_0_7_select(I, root, lr, lc);
	set_at<128, 288>(result, I_read_0_7_res);
	hw_uint<32>  I_read_0_8_res = I_read_0_8_select(I, root, lr, lc);
	set_at<160, 288>(result, I_read_0_8_res);
	hw_uint<32>  I_read_0_9_res = I_read_0_9_select(I, root, lr, lc);
	set_at<192, 288>(result, I_read_0_9_res);
	hw_uint<32>  I_read_0_10_res = I_read_0_10_select(I, root, lr, lc);
	set_at<224, 288>(result, I_read_0_10_res);
	hw_uint<32>  I_read_0_11_res = I_read_0_11_select(I, root, lr, lc);
	set_at<256, 288>(result, I_read_0_11_res);
	return result;
}

// write_write
//	I_write_0
inline void I_write_write_bundle_write(hw_uint<32>& write_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_write_0_res = write_write.extract<0, 31>();
	I_write_0_write(I_write_0_res, I, root, pr, pc);
}



// Operation logic
inline void write(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pc_c__pr_value = in.read();
	// Produce: I
	I_write_write_bundle_write(in_pc_c__pr_value, I, root, pr, pc);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void read_0(I_cache& I, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int lr, int lc) {
	// Consume: I
	auto I_lc__p__0_c__lr__p__0_value = I_read_0_read_bundle_read(I/* source_delay */, root, lr, lc);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(I_lc__p__0_c__lr__p__0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void conv_2d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("conv_2d_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	write(in, I, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2)
	read_0(I, out, 0, c0 - 2, c1 - 2);
	  }
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void conv_2d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

  conv_2d(in, out, 1);
}
#ifdef __VIVADO_SYNTH__
const int write_read_num_transfers = 0;
const int read_0_write_num_transfers = 0;


extern "C" {

static void read_write_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = write_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_read_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = read_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void conv_2d_accel(hw_uint<32>* write_read, hw_uint<32>* read_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = write_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = read_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = write_read bundle = control
#pragma HLS INTERFACE s_axilite port = read_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > write_read_channel;
  static HWStream<hw_uint<32> > read_0_write_channel;

  read_write_read(write_read, write_read_channel, size);

  conv_2d(write_read_channel, read_0_write_channel, size);

  write_read_0_write(read_0_write, read_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

