#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: dp_opt_compute_units.h
#include "dp_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct img_cache {
  // # of banks: 1
  img_img_update_0_write0_merged_banks_2_cache img_img_update_0_write0_merged_banks_2;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_2.push(img_img_update_0_write0);
}

inline hw_uint<16> long_path_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // long_path_rd0 read pattern: { long_path_update_0[d0, d1] -> img[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { long_path_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_2.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> short_path_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // short_path_rd0 read pattern: { short_path_update_0[d0, d1] -> img[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { short_path_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_2.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
}

// long_path_update_0_read
//	long_path_rd0
inline hw_uint<16> img_long_path_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // long_path_rd0

	hw_uint<16> result;
	hw_uint<16> long_path_rd0_res = long_path_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 16>(result, long_path_rd0_res);
	return result;
}

// short_path_update_0_read
//	short_path_rd0
inline hw_uint<16> img_short_path_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // short_path_rd0

	hw_uint<16> result;
	hw_uint<16> short_path_rd0_res = short_path_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 16>(result, short_path_rd0_res);
	return result;
}

#include "hw_classes.h"

struct long_path_long_path_update_0_write0_to_dp_rd0_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct long_path_cache {
  // # of banks: 1
  long_path_long_path_update_0_write0_to_dp_rd0_cache long_path_long_path_update_0_write0_to_dp_rd0;
};



inline void long_path_long_path_update_0_write0_write(hw_uint<16>& long_path_long_path_update_0_write0, long_path_cache& long_path, int d0, int d1, int dynamic_address) {
  long_path.long_path_long_path_update_0_write0_to_dp_rd0.push(long_path_long_path_update_0_write0);
}

