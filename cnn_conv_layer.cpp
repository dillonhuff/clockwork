#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "cnn_conv_layer.h"

#include "hw_classes.h"

struct ifbuf_dma_if_0_to_ifbuf_mac_10_cache {
	// RAM Box: {[0, 28], [0, 15], [0, 15]}
	// Capacity: 2048
	// # of read delays: 2048
	fifo<hw_uint<32> , 2048> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2047 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct ifbuf_dma_if_1_to_ifbuf_mac_11_cache {
	// RAM Box: {[1, 29], [0, 15], [0, 15]}
	// Capacity: 2048
	// # of read delays: 2048
	fifo<hw_uint<32> , 2048> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2047 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct ifbuf_dma_if_2_to_ifbuf_mac_12_cache {
	// RAM Box: {[2, 30], [0, 15], [0, 15]}
	// Capacity: 2048
	// # of read delays: 2048
	fifo<hw_uint<32> , 2048> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2047 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct ifbuf_dma_if_3_to_ifbuf_mac_13_cache {
	// RAM Box: {[3, 31], [0, 15], [0, 15]}
	// Capacity: 2048
	// # of read delays: 2048
	fifo<hw_uint<32> , 2048> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2047 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct ifbuf_cache {
  ifbuf_dma_if_0_to_ifbuf_mac_10_cache ifbuf_dma_if_0_to_ifbuf_mac_10;
  ifbuf_dma_if_1_to_ifbuf_mac_11_cache ifbuf_dma_if_1_to_ifbuf_mac_11;
  ifbuf_dma_if_2_to_ifbuf_mac_12_cache ifbuf_dma_if_2_to_ifbuf_mac_12;
  ifbuf_dma_if_3_to_ifbuf_mac_13_cache ifbuf_dma_if_3_to_ifbuf_mac_13;
};



inline void ifbuf_dma_if_0_write(hw_uint<32> & ifbuf_dma_if_0, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
  ifbuf.ifbuf_dma_if_0_to_ifbuf_mac_10.push(ifbuf_dma_if_0);
}

inline void ifbuf_dma_if_1_write(hw_uint<32> & ifbuf_dma_if_1, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
  ifbuf.ifbuf_dma_if_1_to_ifbuf_mac_11.push(ifbuf_dma_if_1);
}

inline void ifbuf_dma_if_2_write(hw_uint<32> & ifbuf_dma_if_2, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
  ifbuf.ifbuf_dma_if_2_to_ifbuf_mac_12.push(ifbuf_dma_if_2);
}

inline void ifbuf_dma_if_3_write(hw_uint<32> & ifbuf_dma_if_3, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
  ifbuf.ifbuf_dma_if_3_to_ifbuf_mac_13.push(ifbuf_dma_if_3);
}

inline hw_uint<32>  ifbuf_mac_10_select(ifbuf_cache& ifbuf, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifbuf inter false
#endif //__VIVADO_SYNTH__
  // ifbuf_mac_10 read pattern: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> ifbuf[4lich, lx + lfx, ly + lfy] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { dma_if[root = 0, y, x, ich] -> [0, 0, 0, 9 + y, 1, x, ich, 0] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
  // DD fold: { mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2047 - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((2040 - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and lich = 7 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((255 - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and loch = 0 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (248 - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and loch = 0 and lich = 7 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2040 - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lich = 7 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1927 - 128 * lfy) - lich) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (1920 - 128 * lfy) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 <= loch <= 31 and 0 <= lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and lich = 7 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((1927 - 128 * ly) - 128 * lfy) - lich) : root = 0 and lx = 13 and lfx = 2 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1920 - 128 * ly) - 128 * lfy) : root = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((127 - 8 * lx) - 8 * lfx) - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((120 - 8 * lx) - 8 * lfx) : root = 0 and ly = 13 and lfy = 2 and lich = 7 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (7 - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and lfx >= 0 and 15 - lx <= lfx <= 2 and 0 <= lich <= 6 }
  auto value_ifbuf_dma_if_0 = ifbuf.ifbuf_dma_if_0_to_ifbuf_mac_10.peek(/* one reader or all rams */ (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && ly == 0) ? ((1920 - 128 * lfy)) : (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0) ? (((1920 - 128 * ly) - 128 * lfy)) : (-7 + lich == 0 && loch == 0 && lx == 0 && ly == 0) ? ((248 - 8 * lfx)) : (-7 + lich == 0 && -2 + lfy == 0 && -13 + ly == 0 && 14 - lx - lfx >= 0) ? (((120 - 8 * lx) - 8 * lfx)) : (-7 + lich == 0 && lx == 0 && ly == 0 && -1 + loch >= 0) ? (((2040 - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0) ? ((((2040 - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0) ? (((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-2 + lfx == 0 && -2 + lfy == 0 && -13 + lx == 0 && -13 + ly == 0 && 6 - lich >= 0) ? ((7 - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && ly == 0 && 6 - lich >= 0) ? (((1927 - 128 * lfy) - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 6 - lich >= 0) ? ((((1927 - 128 * ly) - 128 * lfy) - lich)) : (loch == 0 && lx == 0 && ly == 0 && 6 - lich >= 0) ? (((255 - 8 * lfx) - lich)) : (-2 + lfy == 0 && -13 + ly == 0 && 6 - lich >= 0 && 14 - lx - lfx >= 0) ? ((((127 - 8 * lx) - 8 * lfx) - lich)) : (lx == 0 && ly == 0 && -1 + loch >= 0 && 6 - lich >= 0) ? ((((2047 - 128 * lfy) - 8 * lfx) - lich)) : (ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? (((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : (-1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? ((((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : 0);
  return value_ifbuf_dma_if_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << " lfy = " << lfy  << " lfx = " << lfx  << " lich = " << lich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifbuf_mac_11_select(ifbuf_cache& ifbuf, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifbuf inter false
#endif //__VIVADO_SYNTH__
  // ifbuf_mac_11 read pattern: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> ifbuf[1 + 4lich, lx + lfx, ly + lfy] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { dma_if[root = 0, y, x, ich] -> [0, 0, 0, 9 + y, 1, x, ich, 0] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
  // DD fold: { mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2047 - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((2040 - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and lich = 7 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((255 - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and loch = 0 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (248 - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and loch = 0 and lich = 7 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2040 - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lich = 7 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1927 - 128 * lfy) - lich) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (1920 - 128 * lfy) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 <= loch <= 31 and 0 <= lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and lich = 7 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((1927 - 128 * ly) - 128 * lfy) - lich) : root = 0 and lx = 13 and lfx = 2 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1920 - 128 * ly) - 128 * lfy) : root = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((127 - 8 * lx) - 8 * lfx) - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((120 - 8 * lx) - 8 * lfx) : root = 0 and ly = 13 and lfy = 2 and lich = 7 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (7 - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and lfx >= 0 and 15 - lx <= lfx <= 2 and 0 <= lich <= 6 }
  auto value_ifbuf_dma_if_1 = ifbuf.ifbuf_dma_if_1_to_ifbuf_mac_11.peek(/* one reader or all rams */ (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && ly == 0) ? ((1920 - 128 * lfy)) : (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0) ? (((1920 - 128 * ly) - 128 * lfy)) : (-7 + lich == 0 && loch == 0 && lx == 0 && ly == 0) ? ((248 - 8 * lfx)) : (-7 + lich == 0 && -2 + lfy == 0 && -13 + ly == 0 && 14 - lx - lfx >= 0) ? (((120 - 8 * lx) - 8 * lfx)) : (-7 + lich == 0 && lx == 0 && ly == 0 && -1 + loch >= 0) ? (((2040 - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0) ? ((((2040 - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0) ? (((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-2 + lfx == 0 && -2 + lfy == 0 && -13 + lx == 0 && -13 + ly == 0 && 6 - lich >= 0) ? ((7 - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && ly == 0 && 6 - lich >= 0) ? (((1927 - 128 * lfy) - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 6 - lich >= 0) ? ((((1927 - 128 * ly) - 128 * lfy) - lich)) : (loch == 0 && lx == 0 && ly == 0 && 6 - lich >= 0) ? (((255 - 8 * lfx) - lich)) : (-2 + lfy == 0 && -13 + ly == 0 && 6 - lich >= 0 && 14 - lx - lfx >= 0) ? ((((127 - 8 * lx) - 8 * lfx) - lich)) : (lx == 0 && ly == 0 && -1 + loch >= 0 && 6 - lich >= 0) ? ((((2047 - 128 * lfy) - 8 * lfx) - lich)) : (ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? (((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : (-1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? ((((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : 0);
  return value_ifbuf_dma_if_1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << " lfy = " << lfy  << " lfx = " << lfx  << " lich = " << lich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifbuf_mac_12_select(ifbuf_cache& ifbuf, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifbuf inter false
#endif //__VIVADO_SYNTH__
  // ifbuf_mac_12 read pattern: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> ifbuf[2 + 4lich, lx + lfx, ly + lfy] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { dma_if[root = 0, y, x, ich] -> [0, 0, 0, 9 + y, 1, x, ich, 0] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
  // DD fold: { mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2047 - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((2040 - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and lich = 7 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((255 - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and loch = 0 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (248 - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and loch = 0 and lich = 7 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2040 - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lich = 7 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1927 - 128 * lfy) - lich) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (1920 - 128 * lfy) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 <= loch <= 31 and 0 <= lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and lich = 7 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((1927 - 128 * ly) - 128 * lfy) - lich) : root = 0 and lx = 13 and lfx = 2 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1920 - 128 * ly) - 128 * lfy) : root = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((127 - 8 * lx) - 8 * lfx) - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((120 - 8 * lx) - 8 * lfx) : root = 0 and ly = 13 and lfy = 2 and lich = 7 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (7 - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and lfx >= 0 and 15 - lx <= lfx <= 2 and 0 <= lich <= 6 }
  auto value_ifbuf_dma_if_2 = ifbuf.ifbuf_dma_if_2_to_ifbuf_mac_12.peek(/* one reader or all rams */ (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && ly == 0) ? ((1920 - 128 * lfy)) : (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0) ? (((1920 - 128 * ly) - 128 * lfy)) : (-7 + lich == 0 && loch == 0 && lx == 0 && ly == 0) ? ((248 - 8 * lfx)) : (-7 + lich == 0 && -2 + lfy == 0 && -13 + ly == 0 && 14 - lx - lfx >= 0) ? (((120 - 8 * lx) - 8 * lfx)) : (-7 + lich == 0 && lx == 0 && ly == 0 && -1 + loch >= 0) ? (((2040 - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0) ? ((((2040 - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0) ? (((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-2 + lfx == 0 && -2 + lfy == 0 && -13 + lx == 0 && -13 + ly == 0 && 6 - lich >= 0) ? ((7 - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && ly == 0 && 6 - lich >= 0) ? (((1927 - 128 * lfy) - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 6 - lich >= 0) ? ((((1927 - 128 * ly) - 128 * lfy) - lich)) : (loch == 0 && lx == 0 && ly == 0 && 6 - lich >= 0) ? (((255 - 8 * lfx) - lich)) : (-2 + lfy == 0 && -13 + ly == 0 && 6 - lich >= 0 && 14 - lx - lfx >= 0) ? ((((127 - 8 * lx) - 8 * lfx) - lich)) : (lx == 0 && ly == 0 && -1 + loch >= 0 && 6 - lich >= 0) ? ((((2047 - 128 * lfy) - 8 * lfx) - lich)) : (ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? (((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : (-1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? ((((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : 0);
  return value_ifbuf_dma_if_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << " lfy = " << lfy  << " lfx = " << lfx  << " lich = " << lich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  ifbuf_mac_13_select(ifbuf_cache& ifbuf, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=ifbuf inter false
#endif //__VIVADO_SYNTH__
  // ifbuf_mac_13 read pattern: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> ifbuf[3 + 4lich, lx + lfx, ly + lfy] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { dma_if[root = 0, y, x, ich] -> [0, 0, 0, 9 + y, 1, x, ich, 0] : 0 <= y <= 15 and 0 <= x <= 15 and 0 <= ich <= 7 }
  // DD fold: { mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2047 - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((2040 - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and lich = 7 and 0 < loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((255 - 8 * lfx) - lich) : root = 0 and ly = 0 and lx = 0 and loch = 0 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (248 - 8 * lfx) : root = 0 and ly = 0 and lx = 0 and loch = 0 and lich = 7 and 0 <= lfy <= 2 and 0 <= lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and ly = 0 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((2040 - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and ly = 0 and lich = 7 and 0 < lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1927 - 128 * lfy) - lich) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> (1920 - 128 * lfy) : root = 0 and ly = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 <= loch <= 31 and 0 <= lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich) : root = 0 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) : root = 0 and lich = 7 and 0 < ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((1927 - 128 * ly) - 128 * lfy) - lich) : root = 0 and lx = 13 and lfx = 2 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((1920 - 128 * ly) - 128 * lfy) : root = 0 and lx = 13 and lfx = 2 and lich = 7 and 0 < ly <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 14 - ly and lfy <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (((127 - 8 * lx) - 8 * lfx) - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2 and 0 <= lich <= 6; mac[root, ly, lx, loch, lfy, lfx, lich] -> ((120 - 8 * lx) - 8 * lfx) : root = 0 and ly = 13 and lfy = 2 and lich = 7 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfx <= 14 - lx and lfx <= 2; mac[root, ly, lx, loch, lfy, lfx, lich] -> (7 - lich) : root = 0 and ly = 13 and lfy = 2 and 0 <= lx <= 13 and 0 <= loch <= 31 and lfx >= 0 and 15 - lx <= lfx <= 2 and 0 <= lich <= 6 }
  auto value_ifbuf_dma_if_3 = ifbuf.ifbuf_dma_if_3_to_ifbuf_mac_13.peek(/* one reader or all rams */ (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && ly == 0) ? ((1920 - 128 * lfy)) : (-7 + lich == 0 && -2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0) ? (((1920 - 128 * ly) - 128 * lfy)) : (-7 + lich == 0 && loch == 0 && lx == 0 && ly == 0) ? ((248 - 8 * lfx)) : (-7 + lich == 0 && -2 + lfy == 0 && -13 + ly == 0 && 14 - lx - lfx >= 0) ? (((120 - 8 * lx) - 8 * lfx)) : (-7 + lich == 0 && lx == 0 && ly == 0 && -1 + loch >= 0) ? (((2040 - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0) ? ((((2040 - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-7 + lich == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0) ? (((((2040 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx)) : (-2 + lfx == 0 && -2 + lfy == 0 && -13 + lx == 0 && -13 + ly == 0 && 6 - lich >= 0) ? ((7 - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && ly == 0 && 6 - lich >= 0) ? (((1927 - 128 * lfy) - lich)) : (-2 + lfx == 0 && -13 + lx == 0 && -1 + ly >= 0 && 14 - ly - lfy >= 0 && 6 - lich >= 0) ? ((((1927 - 128 * ly) - 128 * lfy) - lich)) : (loch == 0 && lx == 0 && ly == 0 && 6 - lich >= 0) ? (((255 - 8 * lfx) - lich)) : (-2 + lfy == 0 && -13 + ly == 0 && 6 - lich >= 0 && 14 - lx - lfx >= 0) ? ((((127 - 8 * lx) - 8 * lfx) - lich)) : (lx == 0 && ly == 0 && -1 + loch >= 0 && 6 - lich >= 0) ? ((((2047 - 128 * lfy) - 8 * lfx) - lich)) : (ly == 0 && -1 + lx >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? (((((2047 - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : (-1 + ly >= 0 && 14 - ly - lfy >= 0 && 14 - lx - lfx >= 0 && 6 - lich >= 0) ? ((((((2047 - 128 * ly) - 8 * lx) - 128 * lfy) - 8 * lfx) - lich)) : 0);
  return value_ifbuf_dma_if_3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << " lfy = " << lfy  << " lfx = " << lfx  << " lich = " << lich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// dma_if_write
//	ifbuf_dma_if_0
//	ifbuf_dma_if_1
//	ifbuf_dma_if_2
//	ifbuf_dma_if_3
inline void ifbuf_dma_if_write_bundle_write(hw_uint<128>& dma_if_write, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
	hw_uint<32>  ifbuf_dma_if_0_res = dma_if_write.extract<0, 31>();
	ifbuf_dma_if_0_write(ifbuf_dma_if_0_res, ifbuf, root, y, x, ich);
	hw_uint<32>  ifbuf_dma_if_1_res = dma_if_write.extract<32, 63>();
	ifbuf_dma_if_1_write(ifbuf_dma_if_1_res, ifbuf, root, y, x, ich);
	hw_uint<32>  ifbuf_dma_if_2_res = dma_if_write.extract<64, 95>();
	ifbuf_dma_if_2_write(ifbuf_dma_if_2_res, ifbuf, root, y, x, ich);
	hw_uint<32>  ifbuf_dma_if_3_res = dma_if_write.extract<96, 127>();
	ifbuf_dma_if_3_write(ifbuf_dma_if_3_res, ifbuf, root, y, x, ich);
}

// mac_read
//	ifbuf_mac_10
//	ifbuf_mac_11
//	ifbuf_mac_12
//	ifbuf_mac_13
inline hw_uint<128> ifbuf_mac_read_bundle_read(ifbuf_cache& ifbuf, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
  // # of ports in bundle: 4
    // ifbuf_mac_10
    // ifbuf_mac_11
    // ifbuf_mac_12
    // ifbuf_mac_13

	hw_uint<128> result;
	hw_uint<32>  ifbuf_mac_10_res = ifbuf_mac_10_select(ifbuf, root, ly, lx, loch, lfy, lfx, lich);
	set_at<0, 128>(result, ifbuf_mac_10_res);
	hw_uint<32>  ifbuf_mac_11_res = ifbuf_mac_11_select(ifbuf, root, ly, lx, loch, lfy, lfx, lich);
	set_at<32, 128>(result, ifbuf_mac_11_res);
	hw_uint<32>  ifbuf_mac_12_res = ifbuf_mac_12_select(ifbuf, root, ly, lx, loch, lfy, lfx, lich);
	set_at<64, 128>(result, ifbuf_mac_12_res);
	hw_uint<32>  ifbuf_mac_13_res = ifbuf_mac_13_select(ifbuf, root, ly, lx, loch, lfy, lfx, lich);
	set_at<96, 128>(result, ifbuf_mac_13_res);
	return result;
}

#include "hw_classes.h"

struct psum_init_psum_8_merged_banks_1_cache {
	// RAM Box: {[0, 0]}
	// Capacity: 1
	// # of read delays: 1
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct psum_init_psum_8_to_psum_output_16_cache {
	// RAM Box: {[0, 0]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct psum_mac_9_merged_banks_2_cache {
	// RAM Box: {[0, 0]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct psum_cache {
  psum_init_psum_8_merged_banks_1_cache psum_init_psum_8_merged_banks_1;
  psum_init_psum_8_to_psum_output_16_cache psum_init_psum_8_to_psum_output_16;
  psum_mac_9_merged_banks_2_cache psum_mac_9_merged_banks_2;
};



inline void psum_init_psum_8_write(hw_uint<32> & psum_init_psum_8, psum_cache& psum, int root, int ly, int lx, int loch) {
  psum.psum_init_psum_8_merged_banks_1.push(psum_init_psum_8);
  psum.psum_init_psum_8_to_psum_output_16.push(psum_init_psum_8);
}

inline void psum_mac_9_write(hw_uint<32> & psum_mac_9, psum_cache& psum, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
  psum.psum_mac_9_merged_banks_2.push(psum_mac_9);
}

inline hw_uint<32>  psum_mac_14_select(psum_cache& psum, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=psum inter false
#endif //__VIVADO_SYNTH__
  // psum_mac_14 read pattern: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> psum[0] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  if ((true)) {
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { init_psum[root = 0, ly, lx, loch] -> [0, 0, 0, 11 + ly, 0, 11 + lx, 24 + loch, 0] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 }
  // DD fold: {  }
    auto value_psum_init_psum_8 = psum.psum_init_psum_8_merged_banks_1.peek(/* one reader or all rams */ 0);
    return value_psum_init_psum_8;
  }

  
  if ((true)) {
  // Read schedule : { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // Write schedule: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // DD fold: {  }
    auto value_psum_mac_9 = psum.psum_mac_9_merged_banks_2.peek_0();
    return value_psum_mac_9;
  }

  
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << " lfy = " << lfy  << " lfx = " << lfx  << " lich = " << lich  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  psum_output_16_select(psum_cache& psum, int root, int ly, int lx, int loch) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=psum inter false
#endif //__VIVADO_SYNTH__
  // psum_output_16 read pattern: { output[root = 0, ly, lx, loch] -> psum[0] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 }
  if ((true)) {
  // Read schedule : { output[root = 0, ly, lx, loch] -> [13, 13, 31, ly, 0, lx, loch, 2] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 }
  // Write schedule: { init_psum[root = 0, ly, lx, loch] -> [0, 0, 0, 11 + ly, 0, 11 + lx, 24 + loch, 0] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 }
  // DD fold: {  }
    auto value_psum_init_psum_8 = psum.psum_init_psum_8_to_psum_output_16.peek_0();
    return value_psum_init_psum_8;
  }

  
  if ((true)) {
  // Read schedule : { output[root = 0, ly, lx, loch] -> [13, 13, 31, ly, 0, lx, loch, 2] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 }
  // Write schedule: { mac[root = 0, ly, lx, loch, lfy, lfx, lich] -> [ly, lx, loch, 11 + lfy, 0, 11 + lfx, 24 + lich, 1] : 0 <= ly <= 13 and 0 <= lx <= 13 and 0 <= loch <= 31 and 0 <= lfy <= 2 and 0 <= lfx <= 2 and 0 <= lich <= 7 }
  // DD fold: {  }
    auto value_psum_mac_9 = psum.psum_mac_9_merged_banks_2.peek_0();
    return value_psum_mac_9;
  }

  
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " ly = " << ly  << " lx = " << lx  << " loch = " << loch  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// init_psum_write
//	psum_init_psum_8
inline void psum_init_psum_write_bundle_write(hw_uint<32>& init_psum_write, psum_cache& psum, int root, int ly, int lx, int loch) {
	hw_uint<32>  psum_init_psum_8_res = init_psum_write.extract<0, 31>();
	psum_init_psum_8_write(psum_init_psum_8_res, psum, root, ly, lx, loch);
}

// mac_read
//	psum_mac_14
inline hw_uint<32> psum_mac_read_bundle_read(psum_cache& psum, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
  // # of ports in bundle: 1
    // psum_mac_14

	hw_uint<32> result;
	hw_uint<32>  psum_mac_14_res = psum_mac_14_select(psum, root, ly, lx, loch, lfy, lfx, lich);
	set_at<0, 32>(result, psum_mac_14_res);
	return result;
}

// mac_write
//	psum_mac_9
inline void psum_mac_write_bundle_write(hw_uint<32>& mac_write, psum_cache& psum, int root, int ly, int lx, int loch, int lfy, int lfx, int lich) {
	hw_uint<32>  psum_mac_9_res = mac_write.extract<0, 31>();
	psum_mac_9_write(psum_mac_9_res, psum, root, ly, lx, loch, lfy, lfx, lich);
}

// output_read
//	psum_output_16
inline hw_uint<32> psum_output_read_bundle_read(psum_cache& psum, int root, int ly, int lx, int loch) {
  // # of ports in bundle: 1
    // psum_output_16

	hw_uint<32> result;
	hw_uint<32>  psum_output_16_res = psum_output_16_select(psum, root, ly, lx, loch);
	set_at<0, 32>(result, psum_output_16_res);
	return result;
}



// Operation logic
inline void dma_if(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */ifmap, ifbuf_cache& ifbuf, int root, int y, int x, int ich) {
	// Consume: ifmap
	auto ifmap_ich_m_4_p_0_c__x_c__y_value = ifmap.read();
	// Produce: ifbuf
	ifbuf_dma_if_write_bundle_write(ifmap_ich_m_4_p_0_c__x_c__y_value, ifbuf, root, y, x, ich);
#ifndef __VIVADO_SYNTH__
