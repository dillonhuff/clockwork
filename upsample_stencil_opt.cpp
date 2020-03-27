#include "upsample_stencil_opt_compute_units.h"

#include "hw_classes.h"

struct Img_Img_update_0_write0_to_upsample_stencil_rd0_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd0_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd0_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd0_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd0_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd1_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd1_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd1_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd1_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd1_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd2_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd2_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd2_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd2_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd2_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd3_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd3_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd3_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd3_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd3_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd4_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd4_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd4_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd4_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd4_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd5_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 18
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd5_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd5_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd5_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd5_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd6_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd6_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd6_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd6_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd6_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd7_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd7_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd7_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd7_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd7_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_Img_update_0_write0_to_upsample_stencil_rd8_cache {
	// RAM Box: {[-1, 16], [-1, 16]}
	// Capacity: 54
	// # of read delays: 17
#ifdef __VIVADO_SYNTH__
  hw_uint<32>  Img_Img_update_0_write0_to_upsample_stencil_rd8_store[324];

#else
  hw_uint<32> * Img_Img_update_0_write0_to_upsample_stencil_rd8_store;
#endif // __VIVADO_SYNTH__
  hw_uint<32>  read(int d0, int d1) {    return Img_Img_update_0_write0_to_upsample_stencil_rd8_store[(d0 + d1*18)];  }

  void write(hw_uint<32> & value, int d0, int d1) {
    Img_Img_update_0_write0_to_upsample_stencil_rd8_store[(d0 + d1*18)] = value;
  }

	fifo<hw_uint<32> , 54> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(53 - offset);
  }

	inline hw_uint<32>  peek_0() {
		return f.peek(0);
	}

	inline hw_uint<32>  peek_1() {
		return f.peek(1);
	}

	inline hw_uint<32>  peek_2() {
		return f.peek(2);
	}

	inline hw_uint<32>  peek_3() {
		return f.peek(3);
	}

	inline hw_uint<32>  peek_4() {
		return f.peek(4);
	}

	inline hw_uint<32>  peek_5() {
		return f.peek(5);
	}

	inline hw_uint<32>  peek_6() {
		return f.peek(6);
	}

	inline hw_uint<32>  peek_7() {
		return f.peek(7);
	}

	inline hw_uint<32>  peek_8() {
		return f.peek(8);
	}

	inline hw_uint<32>  peek_9() {
		return f.peek(9);
	}

	inline hw_uint<32>  peek_10() {
		return f.peek(10);
	}

	inline hw_uint<32>  peek_11() {
		return f.peek(11);
	}

	inline hw_uint<32>  peek_12() {
		return f.peek(12);
	}

	inline hw_uint<32>  peek_13() {
		return f.peek(13);
	}

	inline hw_uint<32>  peek_14() {
		return f.peek(14);
	}

	inline hw_uint<32>  peek_15() {
		return f.peek(15);
	}

	inline hw_uint<32>  peek_16() {
		return f.peek(16);
	}

	inline hw_uint<32>  peek_17() {
		return f.peek(17);
	}

	inline hw_uint<32>  peek_18() {
		return f.peek(18);
	}

	inline hw_uint<32>  peek_19() {
		return f.peek(19);
	}

	inline hw_uint<32>  peek_20() {
		return f.peek(20);
	}

	inline hw_uint<32>  peek_21() {
		return f.peek(21);
	}

	inline hw_uint<32>  peek_22() {
		return f.peek(22);
	}

	inline hw_uint<32>  peek_23() {
		return f.peek(23);
	}

	inline hw_uint<32>  peek_24() {
		return f.peek(24);
	}

	inline hw_uint<32>  peek_25() {
		return f.peek(25);
	}

	inline hw_uint<32>  peek_26() {
		return f.peek(26);
	}

	inline hw_uint<32>  peek_27() {
		return f.peek(27);
	}

	inline hw_uint<32>  peek_28() {
		return f.peek(28);
	}

	inline hw_uint<32>  peek_29() {
		return f.peek(29);
	}

	inline hw_uint<32>  peek_30() {
		return f.peek(30);
	}

	inline hw_uint<32>  peek_31() {
		return f.peek(31);
	}

	inline hw_uint<32>  peek_32() {
		return f.peek(32);
	}

	inline hw_uint<32>  peek_33() {
		return f.peek(33);
	}

	inline hw_uint<32>  peek_34() {
		return f.peek(34);
	}

	inline hw_uint<32>  peek_35() {
		return f.peek(35);
	}

	inline hw_uint<32>  peek_36() {
		return f.peek(36);
	}

	inline hw_uint<32>  peek_37() {
		return f.peek(37);
	}

	inline hw_uint<32>  peek_38() {
		return f.peek(38);
	}

	inline hw_uint<32>  peek_39() {
		return f.peek(39);
	}

	inline hw_uint<32>  peek_40() {
		return f.peek(40);
	}

	inline hw_uint<32>  peek_41() {
		return f.peek(41);
	}

	inline hw_uint<32>  peek_42() {
		return f.peek(42);
	}

	inline hw_uint<32>  peek_43() {
		return f.peek(43);
	}

	inline hw_uint<32>  peek_44() {
		return f.peek(44);
	}

	inline hw_uint<32>  peek_45() {
		return f.peek(45);
	}

	inline hw_uint<32>  peek_46() {
		return f.peek(46);
	}

	inline hw_uint<32>  peek_47() {
		return f.peek(47);
	}

	inline hw_uint<32>  peek_48() {
		return f.peek(48);
	}

	inline hw_uint<32>  peek_49() {
		return f.peek(49);
	}

	inline hw_uint<32>  peek_50() {
		return f.peek(50);
	}

	inline hw_uint<32>  peek_51() {
		return f.peek(51);
	}

	inline hw_uint<32>  peek_52() {
		return f.peek(52);
	}

	inline hw_uint<32>  peek_53() {
		return f.peek(53);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_cache {
  Img_Img_update_0_write0_to_upsample_stencil_rd0_cache Img_Img_update_0_write0_to_upsample_stencil_rd0;
  Img_Img_update_0_write0_to_upsample_stencil_rd1_cache Img_Img_update_0_write0_to_upsample_stencil_rd1;
  Img_Img_update_0_write0_to_upsample_stencil_rd2_cache Img_Img_update_0_write0_to_upsample_stencil_rd2;
  Img_Img_update_0_write0_to_upsample_stencil_rd3_cache Img_Img_update_0_write0_to_upsample_stencil_rd3;
  Img_Img_update_0_write0_to_upsample_stencil_rd4_cache Img_Img_update_0_write0_to_upsample_stencil_rd4;
  Img_Img_update_0_write0_to_upsample_stencil_rd5_cache Img_Img_update_0_write0_to_upsample_stencil_rd5;
  Img_Img_update_0_write0_to_upsample_stencil_rd6_cache Img_Img_update_0_write0_to_upsample_stencil_rd6;
  Img_Img_update_0_write0_to_upsample_stencil_rd7_cache Img_Img_update_0_write0_to_upsample_stencil_rd7;
  Img_Img_update_0_write0_to_upsample_stencil_rd8_cache Img_Img_update_0_write0_to_upsample_stencil_rd8;
};



inline void Img_Img_update_0_write0_write(hw_uint<32> & Img_Img_update_0_write0, Img_cache& Img, int d0, int d1) {
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd0.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd1.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd2.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd3.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd4.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd5.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd6.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd7.push(Img_Img_update_0_write0);
  Img.Img_Img_update_0_write0_to_upsample_stencil_rd8.push(Img_Img_update_0_write0);
}

inline hw_uint<32>  upsample_stencil_rd0_select(Img_cache& Img, int d0, int d1) {
	// lexmax events: { upsample_stencil_update_0[d0, d1] -> Img_update_0[d0', d1'] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -1 <= d0' <= 16 and -3 + d0 <= 2d0' <= -2 + d0 and -1 <= d1' <= 16 and -3 + d1 <= 2d1' <= -2 + d1 }
  // upsample_stencil_rd0 read pattern: { upsample_stencil_update_0[d0, d1] -> Img[o0, o1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 and -3 + d0 <= 2o0 <= -2 + d0 and -3 + d1 <= 2o1 <= -2 + d1 }
