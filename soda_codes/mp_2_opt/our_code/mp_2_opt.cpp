#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "mp_2_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 126], [0, 127], [0, 31]}
	// Capacity: 65
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 63> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_64() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 127], [0, 127], [0, 31]}
	// Capacity: 65
	// # of read delays: 2
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 63> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_64() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<32> & in_in_update_0_write1, in_cache& in, int d0, int d1, int d2) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline hw_uint<32>  mp_2_rd0_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_2_rd0 read pattern: { mp_2_update_0[d0, d1, d2] -> in[2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { mp_2_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { mp_2_update_0[d0, d1, d2] -> 64 : 0 < d0 <= 62 and 0 <= d1 <= 63 and 0 <= d2 <= 31; mp_2_update_0[d0, d1, d2] -> (1 + d0) : d0 = 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31; mp_2_update_0[d0, d1, d2] -> 64 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_64();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp_2_rd1_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_2_rd1 read pattern: { mp_2_update_0[d0, d1, d2] -> in[2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { mp_2_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp_2_rd2_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_2_rd2 read pattern: { mp_2_update_0[d0, d1, d2] -> in[1 + 2d0, 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { mp_2_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: { mp_2_update_0[d0, d1, d2] -> 64 : 0 < d0 <= 62 and 0 <= d1 <= 63 and 0 <= d2 <= 31; mp_2_update_0[d0, d1, d2] -> (1 + d0) : d0 = 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31; mp_2_update_0[d0, d1, d2] -> 64 : d0 = 0 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_64();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mp_2_rd3_select(in_cache& in, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp_2_rd3 read pattern: { mp_2_update_0[d0, d1, d2] -> in[1 + 2d0, 1 + 2d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Read schedule : { mp_2_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 63 and 0 <= d1 <= 63 and 0 <= d2 <= 31 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 63 and 0 <= d1 <= 127 and 0 <= d2 <= 31 }
  // DD fold: {  }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
inline void in_in_update_0_write_bundle_write(hw_uint<64>& in_update_0_write, in_cache& in, int d0, int d1, int d2) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2);
	hw_uint<32>  in_in_update_0_write1_res = in_update_0_write.extract<32, 63>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, d2);
}

// mp_2_update_0_read
//	mp_2_rd0
//	mp_2_rd1
//	mp_2_rd2
//	mp_2_rd3
inline hw_uint<128> in_mp_2_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2) {
  // # of ports in bundle: 4
    // mp_2_rd0
    // mp_2_rd1
    // mp_2_rd2
    // mp_2_rd3

	hw_uint<128> result;
	hw_uint<32>  mp_2_rd0_res = mp_2_rd0_select(in, d0, d1, d2);
	set_at<0, 128>(result, mp_2_rd0_res);
	hw_uint<32>  mp_2_rd1_res = mp_2_rd1_select(in, d0, d1, d2);
	set_at<32, 128>(result, mp_2_rd1_res);
	hw_uint<32>  mp_2_rd2_res = mp_2_rd2_select(in, d0, d1, d2);
	set_at<64, 128>(result, mp_2_rd2_res);
	hw_uint<32>  mp_2_rd3_res = mp_2_rd3_select(in, d0, d1, d2);
	set_at<96, 128>(result, mp_2_rd3_res);
	return result;
}



// Operation logic
inline void mp_2_update_0(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mp_2, int d0, int d1, int d2) {
	// Consume: in
	auto in_0_c__0_value = in_mp_2_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_1(in_0_c__0_value);
	// Produce: mp_2
	mp_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in_oc, in_cache& in, int d0, int d1, int d2) {
	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_2(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1, d2);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mp_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp_2, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mp_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mp_2_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 31; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 63; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 63) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_oc, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 63) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 31) && ((c0 - 0) % 1 == 0)) {
	mp_2_update_0(in, mp_2, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mp_2_opt(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mp_2) {

  mp_2_opt(in_oc, mp_2, 1);
}
#ifdef __VIVADO_SYNTH__
#include "mp_2_opt.h"

const int in_update_0_read_num_transfers = 262144;
const int mp_2_update_0_write_num_transfers = 131072;


extern "C" {

static void read_in_update_0_read(hw_uint<64>* input, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  int num_transfers = in_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_mp_2_update_0_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = mp_2_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void mp_2_opt_accel(hw_uint<64>* in_update_0_read, hw_uint<32>* mp_2_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mp_2_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = mp_2_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<64> > in_update_0_read_channel;
  static HWStream<hw_uint<32> > mp_2_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  mp_2_opt(in_update_0_read_channel, mp_2_update_0_write_channel, size);

  write_mp_2_update_0_write(mp_2_update_0_write, mp_2_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

