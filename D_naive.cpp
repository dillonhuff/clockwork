#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: D_naive_compute_units.h
#include "D_naive_compute_units.h"

struct A_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 11], [0, 0]}
  hw_uint<32>  RAM[12][1];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct A_cache {
  // Reader addrs...
    // { D_update_0[d0, d1 = 0] -> A[d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> A[1 + d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> A[2 + d0, 0] : 0 <= d0 <= 9 }
  // # of banks: 1
  A_all_inputs_to_all_outputs_cache A_all_inputs_to_all_outputs;
};



inline void A_A_update_0_write0_write(hw_uint<32> & A_A_update_0_write0, A_cache& A, int d0, int d1, int dynamic_address) {
  A.A_all_inputs_to_all_outputs.write(A_A_update_0_write0, ((1*d0)) - 0, 0 - 0);
}

inline hw_uint<32>  D_rd0_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd0 read pattern: { D_update_0[d0, d1 = 0] -> A[d0, 0] : 0 <= d0 <= 9 }
  auto value_A_A_update_0_write0 = A.A_all_inputs_to_all_outputs.read(((1*d0)) - 0, 0 - 0);
  return value_A_A_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd1_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd1 read pattern: { D_update_0[d0, d1 = 0] -> A[1 + d0, 0] : 0 <= d0 <= 9 }
  auto value_A_A_update_0_write0 = A.A_all_inputs_to_all_outputs.read(((1 + 1*d0)) - 0, 0 - 0);
  return value_A_A_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd2_select(A_cache& A, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd2 read pattern: { D_update_0[d0, d1 = 0] -> A[2 + d0, 0] : 0 <= d0 <= 9 }
  auto value_A_A_update_0_write0 = A.A_all_inputs_to_all_outputs.read(((2 + 1*d0)) - 0, 0 - 0);
  return value_A_A_update_0_write0;
  return 0;
}

// # of bundles = 2
// A_update_0_write
//	A_A_update_0_write0
inline void A_A_update_0_write_bundle_write(hw_uint<32>& A_update_0_write, A_cache& A, int d0, int d1, int dynamic_address) {
	hw_uint<32>  A_A_update_0_write0_res = A_update_0_write.extract<0, 31>();
	A_A_update_0_write0_write(A_A_update_0_write0_res, A, d0, d1, dynamic_address);
}

// D_update_0_read
//	D_rd0
//	D_rd1
//	D_rd2
inline hw_uint<96> A_D_update_0_read_bundle_read(A_cache& A, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // D_rd0
    // D_rd1
    // D_rd2

	hw_uint<96> result;
	hw_uint<32>  D_rd0_res = D_rd0_select(A, d0, d1, dynamic_address);
	set_at<0, 96>(result, D_rd0_res);
	hw_uint<32>  D_rd1_res = D_rd1_select(A, d0, d1, dynamic_address);
	set_at<32, 96>(result, D_rd1_res);
	hw_uint<32>  D_rd2_res = D_rd2_select(A, d0, d1, dynamic_address);
	set_at<64, 96>(result, D_rd2_res);
	return result;
}

struct B_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 11], [0, 0]}
  hw_uint<32>  RAM[12][1];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct B_cache {
  // Reader addrs...
    // { D_update_0[d0, d1 = 0] -> B[d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> B[1 + d0, 0] : 0 <= d0 <= 9 }
    // { D_update_0[d0, d1 = 0] -> B[2 + d0, 0] : 0 <= d0 <= 9 }
  // # of banks: 1
  B_all_inputs_to_all_outputs_cache B_all_inputs_to_all_outputs;
};



inline void B_B_update_0_write0_write(hw_uint<32> & B_B_update_0_write0, B_cache& B, int d0, int d1, int dynamic_address) {
  B.B_all_inputs_to_all_outputs.write(B_B_update_0_write0, ((1*d0)) - 0, 0 - 0);
}

