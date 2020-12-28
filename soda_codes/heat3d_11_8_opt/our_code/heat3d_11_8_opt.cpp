#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3d_11_8_opt_compute_units.h
#include "heat3d_11_8_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-72, 584], [-10, 520], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 7
  // 0, 85, 44689, 44772, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 82> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 83> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 44603> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44771() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44772() {
		return f6;
	}

	inline hw_uint<32>  peek_44773() {
		return f8;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f10;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-71, 577], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-70, 578], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-69, 579], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-68, 580], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-67, 581], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-66, 582], [-10, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 6
  // 0, 85, 44689, 44773, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 44603> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f8;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-73, 583], [-9, 521], [-9, 520]}
	// Capacity: 89462
	// # of read delays: 7
  // 0, 85, 44689, 44773, 44774, 44857, 89461
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 84> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 44603> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 82> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 44603> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_85() {
		return f2;
	}

	inline hw_uint<32>  peek_44688() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_44689() {
		return f4;
	}

	inline hw_uint<32>  peek_44772() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_44773() {
		return f6;
	}

	inline hw_uint<32>  peek_44774() {
		return f8;
	}

	inline hw_uint<32>  peek_44856() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_44857() {
		return f10;
	}

	inline hw_uint<32>  peek_89460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_89461() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 44603
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 44603 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_0_cache {
  // # of banks: 8
  h3_0_h3_0_update_0_write0_merged_banks_7_cache h3_0_h3_0_update_0_write0_merged_banks_7;
  h3_0_h3_0_update_0_write1_merged_banks_7_cache h3_0_h3_0_update_0_write1_merged_banks_7;
  h3_0_h3_0_update_0_write2_merged_banks_7_cache h3_0_h3_0_update_0_write2_merged_banks_7;
  h3_0_h3_0_update_0_write3_merged_banks_7_cache h3_0_h3_0_update_0_write3_merged_banks_7;
  h3_0_h3_0_update_0_write4_merged_banks_7_cache h3_0_h3_0_update_0_write4_merged_banks_7;
  h3_0_h3_0_update_0_write5_merged_banks_7_cache h3_0_h3_0_update_0_write5_merged_banks_7;
  h3_0_h3_0_update_0_write6_merged_banks_7_cache h3_0_h3_0_update_0_write6_merged_banks_7;
  h3_0_h3_0_update_0_write7_merged_banks_7_cache h3_0_h3_0_update_0_write7_merged_banks_7;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.push(h3_0_h3_0_update_0_write1);
}

inline void h3_0_h3_0_update_0_write2_write(hw_uint<32> & h3_0_h3_0_update_0_write2, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.push(h3_0_h3_0_update_0_write2);
}

inline void h3_0_h3_0_update_0_write3_write(hw_uint<32> & h3_0_h3_0_update_0_write3, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.push(h3_0_h3_0_update_0_write3);
}

inline void h3_0_h3_0_update_0_write4_write(hw_uint<32> & h3_0_h3_0_update_0_write4, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.push(h3_0_h3_0_update_0_write4);
}

inline void h3_0_h3_0_update_0_write5_write(hw_uint<32> & h3_0_h3_0_update_0_write5, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.push(h3_0_h3_0_update_0_write5);
}

inline void h3_0_h3_0_update_0_write6_write(hw_uint<32> & h3_0_h3_0_update_0_write6, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.push(h3_0_h3_0_update_0_write6);
}

inline void h3_0_h3_0_update_0_write7_write(hw_uint<32> & h3_0_h3_0_update_0_write7, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.push(h3_0_h3_0_update_0_write7);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[-1 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_44774();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd10_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd10 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd11_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd11 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd12_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd12 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd13_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd13 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd14_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd14 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd15_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd15 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd16_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd16 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd17_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd17 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd18_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd18 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd19_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd19 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd20_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd20 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd21_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd21 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[2 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd22_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd22 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd23_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd23 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd24_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd24 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd25_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd25 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd26_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd26 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd27_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd27 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd28_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd28 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[3 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd29_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd29 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd30_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd30 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd31_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd31 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd32_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd32 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd33_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd33 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd34_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd34 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd35_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd35 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[4 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd36_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd36 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd37_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd37 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd38_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd38 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd39_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd39 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd40_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd40 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd41_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd41 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd42_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd42 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[5 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd43_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd43 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd44_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd44 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd45_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd45 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd46_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd46 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd47_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd47 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd48_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd48 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd49_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd49 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[6 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd50_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd50 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd51_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd51 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd52_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd52 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd53_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd53 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, d1, 1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_85();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd54_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd54 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[7 + 8d0, 1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_7.peek_44689();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd55_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd55 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_44772();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[8d0, d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_44773();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, -1 + d1, d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_44857();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + 8d0, d1, -1 + d2] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_7.peek_89461();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
//	h3_0_h3_0_update_0_write2
//	h3_0_h3_0_update_0_write3
//	h3_0_h3_0_update_0_write4
//	h3_0_h3_0_update_0_write5
//	h3_0_h3_0_update_0_write6
//	h3_0_h3_0_update_0_write7
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<256>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write2_res = h3_0_update_0_write.extract<64, 95>();
	h3_0_h3_0_update_0_write2_write(h3_0_h3_0_update_0_write2_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write3_res = h3_0_update_0_write.extract<96, 127>();
	h3_0_h3_0_update_0_write3_write(h3_0_h3_0_update_0_write3_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write4_res = h3_0_update_0_write.extract<128, 159>();
	h3_0_h3_0_update_0_write4_write(h3_0_h3_0_update_0_write4_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write5_res = h3_0_update_0_write.extract<160, 191>();
	h3_0_h3_0_update_0_write5_write(h3_0_h3_0_update_0_write5_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write6_res = h3_0_update_0_write.extract<192, 223>();
	h3_0_h3_0_update_0_write6_write(h3_0_h3_0_update_0_write6_res, h3_0, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write7_res = h3_0_update_0_write.extract<224, 255>();
	h3_0_h3_0_update_0_write7_write(h3_0_h3_0_update_0_write7_res, h3_0, d0, d1, d2, dynamic_address);
}

// h3_1_update_0_read
//	h3_1_rd0
//	h3_1_rd1
//	h3_1_rd2
//	h3_1_rd3
//	h3_1_rd4
//	h3_1_rd5
//	h3_1_rd6
//	h3_1_rd7
//	h3_1_rd8
//	h3_1_rd9
//	h3_1_rd10
//	h3_1_rd11
//	h3_1_rd12
//	h3_1_rd13
//	h3_1_rd14
//	h3_1_rd15
//	h3_1_rd16
//	h3_1_rd17
//	h3_1_rd18
//	h3_1_rd19
//	h3_1_rd20
//	h3_1_rd21
//	h3_1_rd22
//	h3_1_rd23
//	h3_1_rd24
//	h3_1_rd25
//	h3_1_rd26
//	h3_1_rd27
//	h3_1_rd28
//	h3_1_rd29
//	h3_1_rd30
//	h3_1_rd31
//	h3_1_rd32
//	h3_1_rd33
//	h3_1_rd34
//	h3_1_rd35
//	h3_1_rd36
//	h3_1_rd37
//	h3_1_rd38
//	h3_1_rd39
//	h3_1_rd40
//	h3_1_rd41
//	h3_1_rd42
//	h3_1_rd43
//	h3_1_rd44
//	h3_1_rd45
//	h3_1_rd46
//	h3_1_rd47
//	h3_1_rd48
//	h3_1_rd49
//	h3_1_rd50
//	h3_1_rd51
//	h3_1_rd52
//	h3_1_rd53
//	h3_1_rd54
//	h3_1_rd55
inline hw_uint<1792> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_1_rd0
    // h3_1_rd1
    // h3_1_rd2
    // h3_1_rd3
    // h3_1_rd4
    // h3_1_rd5
    // h3_1_rd6
    // h3_1_rd7
    // h3_1_rd8
    // h3_1_rd9
    // h3_1_rd10
    // h3_1_rd11
    // h3_1_rd12
    // h3_1_rd13
    // h3_1_rd14
    // h3_1_rd15
    // h3_1_rd16
    // h3_1_rd17
    // h3_1_rd18
    // h3_1_rd19
    // h3_1_rd20
    // h3_1_rd21
    // h3_1_rd22
    // h3_1_rd23
    // h3_1_rd24
    // h3_1_rd25
    // h3_1_rd26
    // h3_1_rd27
    // h3_1_rd28
    // h3_1_rd29
    // h3_1_rd30
    // h3_1_rd31
    // h3_1_rd32
    // h3_1_rd33
    // h3_1_rd34
    // h3_1_rd35
    // h3_1_rd36
    // h3_1_rd37
    // h3_1_rd38
    // h3_1_rd39
    // h3_1_rd40
    // h3_1_rd41
    // h3_1_rd42
    // h3_1_rd43
    // h3_1_rd44
    // h3_1_rd45
    // h3_1_rd46
    // h3_1_rd47
    // h3_1_rd48
    // h3_1_rd49
    // h3_1_rd50
    // h3_1_rd51
    // h3_1_rd52
    // h3_1_rd53
    // h3_1_rd54
    // h3_1_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_1_rd9_res);
	hw_uint<32>  h3_1_rd10_res = h3_1_rd10_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_1_rd10_res);
	hw_uint<32>  h3_1_rd11_res = h3_1_rd11_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_1_rd11_res);
	hw_uint<32>  h3_1_rd12_res = h3_1_rd12_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_1_rd12_res);
	hw_uint<32>  h3_1_rd13_res = h3_1_rd13_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_1_rd13_res);
	hw_uint<32>  h3_1_rd14_res = h3_1_rd14_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_1_rd14_res);
	hw_uint<32>  h3_1_rd15_res = h3_1_rd15_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_1_rd15_res);
	hw_uint<32>  h3_1_rd16_res = h3_1_rd16_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_1_rd16_res);
	hw_uint<32>  h3_1_rd17_res = h3_1_rd17_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_1_rd17_res);
	hw_uint<32>  h3_1_rd18_res = h3_1_rd18_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_1_rd18_res);
	hw_uint<32>  h3_1_rd19_res = h3_1_rd19_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_1_rd19_res);
	hw_uint<32>  h3_1_rd20_res = h3_1_rd20_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_1_rd20_res);
	hw_uint<32>  h3_1_rd21_res = h3_1_rd21_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_1_rd21_res);
	hw_uint<32>  h3_1_rd22_res = h3_1_rd22_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_1_rd22_res);
	hw_uint<32>  h3_1_rd23_res = h3_1_rd23_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_1_rd23_res);
	hw_uint<32>  h3_1_rd24_res = h3_1_rd24_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_1_rd24_res);
	hw_uint<32>  h3_1_rd25_res = h3_1_rd25_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_1_rd25_res);
	hw_uint<32>  h3_1_rd26_res = h3_1_rd26_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_1_rd26_res);
	hw_uint<32>  h3_1_rd27_res = h3_1_rd27_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_1_rd27_res);
	hw_uint<32>  h3_1_rd28_res = h3_1_rd28_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_1_rd28_res);
	hw_uint<32>  h3_1_rd29_res = h3_1_rd29_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_1_rd29_res);
	hw_uint<32>  h3_1_rd30_res = h3_1_rd30_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_1_rd30_res);
	hw_uint<32>  h3_1_rd31_res = h3_1_rd31_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_1_rd31_res);
	hw_uint<32>  h3_1_rd32_res = h3_1_rd32_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_1_rd32_res);
	hw_uint<32>  h3_1_rd33_res = h3_1_rd33_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_1_rd33_res);
	hw_uint<32>  h3_1_rd34_res = h3_1_rd34_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_1_rd34_res);
	hw_uint<32>  h3_1_rd35_res = h3_1_rd35_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_1_rd35_res);
	hw_uint<32>  h3_1_rd36_res = h3_1_rd36_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_1_rd36_res);
	hw_uint<32>  h3_1_rd37_res = h3_1_rd37_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_1_rd37_res);
	hw_uint<32>  h3_1_rd38_res = h3_1_rd38_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_1_rd38_res);
	hw_uint<32>  h3_1_rd39_res = h3_1_rd39_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_1_rd39_res);
	hw_uint<32>  h3_1_rd40_res = h3_1_rd40_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_1_rd40_res);
	hw_uint<32>  h3_1_rd41_res = h3_1_rd41_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_1_rd41_res);
	hw_uint<32>  h3_1_rd42_res = h3_1_rd42_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_1_rd42_res);
	hw_uint<32>  h3_1_rd43_res = h3_1_rd43_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_1_rd43_res);
	hw_uint<32>  h3_1_rd44_res = h3_1_rd44_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_1_rd44_res);
	hw_uint<32>  h3_1_rd45_res = h3_1_rd45_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_1_rd45_res);
	hw_uint<32>  h3_1_rd46_res = h3_1_rd46_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_1_rd46_res);
	hw_uint<32>  h3_1_rd47_res = h3_1_rd47_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_1_rd47_res);
	hw_uint<32>  h3_1_rd48_res = h3_1_rd48_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_1_rd48_res);
	hw_uint<32>  h3_1_rd49_res = h3_1_rd49_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_1_rd49_res);
	hw_uint<32>  h3_1_rd50_res = h3_1_rd50_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_1_rd50_res);
	hw_uint<32>  h3_1_rd51_res = h3_1_rd51_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_1_rd51_res);
	hw_uint<32>  h3_1_rd52_res = h3_1_rd52_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_1_rd52_res);
	hw_uint<32>  h3_1_rd53_res = h3_1_rd53_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_1_rd53_res);
	hw_uint<32>  h3_1_rd54_res = h3_1_rd54_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_1_rd54_res);
	hw_uint<32>  h3_1_rd55_res = h3_1_rd55_select(h3_0, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_1_rd55_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-64, 576], [-9, 519], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 7
  // 0, 83, 43461, 43542, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 80> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 81> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 43377> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43542() {
		return f6;
	}

	inline hw_uint<32>  peek_43543() {
		return f8;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f10;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-63, 569], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-62, 570], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-61, 571], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-60, 572], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-59, 573], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-58, 574], [-9, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 6
  // 0, 83, 43461, 43543, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 43377> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f8;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-65, 575], [-8, 520], [-8, 519]}
	// Capacity: 87004
	// # of read delays: 7
  // 0, 83, 43461, 43543, 43544, 43625, 87003
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 82> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 43377> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 80> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 43377> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_83() {
		return f2;
	}

	inline hw_uint<32>  peek_43460() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_43461() {
		return f4;
	}

	inline hw_uint<32>  peek_43542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_43543() {
		return f6;
	}

	inline hw_uint<32>  peek_43544() {
		return f8;
	}

	inline hw_uint<32>  peek_43624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_43625() {
		return f10;
	}

	inline hw_uint<32>  peek_87002() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_87003() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 43377
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 43377 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_1_cache {
  // # of banks: 8
  h3_1_h3_1_update_0_write0_merged_banks_7_cache h3_1_h3_1_update_0_write0_merged_banks_7;
  h3_1_h3_1_update_0_write1_merged_banks_7_cache h3_1_h3_1_update_0_write1_merged_banks_7;
  h3_1_h3_1_update_0_write2_merged_banks_7_cache h3_1_h3_1_update_0_write2_merged_banks_7;
  h3_1_h3_1_update_0_write3_merged_banks_7_cache h3_1_h3_1_update_0_write3_merged_banks_7;
  h3_1_h3_1_update_0_write4_merged_banks_7_cache h3_1_h3_1_update_0_write4_merged_banks_7;
  h3_1_h3_1_update_0_write5_merged_banks_7_cache h3_1_h3_1_update_0_write5_merged_banks_7;
  h3_1_h3_1_update_0_write6_merged_banks_7_cache h3_1_h3_1_update_0_write6_merged_banks_7;
  h3_1_h3_1_update_0_write7_merged_banks_7_cache h3_1_h3_1_update_0_write7_merged_banks_7;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.push(h3_1_h3_1_update_0_write0);
}

inline void h3_1_h3_1_update_0_write1_write(hw_uint<32> & h3_1_h3_1_update_0_write1, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.push(h3_1_h3_1_update_0_write1);
}

inline void h3_1_h3_1_update_0_write2_write(hw_uint<32> & h3_1_h3_1_update_0_write2, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.push(h3_1_h3_1_update_0_write2);
}

inline void h3_1_h3_1_update_0_write3_write(hw_uint<32> & h3_1_h3_1_update_0_write3, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.push(h3_1_h3_1_update_0_write3);
}

inline void h3_1_h3_1_update_0_write4_write(hw_uint<32> & h3_1_h3_1_update_0_write4, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.push(h3_1_h3_1_update_0_write4);
}

inline void h3_1_h3_1_update_0_write5_write(hw_uint<32> & h3_1_h3_1_update_0_write5, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.push(h3_1_h3_1_update_0_write5);
}

inline void h3_1_h3_1_update_0_write6_write(hw_uint<32> & h3_1_h3_1_update_0_write6, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.push(h3_1_h3_1_update_0_write6);
}

inline void h3_1_h3_1_update_0_write7_write(hw_uint<32> & h3_1_h3_1_update_0_write7, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.push(h3_1_h3_1_update_0_write7);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[-1 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_43544();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd10_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd10 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd11_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd11 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd12_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd12 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd13_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd13 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd14_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd14 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd15_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd15 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd16_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd16 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd17_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd17 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd18_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd18 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd19_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd19 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd20_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd20 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd21_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd21 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[2 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd22_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd22 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd23_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd23 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd24_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd24 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd25_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd25 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd26_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd26 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd27_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd27 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd28_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd28 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[3 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd29_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd29 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd30_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd30 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd31_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd31 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd32_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd32 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd33_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd33 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd34_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd34 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd35_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd35 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[4 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd36_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd36 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd37_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd37 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd38_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd38 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd39_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd39 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd40_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd40 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd41_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd41 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd42_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd42 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[5 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd43_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd43 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd44_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd44 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd45_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd45 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd46_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd46 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd47_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd47 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd48_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd48 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd49_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd49 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[6 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd50_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd50 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd51_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd51 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd52_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd52 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd53_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd53 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, d1, 1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_83();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd54_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd54 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[7 + 8d0, 1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_7.peek_43461();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd55_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd55 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_43542();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[8d0, d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_43543();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, -1 + d1, d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_43625();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + 8d0, d1, -1 + d2] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_7.peek_87003();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
//	h3_1_h3_1_update_0_write1
//	h3_1_h3_1_update_0_write2
//	h3_1_h3_1_update_0_write3
//	h3_1_h3_1_update_0_write4
//	h3_1_h3_1_update_0_write5
//	h3_1_h3_1_update_0_write6
//	h3_1_h3_1_update_0_write7
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<256>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write1_res = h3_1_update_0_write.extract<32, 63>();
	h3_1_h3_1_update_0_write1_write(h3_1_h3_1_update_0_write1_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write2_res = h3_1_update_0_write.extract<64, 95>();
	h3_1_h3_1_update_0_write2_write(h3_1_h3_1_update_0_write2_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write3_res = h3_1_update_0_write.extract<96, 127>();
	h3_1_h3_1_update_0_write3_write(h3_1_h3_1_update_0_write3_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write4_res = h3_1_update_0_write.extract<128, 159>();
	h3_1_h3_1_update_0_write4_write(h3_1_h3_1_update_0_write4_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write5_res = h3_1_update_0_write.extract<160, 191>();
	h3_1_h3_1_update_0_write5_write(h3_1_h3_1_update_0_write5_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write6_res = h3_1_update_0_write.extract<192, 223>();
	h3_1_h3_1_update_0_write6_write(h3_1_h3_1_update_0_write6_res, h3_1, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write7_res = h3_1_update_0_write.extract<224, 255>();
	h3_1_h3_1_update_0_write7_write(h3_1_h3_1_update_0_write7_res, h3_1, d0, d1, d2, dynamic_address);
}

// h3_2_update_0_read
//	h3_2_rd0
//	h3_2_rd1
//	h3_2_rd2
//	h3_2_rd3
//	h3_2_rd4
//	h3_2_rd5
//	h3_2_rd6
//	h3_2_rd7
//	h3_2_rd8
//	h3_2_rd9
//	h3_2_rd10
//	h3_2_rd11
//	h3_2_rd12
//	h3_2_rd13
//	h3_2_rd14
//	h3_2_rd15
//	h3_2_rd16
//	h3_2_rd17
//	h3_2_rd18
//	h3_2_rd19
//	h3_2_rd20
//	h3_2_rd21
//	h3_2_rd22
//	h3_2_rd23
//	h3_2_rd24
//	h3_2_rd25
//	h3_2_rd26
//	h3_2_rd27
//	h3_2_rd28
//	h3_2_rd29
//	h3_2_rd30
//	h3_2_rd31
//	h3_2_rd32
//	h3_2_rd33
//	h3_2_rd34
//	h3_2_rd35
//	h3_2_rd36
//	h3_2_rd37
//	h3_2_rd38
//	h3_2_rd39
//	h3_2_rd40
//	h3_2_rd41
//	h3_2_rd42
//	h3_2_rd43
//	h3_2_rd44
//	h3_2_rd45
//	h3_2_rd46
//	h3_2_rd47
//	h3_2_rd48
//	h3_2_rd49
//	h3_2_rd50
//	h3_2_rd51
//	h3_2_rd52
//	h3_2_rd53
//	h3_2_rd54
//	h3_2_rd55
inline hw_uint<1792> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_2_rd0
    // h3_2_rd1
    // h3_2_rd2
    // h3_2_rd3
    // h3_2_rd4
    // h3_2_rd5
    // h3_2_rd6
    // h3_2_rd7
    // h3_2_rd8
    // h3_2_rd9
    // h3_2_rd10
    // h3_2_rd11
    // h3_2_rd12
    // h3_2_rd13
    // h3_2_rd14
    // h3_2_rd15
    // h3_2_rd16
    // h3_2_rd17
    // h3_2_rd18
    // h3_2_rd19
    // h3_2_rd20
    // h3_2_rd21
    // h3_2_rd22
    // h3_2_rd23
    // h3_2_rd24
    // h3_2_rd25
    // h3_2_rd26
    // h3_2_rd27
    // h3_2_rd28
    // h3_2_rd29
    // h3_2_rd30
    // h3_2_rd31
    // h3_2_rd32
    // h3_2_rd33
    // h3_2_rd34
    // h3_2_rd35
    // h3_2_rd36
    // h3_2_rd37
    // h3_2_rd38
    // h3_2_rd39
    // h3_2_rd40
    // h3_2_rd41
    // h3_2_rd42
    // h3_2_rd43
    // h3_2_rd44
    // h3_2_rd45
    // h3_2_rd46
    // h3_2_rd47
    // h3_2_rd48
    // h3_2_rd49
    // h3_2_rd50
    // h3_2_rd51
    // h3_2_rd52
    // h3_2_rd53
    // h3_2_rd54
    // h3_2_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_2_rd9_res);
	hw_uint<32>  h3_2_rd10_res = h3_2_rd10_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_2_rd10_res);
	hw_uint<32>  h3_2_rd11_res = h3_2_rd11_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_2_rd11_res);
	hw_uint<32>  h3_2_rd12_res = h3_2_rd12_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_2_rd12_res);
	hw_uint<32>  h3_2_rd13_res = h3_2_rd13_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_2_rd13_res);
	hw_uint<32>  h3_2_rd14_res = h3_2_rd14_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_2_rd14_res);
	hw_uint<32>  h3_2_rd15_res = h3_2_rd15_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_2_rd15_res);
	hw_uint<32>  h3_2_rd16_res = h3_2_rd16_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_2_rd16_res);
	hw_uint<32>  h3_2_rd17_res = h3_2_rd17_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_2_rd17_res);
	hw_uint<32>  h3_2_rd18_res = h3_2_rd18_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_2_rd18_res);
	hw_uint<32>  h3_2_rd19_res = h3_2_rd19_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_2_rd19_res);
	hw_uint<32>  h3_2_rd20_res = h3_2_rd20_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_2_rd20_res);
	hw_uint<32>  h3_2_rd21_res = h3_2_rd21_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_2_rd21_res);
	hw_uint<32>  h3_2_rd22_res = h3_2_rd22_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_2_rd22_res);
	hw_uint<32>  h3_2_rd23_res = h3_2_rd23_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_2_rd23_res);
	hw_uint<32>  h3_2_rd24_res = h3_2_rd24_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_2_rd24_res);
	hw_uint<32>  h3_2_rd25_res = h3_2_rd25_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_2_rd25_res);
	hw_uint<32>  h3_2_rd26_res = h3_2_rd26_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_2_rd26_res);
	hw_uint<32>  h3_2_rd27_res = h3_2_rd27_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_2_rd27_res);
	hw_uint<32>  h3_2_rd28_res = h3_2_rd28_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_2_rd28_res);
	hw_uint<32>  h3_2_rd29_res = h3_2_rd29_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_2_rd29_res);
	hw_uint<32>  h3_2_rd30_res = h3_2_rd30_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_2_rd30_res);
	hw_uint<32>  h3_2_rd31_res = h3_2_rd31_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_2_rd31_res);
	hw_uint<32>  h3_2_rd32_res = h3_2_rd32_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_2_rd32_res);
	hw_uint<32>  h3_2_rd33_res = h3_2_rd33_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_2_rd33_res);
	hw_uint<32>  h3_2_rd34_res = h3_2_rd34_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_2_rd34_res);
	hw_uint<32>  h3_2_rd35_res = h3_2_rd35_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_2_rd35_res);
	hw_uint<32>  h3_2_rd36_res = h3_2_rd36_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_2_rd36_res);
	hw_uint<32>  h3_2_rd37_res = h3_2_rd37_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_2_rd37_res);
	hw_uint<32>  h3_2_rd38_res = h3_2_rd38_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_2_rd38_res);
	hw_uint<32>  h3_2_rd39_res = h3_2_rd39_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_2_rd39_res);
	hw_uint<32>  h3_2_rd40_res = h3_2_rd40_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_2_rd40_res);
	hw_uint<32>  h3_2_rd41_res = h3_2_rd41_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_2_rd41_res);
	hw_uint<32>  h3_2_rd42_res = h3_2_rd42_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_2_rd42_res);
	hw_uint<32>  h3_2_rd43_res = h3_2_rd43_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_2_rd43_res);
	hw_uint<32>  h3_2_rd44_res = h3_2_rd44_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_2_rd44_res);
	hw_uint<32>  h3_2_rd45_res = h3_2_rd45_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_2_rd45_res);
	hw_uint<32>  h3_2_rd46_res = h3_2_rd46_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_2_rd46_res);
	hw_uint<32>  h3_2_rd47_res = h3_2_rd47_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_2_rd47_res);
	hw_uint<32>  h3_2_rd48_res = h3_2_rd48_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_2_rd48_res);
	hw_uint<32>  h3_2_rd49_res = h3_2_rd49_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_2_rd49_res);
	hw_uint<32>  h3_2_rd50_res = h3_2_rd50_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_2_rd50_res);
	hw_uint<32>  h3_2_rd51_res = h3_2_rd51_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_2_rd51_res);
	hw_uint<32>  h3_2_rd52_res = h3_2_rd52_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_2_rd52_res);
	hw_uint<32>  h3_2_rd53_res = h3_2_rd53_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_2_rd53_res);
	hw_uint<32>  h3_2_rd54_res = h3_2_rd54_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_2_rd54_res);
	hw_uint<32>  h3_2_rd55_res = h3_2_rd55_select(h3_1, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_2_rd55_res);
	return result;
}

