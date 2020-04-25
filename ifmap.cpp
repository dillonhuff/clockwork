#include "hw_classes.h"

struct ifmap_cache {
};



inline hw_uint<32>  ifmap_dma_if_4_select(ifmap_cache& ifmap, int root, int y, int x, int ich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifmap inter false
#endif //__VIVADO_SYNTH__
  // ifmap_dma_if_4 read pattern: { dma_if[root = 0, y, x, ich] -> ifmap[4ich, x, y] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " y = " << y  << " x = " << x  << " ich = " << ich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifmap_dma_if_5_select(ifmap_cache& ifmap, int root, int y, int x, int ich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifmap inter false
#endif //__VIVADO_SYNTH__
  // ifmap_dma_if_5 read pattern: { dma_if[root = 0, y, x, ich] -> ifmap[1 + 4ich, x, y] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " y = " << y  << " x = " << x  << " ich = " << ich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifmap_dma_if_6_select(ifmap_cache& ifmap, int root, int y, int x, int ich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifmap inter false
#endif //__VIVADO_SYNTH__
  // ifmap_dma_if_6 read pattern: { dma_if[root = 0, y, x, ich] -> ifmap[2 + 4ich, x, y] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " y = " << y  << " x = " << x  << " ich = " << ich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifmap_dma_if_7_select(ifmap_cache& ifmap, int root, int y, int x, int ich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifmap inter false
#endif //__VIVADO_SYNTH__
  // ifmap_dma_if_7 read pattern: { dma_if[root = 0, y, x, ich] -> ifmap[3 + 4ich, x, y] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " y = " << y  << " x = " << x  << " ich = " << ich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 1
// dma_if_read
//	ifmap_dma_if_4
//	ifmap_dma_if_5
//	ifmap_dma_if_6
//	ifmap_dma_if_7
inline hw_uint<128> ifmap_dma_if_read_bundle_read(ifmap_cache& ifmap, int root, int y, int x, int ich) {
  // # of ports in bundle: 4
    // ifmap_dma_if_4
    // ifmap_dma_if_5
    // ifmap_dma_if_6
    // ifmap_dma_if_7

	hw_uint<128> result;
	hw_uint<32>  ifmap_dma_if_4_res = ifmap_dma_if_4_select(ifmap, root, y, x, ich);
	set_at<0, 128>(result, ifmap_dma_if_4_res);
	hw_uint<32>  ifmap_dma_if_5_res = ifmap_dma_if_5_select(ifmap, root, y, x, ich);
	set_at<32, 128>(result, ifmap_dma_if_5_res);
	hw_uint<32>  ifmap_dma_if_6_res = ifmap_dma_if_6_select(ifmap, root, y, x, ich);
	set_at<64, 128>(result, ifmap_dma_if_6_res);
	hw_uint<32>  ifmap_dma_if_7_res = ifmap_dma_if_7_select(ifmap, root, y, x, ich);
	set_at<96, 128>(result, ifmap_dma_if_7_res);
	return result;
}