inline hw_uint<32>  D_rd0_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd0 read pattern: { D_update_0[d0, d1 = 0] -> B[d0, 0] : 0 <= d0 <= 9 }
  auto value_B_B_update_0_write0 = B.B_all_inputs_to_all_outputs.read(((1*d0)) - 0, 0 - 0);
  return value_B_B_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd1_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd1 read pattern: { D_update_0[d0, d1 = 0] -> B[1 + d0, 0] : 0 <= d0 <= 9 }
  auto value_B_B_update_0_write0 = B.B_all_inputs_to_all_outputs.read(((1 + 1*d0)) - 0, 0 - 0);
  return value_B_B_update_0_write0;
  return 0;
}

inline hw_uint<32>  D_rd2_select(B_cache& B, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // D_rd2 read pattern: { D_update_0[d0, d1 = 0] -> B[2 + d0, 0] : 0 <= d0 <= 9 }
  auto value_B_B_update_0_write0 = B.B_all_inputs_to_all_outputs.read(((2 + 1*d0)) - 0, 0 - 0);
  return value_B_B_update_0_write0;
  return 0;
}

// # of bundles = 2
// B_update_0_write
//	B_B_update_0_write0
inline void B_B_update_0_write_bundle_write(hw_uint<32>& B_update_0_write, B_cache& B, int d0, int d1, int dynamic_address) {
	hw_uint<32>  B_B_update_0_write0_res = B_update_0_write.extract<0, 31>();
	B_B_update_0_write0_write(B_B_update_0_write0_res, B, d0, d1, dynamic_address);
}

// D_update_0_read
//	D_rd0
//	D_rd1
//	D_rd2
inline hw_uint<96> B_D_update_0_read_bundle_read(B_cache& B, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // D_rd0
    // D_rd1
    // D_rd2

	hw_uint<96> result;
	hw_uint<32>  D_rd0_res = D_rd0_select(B, d0, d1, dynamic_address);
	set_at<0, 96>(result, D_rd0_res);
	hw_uint<32>  D_rd1_res = D_rd1_select(B, d0, d1, dynamic_address);
	set_at<32, 96>(result, D_rd1_res);
	hw_uint<32>  D_rd2_res = D_rd2_select(B, d0, d1, dynamic_address);
	set_at<64, 96>(result, D_rd2_res);
	return result;
}

struct C_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 15], [0, 0]}
  hw_uint<32>  RAM[18][1];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct C_cache {
  // Reader addrs...
    // { A_update_0[d0, d1 = 0] -> C[2 + d0, 0] : 0 <= d0 <= 11 }
    // { A_update_0[d0, d1 = 0] -> C[3 + d0, 0] : 0 <= d0 <= 11 }
    // { A_update_0[d0, d1 = 0] -> C[4 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[-2 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[-1 + d0, 0] : 0 <= d0 <= 11 }
    // { B_update_0[d0, d1 = 0] -> C[d0, 0] : 0 <= d0 <= 11 }
  // # of banks: 1
  C_all_inputs_to_all_outputs_cache C_all_inputs_to_all_outputs;
};



inline void C_C_update_0_write0_write(hw_uint<32> & C_C_update_0_write0, C_cache& C, int d0, int d1, int dynamic_address) {
  C.C_all_inputs_to_all_outputs.write(C_C_update_0_write0, ((1*d0)) - -2, 0 - 0);
}