struct h3_10_h3_10_update_0_write0_to_heat3d_11_8_rd0_cache {
	// RAM Box: {[0, 504], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write1_to_heat3d_11_8_rd1_cache {
	// RAM Box: {[1, 505], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write2_to_heat3d_11_8_rd2_cache {
	// RAM Box: {[2, 506], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write3_to_heat3d_11_8_rd3_cache {
	// RAM Box: {[3, 507], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write4_to_heat3d_11_8_rd4_cache {
	// RAM Box: {[4, 508], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write5_to_heat3d_11_8_rd5_cache {
	// RAM Box: {[5, 509], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write6_to_heat3d_11_8_rd6_cache {
	// RAM Box: {[6, 510], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_h3_10_update_0_write7_to_heat3d_11_8_rd7_cache {
	// RAM Box: {[7, 511], [0, 511], [0, 511]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct h3_10_cache {
  // # of banks: 8
  h3_10_h3_10_update_0_write0_to_heat3d_11_8_rd0_cache h3_10_h3_10_update_0_write0_to_heat3d_11_8_rd0;
  h3_10_h3_10_update_0_write1_to_heat3d_11_8_rd1_cache h3_10_h3_10_update_0_write1_to_heat3d_11_8_rd1;
  h3_10_h3_10_update_0_write2_to_heat3d_11_8_rd2_cache h3_10_h3_10_update_0_write2_to_heat3d_11_8_rd2;
  h3_10_h3_10_update_0_write3_to_heat3d_11_8_rd3_cache h3_10_h3_10_update_0_write3_to_heat3d_11_8_rd3;
  h3_10_h3_10_update_0_write4_to_heat3d_11_8_rd4_cache h3_10_h3_10_update_0_write4_to_heat3d_11_8_rd4;
  h3_10_h3_10_update_0_write5_to_heat3d_11_8_rd5_cache h3_10_h3_10_update_0_write5_to_heat3d_11_8_rd5;
  h3_10_h3_10_update_0_write6_to_heat3d_11_8_rd6_cache h3_10_h3_10_update_0_write6_to_heat3d_11_8_rd6;
  h3_10_h3_10_update_0_write7_to_heat3d_11_8_rd7_cache h3_10_h3_10_update_0_write7_to_heat3d_11_8_rd7;
};



inline void h3_10_h3_10_update_0_write0_write(hw_uint<32> & h3_10_h3_10_update_0_write0, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write0_to_heat3d_11_8_rd0.push(h3_10_h3_10_update_0_write0);
}

inline void h3_10_h3_10_update_0_write1_write(hw_uint<32> & h3_10_h3_10_update_0_write1, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write1_to_heat3d_11_8_rd1.push(h3_10_h3_10_update_0_write1);
}

inline void h3_10_h3_10_update_0_write2_write(hw_uint<32> & h3_10_h3_10_update_0_write2, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write2_to_heat3d_11_8_rd2.push(h3_10_h3_10_update_0_write2);
}

inline void h3_10_h3_10_update_0_write3_write(hw_uint<32> & h3_10_h3_10_update_0_write3, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write3_to_heat3d_11_8_rd3.push(h3_10_h3_10_update_0_write3);
}

inline void h3_10_h3_10_update_0_write4_write(hw_uint<32> & h3_10_h3_10_update_0_write4, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write4_to_heat3d_11_8_rd4.push(h3_10_h3_10_update_0_write4);
}

inline void h3_10_h3_10_update_0_write5_write(hw_uint<32> & h3_10_h3_10_update_0_write5, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write5_to_heat3d_11_8_rd5.push(h3_10_h3_10_update_0_write5);
}

inline void h3_10_h3_10_update_0_write6_write(hw_uint<32> & h3_10_h3_10_update_0_write6, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write6_to_heat3d_11_8_rd6.push(h3_10_h3_10_update_0_write6);
}

inline void h3_10_h3_10_update_0_write7_write(hw_uint<32> & h3_10_h3_10_update_0_write7, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write7_to_heat3d_11_8_rd7.push(h3_10_h3_10_update_0_write7);
}

