#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "hrs_1_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 1
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

struct img_cache {
  img_img_update_0_write0_merged_banks_1_cache img_img_update_0_write0_merged_banks_1;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_1.push(img_img_update_0_write0);
}

inline hw_uint<16> hrs_1_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hrs_1_rd0 read pattern: { hrs_1_update_0[d0, d1] -> img[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { hrs_1_update_0[d0, d1] -> [d1, d0, 2] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// hrs_1_update_0_read
//	hrs_1_rd0
inline hw_uint<16> img_hrs_1_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 1
    // hrs_1_rd0

	hw_uint<16> result;
	hw_uint<16> hrs_1_rd0_res = hrs_1_rd0_select(img, d0, d1);
	set_at<0, 16>(result, hrs_1_rd0_res);
	return result;
}

// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_oc, img_cache& img, int d0, int d1) {
	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_1(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "img_update_0," << (1*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void hrs_1_update_0(img_cache& img, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hrs_1, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_hrs_1_update_0_read_bundle_read(img/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "hrs_1_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = hrs_1_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: hrs_1
	hrs_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "hrs_1_update_0," << (1*d0 + 0) << "," << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void hrs_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */hrs_1, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("hrs_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // hrs_1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 1079; c0++) {
	  for (int c1 = 0; c1 <= 1919; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	img_update_0(img_oc, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 1919) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	hrs_1_update_0(img, hrs_1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void hrs_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */hrs_1) {

  hrs_1_opt(img_oc, hrs_1, 1);
}
#ifdef __VIVADO_SYNTH__
#include "hrs_1_opt.h"

const int hrs_1_update_0_write_num_transfers = 2073600;
const int img_update_0_read_num_transfers = 2073600;


extern "C" {

static void read_img_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = img_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_hrs_1_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = hrs_1_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void hrs_1_opt_accel(hw_uint<16>* img_update_0_read, hw_uint<16>* hrs_1_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hrs_1_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = hrs_1_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > img_update_0_read_channel;
  static HWStream<hw_uint<16> > hrs_1_update_0_write_channel;

  read_img_update_0_read(img_update_0_read, img_update_0_read_channel, size);

  hrs_1_opt(img_update_0_read_channel, hrs_1_update_0_write_channel, size);

  write_hrs_1_update_0_write(hrs_1_update_0_write, hrs_1_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