inline hw_uint<32>  A_rd0_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd0 read pattern: { A_update_0[d0, d1 = 0] -> C[2 + d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((2 + 1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  A_rd1_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd1 read pattern: { A_update_0[d0, d1 = 0] -> C[3 + d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((3 + 1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  A_rd2_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // A_rd2 read pattern: { A_update_0[d0, d1 = 0] -> C[4 + d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((4 + 1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd0_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd0 read pattern: { B_update_0[d0, d1 = 0] -> C[-2 + d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((-2 + 1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd1_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd1 read pattern: { B_update_0[d0, d1 = 0] -> C[-1 + d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((-1 + 1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

inline hw_uint<32>  B_rd2_select(C_cache& C, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // B_rd2 read pattern: { B_update_0[d0, d1 = 0] -> C[d0, 0] : 0 <= d0 <= 11 }
  auto value_C_C_update_0_write0 = C.C_all_inputs_to_all_outputs.read(((1*d0)) - -2, 0 - 0);
  return value_C_C_update_0_write0;
  return 0;
}

// # of bundles = 3
// A_update_0_read
//	A_rd0
//	A_rd1
//	A_rd2
inline hw_uint<96> C_A_update_0_read_bundle_read(C_cache& C, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // A_rd0
    // A_rd1
    // A_rd2

	hw_uint<96> result;
	hw_uint<32>  A_rd0_res = A_rd0_select(C, d0, d1, dynamic_address);
	set_at<0, 96>(result, A_rd0_res);
	hw_uint<32>  A_rd1_res = A_rd1_select(C, d0, d1, dynamic_address);
	set_at<32, 96>(result, A_rd1_res);
	hw_uint<32>  A_rd2_res = A_rd2_select(C, d0, d1, dynamic_address);
	set_at<64, 96>(result, A_rd2_res);
	return result;
}

// B_update_0_read
//	B_rd0
//	B_rd1
//	B_rd2
inline hw_uint<96> C_B_update_0_read_bundle_read(C_cache& C, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // B_rd0
    // B_rd1
    // B_rd2

	hw_uint<96> result;
	hw_uint<32>  B_rd0_res = B_rd0_select(C, d0, d1, dynamic_address);
	set_at<0, 96>(result, B_rd0_res);
	hw_uint<32>  B_rd1_res = B_rd1_select(C, d0, d1, dynamic_address);
	set_at<32, 96>(result, B_rd1_res);
	hw_uint<32>  B_rd2_res = B_rd2_select(C, d0, d1, dynamic_address);
	set_at<64, 96>(result, B_rd2_res);
	return result;
}

// C_update_0_write
//	C_C_update_0_write0
inline void C_C_update_0_write_bundle_write(hw_uint<32>& C_update_0_write, C_cache& C, int d0, int d1, int dynamic_address) {
	hw_uint<32>  C_C_update_0_write0_res = C_update_0_write.extract<0, 31>();
	C_C_update_0_write0_write(C_C_update_0_write0_res, C, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 1344 bits


// Operation logic
inline void C_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */C_oc, C_cache& C, int d0, int d1) {
  // Dynamic address computation

	// Consume: C_oc
	auto C_oc_1_m_C_1__p__0_c__1_m_C_0__p__0_value = C_oc.read();
	auto compute_result = C_generated_compute_unrolled_1(C_oc_1_m_C_1__p__0_c__1_m_C_0__p__0_value);
	// Produce: C
	C_C_update_0_write_bundle_write(/* arg names */compute_result, C, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void B_update_0(C_cache& C, B_cache& B, int d0, int d1) {
  // Dynamic address computation

	// Consume: C
	auto C_1_m_B_1__p___m_2_c__1_m_B_0__p__0_value = C_B_update_0_read_bundle_read(C/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = B_generated_compute_unrolled_1(C_1_m_B_1__p___m_2_c__1_m_B_0__p__0_value);
	// Produce: B
	B_B_update_0_write_bundle_write(/* arg names */compute_result, B, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void A_update_0(C_cache& C, A_cache& A, int d0, int d1) {
  // Dynamic address computation

	// Consume: C
	auto C_1_m_A_1__p__2_c__1_m_A_0__p__0_value = C_A_update_0_read_bundle_read(C/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = A_generated_compute_unrolled_1(C_1_m_A_1__p__2_c__1_m_A_0__p__0_value);
	// Produce: A
	A_A_update_0_write_bundle_write(/* arg names */compute_result, A, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void D_update_0(A_cache& A, B_cache& B, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */D, int d0, int d1) {
  // Dynamic address computation

	// Consume: A
	auto A_1_m_D_1__p__0_c__1_m_D_0__p__0_value = A_D_update_0_read_bundle_read(A/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: B
	auto B_1_m_D_1__p__0_c__1_m_D_0__p__0_value = B_D_update_0_read_bundle_read(B/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = D_generated_compute_unrolled_1(A_1_m_D_1__p__0_c__1_m_D_0__p__0_value, B_1_m_D_1__p__0_c__1_m_D_0__p__0_value);
	// Produce: D
	D.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void D_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */C_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */D) {

#ifndef __SYNTHESIS__
  ofstream debug_file("D_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  A_cache A;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  B_cache B;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  C_cache C;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { B_update_0[d0, d1 = 0] -> [2, 0, d0] : 0 <= d0 <= 11; D_update_0[d0, d1 = 0] -> [4, 0, d0] : 0 <= d0 <= 9; A_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 11; C_update_0[d0, d1 = 0] -> [1, 0, d0] : -2 <= d0 <= 15 }
//   { B_update_0[d0, d1 = 0] -> [2, 0, d0] : 0 <= d0 <= 11 }
// Condition for B_update_0(((((1*i1)) == 0) && (((-2 + 1*i0)) == 0) && (((1*i2)) >= 0) && (((11 + -1*i2)) >= 0)))
//   { D_update_0[d0, d1 = 0] -> [4, 0, d0] : 0 <= d0 <= 9 }
// Condition for D_update_0(((((1*i1)) == 0) && (((-4 + 1*i0)) == 0) && (((1*i2)) >= 0) && (((9 + -1*i2)) >= 0)))
//   { A_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 11 }
// Condition for A_update_0(((((1*i1)) == 0) && (((-3 + 1*i0)) == 0) && (((1*i2)) >= 0) && (((11 + -1*i2)) >= 0)))
//   { C_update_0[d0, d1 = 0] -> [1, 0, d0] : -2 <= d0 <= 15 }
// Condition for C_update_0(((((1*i1)) == 0) && (((-1 + 1*i0)) == 0) && (((2 + 1*i2)) >= 0) && (((15 + -1*i2)) >= 0)))

	{
	  for (int c2 = -2; c2 <= 15; c2 += 1)
	    C_update_0(C_oc /* buf name */, C, c2, 0);
	  for (int c2 = 0; c2 <= 11; c2 += 1)
	    B_update_0(C /* buf name */, B, c2, 0);
	  for (int c2 = 0; c2 <= 11; c2 += 1)
	    A_update_0(C /* buf name */, A, c2, 0);
	  for (int c2 = 0; c2 <= 9; c2 += 1)
	    D_update_0(A /* buf name */, B /* buf name */, D, c2, 0);
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void D_naive_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */C_oc, HWStream<hw_uint<32> >& /* get_args num ports = 1 */D, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    D_naive(C_oc, D);
  }
}
#ifdef __SYNTHESIS__
  // { C_update_0[root = 0, C_0 = 0, C_1] -> C_oc[C_1, 0] : -2 <= C_1 <= 15 }
const int C_update_0_read_pipe0_num_transfers = 18;
  // { D_update_0[root = 0, D_0 = 0, D_1] -> D[D_1, 0] : 0 <= D_1 <= 9 }
const int D_update_0_write_pipe0_num_transfers = 10;


extern "C" {

void D_naive_accel(hw_uint<32>* C_update_0_read_pipe0, hw_uint<32>* D_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = C_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = D_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = C_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = D_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > C_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > D_update_0_write_pipe0_channel;

  burst_read<32>(C_update_0_read_pipe0, C_update_0_read_pipe0_channel, C_update_0_read_pipe0_num_transfers*size);

  D_naive_wrapper(C_update_0_read_pipe0_channel, D_update_0_write_pipe0_channel, size);

  burst_write<32>(D_update_0_write_pipe0, D_update_0_write_pipe0_channel, D_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void D_naive_rdai(HWStream<hw_uint<32> >& C_update_0_read_pipe0, HWStream<hw_uint<32> >&  D_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = C_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = D_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  D_naive(C_update_0_read_pipe0, D_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