inline hw_uint<32>  heat3d_11_8_rd0_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd0 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write0 = h3_10.h3_10_h3_10_update_0_write0_to_heat3d_11_8_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write0;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd1_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd1 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[1 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write1 = h3_10.h3_10_h3_10_update_0_write1_to_heat3d_11_8_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write1;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd2_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd2 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[2 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write2 = h3_10.h3_10_h3_10_update_0_write2_to_heat3d_11_8_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write2;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd3_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd3 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[3 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write3 = h3_10.h3_10_h3_10_update_0_write3_to_heat3d_11_8_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write3;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd4_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd4 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[4 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write4 = h3_10.h3_10_h3_10_update_0_write4_to_heat3d_11_8_rd4.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write4;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd5_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd5 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[5 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write5 = h3_10.h3_10_h3_10_update_0_write5_to_heat3d_11_8_rd5.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write5;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd6_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd6 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[6 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write6 = h3_10.h3_10_h3_10_update_0_write6_to_heat3d_11_8_rd6.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write6;
  return 0;
}

inline hw_uint<32>  heat3d_11_8_rd7_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_8_rd7 read pattern: { heat3d_11_8_update_0[d0, d1, d2] -> h3_10[7 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write7 = h3_10.h3_10_h3_10_update_0_write7_to_heat3d_11_8_rd7.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write7;
  return 0;
}

// # of bundles = 2
// h3_10_update_0_write
//	h3_10_h3_10_update_0_write0
//	h3_10_h3_10_update_0_write1
//	h3_10_h3_10_update_0_write2
//	h3_10_h3_10_update_0_write3
//	h3_10_h3_10_update_0_write4
//	h3_10_h3_10_update_0_write5
//	h3_10_h3_10_update_0_write6
//	h3_10_h3_10_update_0_write7
inline void h3_10_h3_10_update_0_write_bundle_write(hw_uint<256>& h3_10_update_0_write, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_10_h3_10_update_0_write0_res = h3_10_update_0_write.extract<0, 31>();
	h3_10_h3_10_update_0_write0_write(h3_10_h3_10_update_0_write0_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write1_res = h3_10_update_0_write.extract<32, 63>();
	h3_10_h3_10_update_0_write1_write(h3_10_h3_10_update_0_write1_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write2_res = h3_10_update_0_write.extract<64, 95>();
	h3_10_h3_10_update_0_write2_write(h3_10_h3_10_update_0_write2_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write3_res = h3_10_update_0_write.extract<96, 127>();
	h3_10_h3_10_update_0_write3_write(h3_10_h3_10_update_0_write3_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write4_res = h3_10_update_0_write.extract<128, 159>();
	h3_10_h3_10_update_0_write4_write(h3_10_h3_10_update_0_write4_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write5_res = h3_10_update_0_write.extract<160, 191>();
	h3_10_h3_10_update_0_write5_write(h3_10_h3_10_update_0_write5_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write6_res = h3_10_update_0_write.extract<192, 223>();
	h3_10_h3_10_update_0_write6_write(h3_10_h3_10_update_0_write6_res, h3_10, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_10_h3_10_update_0_write7_res = h3_10_update_0_write.extract<224, 255>();
	h3_10_h3_10_update_0_write7_write(h3_10_h3_10_update_0_write7_res, h3_10, d0, d1, d2, dynamic_address);
}

// heat3d_11_8_update_0_read
//	heat3d_11_8_rd0
//	heat3d_11_8_rd1
//	heat3d_11_8_rd2
//	heat3d_11_8_rd3
//	heat3d_11_8_rd4
//	heat3d_11_8_rd5
//	heat3d_11_8_rd6
//	heat3d_11_8_rd7
inline hw_uint<256> h3_10_heat3d_11_8_update_0_read_bundle_read(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 8
    // heat3d_11_8_rd0
    // heat3d_11_8_rd1
    // heat3d_11_8_rd2
    // heat3d_11_8_rd3
    // heat3d_11_8_rd4
    // heat3d_11_8_rd5
    // heat3d_11_8_rd6
    // heat3d_11_8_rd7

	hw_uint<256> result;
	hw_uint<32>  heat3d_11_8_rd0_res = heat3d_11_8_rd0_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<0, 256>(result, heat3d_11_8_rd0_res);
	hw_uint<32>  heat3d_11_8_rd1_res = heat3d_11_8_rd1_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<32, 256>(result, heat3d_11_8_rd1_res);
	hw_uint<32>  heat3d_11_8_rd2_res = heat3d_11_8_rd2_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<64, 256>(result, heat3d_11_8_rd2_res);
	hw_uint<32>  heat3d_11_8_rd3_res = heat3d_11_8_rd3_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<96, 256>(result, heat3d_11_8_rd3_res);
	hw_uint<32>  heat3d_11_8_rd4_res = heat3d_11_8_rd4_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<128, 256>(result, heat3d_11_8_rd4_res);
	hw_uint<32>  heat3d_11_8_rd5_res = heat3d_11_8_rd5_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<160, 256>(result, heat3d_11_8_rd5_res);
	hw_uint<32>  heat3d_11_8_rd6_res = heat3d_11_8_rd6_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<192, 256>(result, heat3d_11_8_rd6_res);
	hw_uint<32>  heat3d_11_8_rd7_res = heat3d_11_8_rd7_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<224, 256>(result, heat3d_11_8_rd7_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-56, 568], [-8, 518], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 7
  // 0, 81, 42241, 42320, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 78> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 79> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 42159> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42319() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42320() {
		return f6;
	}

	inline hw_uint<32>  peek_42321() {
		return f8;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f10;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-55, 561], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-54, 562], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-53, 563], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-52, 564], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-51, 565], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-50, 566], [-8, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 6
  // 0, 81, 42241, 42321, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 42159> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f8;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-57, 567], [-7, 519], [-7, 518]}
	// Capacity: 84562
	// # of read delays: 7
  // 0, 81, 42241, 42321, 42322, 42401, 84561
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 80> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 42159> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 78> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 42159> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_81() {
		return f2;
	}

	inline hw_uint<32>  peek_42240() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_42241() {
		return f4;
	}

	inline hw_uint<32>  peek_42320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_42321() {
		return f6;
	}

	inline hw_uint<32>  peek_42322() {
		return f8;
	}

	inline hw_uint<32>  peek_42400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_42401() {
		return f10;
	}

	inline hw_uint<32>  peek_84560() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_84561() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 42159
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 42159 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_2_cache {
  // # of banks: 8
  h3_2_h3_2_update_0_write0_merged_banks_7_cache h3_2_h3_2_update_0_write0_merged_banks_7;
  h3_2_h3_2_update_0_write1_merged_banks_7_cache h3_2_h3_2_update_0_write1_merged_banks_7;
  h3_2_h3_2_update_0_write2_merged_banks_7_cache h3_2_h3_2_update_0_write2_merged_banks_7;
  h3_2_h3_2_update_0_write3_merged_banks_7_cache h3_2_h3_2_update_0_write3_merged_banks_7;
  h3_2_h3_2_update_0_write4_merged_banks_7_cache h3_2_h3_2_update_0_write4_merged_banks_7;
  h3_2_h3_2_update_0_write5_merged_banks_7_cache h3_2_h3_2_update_0_write5_merged_banks_7;
  h3_2_h3_2_update_0_write6_merged_banks_7_cache h3_2_h3_2_update_0_write6_merged_banks_7;
  h3_2_h3_2_update_0_write7_merged_banks_7_cache h3_2_h3_2_update_0_write7_merged_banks_7;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.push(h3_2_h3_2_update_0_write0);
}

inline void h3_2_h3_2_update_0_write1_write(hw_uint<32> & h3_2_h3_2_update_0_write1, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.push(h3_2_h3_2_update_0_write1);
}

inline void h3_2_h3_2_update_0_write2_write(hw_uint<32> & h3_2_h3_2_update_0_write2, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.push(h3_2_h3_2_update_0_write2);
}

inline void h3_2_h3_2_update_0_write3_write(hw_uint<32> & h3_2_h3_2_update_0_write3, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.push(h3_2_h3_2_update_0_write3);
}

inline void h3_2_h3_2_update_0_write4_write(hw_uint<32> & h3_2_h3_2_update_0_write4, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.push(h3_2_h3_2_update_0_write4);
}

inline void h3_2_h3_2_update_0_write5_write(hw_uint<32> & h3_2_h3_2_update_0_write5, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.push(h3_2_h3_2_update_0_write5);
}

inline void h3_2_h3_2_update_0_write6_write(hw_uint<32> & h3_2_h3_2_update_0_write6, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.push(h3_2_h3_2_update_0_write6);
}

inline void h3_2_h3_2_update_0_write7_write(hw_uint<32> & h3_2_h3_2_update_0_write7, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.push(h3_2_h3_2_update_0_write7);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[-1 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_42322();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd10_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd10 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd11_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd11 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd12_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd12 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd13_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd13 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd14_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd14 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd15_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd15 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd16_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd16 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd17_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd17 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd18_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd18 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd19_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd19 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd20_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd20 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd21_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd21 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[2 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd22_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd22 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd23_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd23 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd24_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd24 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd25_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd25 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd26_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd26 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd27_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd27 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd28_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd28 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[3 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd29_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd29 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd30_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd30 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd31_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd31 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd32_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd32 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd33_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd33 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd34_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd34 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd35_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd35 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[4 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd36_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd36 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd37_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd37 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd38_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd38 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd39_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd39 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd40_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd40 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd41_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd41 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd42_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd42 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[5 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd43_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd43 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd44_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd44 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd45_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd45 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd46_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd46 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd47_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd47 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd48_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd48 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd49_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd49 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[6 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd50_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd50 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd51_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd51 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd52_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd52 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd53_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd53 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, d1, 1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_81();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd54_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd54 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[7 + 8d0, 1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_7.peek_42241();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd55_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd55 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_42320();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[8d0, d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_42321();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, -1 + d1, d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_42401();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + 8d0, d1, -1 + d2] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_7.peek_84561();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
//	h3_2_h3_2_update_0_write1
//	h3_2_h3_2_update_0_write2
//	h3_2_h3_2_update_0_write3
//	h3_2_h3_2_update_0_write4
//	h3_2_h3_2_update_0_write5
//	h3_2_h3_2_update_0_write6
//	h3_2_h3_2_update_0_write7
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<256>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write1_res = h3_2_update_0_write.extract<32, 63>();
	h3_2_h3_2_update_0_write1_write(h3_2_h3_2_update_0_write1_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write2_res = h3_2_update_0_write.extract<64, 95>();
	h3_2_h3_2_update_0_write2_write(h3_2_h3_2_update_0_write2_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write3_res = h3_2_update_0_write.extract<96, 127>();
	h3_2_h3_2_update_0_write3_write(h3_2_h3_2_update_0_write3_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write4_res = h3_2_update_0_write.extract<128, 159>();
	h3_2_h3_2_update_0_write4_write(h3_2_h3_2_update_0_write4_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write5_res = h3_2_update_0_write.extract<160, 191>();
	h3_2_h3_2_update_0_write5_write(h3_2_h3_2_update_0_write5_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write6_res = h3_2_update_0_write.extract<192, 223>();
	h3_2_h3_2_update_0_write6_write(h3_2_h3_2_update_0_write6_res, h3_2, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write7_res = h3_2_update_0_write.extract<224, 255>();
	h3_2_h3_2_update_0_write7_write(h3_2_h3_2_update_0_write7_res, h3_2, d0, d1, d2, dynamic_address);
}

// h3_3_update_0_read
//	h3_3_rd0
//	h3_3_rd1
//	h3_3_rd2
//	h3_3_rd3
//	h3_3_rd4
//	h3_3_rd5
//	h3_3_rd6
//	h3_3_rd7
//	h3_3_rd8
//	h3_3_rd9
//	h3_3_rd10
//	h3_3_rd11
//	h3_3_rd12
//	h3_3_rd13
//	h3_3_rd14
//	h3_3_rd15
//	h3_3_rd16
//	h3_3_rd17
//	h3_3_rd18
//	h3_3_rd19
//	h3_3_rd20
//	h3_3_rd21
//	h3_3_rd22
//	h3_3_rd23
//	h3_3_rd24
//	h3_3_rd25
//	h3_3_rd26
//	h3_3_rd27
//	h3_3_rd28
//	h3_3_rd29
//	h3_3_rd30
//	h3_3_rd31
//	h3_3_rd32
//	h3_3_rd33
//	h3_3_rd34
//	h3_3_rd35
//	h3_3_rd36
//	h3_3_rd37
//	h3_3_rd38
//	h3_3_rd39
//	h3_3_rd40
//	h3_3_rd41
//	h3_3_rd42
//	h3_3_rd43
//	h3_3_rd44
//	h3_3_rd45
//	h3_3_rd46
//	h3_3_rd47
//	h3_3_rd48
//	h3_3_rd49
//	h3_3_rd50
//	h3_3_rd51
//	h3_3_rd52
//	h3_3_rd53
//	h3_3_rd54
//	h3_3_rd55
inline hw_uint<1792> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_3_rd0
    // h3_3_rd1
    // h3_3_rd2
    // h3_3_rd3
    // h3_3_rd4
    // h3_3_rd5
    // h3_3_rd6
    // h3_3_rd7
    // h3_3_rd8
    // h3_3_rd9
    // h3_3_rd10
    // h3_3_rd11
    // h3_3_rd12
    // h3_3_rd13
    // h3_3_rd14
    // h3_3_rd15
    // h3_3_rd16
    // h3_3_rd17
    // h3_3_rd18
    // h3_3_rd19
    // h3_3_rd20
    // h3_3_rd21
    // h3_3_rd22
    // h3_3_rd23
    // h3_3_rd24
    // h3_3_rd25
    // h3_3_rd26
    // h3_3_rd27
    // h3_3_rd28
    // h3_3_rd29
    // h3_3_rd30
    // h3_3_rd31
    // h3_3_rd32
    // h3_3_rd33
    // h3_3_rd34
    // h3_3_rd35
    // h3_3_rd36
    // h3_3_rd37
    // h3_3_rd38
    // h3_3_rd39
    // h3_3_rd40
    // h3_3_rd41
    // h3_3_rd42
    // h3_3_rd43
    // h3_3_rd44
    // h3_3_rd45
    // h3_3_rd46
    // h3_3_rd47
    // h3_3_rd48
    // h3_3_rd49
    // h3_3_rd50
    // h3_3_rd51
    // h3_3_rd52
    // h3_3_rd53
    // h3_3_rd54
    // h3_3_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_3_rd9_res);
	hw_uint<32>  h3_3_rd10_res = h3_3_rd10_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_3_rd10_res);
	hw_uint<32>  h3_3_rd11_res = h3_3_rd11_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_3_rd11_res);
	hw_uint<32>  h3_3_rd12_res = h3_3_rd12_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_3_rd12_res);
	hw_uint<32>  h3_3_rd13_res = h3_3_rd13_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_3_rd13_res);
	hw_uint<32>  h3_3_rd14_res = h3_3_rd14_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_3_rd14_res);
	hw_uint<32>  h3_3_rd15_res = h3_3_rd15_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_3_rd15_res);
	hw_uint<32>  h3_3_rd16_res = h3_3_rd16_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_3_rd16_res);
	hw_uint<32>  h3_3_rd17_res = h3_3_rd17_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_3_rd17_res);
	hw_uint<32>  h3_3_rd18_res = h3_3_rd18_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_3_rd18_res);
	hw_uint<32>  h3_3_rd19_res = h3_3_rd19_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_3_rd19_res);
	hw_uint<32>  h3_3_rd20_res = h3_3_rd20_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_3_rd20_res);
	hw_uint<32>  h3_3_rd21_res = h3_3_rd21_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_3_rd21_res);
	hw_uint<32>  h3_3_rd22_res = h3_3_rd22_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_3_rd22_res);
	hw_uint<32>  h3_3_rd23_res = h3_3_rd23_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_3_rd23_res);
	hw_uint<32>  h3_3_rd24_res = h3_3_rd24_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_3_rd24_res);
	hw_uint<32>  h3_3_rd25_res = h3_3_rd25_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_3_rd25_res);
	hw_uint<32>  h3_3_rd26_res = h3_3_rd26_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_3_rd26_res);
	hw_uint<32>  h3_3_rd27_res = h3_3_rd27_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_3_rd27_res);
	hw_uint<32>  h3_3_rd28_res = h3_3_rd28_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_3_rd28_res);
	hw_uint<32>  h3_3_rd29_res = h3_3_rd29_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_3_rd29_res);
	hw_uint<32>  h3_3_rd30_res = h3_3_rd30_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_3_rd30_res);
	hw_uint<32>  h3_3_rd31_res = h3_3_rd31_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_3_rd31_res);
	hw_uint<32>  h3_3_rd32_res = h3_3_rd32_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_3_rd32_res);
	hw_uint<32>  h3_3_rd33_res = h3_3_rd33_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_3_rd33_res);
	hw_uint<32>  h3_3_rd34_res = h3_3_rd34_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_3_rd34_res);
	hw_uint<32>  h3_3_rd35_res = h3_3_rd35_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_3_rd35_res);
	hw_uint<32>  h3_3_rd36_res = h3_3_rd36_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_3_rd36_res);
	hw_uint<32>  h3_3_rd37_res = h3_3_rd37_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_3_rd37_res);
	hw_uint<32>  h3_3_rd38_res = h3_3_rd38_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_3_rd38_res);
	hw_uint<32>  h3_3_rd39_res = h3_3_rd39_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_3_rd39_res);
	hw_uint<32>  h3_3_rd40_res = h3_3_rd40_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_3_rd40_res);
	hw_uint<32>  h3_3_rd41_res = h3_3_rd41_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_3_rd41_res);
	hw_uint<32>  h3_3_rd42_res = h3_3_rd42_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_3_rd42_res);
	hw_uint<32>  h3_3_rd43_res = h3_3_rd43_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_3_rd43_res);
	hw_uint<32>  h3_3_rd44_res = h3_3_rd44_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_3_rd44_res);
	hw_uint<32>  h3_3_rd45_res = h3_3_rd45_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_3_rd45_res);
	hw_uint<32>  h3_3_rd46_res = h3_3_rd46_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_3_rd46_res);
	hw_uint<32>  h3_3_rd47_res = h3_3_rd47_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_3_rd47_res);
	hw_uint<32>  h3_3_rd48_res = h3_3_rd48_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_3_rd48_res);
	hw_uint<32>  h3_3_rd49_res = h3_3_rd49_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_3_rd49_res);
	hw_uint<32>  h3_3_rd50_res = h3_3_rd50_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_3_rd50_res);
	hw_uint<32>  h3_3_rd51_res = h3_3_rd51_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_3_rd51_res);
	hw_uint<32>  h3_3_rd52_res = h3_3_rd52_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_3_rd52_res);
	hw_uint<32>  h3_3_rd53_res = h3_3_rd53_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_3_rd53_res);
	hw_uint<32>  h3_3_rd54_res = h3_3_rd54_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_3_rd54_res);
	hw_uint<32>  h3_3_rd55_res = h3_3_rd55_select(h3_2, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_3_rd55_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-48, 560], [-7, 517], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 7
  // 0, 79, 41029, 41106, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 76> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 77> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 40949> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41105() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41106() {
		return f6;
	}

	inline hw_uint<32>  peek_41107() {
		return f8;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f10;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-47, 553], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-46, 554], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-45, 555], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-44, 556], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-43, 557], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-42, 558], [-7, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 6
  // 0, 79, 41029, 41107, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 40949> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f8;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-49, 559], [-6, 518], [-6, 517]}
	// Capacity: 82136
	// # of read delays: 7
  // 0, 79, 41029, 41107, 41108, 41185, 82135
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 78> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 40949> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 76> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 40949> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_79() {
		return f2;
	}

	inline hw_uint<32>  peek_41028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_41029() {
		return f4;
	}

	inline hw_uint<32>  peek_41106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_41107() {
		return f6;
	}

	inline hw_uint<32>  peek_41108() {
		return f8;
	}

	inline hw_uint<32>  peek_41184() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_41185() {
		return f10;
	}

	inline hw_uint<32>  peek_82134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_82135() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 40949
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 40949 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_3_cache {
  // # of banks: 8
  h3_3_h3_3_update_0_write0_merged_banks_7_cache h3_3_h3_3_update_0_write0_merged_banks_7;
  h3_3_h3_3_update_0_write1_merged_banks_7_cache h3_3_h3_3_update_0_write1_merged_banks_7;
  h3_3_h3_3_update_0_write2_merged_banks_7_cache h3_3_h3_3_update_0_write2_merged_banks_7;
  h3_3_h3_3_update_0_write3_merged_banks_7_cache h3_3_h3_3_update_0_write3_merged_banks_7;
  h3_3_h3_3_update_0_write4_merged_banks_7_cache h3_3_h3_3_update_0_write4_merged_banks_7;
  h3_3_h3_3_update_0_write5_merged_banks_7_cache h3_3_h3_3_update_0_write5_merged_banks_7;
  h3_3_h3_3_update_0_write6_merged_banks_7_cache h3_3_h3_3_update_0_write6_merged_banks_7;
  h3_3_h3_3_update_0_write7_merged_banks_7_cache h3_3_h3_3_update_0_write7_merged_banks_7;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.push(h3_3_h3_3_update_0_write0);
}

inline void h3_3_h3_3_update_0_write1_write(hw_uint<32> & h3_3_h3_3_update_0_write1, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.push(h3_3_h3_3_update_0_write1);
}

inline void h3_3_h3_3_update_0_write2_write(hw_uint<32> & h3_3_h3_3_update_0_write2, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.push(h3_3_h3_3_update_0_write2);
}

inline void h3_3_h3_3_update_0_write3_write(hw_uint<32> & h3_3_h3_3_update_0_write3, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.push(h3_3_h3_3_update_0_write3);
}

inline void h3_3_h3_3_update_0_write4_write(hw_uint<32> & h3_3_h3_3_update_0_write4, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.push(h3_3_h3_3_update_0_write4);
}

inline void h3_3_h3_3_update_0_write5_write(hw_uint<32> & h3_3_h3_3_update_0_write5, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.push(h3_3_h3_3_update_0_write5);
}

inline void h3_3_h3_3_update_0_write6_write(hw_uint<32> & h3_3_h3_3_update_0_write6, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.push(h3_3_h3_3_update_0_write6);
}

inline void h3_3_h3_3_update_0_write7_write(hw_uint<32> & h3_3_h3_3_update_0_write7, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.push(h3_3_h3_3_update_0_write7);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[-1 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_41108();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd10_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd10 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd11_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd11 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd12_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd12 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd13_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd13 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd14_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd14 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd15_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd15 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd16_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd16 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd17_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd17 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd18_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd18 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd19_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd19 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd20_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd20 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd21_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd21 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[2 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd22_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd22 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd23_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd23 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd24_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd24 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd25_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd25 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd26_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd26 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd27_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd27 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd28_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd28 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[3 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd29_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd29 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd30_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd30 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd31_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd31 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd32_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd32 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd33_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd33 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd34_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd34 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd35_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd35 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[4 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd36_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd36 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd37_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd37 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd38_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd38 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd39_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd39 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd40_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd40 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd41_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd41 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd42_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd42 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[5 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd43_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd43 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd44_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd44 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd45_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd45 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd46_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd46 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd47_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd47 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd48_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd48 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd49_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd49 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[6 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd50_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd50 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd51_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd51 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd52_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd52 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd53_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd53 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, d1, 1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_79();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd54_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd54 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[7 + 8d0, 1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_7.peek_41029();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd55_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd55 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_41106();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[8d0, d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_41107();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, -1 + d1, d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_41185();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + 8d0, d1, -1 + d2] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_7.peek_82135();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
//	h3_3_h3_3_update_0_write1
//	h3_3_h3_3_update_0_write2
//	h3_3_h3_3_update_0_write3
//	h3_3_h3_3_update_0_write4
//	h3_3_h3_3_update_0_write5
//	h3_3_h3_3_update_0_write6
//	h3_3_h3_3_update_0_write7
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<256>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write1_res = h3_3_update_0_write.extract<32, 63>();
	h3_3_h3_3_update_0_write1_write(h3_3_h3_3_update_0_write1_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write2_res = h3_3_update_0_write.extract<64, 95>();
	h3_3_h3_3_update_0_write2_write(h3_3_h3_3_update_0_write2_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write3_res = h3_3_update_0_write.extract<96, 127>();
	h3_3_h3_3_update_0_write3_write(h3_3_h3_3_update_0_write3_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write4_res = h3_3_update_0_write.extract<128, 159>();
	h3_3_h3_3_update_0_write4_write(h3_3_h3_3_update_0_write4_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write5_res = h3_3_update_0_write.extract<160, 191>();
	h3_3_h3_3_update_0_write5_write(h3_3_h3_3_update_0_write5_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write6_res = h3_3_update_0_write.extract<192, 223>();
	h3_3_h3_3_update_0_write6_write(h3_3_h3_3_update_0_write6_res, h3_3, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write7_res = h3_3_update_0_write.extract<224, 255>();
	h3_3_h3_3_update_0_write7_write(h3_3_h3_3_update_0_write7_res, h3_3, d0, d1, d2, dynamic_address);
}

// h3_4_update_0_read
//	h3_4_rd0
//	h3_4_rd1
//	h3_4_rd2
//	h3_4_rd3
//	h3_4_rd4
//	h3_4_rd5
//	h3_4_rd6
//	h3_4_rd7
//	h3_4_rd8
//	h3_4_rd9
//	h3_4_rd10
//	h3_4_rd11
//	h3_4_rd12
//	h3_4_rd13
//	h3_4_rd14
//	h3_4_rd15
//	h3_4_rd16
//	h3_4_rd17
//	h3_4_rd18
//	h3_4_rd19
//	h3_4_rd20
//	h3_4_rd21
//	h3_4_rd22
//	h3_4_rd23
//	h3_4_rd24
//	h3_4_rd25
//	h3_4_rd26
//	h3_4_rd27
//	h3_4_rd28
//	h3_4_rd29
//	h3_4_rd30
//	h3_4_rd31
//	h3_4_rd32
//	h3_4_rd33
//	h3_4_rd34
//	h3_4_rd35
//	h3_4_rd36
//	h3_4_rd37
//	h3_4_rd38
//	h3_4_rd39
//	h3_4_rd40
//	h3_4_rd41
//	h3_4_rd42
//	h3_4_rd43
//	h3_4_rd44
//	h3_4_rd45
//	h3_4_rd46
//	h3_4_rd47
//	h3_4_rd48
//	h3_4_rd49
//	h3_4_rd50
//	h3_4_rd51
//	h3_4_rd52
//	h3_4_rd53
//	h3_4_rd54
//	h3_4_rd55
inline hw_uint<1792> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_4_rd0
    // h3_4_rd1
    // h3_4_rd2
    // h3_4_rd3
    // h3_4_rd4
    // h3_4_rd5
    // h3_4_rd6
    // h3_4_rd7
    // h3_4_rd8
    // h3_4_rd9
    // h3_4_rd10
    // h3_4_rd11
    // h3_4_rd12
    // h3_4_rd13
    // h3_4_rd14
    // h3_4_rd15
    // h3_4_rd16
    // h3_4_rd17
    // h3_4_rd18
    // h3_4_rd19
    // h3_4_rd20
    // h3_4_rd21
    // h3_4_rd22
    // h3_4_rd23
    // h3_4_rd24
    // h3_4_rd25
    // h3_4_rd26
    // h3_4_rd27
    // h3_4_rd28
    // h3_4_rd29
    // h3_4_rd30
    // h3_4_rd31
    // h3_4_rd32
    // h3_4_rd33
    // h3_4_rd34
    // h3_4_rd35
    // h3_4_rd36
    // h3_4_rd37
    // h3_4_rd38
    // h3_4_rd39
    // h3_4_rd40
    // h3_4_rd41
    // h3_4_rd42
    // h3_4_rd43
    // h3_4_rd44
    // h3_4_rd45
    // h3_4_rd46
    // h3_4_rd47
    // h3_4_rd48
    // h3_4_rd49
    // h3_4_rd50
    // h3_4_rd51
    // h3_4_rd52
    // h3_4_rd53
    // h3_4_rd54
    // h3_4_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_4_rd9_res);
	hw_uint<32>  h3_4_rd10_res = h3_4_rd10_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_4_rd10_res);
	hw_uint<32>  h3_4_rd11_res = h3_4_rd11_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_4_rd11_res);
	hw_uint<32>  h3_4_rd12_res = h3_4_rd12_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_4_rd12_res);
	hw_uint<32>  h3_4_rd13_res = h3_4_rd13_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_4_rd13_res);
	hw_uint<32>  h3_4_rd14_res = h3_4_rd14_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_4_rd14_res);
	hw_uint<32>  h3_4_rd15_res = h3_4_rd15_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_4_rd15_res);
	hw_uint<32>  h3_4_rd16_res = h3_4_rd16_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_4_rd16_res);
	hw_uint<32>  h3_4_rd17_res = h3_4_rd17_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_4_rd17_res);
	hw_uint<32>  h3_4_rd18_res = h3_4_rd18_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_4_rd18_res);
	hw_uint<32>  h3_4_rd19_res = h3_4_rd19_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_4_rd19_res);
	hw_uint<32>  h3_4_rd20_res = h3_4_rd20_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_4_rd20_res);
	hw_uint<32>  h3_4_rd21_res = h3_4_rd21_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_4_rd21_res);
	hw_uint<32>  h3_4_rd22_res = h3_4_rd22_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_4_rd22_res);
	hw_uint<32>  h3_4_rd23_res = h3_4_rd23_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_4_rd23_res);
	hw_uint<32>  h3_4_rd24_res = h3_4_rd24_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_4_rd24_res);
	hw_uint<32>  h3_4_rd25_res = h3_4_rd25_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_4_rd25_res);
	hw_uint<32>  h3_4_rd26_res = h3_4_rd26_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_4_rd26_res);
	hw_uint<32>  h3_4_rd27_res = h3_4_rd27_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_4_rd27_res);
	hw_uint<32>  h3_4_rd28_res = h3_4_rd28_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_4_rd28_res);
	hw_uint<32>  h3_4_rd29_res = h3_4_rd29_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_4_rd29_res);
	hw_uint<32>  h3_4_rd30_res = h3_4_rd30_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_4_rd30_res);
	hw_uint<32>  h3_4_rd31_res = h3_4_rd31_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_4_rd31_res);
	hw_uint<32>  h3_4_rd32_res = h3_4_rd32_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_4_rd32_res);
	hw_uint<32>  h3_4_rd33_res = h3_4_rd33_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_4_rd33_res);
	hw_uint<32>  h3_4_rd34_res = h3_4_rd34_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_4_rd34_res);
	hw_uint<32>  h3_4_rd35_res = h3_4_rd35_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_4_rd35_res);
	hw_uint<32>  h3_4_rd36_res = h3_4_rd36_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_4_rd36_res);
	hw_uint<32>  h3_4_rd37_res = h3_4_rd37_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_4_rd37_res);
	hw_uint<32>  h3_4_rd38_res = h3_4_rd38_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_4_rd38_res);
	hw_uint<32>  h3_4_rd39_res = h3_4_rd39_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_4_rd39_res);
	hw_uint<32>  h3_4_rd40_res = h3_4_rd40_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_4_rd40_res);
	hw_uint<32>  h3_4_rd41_res = h3_4_rd41_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_4_rd41_res);
	hw_uint<32>  h3_4_rd42_res = h3_4_rd42_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_4_rd42_res);
	hw_uint<32>  h3_4_rd43_res = h3_4_rd43_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_4_rd43_res);
	hw_uint<32>  h3_4_rd44_res = h3_4_rd44_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_4_rd44_res);
	hw_uint<32>  h3_4_rd45_res = h3_4_rd45_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_4_rd45_res);
	hw_uint<32>  h3_4_rd46_res = h3_4_rd46_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_4_rd46_res);
	hw_uint<32>  h3_4_rd47_res = h3_4_rd47_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_4_rd47_res);
	hw_uint<32>  h3_4_rd48_res = h3_4_rd48_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_4_rd48_res);
	hw_uint<32>  h3_4_rd49_res = h3_4_rd49_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_4_rd49_res);
	hw_uint<32>  h3_4_rd50_res = h3_4_rd50_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_4_rd50_res);
	hw_uint<32>  h3_4_rd51_res = h3_4_rd51_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_4_rd51_res);
	hw_uint<32>  h3_4_rd52_res = h3_4_rd52_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_4_rd52_res);
	hw_uint<32>  h3_4_rd53_res = h3_4_rd53_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_4_rd53_res);
	hw_uint<32>  h3_4_rd54_res = h3_4_rd54_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_4_rd54_res);
	hw_uint<32>  h3_4_rd55_res = h3_4_rd55_select(h3_3, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_4_rd55_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-40, 552], [-6, 516], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 7
  // 0, 77, 39825, 39900, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 74> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 75> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 39747> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39899() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39900() {
		return f6;
	}

	inline hw_uint<32>  peek_39901() {
		return f8;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f10;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-39, 545], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-38, 546], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-37, 547], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-36, 548], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-35, 549], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-34, 550], [-6, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 6
  // 0, 77, 39825, 39901, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 39747> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f8;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-41, 551], [-5, 517], [-5, 516]}
	// Capacity: 79726
	// # of read delays: 7
  // 0, 77, 39825, 39901, 39902, 39977, 79725
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 76> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 39747> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 74> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 39747> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_77() {
		return f2;
	}

	inline hw_uint<32>  peek_39824() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_39825() {
		return f4;
	}

	inline hw_uint<32>  peek_39900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_39901() {
		return f6;
	}

	inline hw_uint<32>  peek_39902() {
		return f8;
	}

	inline hw_uint<32>  peek_39976() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_39977() {
		return f10;
	}

	inline hw_uint<32>  peek_79724() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_79725() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 39747
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 39747 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_4_cache {
  // # of banks: 8
  h3_4_h3_4_update_0_write0_merged_banks_7_cache h3_4_h3_4_update_0_write0_merged_banks_7;
  h3_4_h3_4_update_0_write1_merged_banks_7_cache h3_4_h3_4_update_0_write1_merged_banks_7;
  h3_4_h3_4_update_0_write2_merged_banks_7_cache h3_4_h3_4_update_0_write2_merged_banks_7;
  h3_4_h3_4_update_0_write3_merged_banks_7_cache h3_4_h3_4_update_0_write3_merged_banks_7;
  h3_4_h3_4_update_0_write4_merged_banks_7_cache h3_4_h3_4_update_0_write4_merged_banks_7;
  h3_4_h3_4_update_0_write5_merged_banks_7_cache h3_4_h3_4_update_0_write5_merged_banks_7;
  h3_4_h3_4_update_0_write6_merged_banks_7_cache h3_4_h3_4_update_0_write6_merged_banks_7;
  h3_4_h3_4_update_0_write7_merged_banks_7_cache h3_4_h3_4_update_0_write7_merged_banks_7;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.push(h3_4_h3_4_update_0_write0);
}

inline void h3_4_h3_4_update_0_write1_write(hw_uint<32> & h3_4_h3_4_update_0_write1, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.push(h3_4_h3_4_update_0_write1);
}

inline void h3_4_h3_4_update_0_write2_write(hw_uint<32> & h3_4_h3_4_update_0_write2, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.push(h3_4_h3_4_update_0_write2);
}

inline void h3_4_h3_4_update_0_write3_write(hw_uint<32> & h3_4_h3_4_update_0_write3, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.push(h3_4_h3_4_update_0_write3);
}

inline void h3_4_h3_4_update_0_write4_write(hw_uint<32> & h3_4_h3_4_update_0_write4, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.push(h3_4_h3_4_update_0_write4);
}

inline void h3_4_h3_4_update_0_write5_write(hw_uint<32> & h3_4_h3_4_update_0_write5, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.push(h3_4_h3_4_update_0_write5);
}

inline void h3_4_h3_4_update_0_write6_write(hw_uint<32> & h3_4_h3_4_update_0_write6, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.push(h3_4_h3_4_update_0_write6);
}

inline void h3_4_h3_4_update_0_write7_write(hw_uint<32> & h3_4_h3_4_update_0_write7, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.push(h3_4_h3_4_update_0_write7);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[-1 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_39902();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd10_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd10 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd11_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd11 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd12_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd12 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd13_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd13 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd14_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd14 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd15_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd15 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd16_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd16 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd17_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd17 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd18_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd18 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd19_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd19 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd20_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd20 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd21_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd21 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[2 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd22_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd22 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd23_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd23 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd24_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd24 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd25_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd25 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd26_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd26 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd27_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd27 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd28_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd28 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[3 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd29_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd29 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd30_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd30 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd31_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd31 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd32_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd32 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd33_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd33 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd34_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd34 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd35_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd35 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[4 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd36_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd36 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd37_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd37 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd38_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd38 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd39_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd39 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd40_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd40 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd41_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd41 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd42_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd42 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[5 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd43_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd43 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd44_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd44 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd45_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd45 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd46_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd46 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd47_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd47 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd48_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd48 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd49_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd49 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[6 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd50_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd50 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd51_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd51 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd52_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd52 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd53_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd53 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, d1, 1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_77();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd54_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd54 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[7 + 8d0, 1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_7.peek_39825();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd55_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd55 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_39900();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[8d0, d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_39901();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, -1 + d1, d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_39977();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + 8d0, d1, -1 + d2] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_7.peek_79725();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
//	h3_4_h3_4_update_0_write1
//	h3_4_h3_4_update_0_write2
//	h3_4_h3_4_update_0_write3
//	h3_4_h3_4_update_0_write4
//	h3_4_h3_4_update_0_write5
//	h3_4_h3_4_update_0_write6
//	h3_4_h3_4_update_0_write7
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<256>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write1_res = h3_4_update_0_write.extract<32, 63>();
	h3_4_h3_4_update_0_write1_write(h3_4_h3_4_update_0_write1_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write2_res = h3_4_update_0_write.extract<64, 95>();
	h3_4_h3_4_update_0_write2_write(h3_4_h3_4_update_0_write2_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write3_res = h3_4_update_0_write.extract<96, 127>();
	h3_4_h3_4_update_0_write3_write(h3_4_h3_4_update_0_write3_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write4_res = h3_4_update_0_write.extract<128, 159>();
	h3_4_h3_4_update_0_write4_write(h3_4_h3_4_update_0_write4_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write5_res = h3_4_update_0_write.extract<160, 191>();
	h3_4_h3_4_update_0_write5_write(h3_4_h3_4_update_0_write5_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write6_res = h3_4_update_0_write.extract<192, 223>();
	h3_4_h3_4_update_0_write6_write(h3_4_h3_4_update_0_write6_res, h3_4, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write7_res = h3_4_update_0_write.extract<224, 255>();
	h3_4_h3_4_update_0_write7_write(h3_4_h3_4_update_0_write7_res, h3_4, d0, d1, d2, dynamic_address);
}

// h3_5_update_0_read
//	h3_5_rd0
//	h3_5_rd1
//	h3_5_rd2
//	h3_5_rd3
//	h3_5_rd4
//	h3_5_rd5
//	h3_5_rd6
//	h3_5_rd7
//	h3_5_rd8
//	h3_5_rd9
//	h3_5_rd10
//	h3_5_rd11
//	h3_5_rd12
//	h3_5_rd13
//	h3_5_rd14
//	h3_5_rd15
//	h3_5_rd16
//	h3_5_rd17
//	h3_5_rd18
//	h3_5_rd19
//	h3_5_rd20
//	h3_5_rd21
//	h3_5_rd22
//	h3_5_rd23
//	h3_5_rd24
//	h3_5_rd25
//	h3_5_rd26
//	h3_5_rd27
//	h3_5_rd28
//	h3_5_rd29
//	h3_5_rd30
//	h3_5_rd31
//	h3_5_rd32
//	h3_5_rd33
//	h3_5_rd34
//	h3_5_rd35
//	h3_5_rd36
//	h3_5_rd37
//	h3_5_rd38
//	h3_5_rd39
//	h3_5_rd40
//	h3_5_rd41
//	h3_5_rd42
//	h3_5_rd43
//	h3_5_rd44
//	h3_5_rd45
//	h3_5_rd46
//	h3_5_rd47
//	h3_5_rd48
//	h3_5_rd49
//	h3_5_rd50
//	h3_5_rd51
//	h3_5_rd52
//	h3_5_rd53
//	h3_5_rd54
//	h3_5_rd55
inline hw_uint<1792> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_5_rd0
    // h3_5_rd1
    // h3_5_rd2
    // h3_5_rd3
    // h3_5_rd4
    // h3_5_rd5
    // h3_5_rd6
    // h3_5_rd7
    // h3_5_rd8
    // h3_5_rd9
    // h3_5_rd10
    // h3_5_rd11
    // h3_5_rd12
    // h3_5_rd13
    // h3_5_rd14
    // h3_5_rd15
    // h3_5_rd16
    // h3_5_rd17
    // h3_5_rd18
    // h3_5_rd19
    // h3_5_rd20
    // h3_5_rd21
    // h3_5_rd22
    // h3_5_rd23
    // h3_5_rd24
    // h3_5_rd25
    // h3_5_rd26
    // h3_5_rd27
    // h3_5_rd28
    // h3_5_rd29
    // h3_5_rd30
    // h3_5_rd31
    // h3_5_rd32
    // h3_5_rd33
    // h3_5_rd34
    // h3_5_rd35
    // h3_5_rd36
    // h3_5_rd37
    // h3_5_rd38
    // h3_5_rd39
    // h3_5_rd40
    // h3_5_rd41
    // h3_5_rd42
    // h3_5_rd43
    // h3_5_rd44
    // h3_5_rd45
    // h3_5_rd46
    // h3_5_rd47
    // h3_5_rd48
    // h3_5_rd49
    // h3_5_rd50
    // h3_5_rd51
    // h3_5_rd52
    // h3_5_rd53
    // h3_5_rd54
    // h3_5_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_5_rd9_res);
	hw_uint<32>  h3_5_rd10_res = h3_5_rd10_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_5_rd10_res);
	hw_uint<32>  h3_5_rd11_res = h3_5_rd11_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_5_rd11_res);
	hw_uint<32>  h3_5_rd12_res = h3_5_rd12_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_5_rd12_res);
	hw_uint<32>  h3_5_rd13_res = h3_5_rd13_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_5_rd13_res);
	hw_uint<32>  h3_5_rd14_res = h3_5_rd14_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_5_rd14_res);
	hw_uint<32>  h3_5_rd15_res = h3_5_rd15_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_5_rd15_res);
	hw_uint<32>  h3_5_rd16_res = h3_5_rd16_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_5_rd16_res);
	hw_uint<32>  h3_5_rd17_res = h3_5_rd17_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_5_rd17_res);
	hw_uint<32>  h3_5_rd18_res = h3_5_rd18_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_5_rd18_res);
	hw_uint<32>  h3_5_rd19_res = h3_5_rd19_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_5_rd19_res);
	hw_uint<32>  h3_5_rd20_res = h3_5_rd20_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_5_rd20_res);
	hw_uint<32>  h3_5_rd21_res = h3_5_rd21_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_5_rd21_res);
	hw_uint<32>  h3_5_rd22_res = h3_5_rd22_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_5_rd22_res);
	hw_uint<32>  h3_5_rd23_res = h3_5_rd23_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_5_rd23_res);
	hw_uint<32>  h3_5_rd24_res = h3_5_rd24_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_5_rd24_res);
	hw_uint<32>  h3_5_rd25_res = h3_5_rd25_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_5_rd25_res);
	hw_uint<32>  h3_5_rd26_res = h3_5_rd26_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_5_rd26_res);
	hw_uint<32>  h3_5_rd27_res = h3_5_rd27_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_5_rd27_res);
	hw_uint<32>  h3_5_rd28_res = h3_5_rd28_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_5_rd28_res);
	hw_uint<32>  h3_5_rd29_res = h3_5_rd29_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_5_rd29_res);
	hw_uint<32>  h3_5_rd30_res = h3_5_rd30_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_5_rd30_res);
	hw_uint<32>  h3_5_rd31_res = h3_5_rd31_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_5_rd31_res);
	hw_uint<32>  h3_5_rd32_res = h3_5_rd32_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_5_rd32_res);
	hw_uint<32>  h3_5_rd33_res = h3_5_rd33_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_5_rd33_res);
	hw_uint<32>  h3_5_rd34_res = h3_5_rd34_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_5_rd34_res);
	hw_uint<32>  h3_5_rd35_res = h3_5_rd35_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_5_rd35_res);
	hw_uint<32>  h3_5_rd36_res = h3_5_rd36_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_5_rd36_res);
	hw_uint<32>  h3_5_rd37_res = h3_5_rd37_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_5_rd37_res);
	hw_uint<32>  h3_5_rd38_res = h3_5_rd38_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_5_rd38_res);
	hw_uint<32>  h3_5_rd39_res = h3_5_rd39_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_5_rd39_res);
	hw_uint<32>  h3_5_rd40_res = h3_5_rd40_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_5_rd40_res);
	hw_uint<32>  h3_5_rd41_res = h3_5_rd41_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_5_rd41_res);
	hw_uint<32>  h3_5_rd42_res = h3_5_rd42_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_5_rd42_res);
	hw_uint<32>  h3_5_rd43_res = h3_5_rd43_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_5_rd43_res);
	hw_uint<32>  h3_5_rd44_res = h3_5_rd44_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_5_rd44_res);
	hw_uint<32>  h3_5_rd45_res = h3_5_rd45_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_5_rd45_res);
	hw_uint<32>  h3_5_rd46_res = h3_5_rd46_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_5_rd46_res);
	hw_uint<32>  h3_5_rd47_res = h3_5_rd47_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_5_rd47_res);
	hw_uint<32>  h3_5_rd48_res = h3_5_rd48_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_5_rd48_res);
	hw_uint<32>  h3_5_rd49_res = h3_5_rd49_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_5_rd49_res);
	hw_uint<32>  h3_5_rd50_res = h3_5_rd50_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_5_rd50_res);
	hw_uint<32>  h3_5_rd51_res = h3_5_rd51_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_5_rd51_res);
	hw_uint<32>  h3_5_rd52_res = h3_5_rd52_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_5_rd52_res);
	hw_uint<32>  h3_5_rd53_res = h3_5_rd53_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_5_rd53_res);
	hw_uint<32>  h3_5_rd54_res = h3_5_rd54_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_5_rd54_res);
	hw_uint<32>  h3_5_rd55_res = h3_5_rd55_select(h3_4, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_5_rd55_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-32, 544], [-5, 515], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 7
  // 0, 75, 38629, 38702, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 72> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 73> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 38553> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38701() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38702() {
		return f6;
	}

	inline hw_uint<32>  peek_38703() {
		return f8;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f10;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-31, 537], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-30, 538], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-29, 539], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-28, 540], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-27, 541], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-26, 542], [-5, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 6
  // 0, 75, 38629, 38703, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 38553> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f8;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-33, 543], [-4, 516], [-4, 515]}
	// Capacity: 77332
	// # of read delays: 7
  // 0, 75, 38629, 38703, 38704, 38777, 77331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 74> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 38553> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 72> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 38553> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_75() {
		return f2;
	}

	inline hw_uint<32>  peek_38628() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_38629() {
		return f4;
	}

	inline hw_uint<32>  peek_38702() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_38703() {
		return f6;
	}

	inline hw_uint<32>  peek_38704() {
		return f8;
	}

	inline hw_uint<32>  peek_38776() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_38777() {
		return f10;
	}

	inline hw_uint<32>  peek_77330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_77331() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 38553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 38553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_5_cache {
  // # of banks: 8
  h3_5_h3_5_update_0_write0_merged_banks_7_cache h3_5_h3_5_update_0_write0_merged_banks_7;
  h3_5_h3_5_update_0_write1_merged_banks_7_cache h3_5_h3_5_update_0_write1_merged_banks_7;
  h3_5_h3_5_update_0_write2_merged_banks_7_cache h3_5_h3_5_update_0_write2_merged_banks_7;
  h3_5_h3_5_update_0_write3_merged_banks_7_cache h3_5_h3_5_update_0_write3_merged_banks_7;
  h3_5_h3_5_update_0_write4_merged_banks_7_cache h3_5_h3_5_update_0_write4_merged_banks_7;
  h3_5_h3_5_update_0_write5_merged_banks_7_cache h3_5_h3_5_update_0_write5_merged_banks_7;
  h3_5_h3_5_update_0_write6_merged_banks_7_cache h3_5_h3_5_update_0_write6_merged_banks_7;
  h3_5_h3_5_update_0_write7_merged_banks_7_cache h3_5_h3_5_update_0_write7_merged_banks_7;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.push(h3_5_h3_5_update_0_write0);
}