inline hw_uint<16> dp_rd0_select(long_path_cache& long_path, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dp_rd0 read pattern: { dp_update_0[d0, d1] -> long_path[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { dp_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { long_path_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_long_path_long_path_update_0_write0 = long_path.long_path_long_path_update_0_write0_to_dp_rd0.peek(/* one reader or all rams */ 0);
  return value_long_path_long_path_update_0_write0;
  return 0;
}

// # of bundles = 2
// dp_update_0_read
//	dp_rd0
inline hw_uint<16> long_path_dp_update_0_read_bundle_read(long_path_cache& long_path, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dp_rd0

	hw_uint<16> result;
	hw_uint<16> dp_rd0_res = dp_rd0_select(long_path, d0, d1, dynamic_address);
	set_at<0, 16>(result, dp_rd0_res);
	return result;
}

// long_path_update_0_write
//	long_path_long_path_update_0_write0
inline void long_path_long_path_update_0_write_bundle_write(hw_uint<16>& long_path_update_0_write, long_path_cache& long_path, int d0, int d1, int dynamic_address) {
	hw_uint<16> long_path_long_path_update_0_write0_res = long_path_update_0_write.extract<0, 15>();
	long_path_long_path_update_0_write0_write(long_path_long_path_update_0_write0_res, long_path, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct short_path_short_path_update_0_write0_to_dp_rd0_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct short_path_cache {
  // # of banks: 1
  short_path_short_path_update_0_write0_to_dp_rd0_cache short_path_short_path_update_0_write0_to_dp_rd0;
};



inline void short_path_short_path_update_0_write0_write(hw_uint<16>& short_path_short_path_update_0_write0, short_path_cache& short_path, int d0, int d1, int dynamic_address) {
  short_path.short_path_short_path_update_0_write0_to_dp_rd0.push(short_path_short_path_update_0_write0);
}

inline hw_uint<16> dp_rd0_select(short_path_cache& short_path, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dp_rd0 read pattern: { dp_update_0[d0, d1] -> short_path[d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { dp_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { short_path_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_short_path_short_path_update_0_write0 = short_path.short_path_short_path_update_0_write0_to_dp_rd0.peek(/* one reader or all rams */ 0);
  return value_short_path_short_path_update_0_write0;
  return 0;
}

// # of bundles = 2
// dp_update_0_read
//	dp_rd0
inline hw_uint<16> short_path_dp_update_0_read_bundle_read(short_path_cache& short_path, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dp_rd0

	hw_uint<16> result;
	hw_uint<16> dp_rd0_res = dp_rd0_select(short_path, d0, d1, dynamic_address);
	set_at<0, 16>(result, dp_rd0_res);
	return result;
}

// short_path_update_0_write
//	short_path_short_path_update_0_write0
inline void short_path_short_path_update_0_write_bundle_write(hw_uint<16>& short_path_update_0_write, short_path_cache& short_path, int d0, int d1, int dynamic_address) {
	hw_uint<16> short_path_short_path_update_0_write0_res = short_path_update_0_write.extract<0, 15>();
	short_path_short_path_update_0_write0_write(short_path_short_path_update_0_write0_res, short_path, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_oc, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_1(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void short_path_update_0(img_cache& img, short_path_cache& short_path, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_short_path_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = short_path_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: short_path
	short_path_short_path_update_0_write_bundle_write(/* arg names */compute_result, short_path, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void long_path_update_0(img_cache& img, long_path_cache& long_path, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_long_path_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = long_path_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: long_path
	long_path_long_path_update_0_write_bundle_write(/* arg names */compute_result, long_path, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dp_update_0(long_path_cache& long_path, short_path_cache& short_path, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */dp, int d0, int d1) {
  // Dynamic address computation

	// Consume: long_path
	auto long_path_0_c__0_value = long_path_dp_update_0_read_bundle_read(long_path/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: short_path
	auto short_path_0_c__0_value = short_path_dp_update_0_read_bundle_read(short_path/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = dp_generated_compute_unrolled_1(long_path_0_c__0_value, short_path_0_c__0_value);
	// Produce: dp
	dp.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void dp_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */dp) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("dp_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  long_path_cache long_path;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  short_path_cache short_path;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { short_path_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31; img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31; dp_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 31 and 0 <= d1 <= 31; long_path_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
//   { short_path_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for short_path_update_0(((-2 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for img_update_0(((-1 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { dp_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for dp_update_0(((-4 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))
//   { long_path_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for long_path_update_0(((-3 + i2 == 0) && (i1 >= 0) && (31 - i1 >= 0) && (i0 >= 0) && (31 - i0 >= 0)))

  /*
for (int c0 = 0; c0 <= 31; c0 += 1)
  for (int c1 = 0; c1 <= 31; c1 += 1) {
    img_update_0(c1, c0);
    short_path_update_0(c1, c0);
    long_path_update_0(c1, c0);
    dp_update_0(c1, c0);
  }

  */
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    img_update_0(img_oc /* buf name */, img, c1, c0);
	    short_path_update_0(img /* buf name */, short_path, c1, c0);
	    long_path_update_0(img /* buf name */, long_path, c1, c0);
	    dp_update_0(long_path /* buf name */, short_path /* buf name */, dp, c1, c0);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void dp_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */dp, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    dp_opt(img_oc, dp);
  }
}
#ifdef __VIVADO_SYNTH__
  // { dp_update_0[root = 0, dp_0, dp_1] -> dp[0, 0] : 0 <= dp_0 <= 31 and 0 <= dp_1 <= 31 }
const int dp_update_0_write_pipe0_num_transfers = 1024;
  // { img_update_0[root = 0, img_0, img_1] -> img_oc[0, 0] : 0 <= img_0 <= 31 and 0 <= img_1 <= 31 }
const int img_update_0_read_pipe0_num_transfers = 1024;


extern "C" {

void dp_opt_accel(hw_uint<16>* img_update_0_read_pipe0, hw_uint<16>* dp_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = dp_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = dp_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > dp_update_0_write_pipe0_channel;

  burst_read<16>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  dp_opt_wrapper(img_update_0_read_pipe0_channel, dp_update_0_write_pipe0_channel, size);

  burst_write<16>(dp_update_0_write_pipe0, dp_update_0_write_pipe0_channel, dp_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void dp_opt_rdai(HWStream<hw_uint<16> >& img_update_0_read_pipe0, HWStream<hw_uint<16> >&  dp_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = dp_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  dp_opt(img_update_0_read_pipe0, dp_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