inline void h3_5_h3_5_update_0_write1_write(hw_uint<32> & h3_5_h3_5_update_0_write1, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.push(h3_5_h3_5_update_0_write1);
}

inline void h3_5_h3_5_update_0_write2_write(hw_uint<32> & h3_5_h3_5_update_0_write2, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.push(h3_5_h3_5_update_0_write2);
}

inline void h3_5_h3_5_update_0_write3_write(hw_uint<32> & h3_5_h3_5_update_0_write3, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.push(h3_5_h3_5_update_0_write3);
}

inline void h3_5_h3_5_update_0_write4_write(hw_uint<32> & h3_5_h3_5_update_0_write4, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.push(h3_5_h3_5_update_0_write4);
}

inline void h3_5_h3_5_update_0_write5_write(hw_uint<32> & h3_5_h3_5_update_0_write5, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.push(h3_5_h3_5_update_0_write5);
}

inline void h3_5_h3_5_update_0_write6_write(hw_uint<32> & h3_5_h3_5_update_0_write6, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.push(h3_5_h3_5_update_0_write6);
}

inline void h3_5_h3_5_update_0_write7_write(hw_uint<32> & h3_5_h3_5_update_0_write7, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.push(h3_5_h3_5_update_0_write7);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[-1 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_38704();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd10_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd10 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd11_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd11 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd12_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd12 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd13_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd13 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd14_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd14 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd15_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd15 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd16_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd16 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd17_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd17 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd18_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd18 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd19_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd19 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd20_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd20 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd21_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd21 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[2 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd22_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd22 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd23_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd23 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd24_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd24 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd25_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd25 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd26_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd26 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd27_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd27 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd28_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd28 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[3 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd29_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd29 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd30_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd30 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd31_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd31 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd32_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd32 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd33_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd33 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd34_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd34 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd35_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd35 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[4 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd36_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd36 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd37_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd37 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd38_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd38 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd39_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd39 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd40_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd40 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd41_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd41 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd42_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd42 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[5 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd43_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd43 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd44_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd44 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd45_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd45 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd46_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd46 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd47_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd47 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd48_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd48 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd49_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd49 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[6 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd50_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd50 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd51_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd51 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd52_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd52 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd53_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd53 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, d1, 1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_75();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd54_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd54 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[7 + 8d0, 1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_7.peek_38629();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd55_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd55 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_38702();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[8d0, d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_38703();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, -1 + d1, d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_38777();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + 8d0, d1, -1 + d2] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_7.peek_77331();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
//	h3_5_h3_5_update_0_write1
//	h3_5_h3_5_update_0_write2
//	h3_5_h3_5_update_0_write3
//	h3_5_h3_5_update_0_write4
//	h3_5_h3_5_update_0_write5
//	h3_5_h3_5_update_0_write6
//	h3_5_h3_5_update_0_write7
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<256>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write1_res = h3_5_update_0_write.extract<32, 63>();
	h3_5_h3_5_update_0_write1_write(h3_5_h3_5_update_0_write1_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write2_res = h3_5_update_0_write.extract<64, 95>();
	h3_5_h3_5_update_0_write2_write(h3_5_h3_5_update_0_write2_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write3_res = h3_5_update_0_write.extract<96, 127>();
	h3_5_h3_5_update_0_write3_write(h3_5_h3_5_update_0_write3_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write4_res = h3_5_update_0_write.extract<128, 159>();
	h3_5_h3_5_update_0_write4_write(h3_5_h3_5_update_0_write4_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write5_res = h3_5_update_0_write.extract<160, 191>();
	h3_5_h3_5_update_0_write5_write(h3_5_h3_5_update_0_write5_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write6_res = h3_5_update_0_write.extract<192, 223>();
	h3_5_h3_5_update_0_write6_write(h3_5_h3_5_update_0_write6_res, h3_5, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write7_res = h3_5_update_0_write.extract<224, 255>();
	h3_5_h3_5_update_0_write7_write(h3_5_h3_5_update_0_write7_res, h3_5, d0, d1, d2, dynamic_address);
}

// h3_6_update_0_read
//	h3_6_rd0
//	h3_6_rd1
//	h3_6_rd2
//	h3_6_rd3
//	h3_6_rd4
//	h3_6_rd5
//	h3_6_rd6
//	h3_6_rd7
//	h3_6_rd8
//	h3_6_rd9
//	h3_6_rd10
//	h3_6_rd11
//	h3_6_rd12
//	h3_6_rd13
//	h3_6_rd14
//	h3_6_rd15
//	h3_6_rd16
//	h3_6_rd17
//	h3_6_rd18
//	h3_6_rd19
//	h3_6_rd20
//	h3_6_rd21
//	h3_6_rd22
//	h3_6_rd23
//	h3_6_rd24
//	h3_6_rd25
//	h3_6_rd26
//	h3_6_rd27
//	h3_6_rd28
//	h3_6_rd29
//	h3_6_rd30
//	h3_6_rd31
//	h3_6_rd32
//	h3_6_rd33
//	h3_6_rd34
//	h3_6_rd35
//	h3_6_rd36
//	h3_6_rd37
//	h3_6_rd38
//	h3_6_rd39
//	h3_6_rd40
//	h3_6_rd41
//	h3_6_rd42
//	h3_6_rd43
//	h3_6_rd44
//	h3_6_rd45
//	h3_6_rd46
//	h3_6_rd47
//	h3_6_rd48
//	h3_6_rd49
//	h3_6_rd50
//	h3_6_rd51
//	h3_6_rd52
//	h3_6_rd53
//	h3_6_rd54
//	h3_6_rd55
inline hw_uint<1792> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_6_rd0
    // h3_6_rd1
    // h3_6_rd2
    // h3_6_rd3
    // h3_6_rd4
    // h3_6_rd5
    // h3_6_rd6
    // h3_6_rd7
    // h3_6_rd8
    // h3_6_rd9
    // h3_6_rd10
    // h3_6_rd11
    // h3_6_rd12
    // h3_6_rd13
    // h3_6_rd14
    // h3_6_rd15
    // h3_6_rd16
    // h3_6_rd17
    // h3_6_rd18
    // h3_6_rd19
    // h3_6_rd20
    // h3_6_rd21
    // h3_6_rd22
    // h3_6_rd23
    // h3_6_rd24
    // h3_6_rd25
    // h3_6_rd26
    // h3_6_rd27
    // h3_6_rd28
    // h3_6_rd29
    // h3_6_rd30
    // h3_6_rd31
    // h3_6_rd32
    // h3_6_rd33
    // h3_6_rd34
    // h3_6_rd35
    // h3_6_rd36
    // h3_6_rd37
    // h3_6_rd38
    // h3_6_rd39
    // h3_6_rd40
    // h3_6_rd41
    // h3_6_rd42
    // h3_6_rd43
    // h3_6_rd44
    // h3_6_rd45
    // h3_6_rd46
    // h3_6_rd47
    // h3_6_rd48
    // h3_6_rd49
    // h3_6_rd50
    // h3_6_rd51
    // h3_6_rd52
    // h3_6_rd53
    // h3_6_rd54
    // h3_6_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_6_rd9_res);
	hw_uint<32>  h3_6_rd10_res = h3_6_rd10_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_6_rd10_res);
	hw_uint<32>  h3_6_rd11_res = h3_6_rd11_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_6_rd11_res);
	hw_uint<32>  h3_6_rd12_res = h3_6_rd12_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_6_rd12_res);
	hw_uint<32>  h3_6_rd13_res = h3_6_rd13_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_6_rd13_res);
	hw_uint<32>  h3_6_rd14_res = h3_6_rd14_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_6_rd14_res);
	hw_uint<32>  h3_6_rd15_res = h3_6_rd15_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_6_rd15_res);
	hw_uint<32>  h3_6_rd16_res = h3_6_rd16_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_6_rd16_res);
	hw_uint<32>  h3_6_rd17_res = h3_6_rd17_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_6_rd17_res);
	hw_uint<32>  h3_6_rd18_res = h3_6_rd18_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_6_rd18_res);
	hw_uint<32>  h3_6_rd19_res = h3_6_rd19_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_6_rd19_res);
	hw_uint<32>  h3_6_rd20_res = h3_6_rd20_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_6_rd20_res);
	hw_uint<32>  h3_6_rd21_res = h3_6_rd21_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_6_rd21_res);
	hw_uint<32>  h3_6_rd22_res = h3_6_rd22_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_6_rd22_res);
	hw_uint<32>  h3_6_rd23_res = h3_6_rd23_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_6_rd23_res);
	hw_uint<32>  h3_6_rd24_res = h3_6_rd24_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_6_rd24_res);
	hw_uint<32>  h3_6_rd25_res = h3_6_rd25_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_6_rd25_res);
	hw_uint<32>  h3_6_rd26_res = h3_6_rd26_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_6_rd26_res);
	hw_uint<32>  h3_6_rd27_res = h3_6_rd27_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_6_rd27_res);
	hw_uint<32>  h3_6_rd28_res = h3_6_rd28_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_6_rd28_res);
	hw_uint<32>  h3_6_rd29_res = h3_6_rd29_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_6_rd29_res);
	hw_uint<32>  h3_6_rd30_res = h3_6_rd30_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_6_rd30_res);
	hw_uint<32>  h3_6_rd31_res = h3_6_rd31_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_6_rd31_res);
	hw_uint<32>  h3_6_rd32_res = h3_6_rd32_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_6_rd32_res);
	hw_uint<32>  h3_6_rd33_res = h3_6_rd33_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_6_rd33_res);
	hw_uint<32>  h3_6_rd34_res = h3_6_rd34_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_6_rd34_res);
	hw_uint<32>  h3_6_rd35_res = h3_6_rd35_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_6_rd35_res);
	hw_uint<32>  h3_6_rd36_res = h3_6_rd36_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_6_rd36_res);
	hw_uint<32>  h3_6_rd37_res = h3_6_rd37_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_6_rd37_res);
	hw_uint<32>  h3_6_rd38_res = h3_6_rd38_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_6_rd38_res);
	hw_uint<32>  h3_6_rd39_res = h3_6_rd39_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_6_rd39_res);
	hw_uint<32>  h3_6_rd40_res = h3_6_rd40_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_6_rd40_res);
	hw_uint<32>  h3_6_rd41_res = h3_6_rd41_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_6_rd41_res);
	hw_uint<32>  h3_6_rd42_res = h3_6_rd42_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_6_rd42_res);
	hw_uint<32>  h3_6_rd43_res = h3_6_rd43_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_6_rd43_res);
	hw_uint<32>  h3_6_rd44_res = h3_6_rd44_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_6_rd44_res);
	hw_uint<32>  h3_6_rd45_res = h3_6_rd45_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_6_rd45_res);
	hw_uint<32>  h3_6_rd46_res = h3_6_rd46_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_6_rd46_res);
	hw_uint<32>  h3_6_rd47_res = h3_6_rd47_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_6_rd47_res);
	hw_uint<32>  h3_6_rd48_res = h3_6_rd48_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_6_rd48_res);
	hw_uint<32>  h3_6_rd49_res = h3_6_rd49_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_6_rd49_res);
	hw_uint<32>  h3_6_rd50_res = h3_6_rd50_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_6_rd50_res);
	hw_uint<32>  h3_6_rd51_res = h3_6_rd51_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_6_rd51_res);
	hw_uint<32>  h3_6_rd52_res = h3_6_rd52_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_6_rd52_res);
	hw_uint<32>  h3_6_rd53_res = h3_6_rd53_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_6_rd53_res);
	hw_uint<32>  h3_6_rd54_res = h3_6_rd54_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_6_rd54_res);
	hw_uint<32>  h3_6_rd55_res = h3_6_rd55_select(h3_5, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_6_rd55_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-24, 536], [-4, 514], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 7
  // 0, 73, 37441, 37512, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 70> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 71> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 37367> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37511() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37512() {
		return f6;
	}

	inline hw_uint<32>  peek_37513() {
		return f8;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f10;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-23, 529], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-22, 530], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-21, 531], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-20, 532], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-19, 533], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-18, 534], [-4, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 6
  // 0, 73, 37441, 37513, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 37367> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f8;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-25, 535], [-3, 515], [-3, 514]}
	// Capacity: 74954
	// # of read delays: 7
  // 0, 73, 37441, 37513, 37514, 37585, 74953
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 72> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 37367> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 70> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 37367> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_73() {
		return f2;
	}

	inline hw_uint<32>  peek_37440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_37441() {
		return f4;
	}

	inline hw_uint<32>  peek_37512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_37513() {
		return f6;
	}

	inline hw_uint<32>  peek_37514() {
		return f8;
	}

	inline hw_uint<32>  peek_37584() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_37585() {
		return f10;
	}

	inline hw_uint<32>  peek_74952() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_74953() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 37367
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 37367 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_6_cache {
  // # of banks: 8
  h3_6_h3_6_update_0_write0_merged_banks_7_cache h3_6_h3_6_update_0_write0_merged_banks_7;
  h3_6_h3_6_update_0_write1_merged_banks_7_cache h3_6_h3_6_update_0_write1_merged_banks_7;
  h3_6_h3_6_update_0_write2_merged_banks_7_cache h3_6_h3_6_update_0_write2_merged_banks_7;
  h3_6_h3_6_update_0_write3_merged_banks_7_cache h3_6_h3_6_update_0_write3_merged_banks_7;
  h3_6_h3_6_update_0_write4_merged_banks_7_cache h3_6_h3_6_update_0_write4_merged_banks_7;
  h3_6_h3_6_update_0_write5_merged_banks_7_cache h3_6_h3_6_update_0_write5_merged_banks_7;
  h3_6_h3_6_update_0_write6_merged_banks_7_cache h3_6_h3_6_update_0_write6_merged_banks_7;
  h3_6_h3_6_update_0_write7_merged_banks_7_cache h3_6_h3_6_update_0_write7_merged_banks_7;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.push(h3_6_h3_6_update_0_write0);
}

inline void h3_6_h3_6_update_0_write1_write(hw_uint<32> & h3_6_h3_6_update_0_write1, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.push(h3_6_h3_6_update_0_write1);
}

inline void h3_6_h3_6_update_0_write2_write(hw_uint<32> & h3_6_h3_6_update_0_write2, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.push(h3_6_h3_6_update_0_write2);
}

inline void h3_6_h3_6_update_0_write3_write(hw_uint<32> & h3_6_h3_6_update_0_write3, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.push(h3_6_h3_6_update_0_write3);
}

inline void h3_6_h3_6_update_0_write4_write(hw_uint<32> & h3_6_h3_6_update_0_write4, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.push(h3_6_h3_6_update_0_write4);
}

inline void h3_6_h3_6_update_0_write5_write(hw_uint<32> & h3_6_h3_6_update_0_write5, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.push(h3_6_h3_6_update_0_write5);
}

inline void h3_6_h3_6_update_0_write6_write(hw_uint<32> & h3_6_h3_6_update_0_write6, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.push(h3_6_h3_6_update_0_write6);
}

inline void h3_6_h3_6_update_0_write7_write(hw_uint<32> & h3_6_h3_6_update_0_write7, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.push(h3_6_h3_6_update_0_write7);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[-1 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_37514();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd10_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd10 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd11_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd11 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd12_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd12 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd13_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd13 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd14_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd14 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd15_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd15 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd16_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd16 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd17_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd17 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd18_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd18 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd19_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd19 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd20_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd20 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd21_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd21 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[2 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd22_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd22 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd23_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd23 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd24_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd24 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd25_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd25 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd26_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd26 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd27_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd27 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd28_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd28 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[3 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd29_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd29 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd30_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd30 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd31_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd31 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd32_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd32 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd33_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd33 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd34_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd34 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd35_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd35 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[4 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd36_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd36 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd37_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd37 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd38_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd38 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd39_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd39 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd40_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd40 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd41_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd41 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd42_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd42 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[5 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd43_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd43 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd44_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd44 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd45_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd45 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd46_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd46 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd47_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd47 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd48_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd48 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd49_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd49 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[6 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd50_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd50 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd51_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd51 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd52_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd52 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd53_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd53 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, d1, 1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_73();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd54_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd54 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[7 + 8d0, 1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_7.peek_37441();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd55_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd55 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_37512();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[8d0, d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_37513();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, -1 + d1, d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_37585();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + 8d0, d1, -1 + d2] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_7.peek_74953();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
//	h3_6_h3_6_update_0_write1
//	h3_6_h3_6_update_0_write2
//	h3_6_h3_6_update_0_write3
//	h3_6_h3_6_update_0_write4
//	h3_6_h3_6_update_0_write5
//	h3_6_h3_6_update_0_write6
//	h3_6_h3_6_update_0_write7
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<256>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write1_res = h3_6_update_0_write.extract<32, 63>();
	h3_6_h3_6_update_0_write1_write(h3_6_h3_6_update_0_write1_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write2_res = h3_6_update_0_write.extract<64, 95>();
	h3_6_h3_6_update_0_write2_write(h3_6_h3_6_update_0_write2_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write3_res = h3_6_update_0_write.extract<96, 127>();
	h3_6_h3_6_update_0_write3_write(h3_6_h3_6_update_0_write3_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write4_res = h3_6_update_0_write.extract<128, 159>();
	h3_6_h3_6_update_0_write4_write(h3_6_h3_6_update_0_write4_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write5_res = h3_6_update_0_write.extract<160, 191>();
	h3_6_h3_6_update_0_write5_write(h3_6_h3_6_update_0_write5_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write6_res = h3_6_update_0_write.extract<192, 223>();
	h3_6_h3_6_update_0_write6_write(h3_6_h3_6_update_0_write6_res, h3_6, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write7_res = h3_6_update_0_write.extract<224, 255>();
	h3_6_h3_6_update_0_write7_write(h3_6_h3_6_update_0_write7_res, h3_6, d0, d1, d2, dynamic_address);
}

// h3_7_update_0_read
//	h3_7_rd0
//	h3_7_rd1
//	h3_7_rd2
//	h3_7_rd3
//	h3_7_rd4
//	h3_7_rd5
//	h3_7_rd6
//	h3_7_rd7
//	h3_7_rd8
//	h3_7_rd9
//	h3_7_rd10
//	h3_7_rd11
//	h3_7_rd12
//	h3_7_rd13
//	h3_7_rd14
//	h3_7_rd15
//	h3_7_rd16
//	h3_7_rd17
//	h3_7_rd18
//	h3_7_rd19
//	h3_7_rd20
//	h3_7_rd21
//	h3_7_rd22
//	h3_7_rd23
//	h3_7_rd24
//	h3_7_rd25
//	h3_7_rd26
//	h3_7_rd27
//	h3_7_rd28
//	h3_7_rd29
//	h3_7_rd30
//	h3_7_rd31
//	h3_7_rd32
//	h3_7_rd33
//	h3_7_rd34
//	h3_7_rd35
//	h3_7_rd36
//	h3_7_rd37
//	h3_7_rd38
//	h3_7_rd39
//	h3_7_rd40
//	h3_7_rd41
//	h3_7_rd42
//	h3_7_rd43
//	h3_7_rd44
//	h3_7_rd45
//	h3_7_rd46
//	h3_7_rd47
//	h3_7_rd48
//	h3_7_rd49
//	h3_7_rd50
//	h3_7_rd51
//	h3_7_rd52
//	h3_7_rd53
//	h3_7_rd54
//	h3_7_rd55
inline hw_uint<1792> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_7_rd0
    // h3_7_rd1
    // h3_7_rd2
    // h3_7_rd3
    // h3_7_rd4
    // h3_7_rd5
    // h3_7_rd6
    // h3_7_rd7
    // h3_7_rd8
    // h3_7_rd9
    // h3_7_rd10
    // h3_7_rd11
    // h3_7_rd12
    // h3_7_rd13
    // h3_7_rd14
    // h3_7_rd15
    // h3_7_rd16
    // h3_7_rd17
    // h3_7_rd18
    // h3_7_rd19
    // h3_7_rd20
    // h3_7_rd21
    // h3_7_rd22
    // h3_7_rd23
    // h3_7_rd24
    // h3_7_rd25
    // h3_7_rd26
    // h3_7_rd27
    // h3_7_rd28
    // h3_7_rd29
    // h3_7_rd30
    // h3_7_rd31
    // h3_7_rd32
    // h3_7_rd33
    // h3_7_rd34
    // h3_7_rd35
    // h3_7_rd36
    // h3_7_rd37
    // h3_7_rd38
    // h3_7_rd39
    // h3_7_rd40
    // h3_7_rd41
    // h3_7_rd42
    // h3_7_rd43
    // h3_7_rd44
    // h3_7_rd45
    // h3_7_rd46
    // h3_7_rd47
    // h3_7_rd48
    // h3_7_rd49
    // h3_7_rd50
    // h3_7_rd51
    // h3_7_rd52
    // h3_7_rd53
    // h3_7_rd54
    // h3_7_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_7_rd9_res);
	hw_uint<32>  h3_7_rd10_res = h3_7_rd10_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_7_rd10_res);
	hw_uint<32>  h3_7_rd11_res = h3_7_rd11_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_7_rd11_res);
	hw_uint<32>  h3_7_rd12_res = h3_7_rd12_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_7_rd12_res);
	hw_uint<32>  h3_7_rd13_res = h3_7_rd13_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_7_rd13_res);
	hw_uint<32>  h3_7_rd14_res = h3_7_rd14_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_7_rd14_res);
	hw_uint<32>  h3_7_rd15_res = h3_7_rd15_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_7_rd15_res);
	hw_uint<32>  h3_7_rd16_res = h3_7_rd16_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_7_rd16_res);
	hw_uint<32>  h3_7_rd17_res = h3_7_rd17_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_7_rd17_res);
	hw_uint<32>  h3_7_rd18_res = h3_7_rd18_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_7_rd18_res);
	hw_uint<32>  h3_7_rd19_res = h3_7_rd19_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_7_rd19_res);
	hw_uint<32>  h3_7_rd20_res = h3_7_rd20_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_7_rd20_res);
	hw_uint<32>  h3_7_rd21_res = h3_7_rd21_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_7_rd21_res);
	hw_uint<32>  h3_7_rd22_res = h3_7_rd22_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_7_rd22_res);
	hw_uint<32>  h3_7_rd23_res = h3_7_rd23_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_7_rd23_res);
	hw_uint<32>  h3_7_rd24_res = h3_7_rd24_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_7_rd24_res);
	hw_uint<32>  h3_7_rd25_res = h3_7_rd25_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_7_rd25_res);
	hw_uint<32>  h3_7_rd26_res = h3_7_rd26_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_7_rd26_res);
	hw_uint<32>  h3_7_rd27_res = h3_7_rd27_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_7_rd27_res);
	hw_uint<32>  h3_7_rd28_res = h3_7_rd28_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_7_rd28_res);
	hw_uint<32>  h3_7_rd29_res = h3_7_rd29_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_7_rd29_res);
	hw_uint<32>  h3_7_rd30_res = h3_7_rd30_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_7_rd30_res);
	hw_uint<32>  h3_7_rd31_res = h3_7_rd31_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_7_rd31_res);
	hw_uint<32>  h3_7_rd32_res = h3_7_rd32_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_7_rd32_res);
	hw_uint<32>  h3_7_rd33_res = h3_7_rd33_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_7_rd33_res);
	hw_uint<32>  h3_7_rd34_res = h3_7_rd34_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_7_rd34_res);
	hw_uint<32>  h3_7_rd35_res = h3_7_rd35_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_7_rd35_res);
	hw_uint<32>  h3_7_rd36_res = h3_7_rd36_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_7_rd36_res);
	hw_uint<32>  h3_7_rd37_res = h3_7_rd37_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_7_rd37_res);
	hw_uint<32>  h3_7_rd38_res = h3_7_rd38_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_7_rd38_res);
	hw_uint<32>  h3_7_rd39_res = h3_7_rd39_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_7_rd39_res);
	hw_uint<32>  h3_7_rd40_res = h3_7_rd40_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_7_rd40_res);
	hw_uint<32>  h3_7_rd41_res = h3_7_rd41_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_7_rd41_res);
	hw_uint<32>  h3_7_rd42_res = h3_7_rd42_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_7_rd42_res);
	hw_uint<32>  h3_7_rd43_res = h3_7_rd43_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_7_rd43_res);
	hw_uint<32>  h3_7_rd44_res = h3_7_rd44_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_7_rd44_res);
	hw_uint<32>  h3_7_rd45_res = h3_7_rd45_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_7_rd45_res);
	hw_uint<32>  h3_7_rd46_res = h3_7_rd46_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_7_rd46_res);
	hw_uint<32>  h3_7_rd47_res = h3_7_rd47_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_7_rd47_res);
	hw_uint<32>  h3_7_rd48_res = h3_7_rd48_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_7_rd48_res);
	hw_uint<32>  h3_7_rd49_res = h3_7_rd49_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_7_rd49_res);
	hw_uint<32>  h3_7_rd50_res = h3_7_rd50_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_7_rd50_res);
	hw_uint<32>  h3_7_rd51_res = h3_7_rd51_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_7_rd51_res);
	hw_uint<32>  h3_7_rd52_res = h3_7_rd52_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_7_rd52_res);
	hw_uint<32>  h3_7_rd53_res = h3_7_rd53_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_7_rd53_res);
	hw_uint<32>  h3_7_rd54_res = h3_7_rd54_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_7_rd54_res);
	hw_uint<32>  h3_7_rd55_res = h3_7_rd55_select(h3_6, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_7_rd55_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-16, 528], [-3, 513], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 7
  // 0, 71, 36261, 36330, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 68> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 69> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 36189> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36329() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36330() {
		return f6;
	}

	inline hw_uint<32>  peek_36331() {
		return f8;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f10;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-15, 521], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-14, 522], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-13, 523], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-12, 524], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-11, 525], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-10, 526], [-3, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 6
  // 0, 71, 36261, 36331, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 36189> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f8;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-17, 527], [-2, 514], [-2, 513]}
	// Capacity: 72592
	// # of read delays: 7
  // 0, 71, 36261, 36331, 36332, 36401, 72591
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 70> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 36189> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 68> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 36189> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_71() {
		return f2;
	}

	inline hw_uint<32>  peek_36260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_36261() {
		return f4;
	}

	inline hw_uint<32>  peek_36330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_36331() {
		return f6;
	}

	inline hw_uint<32>  peek_36332() {
		return f8;
	}

	inline hw_uint<32>  peek_36400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_36401() {
		return f10;
	}

	inline hw_uint<32>  peek_72590() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_72591() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 36189
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 36189 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_cache {
  // # of banks: 8
  h3_7_h3_7_update_0_write0_merged_banks_7_cache h3_7_h3_7_update_0_write0_merged_banks_7;
  h3_7_h3_7_update_0_write1_merged_banks_7_cache h3_7_h3_7_update_0_write1_merged_banks_7;
  h3_7_h3_7_update_0_write2_merged_banks_7_cache h3_7_h3_7_update_0_write2_merged_banks_7;
  h3_7_h3_7_update_0_write3_merged_banks_7_cache h3_7_h3_7_update_0_write3_merged_banks_7;
  h3_7_h3_7_update_0_write4_merged_banks_7_cache h3_7_h3_7_update_0_write4_merged_banks_7;
  h3_7_h3_7_update_0_write5_merged_banks_7_cache h3_7_h3_7_update_0_write5_merged_banks_7;
  h3_7_h3_7_update_0_write6_merged_banks_7_cache h3_7_h3_7_update_0_write6_merged_banks_7;
  h3_7_h3_7_update_0_write7_merged_banks_7_cache h3_7_h3_7_update_0_write7_merged_banks_7;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.push(h3_7_h3_7_update_0_write0);
}

inline void h3_7_h3_7_update_0_write1_write(hw_uint<32> & h3_7_h3_7_update_0_write1, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.push(h3_7_h3_7_update_0_write1);
}

inline void h3_7_h3_7_update_0_write2_write(hw_uint<32> & h3_7_h3_7_update_0_write2, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.push(h3_7_h3_7_update_0_write2);
}

inline void h3_7_h3_7_update_0_write3_write(hw_uint<32> & h3_7_h3_7_update_0_write3, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.push(h3_7_h3_7_update_0_write3);
}

inline void h3_7_h3_7_update_0_write4_write(hw_uint<32> & h3_7_h3_7_update_0_write4, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.push(h3_7_h3_7_update_0_write4);
}

inline void h3_7_h3_7_update_0_write5_write(hw_uint<32> & h3_7_h3_7_update_0_write5, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.push(h3_7_h3_7_update_0_write5);
}

inline void h3_7_h3_7_update_0_write6_write(hw_uint<32> & h3_7_h3_7_update_0_write6, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.push(h3_7_h3_7_update_0_write6);
}

inline void h3_7_h3_7_update_0_write7_write(hw_uint<32> & h3_7_h3_7_update_0_write7, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.push(h3_7_h3_7_update_0_write7);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[-1 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_36332();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd10_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd10 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd11_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd11 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd12_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd12 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd13_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd13 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd14_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd14 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd15_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd15 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd16_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd16 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd17_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd17 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd18_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd18 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd19_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd19 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd20_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd20 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd21_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd21 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[2 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd22_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd22 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd23_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd23 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd24_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd24 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd25_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd25 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd26_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd26 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd27_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd27 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd28_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd28 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[3 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd29_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd29 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd30_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd30 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd31_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd31 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd32_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd32 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd33_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd33 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd34_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd34 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd35_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd35 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[4 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd36_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd36 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd37_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd37 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd38_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd38 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd39_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd39 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd40_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd40 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd41_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd41 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd42_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd42 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[5 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd43_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd43 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd44_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd44 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd45_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd45 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd46_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd46 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd47_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd47 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd48_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd48 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd49_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd49 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[6 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd50_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd50 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd51_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd51 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd52_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd52 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd53_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd53 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, d1, 1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_71();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd54_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd54 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[7 + 8d0, 1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_7.peek_36261();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd55_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd55 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_36330();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd7 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[8d0, d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_36331();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd8_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd8 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, -1 + d1, d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_36401();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd9_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd9 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + 8d0, d1, -1 + d2] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_7.peek_72591();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
//	h3_7_h3_7_update_0_write1
//	h3_7_h3_7_update_0_write2
//	h3_7_h3_7_update_0_write3
//	h3_7_h3_7_update_0_write4
//	h3_7_h3_7_update_0_write5
//	h3_7_h3_7_update_0_write6
//	h3_7_h3_7_update_0_write7
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<256>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write1_res = h3_7_update_0_write.extract<32, 63>();
	h3_7_h3_7_update_0_write1_write(h3_7_h3_7_update_0_write1_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write2_res = h3_7_update_0_write.extract<64, 95>();
	h3_7_h3_7_update_0_write2_write(h3_7_h3_7_update_0_write2_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write3_res = h3_7_update_0_write.extract<96, 127>();
	h3_7_h3_7_update_0_write3_write(h3_7_h3_7_update_0_write3_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write4_res = h3_7_update_0_write.extract<128, 159>();
	h3_7_h3_7_update_0_write4_write(h3_7_h3_7_update_0_write4_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write5_res = h3_7_update_0_write.extract<160, 191>();
	h3_7_h3_7_update_0_write5_write(h3_7_h3_7_update_0_write5_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write6_res = h3_7_update_0_write.extract<192, 223>();
	h3_7_h3_7_update_0_write6_write(h3_7_h3_7_update_0_write6_res, h3_7, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write7_res = h3_7_update_0_write.extract<224, 255>();
	h3_7_h3_7_update_0_write7_write(h3_7_h3_7_update_0_write7_res, h3_7, d0, d1, d2, dynamic_address);
}

// h3_8_update_0_read
//	h3_8_rd0
//	h3_8_rd1
//	h3_8_rd2
//	h3_8_rd3
//	h3_8_rd4
//	h3_8_rd5
//	h3_8_rd6
//	h3_8_rd7
//	h3_8_rd8
//	h3_8_rd9
//	h3_8_rd10
//	h3_8_rd11
//	h3_8_rd12
//	h3_8_rd13
//	h3_8_rd14
//	h3_8_rd15
//	h3_8_rd16
//	h3_8_rd17
//	h3_8_rd18
//	h3_8_rd19
//	h3_8_rd20
//	h3_8_rd21
//	h3_8_rd22
//	h3_8_rd23
//	h3_8_rd24
//	h3_8_rd25
//	h3_8_rd26
//	h3_8_rd27
//	h3_8_rd28
//	h3_8_rd29
//	h3_8_rd30
//	h3_8_rd31
//	h3_8_rd32
//	h3_8_rd33
//	h3_8_rd34
//	h3_8_rd35
//	h3_8_rd36
//	h3_8_rd37
//	h3_8_rd38
//	h3_8_rd39
//	h3_8_rd40
//	h3_8_rd41
//	h3_8_rd42
//	h3_8_rd43
//	h3_8_rd44
//	h3_8_rd45
//	h3_8_rd46
//	h3_8_rd47
//	h3_8_rd48
//	h3_8_rd49
//	h3_8_rd50
//	h3_8_rd51
//	h3_8_rd52
//	h3_8_rd53
//	h3_8_rd54
//	h3_8_rd55
inline hw_uint<1792> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_8_rd0
    // h3_8_rd1
    // h3_8_rd2
    // h3_8_rd3
    // h3_8_rd4
    // h3_8_rd5
    // h3_8_rd6
    // h3_8_rd7
    // h3_8_rd8
    // h3_8_rd9
    // h3_8_rd10
    // h3_8_rd11
    // h3_8_rd12
    // h3_8_rd13
    // h3_8_rd14
    // h3_8_rd15
    // h3_8_rd16
    // h3_8_rd17
    // h3_8_rd18
    // h3_8_rd19
    // h3_8_rd20
    // h3_8_rd21
    // h3_8_rd22
    // h3_8_rd23
    // h3_8_rd24
    // h3_8_rd25
    // h3_8_rd26
    // h3_8_rd27
    // h3_8_rd28
    // h3_8_rd29
    // h3_8_rd30
    // h3_8_rd31
    // h3_8_rd32
    // h3_8_rd33
    // h3_8_rd34
    // h3_8_rd35
    // h3_8_rd36
    // h3_8_rd37
    // h3_8_rd38
    // h3_8_rd39
    // h3_8_rd40
    // h3_8_rd41
    // h3_8_rd42
    // h3_8_rd43
    // h3_8_rd44
    // h3_8_rd45
    // h3_8_rd46
    // h3_8_rd47
    // h3_8_rd48
    // h3_8_rd49
    // h3_8_rd50
    // h3_8_rd51
    // h3_8_rd52
    // h3_8_rd53
    // h3_8_rd54
    // h3_8_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_8_rd6_res);
	hw_uint<32>  h3_8_rd7_res = h3_8_rd7_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_8_rd7_res);
	hw_uint<32>  h3_8_rd8_res = h3_8_rd8_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_8_rd8_res);
	hw_uint<32>  h3_8_rd9_res = h3_8_rd9_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_8_rd9_res);
	hw_uint<32>  h3_8_rd10_res = h3_8_rd10_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_8_rd10_res);
	hw_uint<32>  h3_8_rd11_res = h3_8_rd11_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_8_rd11_res);
	hw_uint<32>  h3_8_rd12_res = h3_8_rd12_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_8_rd12_res);
	hw_uint<32>  h3_8_rd13_res = h3_8_rd13_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_8_rd13_res);
	hw_uint<32>  h3_8_rd14_res = h3_8_rd14_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_8_rd14_res);
	hw_uint<32>  h3_8_rd15_res = h3_8_rd15_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_8_rd15_res);
	hw_uint<32>  h3_8_rd16_res = h3_8_rd16_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_8_rd16_res);
	hw_uint<32>  h3_8_rd17_res = h3_8_rd17_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_8_rd17_res);
	hw_uint<32>  h3_8_rd18_res = h3_8_rd18_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_8_rd18_res);
	hw_uint<32>  h3_8_rd19_res = h3_8_rd19_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_8_rd19_res);
	hw_uint<32>  h3_8_rd20_res = h3_8_rd20_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_8_rd20_res);
	hw_uint<32>  h3_8_rd21_res = h3_8_rd21_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_8_rd21_res);
	hw_uint<32>  h3_8_rd22_res = h3_8_rd22_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_8_rd22_res);
	hw_uint<32>  h3_8_rd23_res = h3_8_rd23_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_8_rd23_res);
	hw_uint<32>  h3_8_rd24_res = h3_8_rd24_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_8_rd24_res);
	hw_uint<32>  h3_8_rd25_res = h3_8_rd25_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_8_rd25_res);
	hw_uint<32>  h3_8_rd26_res = h3_8_rd26_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_8_rd26_res);
	hw_uint<32>  h3_8_rd27_res = h3_8_rd27_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_8_rd27_res);
	hw_uint<32>  h3_8_rd28_res = h3_8_rd28_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_8_rd28_res);
	hw_uint<32>  h3_8_rd29_res = h3_8_rd29_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_8_rd29_res);
	hw_uint<32>  h3_8_rd30_res = h3_8_rd30_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_8_rd30_res);
	hw_uint<32>  h3_8_rd31_res = h3_8_rd31_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_8_rd31_res);
	hw_uint<32>  h3_8_rd32_res = h3_8_rd32_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_8_rd32_res);
	hw_uint<32>  h3_8_rd33_res = h3_8_rd33_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_8_rd33_res);
	hw_uint<32>  h3_8_rd34_res = h3_8_rd34_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_8_rd34_res);
	hw_uint<32>  h3_8_rd35_res = h3_8_rd35_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_8_rd35_res);
	hw_uint<32>  h3_8_rd36_res = h3_8_rd36_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_8_rd36_res);
	hw_uint<32>  h3_8_rd37_res = h3_8_rd37_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_8_rd37_res);
	hw_uint<32>  h3_8_rd38_res = h3_8_rd38_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_8_rd38_res);
	hw_uint<32>  h3_8_rd39_res = h3_8_rd39_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_8_rd39_res);
	hw_uint<32>  h3_8_rd40_res = h3_8_rd40_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_8_rd40_res);
	hw_uint<32>  h3_8_rd41_res = h3_8_rd41_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_8_rd41_res);
	hw_uint<32>  h3_8_rd42_res = h3_8_rd42_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_8_rd42_res);
	hw_uint<32>  h3_8_rd43_res = h3_8_rd43_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_8_rd43_res);
	hw_uint<32>  h3_8_rd44_res = h3_8_rd44_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_8_rd44_res);
	hw_uint<32>  h3_8_rd45_res = h3_8_rd45_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_8_rd45_res);
	hw_uint<32>  h3_8_rd46_res = h3_8_rd46_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_8_rd46_res);
	hw_uint<32>  h3_8_rd47_res = h3_8_rd47_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_8_rd47_res);
	hw_uint<32>  h3_8_rd48_res = h3_8_rd48_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_8_rd48_res);
	hw_uint<32>  h3_8_rd49_res = h3_8_rd49_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_8_rd49_res);
	hw_uint<32>  h3_8_rd50_res = h3_8_rd50_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_8_rd50_res);
	hw_uint<32>  h3_8_rd51_res = h3_8_rd51_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_8_rd51_res);
	hw_uint<32>  h3_8_rd52_res = h3_8_rd52_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_8_rd52_res);
	hw_uint<32>  h3_8_rd53_res = h3_8_rd53_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_8_rd53_res);
	hw_uint<32>  h3_8_rd54_res = h3_8_rd54_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_8_rd54_res);
	hw_uint<32>  h3_8_rd55_res = h3_8_rd55_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_8_rd55_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-8, 520], [-2, 512], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 7
  // 0, 69, 35089, 35156, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 66> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 67> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 35019> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35155() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35156() {
		return f6;
	}

	inline hw_uint<32>  peek_35157() {
		return f8;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f10;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-7, 513], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-6, 514], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-5, 515], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-4, 516], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-3, 517], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-2, 518], [-2, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 6
  // 0, 69, 35089, 35157, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 35019> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f8;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-9, 519], [-1, 513], [-1, 512]}
	// Capacity: 70246
	// # of read delays: 7
  // 0, 69, 35089, 35157, 35158, 35225, 70245
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 68> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 35019> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 66> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 35019> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_69() {
		return f2;
	}

	inline hw_uint<32>  peek_35088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_35089() {
		return f4;
	}

	inline hw_uint<32>  peek_35156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35157() {
		return f6;
	}

	inline hw_uint<32>  peek_35158() {
		return f8;
	}

	inline hw_uint<32>  peek_35224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_35225() {
		return f10;
	}

	inline hw_uint<32>  peek_70244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_70245() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35019
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35019 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_cache {
  // # of banks: 8
  h3_8_h3_8_update_0_write0_merged_banks_7_cache h3_8_h3_8_update_0_write0_merged_banks_7;
  h3_8_h3_8_update_0_write1_merged_banks_7_cache h3_8_h3_8_update_0_write1_merged_banks_7;
  h3_8_h3_8_update_0_write2_merged_banks_7_cache h3_8_h3_8_update_0_write2_merged_banks_7;
  h3_8_h3_8_update_0_write3_merged_banks_7_cache h3_8_h3_8_update_0_write3_merged_banks_7;
  h3_8_h3_8_update_0_write4_merged_banks_7_cache h3_8_h3_8_update_0_write4_merged_banks_7;
  h3_8_h3_8_update_0_write5_merged_banks_7_cache h3_8_h3_8_update_0_write5_merged_banks_7;
  h3_8_h3_8_update_0_write6_merged_banks_7_cache h3_8_h3_8_update_0_write6_merged_banks_7;
  h3_8_h3_8_update_0_write7_merged_banks_7_cache h3_8_h3_8_update_0_write7_merged_banks_7;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.push(h3_8_h3_8_update_0_write0);
}

inline void h3_8_h3_8_update_0_write1_write(hw_uint<32> & h3_8_h3_8_update_0_write1, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.push(h3_8_h3_8_update_0_write1);
}

inline void h3_8_h3_8_update_0_write2_write(hw_uint<32> & h3_8_h3_8_update_0_write2, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.push(h3_8_h3_8_update_0_write2);
}

inline void h3_8_h3_8_update_0_write3_write(hw_uint<32> & h3_8_h3_8_update_0_write3, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.push(h3_8_h3_8_update_0_write3);
}

inline void h3_8_h3_8_update_0_write4_write(hw_uint<32> & h3_8_h3_8_update_0_write4, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.push(h3_8_h3_8_update_0_write4);
}

inline void h3_8_h3_8_update_0_write5_write(hw_uint<32> & h3_8_h3_8_update_0_write5, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.push(h3_8_h3_8_update_0_write5);
}

inline void h3_8_h3_8_update_0_write6_write(hw_uint<32> & h3_8_h3_8_update_0_write6, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.push(h3_8_h3_8_update_0_write6);
}

inline void h3_8_h3_8_update_0_write7_write(hw_uint<32> & h3_8_h3_8_update_0_write7, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.push(h3_8_h3_8_update_0_write7);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[-1 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_35158();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd10_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd10 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd11_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd11 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd12_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd12 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd13_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd13 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd14_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd14 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd15_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd15 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd16_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd16 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd17_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd17 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd18_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd18 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd19_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd19 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd20_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd20 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd21_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd21 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[2 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd22_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd22 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd23_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd23 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd24_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd24 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd25_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd25 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd26_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd26 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd27_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd27 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd28_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd28 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[3 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd29_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd29 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd30_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd30 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd31_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd31 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd32_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd32 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd33_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd33 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd34_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd34 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd35_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd35 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[4 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd36_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd36 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd37_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd37 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd38_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd38 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd39_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd39 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd40_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd40 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd41_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd41 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd42_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd42 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[5 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd43_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd43 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd44_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd44 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd45_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd45 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd46_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd46 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd47_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd47 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd48_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd48 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd49_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd49 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[6 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd50_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd50 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd51_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd51 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd52_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd52 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd53_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd53 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, d1, 1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_69();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd54_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd54 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[7 + 8d0, 1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_7.peek_35089();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd55_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd55 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_35156();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd7_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd7 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[8d0, d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_35157();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd8_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd8 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, -1 + d1, d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_35225();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd9_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd9 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + 8d0, d1, -1 + d2] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_7.peek_70245();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
//	h3_8_h3_8_update_0_write1
//	h3_8_h3_8_update_0_write2
//	h3_8_h3_8_update_0_write3
//	h3_8_h3_8_update_0_write4
//	h3_8_h3_8_update_0_write5
//	h3_8_h3_8_update_0_write6
//	h3_8_h3_8_update_0_write7
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<256>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write1_res = h3_8_update_0_write.extract<32, 63>();
	h3_8_h3_8_update_0_write1_write(h3_8_h3_8_update_0_write1_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write2_res = h3_8_update_0_write.extract<64, 95>();
	h3_8_h3_8_update_0_write2_write(h3_8_h3_8_update_0_write2_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write3_res = h3_8_update_0_write.extract<96, 127>();
	h3_8_h3_8_update_0_write3_write(h3_8_h3_8_update_0_write3_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write4_res = h3_8_update_0_write.extract<128, 159>();
	h3_8_h3_8_update_0_write4_write(h3_8_h3_8_update_0_write4_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write5_res = h3_8_update_0_write.extract<160, 191>();
	h3_8_h3_8_update_0_write5_write(h3_8_h3_8_update_0_write5_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write6_res = h3_8_update_0_write.extract<192, 223>();
	h3_8_h3_8_update_0_write6_write(h3_8_h3_8_update_0_write6_res, h3_8, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write7_res = h3_8_update_0_write.extract<224, 255>();
	h3_8_h3_8_update_0_write7_write(h3_8_h3_8_update_0_write7_res, h3_8, d0, d1, d2, dynamic_address);
}

// h3_9_update_0_read
//	h3_9_rd0
//	h3_9_rd1
//	h3_9_rd2
//	h3_9_rd3
//	h3_9_rd4
//	h3_9_rd5
//	h3_9_rd6
//	h3_9_rd7
//	h3_9_rd8
//	h3_9_rd9
//	h3_9_rd10
//	h3_9_rd11
//	h3_9_rd12
//	h3_9_rd13
//	h3_9_rd14
//	h3_9_rd15
//	h3_9_rd16
//	h3_9_rd17
//	h3_9_rd18
//	h3_9_rd19
//	h3_9_rd20
//	h3_9_rd21
//	h3_9_rd22
//	h3_9_rd23
//	h3_9_rd24
//	h3_9_rd25
//	h3_9_rd26
//	h3_9_rd27
//	h3_9_rd28
//	h3_9_rd29
//	h3_9_rd30
//	h3_9_rd31
//	h3_9_rd32
//	h3_9_rd33
//	h3_9_rd34
//	h3_9_rd35
//	h3_9_rd36
//	h3_9_rd37
//	h3_9_rd38
//	h3_9_rd39
//	h3_9_rd40
//	h3_9_rd41
//	h3_9_rd42
//	h3_9_rd43
//	h3_9_rd44
//	h3_9_rd45
//	h3_9_rd46
//	h3_9_rd47
//	h3_9_rd48
//	h3_9_rd49
//	h3_9_rd50
//	h3_9_rd51
//	h3_9_rd52
//	h3_9_rd53
//	h3_9_rd54
//	h3_9_rd55
inline hw_uint<1792> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_9_rd0
    // h3_9_rd1
    // h3_9_rd2
    // h3_9_rd3
    // h3_9_rd4
    // h3_9_rd5
    // h3_9_rd6
    // h3_9_rd7
    // h3_9_rd8
    // h3_9_rd9
    // h3_9_rd10
    // h3_9_rd11
    // h3_9_rd12
    // h3_9_rd13
    // h3_9_rd14
    // h3_9_rd15
    // h3_9_rd16
    // h3_9_rd17
    // h3_9_rd18
    // h3_9_rd19
    // h3_9_rd20
    // h3_9_rd21
    // h3_9_rd22
    // h3_9_rd23
    // h3_9_rd24
    // h3_9_rd25
    // h3_9_rd26
    // h3_9_rd27
    // h3_9_rd28
    // h3_9_rd29
    // h3_9_rd30
    // h3_9_rd31
    // h3_9_rd32
    // h3_9_rd33
    // h3_9_rd34
    // h3_9_rd35
    // h3_9_rd36
    // h3_9_rd37
    // h3_9_rd38
    // h3_9_rd39
    // h3_9_rd40
    // h3_9_rd41
    // h3_9_rd42
    // h3_9_rd43
    // h3_9_rd44
    // h3_9_rd45
    // h3_9_rd46
    // h3_9_rd47
    // h3_9_rd48
    // h3_9_rd49
    // h3_9_rd50
    // h3_9_rd51
    // h3_9_rd52
    // h3_9_rd53
    // h3_9_rd54
    // h3_9_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_9_rd6_res);
	hw_uint<32>  h3_9_rd7_res = h3_9_rd7_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_9_rd7_res);
	hw_uint<32>  h3_9_rd8_res = h3_9_rd8_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_9_rd8_res);
	hw_uint<32>  h3_9_rd9_res = h3_9_rd9_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_9_rd9_res);
	hw_uint<32>  h3_9_rd10_res = h3_9_rd10_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_9_rd10_res);
	hw_uint<32>  h3_9_rd11_res = h3_9_rd11_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_9_rd11_res);
	hw_uint<32>  h3_9_rd12_res = h3_9_rd12_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_9_rd12_res);
	hw_uint<32>  h3_9_rd13_res = h3_9_rd13_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_9_rd13_res);
	hw_uint<32>  h3_9_rd14_res = h3_9_rd14_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_9_rd14_res);
	hw_uint<32>  h3_9_rd15_res = h3_9_rd15_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_9_rd15_res);
	hw_uint<32>  h3_9_rd16_res = h3_9_rd16_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_9_rd16_res);
	hw_uint<32>  h3_9_rd17_res = h3_9_rd17_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_9_rd17_res);
	hw_uint<32>  h3_9_rd18_res = h3_9_rd18_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_9_rd18_res);
	hw_uint<32>  h3_9_rd19_res = h3_9_rd19_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_9_rd19_res);
	hw_uint<32>  h3_9_rd20_res = h3_9_rd20_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_9_rd20_res);
	hw_uint<32>  h3_9_rd21_res = h3_9_rd21_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_9_rd21_res);
	hw_uint<32>  h3_9_rd22_res = h3_9_rd22_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_9_rd22_res);
	hw_uint<32>  h3_9_rd23_res = h3_9_rd23_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_9_rd23_res);
	hw_uint<32>  h3_9_rd24_res = h3_9_rd24_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_9_rd24_res);
	hw_uint<32>  h3_9_rd25_res = h3_9_rd25_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_9_rd25_res);
	hw_uint<32>  h3_9_rd26_res = h3_9_rd26_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_9_rd26_res);
	hw_uint<32>  h3_9_rd27_res = h3_9_rd27_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_9_rd27_res);
	hw_uint<32>  h3_9_rd28_res = h3_9_rd28_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_9_rd28_res);
	hw_uint<32>  h3_9_rd29_res = h3_9_rd29_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_9_rd29_res);
	hw_uint<32>  h3_9_rd30_res = h3_9_rd30_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_9_rd30_res);
	hw_uint<32>  h3_9_rd31_res = h3_9_rd31_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_9_rd31_res);
	hw_uint<32>  h3_9_rd32_res = h3_9_rd32_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_9_rd32_res);
	hw_uint<32>  h3_9_rd33_res = h3_9_rd33_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_9_rd33_res);
	hw_uint<32>  h3_9_rd34_res = h3_9_rd34_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_9_rd34_res);
	hw_uint<32>  h3_9_rd35_res = h3_9_rd35_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_9_rd35_res);
	hw_uint<32>  h3_9_rd36_res = h3_9_rd36_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_9_rd36_res);
	hw_uint<32>  h3_9_rd37_res = h3_9_rd37_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_9_rd37_res);
	hw_uint<32>  h3_9_rd38_res = h3_9_rd38_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_9_rd38_res);
	hw_uint<32>  h3_9_rd39_res = h3_9_rd39_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_9_rd39_res);
	hw_uint<32>  h3_9_rd40_res = h3_9_rd40_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_9_rd40_res);
	hw_uint<32>  h3_9_rd41_res = h3_9_rd41_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_9_rd41_res);
	hw_uint<32>  h3_9_rd42_res = h3_9_rd42_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_9_rd42_res);
	hw_uint<32>  h3_9_rd43_res = h3_9_rd43_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_9_rd43_res);
	hw_uint<32>  h3_9_rd44_res = h3_9_rd44_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_9_rd44_res);
	hw_uint<32>  h3_9_rd45_res = h3_9_rd45_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_9_rd45_res);
	hw_uint<32>  h3_9_rd46_res = h3_9_rd46_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_9_rd46_res);
	hw_uint<32>  h3_9_rd47_res = h3_9_rd47_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_9_rd47_res);
	hw_uint<32>  h3_9_rd48_res = h3_9_rd48_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_9_rd48_res);
	hw_uint<32>  h3_9_rd49_res = h3_9_rd49_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_9_rd49_res);
	hw_uint<32>  h3_9_rd50_res = h3_9_rd50_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_9_rd50_res);
	hw_uint<32>  h3_9_rd51_res = h3_9_rd51_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_9_rd51_res);
	hw_uint<32>  h3_9_rd52_res = h3_9_rd52_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_9_rd52_res);
	hw_uint<32>  h3_9_rd53_res = h3_9_rd53_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_9_rd53_res);
	hw_uint<32>  h3_9_rd54_res = h3_9_rd54_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_9_rd54_res);
	hw_uint<32>  h3_9_rd55_res = h3_9_rd55_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_9_rd55_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[0, 512], [-1, 511], [0, 511]}
	// Capacity: 67916
	// # of read delays: 7
  // 0, 67, 33925, 33990, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 64> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 65> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 33857> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33989() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33990() {
		return f6;
	}

	inline hw_uint<32>  peek_33991() {
		return f8;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f10;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[1, 505], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[2, 506], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[3, 507], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[4, 508], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[5, 509], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[6, 510], [-1, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 6
  // 0, 67, 33925, 33991, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 33857> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f8;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_h3_9_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-1, 511], [0, 512], [0, 511]}
	// Capacity: 67916
	// # of read delays: 7
  // 0, 67, 33925, 33991, 33992, 34057, 67915
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 66> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 33857> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 64> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 33857> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_67() {
		return f2;
	}

	inline hw_uint<32>  peek_33924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_33925() {
		return f4;
	}

	inline hw_uint<32>  peek_33990() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33991() {
		return f6;
	}

	inline hw_uint<32>  peek_33992() {
		return f8;
	}

	inline hw_uint<32>  peek_34056() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_34057() {
		return f10;
	}

	inline hw_uint<32>  peek_67914() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_67915() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33857
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33857 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_cache {
  // # of banks: 8
  h3_9_h3_9_update_0_write0_merged_banks_7_cache h3_9_h3_9_update_0_write0_merged_banks_7;
  h3_9_h3_9_update_0_write1_merged_banks_7_cache h3_9_h3_9_update_0_write1_merged_banks_7;
  h3_9_h3_9_update_0_write2_merged_banks_7_cache h3_9_h3_9_update_0_write2_merged_banks_7;
  h3_9_h3_9_update_0_write3_merged_banks_7_cache h3_9_h3_9_update_0_write3_merged_banks_7;
  h3_9_h3_9_update_0_write4_merged_banks_7_cache h3_9_h3_9_update_0_write4_merged_banks_7;
  h3_9_h3_9_update_0_write5_merged_banks_7_cache h3_9_h3_9_update_0_write5_merged_banks_7;
  h3_9_h3_9_update_0_write6_merged_banks_7_cache h3_9_h3_9_update_0_write6_merged_banks_7;
  h3_9_h3_9_update_0_write7_merged_banks_7_cache h3_9_h3_9_update_0_write7_merged_banks_7;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.push(h3_9_h3_9_update_0_write0);
}

inline void h3_9_h3_9_update_0_write1_write(hw_uint<32> & h3_9_h3_9_update_0_write1, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.push(h3_9_h3_9_update_0_write1);
}

inline void h3_9_h3_9_update_0_write2_write(hw_uint<32> & h3_9_h3_9_update_0_write2, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.push(h3_9_h3_9_update_0_write2);
}

inline void h3_9_h3_9_update_0_write3_write(hw_uint<32> & h3_9_h3_9_update_0_write3, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.push(h3_9_h3_9_update_0_write3);
}

inline void h3_9_h3_9_update_0_write4_write(hw_uint<32> & h3_9_h3_9_update_0_write4, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.push(h3_9_h3_9_update_0_write4);
}

inline void h3_9_h3_9_update_0_write5_write(hw_uint<32> & h3_9_h3_9_update_0_write5, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.push(h3_9_h3_9_update_0_write5);
}

inline void h3_9_h3_9_update_0_write6_write(hw_uint<32> & h3_9_h3_9_update_0_write6, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.push(h3_9_h3_9_update_0_write6);
}

inline void h3_9_h3_9_update_0_write7_write(hw_uint<32> & h3_9_h3_9_update_0_write7, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.push(h3_9_h3_9_update_0_write7);
}

inline hw_uint<32>  h3_10_rd0_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd0 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[-1 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_33992();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd1_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd1 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd10_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd10 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd11_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd11 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd12_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd12 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd13_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd13 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd14_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd14 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd15_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd15 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd16_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd16 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd17_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd17 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd18_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd18 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd19_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd19 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd2_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd2 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd20_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd20 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd21_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd21 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[2 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_10_rd22_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd22 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd23_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd23 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd24_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd24 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd25_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd25 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd26_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd26 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd27_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd27 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd28_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd28 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[3 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_10_rd29_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd29 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd3_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd3 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd30_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd30 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd31_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd31 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd32_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd32 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd33_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd33 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd34_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd34 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd35_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd35 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[4 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_10_rd36_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd36 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd37_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd37 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd38_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd38 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd39_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd39 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd4_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd4 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd40_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd40 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd41_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd41 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd42_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd42 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[5 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_10_rd43_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd43 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd44_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd44 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd45_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd45 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd46_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd46 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd47_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd47 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd48_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd48 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd49_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd49 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[6 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_10_rd5_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd5 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd50_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd50 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd51_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd51 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd52_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd52 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd53_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd53 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, d1, 1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_67();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd54_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd54 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[7 + 8d0, 1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_merged_banks_7.peek_33925();
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_10_rd55_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd55 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_33990();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd6_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd6 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd7_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd7 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[8d0, d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_33991();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd8_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd8 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, -1 + d1, d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_34057();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_10_rd9_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd9 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + 8d0, d1, -1 + d2] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_merged_banks_7.peek_67915();
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_10_update_0_read
//	h3_10_rd0
//	h3_10_rd1
//	h3_10_rd2
//	h3_10_rd3
//	h3_10_rd4
//	h3_10_rd5
//	h3_10_rd6
//	h3_10_rd7
//	h3_10_rd8
//	h3_10_rd9
//	h3_10_rd10
//	h3_10_rd11
//	h3_10_rd12
//	h3_10_rd13
//	h3_10_rd14
//	h3_10_rd15
//	h3_10_rd16
//	h3_10_rd17
//	h3_10_rd18
//	h3_10_rd19
//	h3_10_rd20
//	h3_10_rd21
//	h3_10_rd22
//	h3_10_rd23
//	h3_10_rd24
//	h3_10_rd25
//	h3_10_rd26
//	h3_10_rd27
//	h3_10_rd28
//	h3_10_rd29
//	h3_10_rd30
//	h3_10_rd31
//	h3_10_rd32
//	h3_10_rd33
//	h3_10_rd34
//	h3_10_rd35
//	h3_10_rd36
//	h3_10_rd37
//	h3_10_rd38
//	h3_10_rd39
//	h3_10_rd40
//	h3_10_rd41
//	h3_10_rd42
//	h3_10_rd43
//	h3_10_rd44
//	h3_10_rd45
//	h3_10_rd46
//	h3_10_rd47
//	h3_10_rd48
//	h3_10_rd49
//	h3_10_rd50
//	h3_10_rd51
//	h3_10_rd52
//	h3_10_rd53
//	h3_10_rd54
//	h3_10_rd55
inline hw_uint<1792> h3_9_h3_10_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_10_rd0
    // h3_10_rd1
    // h3_10_rd2
    // h3_10_rd3
    // h3_10_rd4
    // h3_10_rd5
    // h3_10_rd6
    // h3_10_rd7
    // h3_10_rd8
    // h3_10_rd9
    // h3_10_rd10
    // h3_10_rd11
    // h3_10_rd12
    // h3_10_rd13
    // h3_10_rd14
    // h3_10_rd15
    // h3_10_rd16
    // h3_10_rd17
    // h3_10_rd18
    // h3_10_rd19
    // h3_10_rd20
    // h3_10_rd21
    // h3_10_rd22
    // h3_10_rd23
    // h3_10_rd24
    // h3_10_rd25
    // h3_10_rd26
    // h3_10_rd27
    // h3_10_rd28
    // h3_10_rd29
    // h3_10_rd30
    // h3_10_rd31
    // h3_10_rd32
    // h3_10_rd33
    // h3_10_rd34
    // h3_10_rd35
    // h3_10_rd36
    // h3_10_rd37
    // h3_10_rd38
    // h3_10_rd39
    // h3_10_rd40
    // h3_10_rd41
    // h3_10_rd42
    // h3_10_rd43
    // h3_10_rd44
    // h3_10_rd45
    // h3_10_rd46
    // h3_10_rd47
    // h3_10_rd48
    // h3_10_rd49
    // h3_10_rd50
    // h3_10_rd51
    // h3_10_rd52
    // h3_10_rd53
    // h3_10_rd54
    // h3_10_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_10_rd0_res = h3_10_rd0_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_10_rd0_res);
	hw_uint<32>  h3_10_rd1_res = h3_10_rd1_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_10_rd1_res);
	hw_uint<32>  h3_10_rd2_res = h3_10_rd2_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_10_rd2_res);
	hw_uint<32>  h3_10_rd3_res = h3_10_rd3_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_10_rd3_res);
	hw_uint<32>  h3_10_rd4_res = h3_10_rd4_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_10_rd4_res);
	hw_uint<32>  h3_10_rd5_res = h3_10_rd5_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_10_rd5_res);
	hw_uint<32>  h3_10_rd6_res = h3_10_rd6_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_10_rd6_res);
	hw_uint<32>  h3_10_rd7_res = h3_10_rd7_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_10_rd7_res);
	hw_uint<32>  h3_10_rd8_res = h3_10_rd8_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_10_rd8_res);
	hw_uint<32>  h3_10_rd9_res = h3_10_rd9_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_10_rd9_res);
	hw_uint<32>  h3_10_rd10_res = h3_10_rd10_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_10_rd10_res);
	hw_uint<32>  h3_10_rd11_res = h3_10_rd11_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_10_rd11_res);
	hw_uint<32>  h3_10_rd12_res = h3_10_rd12_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_10_rd12_res);
	hw_uint<32>  h3_10_rd13_res = h3_10_rd13_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_10_rd13_res);
	hw_uint<32>  h3_10_rd14_res = h3_10_rd14_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_10_rd14_res);
	hw_uint<32>  h3_10_rd15_res = h3_10_rd15_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_10_rd15_res);
	hw_uint<32>  h3_10_rd16_res = h3_10_rd16_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_10_rd16_res);
	hw_uint<32>  h3_10_rd17_res = h3_10_rd17_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_10_rd17_res);
	hw_uint<32>  h3_10_rd18_res = h3_10_rd18_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_10_rd18_res);
	hw_uint<32>  h3_10_rd19_res = h3_10_rd19_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_10_rd19_res);
	hw_uint<32>  h3_10_rd20_res = h3_10_rd20_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_10_rd20_res);
	hw_uint<32>  h3_10_rd21_res = h3_10_rd21_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_10_rd21_res);
	hw_uint<32>  h3_10_rd22_res = h3_10_rd22_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_10_rd22_res);
	hw_uint<32>  h3_10_rd23_res = h3_10_rd23_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_10_rd23_res);
	hw_uint<32>  h3_10_rd24_res = h3_10_rd24_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_10_rd24_res);
	hw_uint<32>  h3_10_rd25_res = h3_10_rd25_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_10_rd25_res);
	hw_uint<32>  h3_10_rd26_res = h3_10_rd26_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_10_rd26_res);
	hw_uint<32>  h3_10_rd27_res = h3_10_rd27_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_10_rd27_res);
	hw_uint<32>  h3_10_rd28_res = h3_10_rd28_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_10_rd28_res);
	hw_uint<32>  h3_10_rd29_res = h3_10_rd29_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_10_rd29_res);
	hw_uint<32>  h3_10_rd30_res = h3_10_rd30_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_10_rd30_res);
	hw_uint<32>  h3_10_rd31_res = h3_10_rd31_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_10_rd31_res);
	hw_uint<32>  h3_10_rd32_res = h3_10_rd32_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_10_rd32_res);
	hw_uint<32>  h3_10_rd33_res = h3_10_rd33_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_10_rd33_res);
	hw_uint<32>  h3_10_rd34_res = h3_10_rd34_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_10_rd34_res);
	hw_uint<32>  h3_10_rd35_res = h3_10_rd35_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_10_rd35_res);
	hw_uint<32>  h3_10_rd36_res = h3_10_rd36_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_10_rd36_res);
	hw_uint<32>  h3_10_rd37_res = h3_10_rd37_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_10_rd37_res);
	hw_uint<32>  h3_10_rd38_res = h3_10_rd38_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_10_rd38_res);
	hw_uint<32>  h3_10_rd39_res = h3_10_rd39_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_10_rd39_res);
	hw_uint<32>  h3_10_rd40_res = h3_10_rd40_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_10_rd40_res);
	hw_uint<32>  h3_10_rd41_res = h3_10_rd41_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_10_rd41_res);
	hw_uint<32>  h3_10_rd42_res = h3_10_rd42_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_10_rd42_res);
	hw_uint<32>  h3_10_rd43_res = h3_10_rd43_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_10_rd43_res);
	hw_uint<32>  h3_10_rd44_res = h3_10_rd44_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_10_rd44_res);
	hw_uint<32>  h3_10_rd45_res = h3_10_rd45_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_10_rd45_res);
	hw_uint<32>  h3_10_rd46_res = h3_10_rd46_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_10_rd46_res);
	hw_uint<32>  h3_10_rd47_res = h3_10_rd47_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_10_rd47_res);
	hw_uint<32>  h3_10_rd48_res = h3_10_rd48_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_10_rd48_res);
	hw_uint<32>  h3_10_rd49_res = h3_10_rd49_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_10_rd49_res);
	hw_uint<32>  h3_10_rd50_res = h3_10_rd50_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_10_rd50_res);
	hw_uint<32>  h3_10_rd51_res = h3_10_rd51_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_10_rd51_res);
	hw_uint<32>  h3_10_rd52_res = h3_10_rd52_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_10_rd52_res);
	hw_uint<32>  h3_10_rd53_res = h3_10_rd53_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_10_rd53_res);
	hw_uint<32>  h3_10_rd54_res = h3_10_rd54_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_10_rd54_res);
	hw_uint<32>  h3_10_rd55_res = h3_10_rd55_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_10_rd55_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
//	h3_9_h3_9_update_0_write1
//	h3_9_h3_9_update_0_write2
//	h3_9_h3_9_update_0_write3
//	h3_9_h3_9_update_0_write4
//	h3_9_h3_9_update_0_write5
//	h3_9_h3_9_update_0_write6
//	h3_9_h3_9_update_0_write7
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<256>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write1_res = h3_9_update_0_write.extract<32, 63>();
	h3_9_h3_9_update_0_write1_write(h3_9_h3_9_update_0_write1_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write2_res = h3_9_update_0_write.extract<64, 95>();
	h3_9_h3_9_update_0_write2_write(h3_9_h3_9_update_0_write2_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write3_res = h3_9_update_0_write.extract<96, 127>();
	h3_9_h3_9_update_0_write3_write(h3_9_h3_9_update_0_write3_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write4_res = h3_9_update_0_write.extract<128, 159>();
	h3_9_h3_9_update_0_write4_write(h3_9_h3_9_update_0_write4_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write5_res = h3_9_update_0_write.extract<160, 191>();
	h3_9_h3_9_update_0_write5_write(h3_9_h3_9_update_0_write5_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write6_res = h3_9_update_0_write.extract<192, 223>();
	h3_9_h3_9_update_0_write6_write(h3_9_h3_9_update_0_write6_res, h3_9, d0, d1, d2, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write7_res = h3_9_update_0_write.extract<224, 255>();
	h3_9_h3_9_update_0_write7_write(h3_9_h3_9_update_0_write7_res, h3_9, d0, d1, d2, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-80, 592], [-11, 521], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 7
  // 0, 87, 45925, 46010, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 84> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 85> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 45837> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46009() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46010() {
		return f6;
	}

	inline hw_uint<32>  peek_46011() {
		return f8;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f10;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write1_merged_banks_7_cache {
	// RAM Box: {[-79, 585], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write2_merged_banks_7_cache {
	// RAM Box: {[-78, 586], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write3_merged_banks_7_cache {
	// RAM Box: {[-77, 587], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write4_merged_banks_7_cache {
	// RAM Box: {[-76, 588], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write5_merged_banks_7_cache {
	// RAM Box: {[-75, 589], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write6_merged_banks_7_cache {
	// RAM Box: {[-74, 590], [-11, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 6
  // 0, 87, 45925, 46011, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 85> f7;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 45837> f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f8;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write7_merged_banks_7_cache {
	// RAM Box: {[-81, 591], [-10, 522], [-10, 521]}
	// Capacity: 91936
	// # of read delays: 7
  // 0, 87, 45925, 46011, 46012, 46097, 91935
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 86> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 45837> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 85> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	fifo<hw_uint<32> , 84> f9;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 45837> f11;
	hw_uint<32>  f12;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_86() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_87() {
		return f2;
	}

	inline hw_uint<32>  peek_45924() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_45925() {
		return f4;
	}

	inline hw_uint<32>  peek_46010() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_46011() {
		return f6;
	}

	inline hw_uint<32>  peek_46012() {
		return f8;
	}

	inline hw_uint<32>  peek_46096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<32>  peek_46097() {
		return f10;
	}

	inline hw_uint<32>  peek_91934() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_91935() {
		return f12;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 84
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 84 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 85
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 85 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 45837
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 45837 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 86
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 86 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cc_cache {
  // # of banks: 8
  in_cc_in_cc_update_0_write0_merged_banks_7_cache in_cc_in_cc_update_0_write0_merged_banks_7;
  in_cc_in_cc_update_0_write1_merged_banks_7_cache in_cc_in_cc_update_0_write1_merged_banks_7;
  in_cc_in_cc_update_0_write2_merged_banks_7_cache in_cc_in_cc_update_0_write2_merged_banks_7;
  in_cc_in_cc_update_0_write3_merged_banks_7_cache in_cc_in_cc_update_0_write3_merged_banks_7;
  in_cc_in_cc_update_0_write4_merged_banks_7_cache in_cc_in_cc_update_0_write4_merged_banks_7;
  in_cc_in_cc_update_0_write5_merged_banks_7_cache in_cc_in_cc_update_0_write5_merged_banks_7;
  in_cc_in_cc_update_0_write6_merged_banks_7_cache in_cc_in_cc_update_0_write6_merged_banks_7;
  in_cc_in_cc_update_0_write7_merged_banks_7_cache in_cc_in_cc_update_0_write7_merged_banks_7;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.push(in_cc_in_cc_update_0_write1);
}

inline void in_cc_in_cc_update_0_write2_write(hw_uint<32> & in_cc_in_cc_update_0_write2, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.push(in_cc_in_cc_update_0_write2);
}

inline void in_cc_in_cc_update_0_write3_write(hw_uint<32> & in_cc_in_cc_update_0_write3, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.push(in_cc_in_cc_update_0_write3);
}

inline void in_cc_in_cc_update_0_write4_write(hw_uint<32> & in_cc_in_cc_update_0_write4, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.push(in_cc_in_cc_update_0_write4);
}

inline void in_cc_in_cc_update_0_write5_write(hw_uint<32> & in_cc_in_cc_update_0_write5, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.push(in_cc_in_cc_update_0_write5);
}

inline void in_cc_in_cc_update_0_write6_write(hw_uint<32> & in_cc_in_cc_update_0_write6, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.push(in_cc_in_cc_update_0_write6);
}

inline void in_cc_in_cc_update_0_write7_write(hw_uint<32> & in_cc_in_cc_update_0_write7, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.push(in_cc_in_cc_update_0_write7);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_46012();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd20_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd20 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd21_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd21 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[2 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd22_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd22 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd23_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd23 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd24_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd24 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd25_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd25 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd26_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd26 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd27_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd27 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd28_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd28 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[3 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd29_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd29 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd30_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd30 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd31_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd31 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd32_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd32 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd33_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd33 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd34_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd34 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd35_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd35 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[4 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd36_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd36 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd37_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd37 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd38_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd38 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd39_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd39 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd40_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd40 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd41_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd41 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd42_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd42 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[5 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd43_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd43 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd44_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd44 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd45_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd45 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd46_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd46 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd47_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd47 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd48_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd48 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd49_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd49 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[6 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd50_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd50 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd51_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd51 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd52_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd52 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd53_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd53 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, d1, 1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_87();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd54_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd54 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[7 + 8d0, 1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_7.peek_45925();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd55_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd55 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_46010();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[8d0, d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_46011();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, -1 + d1, d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_46097();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + 8d0, d1, -1 + d2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_7.peek_91935();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_read
//	h3_0_rd0
//	h3_0_rd1
//	h3_0_rd2
//	h3_0_rd3
//	h3_0_rd4
//	h3_0_rd5
//	h3_0_rd6
//	h3_0_rd7
//	h3_0_rd8
//	h3_0_rd9
//	h3_0_rd10
//	h3_0_rd11
//	h3_0_rd12
//	h3_0_rd13
//	h3_0_rd14
//	h3_0_rd15
//	h3_0_rd16
//	h3_0_rd17
//	h3_0_rd18
//	h3_0_rd19
//	h3_0_rd20
//	h3_0_rd21
//	h3_0_rd22
//	h3_0_rd23
//	h3_0_rd24
//	h3_0_rd25
//	h3_0_rd26
//	h3_0_rd27
//	h3_0_rd28
//	h3_0_rd29
//	h3_0_rd30
//	h3_0_rd31
//	h3_0_rd32
//	h3_0_rd33
//	h3_0_rd34
//	h3_0_rd35
//	h3_0_rd36
//	h3_0_rd37
//	h3_0_rd38
//	h3_0_rd39
//	h3_0_rd40
//	h3_0_rd41
//	h3_0_rd42
//	h3_0_rd43
//	h3_0_rd44
//	h3_0_rd45
//	h3_0_rd46
//	h3_0_rd47
//	h3_0_rd48
//	h3_0_rd49
//	h3_0_rd50
//	h3_0_rd51
//	h3_0_rd52
//	h3_0_rd53
//	h3_0_rd54
//	h3_0_rd55
inline hw_uint<1792> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 56
    // h3_0_rd0
    // h3_0_rd1
    // h3_0_rd2
    // h3_0_rd3
    // h3_0_rd4
    // h3_0_rd5
    // h3_0_rd6
    // h3_0_rd7
    // h3_0_rd8
    // h3_0_rd9
    // h3_0_rd10
    // h3_0_rd11
    // h3_0_rd12
    // h3_0_rd13
    // h3_0_rd14
    // h3_0_rd15
    // h3_0_rd16
    // h3_0_rd17
    // h3_0_rd18
    // h3_0_rd19
    // h3_0_rd20
    // h3_0_rd21
    // h3_0_rd22
    // h3_0_rd23
    // h3_0_rd24
    // h3_0_rd25
    // h3_0_rd26
    // h3_0_rd27
    // h3_0_rd28
    // h3_0_rd29
    // h3_0_rd30
    // h3_0_rd31
    // h3_0_rd32
    // h3_0_rd33
    // h3_0_rd34
    // h3_0_rd35
    // h3_0_rd36
    // h3_0_rd37
    // h3_0_rd38
    // h3_0_rd39
    // h3_0_rd40
    // h3_0_rd41
    // h3_0_rd42
    // h3_0_rd43
    // h3_0_rd44
    // h3_0_rd45
    // h3_0_rd46
    // h3_0_rd47
    // h3_0_rd48
    // h3_0_rd49
    // h3_0_rd50
    // h3_0_rd51
    // h3_0_rd52
    // h3_0_rd53
    // h3_0_rd54
    // h3_0_rd55

	hw_uint<1792> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<0, 1792>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<32, 1792>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<64, 1792>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<96, 1792>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<128, 1792>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<160, 1792>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<192, 1792>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<224, 1792>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<256, 1792>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<288, 1792>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<320, 1792>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<352, 1792>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<384, 1792>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<416, 1792>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<448, 1792>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<480, 1792>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<512, 1792>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<544, 1792>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<576, 1792>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<608, 1792>(result, h3_0_rd19_res);
	hw_uint<32>  h3_0_rd20_res = h3_0_rd20_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<640, 1792>(result, h3_0_rd20_res);
	hw_uint<32>  h3_0_rd21_res = h3_0_rd21_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<672, 1792>(result, h3_0_rd21_res);
	hw_uint<32>  h3_0_rd22_res = h3_0_rd22_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<704, 1792>(result, h3_0_rd22_res);
	hw_uint<32>  h3_0_rd23_res = h3_0_rd23_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<736, 1792>(result, h3_0_rd23_res);
	hw_uint<32>  h3_0_rd24_res = h3_0_rd24_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<768, 1792>(result, h3_0_rd24_res);
	hw_uint<32>  h3_0_rd25_res = h3_0_rd25_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<800, 1792>(result, h3_0_rd25_res);
	hw_uint<32>  h3_0_rd26_res = h3_0_rd26_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<832, 1792>(result, h3_0_rd26_res);
	hw_uint<32>  h3_0_rd27_res = h3_0_rd27_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<864, 1792>(result, h3_0_rd27_res);
	hw_uint<32>  h3_0_rd28_res = h3_0_rd28_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<896, 1792>(result, h3_0_rd28_res);
	hw_uint<32>  h3_0_rd29_res = h3_0_rd29_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<928, 1792>(result, h3_0_rd29_res);
	hw_uint<32>  h3_0_rd30_res = h3_0_rd30_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<960, 1792>(result, h3_0_rd30_res);
	hw_uint<32>  h3_0_rd31_res = h3_0_rd31_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<992, 1792>(result, h3_0_rd31_res);
	hw_uint<32>  h3_0_rd32_res = h3_0_rd32_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1024, 1792>(result, h3_0_rd32_res);
	hw_uint<32>  h3_0_rd33_res = h3_0_rd33_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1056, 1792>(result, h3_0_rd33_res);
	hw_uint<32>  h3_0_rd34_res = h3_0_rd34_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1088, 1792>(result, h3_0_rd34_res);
	hw_uint<32>  h3_0_rd35_res = h3_0_rd35_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1120, 1792>(result, h3_0_rd35_res);
	hw_uint<32>  h3_0_rd36_res = h3_0_rd36_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1152, 1792>(result, h3_0_rd36_res);
	hw_uint<32>  h3_0_rd37_res = h3_0_rd37_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1184, 1792>(result, h3_0_rd37_res);
	hw_uint<32>  h3_0_rd38_res = h3_0_rd38_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1216, 1792>(result, h3_0_rd38_res);
	hw_uint<32>  h3_0_rd39_res = h3_0_rd39_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1248, 1792>(result, h3_0_rd39_res);
	hw_uint<32>  h3_0_rd40_res = h3_0_rd40_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1280, 1792>(result, h3_0_rd40_res);
	hw_uint<32>  h3_0_rd41_res = h3_0_rd41_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1312, 1792>(result, h3_0_rd41_res);
	hw_uint<32>  h3_0_rd42_res = h3_0_rd42_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1344, 1792>(result, h3_0_rd42_res);
	hw_uint<32>  h3_0_rd43_res = h3_0_rd43_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1376, 1792>(result, h3_0_rd43_res);
	hw_uint<32>  h3_0_rd44_res = h3_0_rd44_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1408, 1792>(result, h3_0_rd44_res);
	hw_uint<32>  h3_0_rd45_res = h3_0_rd45_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1440, 1792>(result, h3_0_rd45_res);
	hw_uint<32>  h3_0_rd46_res = h3_0_rd46_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1472, 1792>(result, h3_0_rd46_res);
	hw_uint<32>  h3_0_rd47_res = h3_0_rd47_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1504, 1792>(result, h3_0_rd47_res);
	hw_uint<32>  h3_0_rd48_res = h3_0_rd48_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1536, 1792>(result, h3_0_rd48_res);
	hw_uint<32>  h3_0_rd49_res = h3_0_rd49_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1568, 1792>(result, h3_0_rd49_res);
	hw_uint<32>  h3_0_rd50_res = h3_0_rd50_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1600, 1792>(result, h3_0_rd50_res);
	hw_uint<32>  h3_0_rd51_res = h3_0_rd51_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1632, 1792>(result, h3_0_rd51_res);
	hw_uint<32>  h3_0_rd52_res = h3_0_rd52_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1664, 1792>(result, h3_0_rd52_res);
	hw_uint<32>  h3_0_rd53_res = h3_0_rd53_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1696, 1792>(result, h3_0_rd53_res);
	hw_uint<32>  h3_0_rd54_res = h3_0_rd54_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1728, 1792>(result, h3_0_rd54_res);
	hw_uint<32>  h3_0_rd55_res = h3_0_rd55_select(in_cc, d0, d1, d2, dynamic_address);
	set_at<1760, 1792>(result, h3_0_rd55_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
//	in_cc_in_cc_update_0_write2
//	in_cc_in_cc_update_0_write3
//	in_cc_in_cc_update_0_write4
//	in_cc_in_cc_update_0_write5
//	in_cc_in_cc_update_0_write6
//	in_cc_in_cc_update_0_write7
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<256>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write2_res = in_cc_update_0_write.extract<64, 95>();
	in_cc_in_cc_update_0_write2_write(in_cc_in_cc_update_0_write2_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write3_res = in_cc_update_0_write.extract<96, 127>();
	in_cc_in_cc_update_0_write3_write(in_cc_in_cc_update_0_write3_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write4_res = in_cc_update_0_write.extract<128, 159>();
	in_cc_in_cc_update_0_write4_write(in_cc_in_cc_update_0_write4_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write5_res = in_cc_update_0_write.extract<160, 191>();
	in_cc_in_cc_update_0_write5_write(in_cc_in_cc_update_0_write5_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write6_res = in_cc_update_0_write.extract<192, 223>();
	in_cc_in_cc_update_0_write6_write(in_cc_in_cc_update_0_write6_res, in_cc, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write7_res = in_cc_update_0_write.extract<224, 255>();
	in_cc_in_cc_update_0_write7_write(in_cc_in_cc_update_0_write7_res, in_cc, d0, d1, d2, dynamic_address);
}

// Total re-use buffer capacity: 224730880 bits


// Operation logic
inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_8(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_8(h3_2_0_c__0_value);
	// Produce: h3_3
	h3_3_h3_3_update_0_write_bundle_write(/* arg names */compute_result, h3_3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_8(h3_3_0_c__0_value);
	// Produce: h3_4
	h3_4_h3_4_update_0_write_bundle_write(/* arg names */compute_result, h3_4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_5_update_0(h3_4_cache& h3_4, h3_5_cache& h3_5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_4
	auto h3_4_0_c__0_value = h3_4_h3_5_update_0_read_bundle_read(h3_4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_5_generated_compute_unrolled_8(h3_4_0_c__0_value);
	// Produce: h3_5
	h3_5_h3_5_update_0_write_bundle_write(/* arg names */compute_result, h3_5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_6_update_0(h3_5_cache& h3_5, h3_6_cache& h3_6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_5
	auto h3_5_0_c__0_value = h3_5_h3_6_update_0_read_bundle_read(h3_5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_6_generated_compute_unrolled_8(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_8(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_10_update_0(h3_9_cache& h3_9, h3_10_cache& h3_10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h3_10_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_10_generated_compute_unrolled_8(h3_9_0_c__0_value);
	// Produce: h3_10
	h3_10_h3_10_update_0_write_bundle_write(/* arg names */compute_result, h3_10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_cc_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */in, in_cc_cache& in_cc, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_8(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_7_update_0(h3_6_cache& h3_6, h3_7_cache& h3_7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_6
	auto h3_6_0_c__0_value = h3_6_h3_7_update_0_read_bundle_read(h3_6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_7_generated_compute_unrolled_8(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_8(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_8(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_8_update_0(h3_7_cache& h3_7, h3_8_cache& h3_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_h3_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_8_generated_compute_unrolled_8(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3d_11_8_update_0(h3_10_cache& h3_10, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */heat3d_11_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_10
	auto h3_10_0_c__0_value = h3_10_heat3d_11_8_update_0_read_bundle_read(h3_10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3d_11_8_generated_compute_unrolled_8(h3_10_0_c__0_value);
	// Produce: heat3d_11_8
	heat3d_11_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3d_11_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3d_11_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3d_11_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_1_cache h3_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_10_cache h3_10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_2_cache h3_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_3_cache h3_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_4_cache h3_4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_5_cache h3_5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_6_cache h3_6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_7_cache h3_7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_8_cache h3_8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_9_cache h3_9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cc_cache in_cc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521; h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517; h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513; h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512; h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519; h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518; in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522; h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511; h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516; h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520; h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514; heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511; h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 73 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (9 + i2 >= 0) && (74 - i2 >= 0) && (9 + i1 >= 0) && (522 - i1 >= 0) && (9 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 69 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
// Condition for h3_4_update_0(((-6 + i3 == 0) && (1 + i2 >= 0) && (74 - i2 >= 0) && (1 + i1 >= 0) && (522 - i1 >= 0) && (1 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 65 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
// Condition for h3_8_update_0(((-10 + i3 == 0) && (-7 + i2 >= 0) && (74 - i2 >= 0) && (-7 + i1 >= 0) && (522 - i1 >= 0) && (-7 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 64 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
// Condition for h3_9_update_0(((-11 + i3 == 0) && (-9 + i2 >= 0) && (74 - i2 >= 0) && (-9 + i1 >= 0) && (522 - i1 >= 0) && (-9 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 71 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
// Condition for h3_2_update_0(((-4 + i3 == 0) && (5 + i2 >= 0) && (74 - i2 >= 0) && (5 + i1 >= 0) && (522 - i1 >= 0) && (5 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 70 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
// Condition for h3_3_update_0(((-5 + i3 == 0) && (3 + i2 >= 0) && (74 - i2 >= 0) && (3 + i1 >= 0) && (522 - i1 >= 0) && (3 + i0 >= 0) && (522 - i0 >= 0)))
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 74 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (11 + i2 >= 0) && (74 - i2 >= 0) && (11 + i1 >= 0) && (522 - i1 >= 0) && (11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for h3_10_update_0(((-12 + i3 == 0) && (-11 + i2 >= 0) && (74 - i2 >= 0) && (-11 + i1 >= 0) && (522 - i1 >= 0) && (-11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 68 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
// Condition for h3_5_update_0(((-7 + i3 == 0) && (-1 + i2 >= 0) && (74 - i2 >= 0) && (-1 + i1 >= 0) && (522 - i1 >= 0) && (-1 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 72 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
// Condition for h3_1_update_0(((-3 + i3 == 0) && (7 + i2 >= 0) && (74 - i2 >= 0) && (7 + i1 >= 0) && (522 - i1 >= 0) && (7 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 66 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
// Condition for h3_7_update_0(((-9 + i3 == 0) && (-5 + i2 >= 0) && (74 - i2 >= 0) && (-5 + i1 >= 0) && (522 - i1 >= 0) && (-5 + i0 >= 0) && (522 - i0 >= 0)))
//   { heat3d_11_8_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 63 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for heat3d_11_8_update_0(((-13 + i3 == 0) && (-11 + i2 >= 0) && (74 - i2 >= 0) && (-11 + i1 >= 0) && (522 - i1 >= 0) && (-11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 67 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
// Condition for h3_6_update_0(((-8 + i3 == 0) && (-3 + i2 >= 0) && (74 - i2 >= 0) && (-3 + i1 >= 0) && (522 - i1 >= 0) && (-3 + i0 >= 0) && (522 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_10_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // h3_8_update_0 -> [1*d2*1*1 + 1*9,1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // h3_9_update_0 -> [1*d2*1*1 + 1*10,1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
    // heat3d_11_8_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*13]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -11; c0 <= 522; c0++) {
  for (int c1 = -11; c1 <= 522; c1++) {
    for (int c2 = -11; c2 <= 74; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-11 <= c2 && c2 <= 74) && ((c2 - 0) % 1 == 0) && (-11 <= c1 && c1 <= 522) && ((c1 - 0) % 1 == 0) && (-11 <= c0 && c0 <= 522) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((-9 <= c2 && c2 <= 74) && ((c2 - 1) % 1 == 0) && (-9 <= c1 && c1 <= 522) && ((c1 - 1) % 1 == 0) && (-9 <= c0 && c0 <= 522) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((-7 <= c2 && c2 <= 74) && ((c2 - 2) % 1 == 0) && (-7 <= c1 && c1 <= 522) && ((c1 - 2) % 1 == 0) && (-7 <= c0 && c0 <= 522) && ((c0 - 2) % 1 == 0)) {
        h3_1_update_0((c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
      }

      if ((-5 <= c2 && c2 <= 74) && ((c2 - 3) % 1 == 0) && (-5 <= c1 && c1 <= 522) && ((c1 - 3) % 1 == 0) && (-5 <= c0 && c0 <= 522) && ((c0 - 3) % 1 == 0)) {
        h3_2_update_0((c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
      }

      if ((-3 <= c2 && c2 <= 74) && ((c2 - 4) % 1 == 0) && (-3 <= c1 && c1 <= 522) && ((c1 - 4) % 1 == 0) && (-3 <= c0 && c0 <= 522) && ((c0 - 4) % 1 == 0)) {
        h3_3_update_0((c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
      }

      if ((-1 <= c2 && c2 <= 74) && ((c2 - 5) % 1 == 0) && (-1 <= c1 && c1 <= 522) && ((c1 - 5) % 1 == 0) && (-1 <= c0 && c0 <= 522) && ((c0 - 5) % 1 == 0)) {
        h3_4_update_0((c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
      }

      if ((1 <= c2 && c2 <= 74) && ((c2 - 6) % 1 == 0) && (1 <= c1 && c1 <= 522) && ((c1 - 6) % 1 == 0) && (1 <= c0 && c0 <= 522) && ((c0 - 6) % 1 == 0)) {
        h3_5_update_0((c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
      }

      if ((3 <= c2 && c2 <= 74) && ((c2 - 7) % 1 == 0) && (3 <= c1 && c1 <= 522) && ((c1 - 7) % 1 == 0) && (3 <= c0 && c0 <= 522) && ((c0 - 7) % 1 == 0)) {
        h3_6_update_0((c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
      }

      if ((5 <= c2 && c2 <= 74) && ((c2 - 8) % 1 == 0) && (5 <= c1 && c1 <= 522) && ((c1 - 8) % 1 == 0) && (5 <= c0 && c0 <= 522) && ((c0 - 8) % 1 == 0)) {
        h3_7_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

      if ((7 <= c2 && c2 <= 74) && ((c2 - 9) % 1 == 0) && (7 <= c1 && c1 <= 522) && ((c1 - 9) % 1 == 0) && (7 <= c0 && c0 <= 522) && ((c0 - 9) % 1 == 0)) {
        h3_8_update_0((c2 - 9) / 1, (c1 - 9) / 1, (c0 - 9) / 1);
      }

      if ((9 <= c2 && c2 <= 74) && ((c2 - 10) % 1 == 0) && (9 <= c1 && c1 <= 522) && ((c1 - 10) % 1 == 0) && (9 <= c0 && c0 <= 522) && ((c0 - 10) % 1 == 0)) {
        h3_9_update_0((c2 - 10) / 1, (c1 - 10) / 1, (c0 - 10) / 1);
      }

      if ((11 <= c2 && c2 <= 74) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
        h3_10_update_0((c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
      }

      if ((11 <= c2 && c2 <= 74) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
        heat3d_11_8_update_0((c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_10_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
	    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // h3_8_update_0 -> [1*d2*1*1 + 1*9,1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // h3_9_update_0 -> [1*d2*1*1 + 1*10,1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	    // heat3d_11_8_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*13]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -11; c0 <= 522; c0++) {
	  for (int c1 = -11; c1 <= 522; c1++) {
	    for (int c2 = -11; c2 <= 74; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-11 <= c2 && c2 <= 74) && ((c2 - 0) % 1 == 0) && (-11 <= c1 && c1 <= 522) && ((c1 - 0) % 1 == 0) && (-11 <= c0 && c0 <= 522) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((-9 <= c2 && c2 <= 74) && ((c2 - 1) % 1 == 0) && (-9 <= c1 && c1 <= 522) && ((c1 - 1) % 1 == 0) && (-9 <= c0 && c0 <= 522) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((-7 <= c2 && c2 <= 74) && ((c2 - 2) % 1 == 0) && (-7 <= c1 && c1 <= 522) && ((c1 - 2) % 1 == 0) && (-7 <= c0 && c0 <= 522) && ((c0 - 2) % 1 == 0)) {
	        h3_1_update_0(h3_0 /* buf name */, h3_1, (c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((-5 <= c2 && c2 <= 74) && ((c2 - 3) % 1 == 0) && (-5 <= c1 && c1 <= 522) && ((c1 - 3) % 1 == 0) && (-5 <= c0 && c0 <= 522) && ((c0 - 3) % 1 == 0)) {
	        h3_2_update_0(h3_1 /* buf name */, h3_2, (c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
	      }
	
	      if ((-3 <= c2 && c2 <= 74) && ((c2 - 4) % 1 == 0) && (-3 <= c1 && c1 <= 522) && ((c1 - 4) % 1 == 0) && (-3 <= c0 && c0 <= 522) && ((c0 - 4) % 1 == 0)) {
	        h3_3_update_0(h3_2 /* buf name */, h3_3, (c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
	      }
	
	      if ((-1 <= c2 && c2 <= 74) && ((c2 - 5) % 1 == 0) && (-1 <= c1 && c1 <= 522) && ((c1 - 5) % 1 == 0) && (-1 <= c0 && c0 <= 522) && ((c0 - 5) % 1 == 0)) {
	        h3_4_update_0(h3_3 /* buf name */, h3_4, (c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 74) && ((c2 - 6) % 1 == 0) && (1 <= c1 && c1 <= 522) && ((c1 - 6) % 1 == 0) && (1 <= c0 && c0 <= 522) && ((c0 - 6) % 1 == 0)) {
	        h3_5_update_0(h3_4 /* buf name */, h3_5, (c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
	      }
	
	      if ((3 <= c2 && c2 <= 74) && ((c2 - 7) % 1 == 0) && (3 <= c1 && c1 <= 522) && ((c1 - 7) % 1 == 0) && (3 <= c0 && c0 <= 522) && ((c0 - 7) % 1 == 0)) {
	        h3_6_update_0(h3_5 /* buf name */, h3_6, (c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
	      }
	
	      if ((5 <= c2 && c2 <= 74) && ((c2 - 8) % 1 == 0) && (5 <= c1 && c1 <= 522) && ((c1 - 8) % 1 == 0) && (5 <= c0 && c0 <= 522) && ((c0 - 8) % 1 == 0)) {
	        h3_7_update_0(h3_6 /* buf name */, h3_7, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	      if ((7 <= c2 && c2 <= 74) && ((c2 - 9) % 1 == 0) && (7 <= c1 && c1 <= 522) && ((c1 - 9) % 1 == 0) && (7 <= c0 && c0 <= 522) && ((c0 - 9) % 1 == 0)) {
	        h3_8_update_0(h3_7 /* buf name */, h3_8, (c2 - 9) / 1, (c1 - 9) / 1, (c0 - 9) / 1);
	      }
	
	      if ((9 <= c2 && c2 <= 74) && ((c2 - 10) % 1 == 0) && (9 <= c1 && c1 <= 522) && ((c1 - 10) % 1 == 0) && (9 <= c0 && c0 <= 522) && ((c0 - 10) % 1 == 0)) {
	        h3_9_update_0(h3_8 /* buf name */, h3_9, (c2 - 10) / 1, (c1 - 10) / 1, (c0 - 10) / 1);
	      }
	
	      if ((11 <= c2 && c2 <= 74) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
	        h3_10_update_0(h3_9 /* buf name */, h3_10, (c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
	      }
	
	      if ((11 <= c2 && c2 <= 74) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
	        heat3d_11_8_update_0(h3_10 /* buf name */, heat3d_11_8, (c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3d_11_8_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */heat3d_11_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3d_11_8_opt(in, heat3d_11_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3d_11_8_update_0[root = 0, heat3d_11_8_0, heat3d_11_8_1, heat3d_11_8_2] -> heat3d_11_8[0, 0] : 0 <= heat3d_11_8_0 <= 63 and 0 <= heat3d_11_8_1 <= 511 and 0 <= heat3d_11_8_2 <= 511 }
const int heat3d_11_8_update_0_write_pipe0_num_transfers = 16777216;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -11 <= in_cc_0 <= 74 and -11 <= in_cc_1 <= 522 and -11 <= in_cc_2 <= 522 }
const int in_cc_update_0_read_pipe0_num_transfers = 24523416;


extern "C" {

void heat3d_11_8_opt_accel(hw_uint<256>* in_cc_update_0_read_pipe0, hw_uint<256>* heat3d_11_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3d_11_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3d_11_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > heat3d_11_8_update_0_write_pipe0_channel;

  burst_read<256>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3d_11_8_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3d_11_8_update_0_write_pipe0_channel, size);

  burst_write<256>(heat3d_11_8_update_0_write_pipe0, heat3d_11_8_update_0_write_pipe0_channel, heat3d_11_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3d_11_8_opt_rdai(HWStream<hw_uint<256> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<256> >&  heat3d_11_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3d_11_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3d_11_8_opt(in_cc_update_0_read_pipe0, heat3d_11_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

