#include "conv_3x3.h"

#include "hw_classes.h"

  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_10
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_11
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_12
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_13
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_5
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_6
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_7
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_8
  // bank_I_store_I_from_in_0_to_I_warped_0_conv_3_30_9
struct I_store_I_from_in_0_cache {
	// Capacity: 131
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 2) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [2, 3) capacity = 1
	fifo<hw_uint<32> , 1> f4;
	// Parition [3, 64) capacity = 61
	fifo<hw_uint<32> , 61> f5;
	// Parition [64, 65) capacity = 1
	fifo<hw_uint<32> , 1> f6;
	// Parition [65, 66) capacity = 1
	fifo<hw_uint<32> , 1> f8;
	// Parition [66, 67) capacity = 1
	fifo<hw_uint<32> , 1> f10;
	// Parition [67, 128) capacity = 61
	fifo<hw_uint<32> , 61> f11;
	// Parition [128, 129) capacity = 1
	fifo<hw_uint<32> , 1> f12;
	// Parition [129, 130) capacity = 1
	fifo<hw_uint<32> , 1> f14;
	// Parition [130, 130] capacity = 1
	fifo<hw_uint<32> , 1> f16;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2() {
		return f4.back();
	}

	inline hw_uint<32>  peek_63() {
		return f5.back();
	}

	inline hw_uint<32>  peek_64() {
		return f6.back();
	}

	inline hw_uint<32>  peek_65() {
		return f8.back();
	}

	inline hw_uint<32>  peek_66() {
		return f10.back();
	}

	inline hw_uint<32>  peek_127() {
		return f11.back();
	}

	inline hw_uint<32>  peek_128() {
		return f12.back();
	}

	inline hw_uint<32>  peek_129() {
		return f14.back();
	}

	inline hw_uint<32>  peek_130() {
		return f16.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1) {
			return f2.back();
		}
		if (offset == 2) {
			return f4.back();
		}
		if (offset == 63) {
			return f5.back();
		}
		if (offset == 64) {
			return f6.back();
		}
		if (offset == 65) {
			return f8.back();
		}
		if (offset == 66) {
			return f10.back();
		}
		if (offset == 127) {
			return f11.back();
		}
		if (offset == 128) {
			return f12.back();
		}
		if (offset == 129) {
			return f14.back();
		}
		if (offset == 130) {
			return f16.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in I: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f16.push(f14.back());
		f14.push(f12.back());
		f12.push(f11.back());
		f11.push(f10.back());
		f10.push(f8.back());
		f8.push(f6.back());
		f6.push(f5.back());
		f5.push(f4.back());
		f4.push(f2.back());
		f2.push(f0.back());
		f0.push(value);
	}

};

struct I_cache {
  I_store_I_from_in_0_cache I_store_I_from_in_0;
};



inline void I_store_I_from_in_0_write(hw_uint<32> & I_store_I_from_in_0, I_cache& I, int root, int pr, int pc) {
	I.I_store_I_from_in_0.push(I_store_I_from_in_0);
}

inline hw_uint<32>  I_warped_0_conv_3_30_10_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 64 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 60; warped_0_conv_3_30[root, br, bc] -> (3 + bc) : root = 0 and bc = 61 and 0 <= br <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_64();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_11_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 2 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_2();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_12_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 1 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_1();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_13_select(I_cache& I, int root, int br, int bc) {
  // qpd = {  }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_0();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_5_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 130 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_130();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_6_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 129 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_129();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_7_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 128 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 60; warped_0_conv_3_30[root, br, bc] -> (67 + bc) : root = 0 and bc = 61 and 0 <= br <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_128();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_8_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 66 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_66();
	return value_I_store_I_from_in_0;
}

inline hw_uint<32>  I_warped_0_conv_3_30_9_select(I_cache& I, int root, int br, int bc) {
  // qpd = { warped_0_conv_3_30[root, br, bc] -> 65 : root = 0 and 0 <= br <= 61 and 0 <= bc <= 61 }
	hw_uint<32>  value_I_store_I_from_in_0 = I.I_store_I_from_in_0.peek_65();
	return value_I_store_I_from_in_0;
}

// # of bundles = 2
// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_0_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_0_write(I_store_I_from_in_0_res, I, root, pr, pc);
}

// warped_0_conv_3_30_read
//	I_warped_0_conv_3_30_5
//	I_warped_0_conv_3_30_6
//	I_warped_0_conv_3_30_7
//	I_warped_0_conv_3_30_8
//	I_warped_0_conv_3_30_9
//	I_warped_0_conv_3_30_10
//	I_warped_0_conv_3_30_11
//	I_warped_0_conv_3_30_12
//	I_warped_0_conv_3_30_13
inline hw_uint<288> I_warped_0_conv_3_30_read_bundle_read(I_cache& I, int root, int br, int bc) {
	hw_uint<288> result;
	hw_uint<32>  I_warped_0_conv_3_30_5_res = I_warped_0_conv_3_30_5_select(I, root, br, bc);
	set_at<0, 288>(result, I_warped_0_conv_3_30_5_res);
	hw_uint<32>  I_warped_0_conv_3_30_6_res = I_warped_0_conv_3_30_6_select(I, root, br, bc);
	set_at<32, 288>(result, I_warped_0_conv_3_30_6_res);
	hw_uint<32>  I_warped_0_conv_3_30_7_res = I_warped_0_conv_3_30_7_select(I, root, br, bc);
	set_at<64, 288>(result, I_warped_0_conv_3_30_7_res);
	hw_uint<32>  I_warped_0_conv_3_30_8_res = I_warped_0_conv_3_30_8_select(I, root, br, bc);
	set_at<96, 288>(result, I_warped_0_conv_3_30_8_res);
	hw_uint<32>  I_warped_0_conv_3_30_9_res = I_warped_0_conv_3_30_9_select(I, root, br, bc);
	set_at<128, 288>(result, I_warped_0_conv_3_30_9_res);
	hw_uint<32>  I_warped_0_conv_3_30_10_res = I_warped_0_conv_3_30_10_select(I, root, br, bc);
	set_at<160, 288>(result, I_warped_0_conv_3_30_10_res);
	hw_uint<32>  I_warped_0_conv_3_30_11_res = I_warped_0_conv_3_30_11_select(I, root, br, bc);
	set_at<192, 288>(result, I_warped_0_conv_3_30_11_res);
	hw_uint<32>  I_warped_0_conv_3_30_12_res = I_warped_0_conv_3_30_12_select(I, root, br, bc);
	set_at<224, 288>(result, I_warped_0_conv_3_30_12_res);
	hw_uint<32>  I_warped_0_conv_3_30_13_res = I_warped_0_conv_3_30_13_select(I, root, br, bc);
	set_at<256, 288>(result, I_warped_0_conv_3_30_13_res);
	return result;
}



#include "hw_classes.h"

  // bank_warped_0_warped_0_conv_3_30_4_to_warped_0_out_id0_3
struct warped_0_warped_0_conv_3_30_4_cache {
	// Capacity: 62
	fifo<hw_uint<32> , 62> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(61 - offset);
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

	inline hw_uint<32>  peek_54() {
		return f.peek(54);
	}

	inline hw_uint<32>  peek_55() {
		return f.peek(55);
	}

	inline hw_uint<32>  peek_56() {
		return f.peek(56);
	}

	inline hw_uint<32>  peek_57() {
		return f.peek(57);
	}

	inline hw_uint<32>  peek_58() {
		return f.peek(58);
	}

	inline hw_uint<32>  peek_59() {
		return f.peek(59);
	}

	inline hw_uint<32>  peek_60() {
		return f.peek(60);
	}

	inline hw_uint<32>  peek_61() {
		return f.peek(61);
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct warped_0_cache {
  warped_0_warped_0_conv_3_30_4_cache warped_0_warped_0_conv_3_30_4;
};



inline void warped_0_warped_0_conv_3_30_4_write(hw_uint<32> & warped_0_warped_0_conv_3_30_4, warped_0_cache& warped_0, int root, int br, int bc) {
	warped_0.warped_0_warped_0_conv_3_30_4.push(warped_0_warped_0_conv_3_30_4);
}

inline hw_uint<32>  warped_0_out_id0_3_select(warped_0_cache& warped_0, int root, int ur, int kr, int uc, int kc) {
  // qpd = { out_id0[root, ur, kr, uc, kc] -> (61 - uc) : root = 0 and kr = 1 and 0 <= ur <= 61 and 0 <= uc <= 60 and 0 <= kc <= 1 }
	hw_uint<32>  value_warped_0_warped_0_conv_3_30_4 = warped_0.warped_0_warped_0_conv_3_30_4.peek(/* Needs general delay string */ (-1 + kr == 0 && root == 0 && ur >= 0 && 61 - ur >= 0 && uc >= 0 && 60 - uc >= 0 && kc >= 0 && 1 - kc >= 0) ? ((61 - uc)) : 0);
	return value_warped_0_warped_0_conv_3_30_4;
}

// # of bundles = 2
// out_id0_read
//	warped_0_out_id0_3
inline hw_uint<32> warped_0_out_id0_read_bundle_read(warped_0_cache& warped_0, int root, int ur, int kr, int uc, int kc) {
	hw_uint<32> result;
	hw_uint<32>  warped_0_out_id0_3_res = warped_0_out_id0_3_select(warped_0, root, ur, kr, uc, kc);
	set_at<0, 32>(result, warped_0_out_id0_3_res);
	return result;
}

// warped_0_conv_3_30_write
//	warped_0_warped_0_conv_3_30_4
inline void warped_0_warped_0_conv_3_30_write_bundle_write(hw_uint<32>& warped_0_conv_3_30_write, warped_0_cache& warped_0, int root, int br, int bc) {
	hw_uint<32>  warped_0_warped_0_conv_3_30_4_res = warped_0_conv_3_30_write.extract<0, 31>();
	warped_0_warped_0_conv_3_30_4_write(warped_0_warped_0_conv_3_30_4_res, warped_0, root, br, bc);
}





// Operation logic
inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I, root, pr, pc);
}

inline void out_id0(warped_0_cache& warped_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int ur, int kr, int uc, int kc) {
	// Consume: warped_0
	auto warped_0_ur_c__uc_value = warped_0_out_id0_read_bundle_read(warped_0/* source_delay */, root, ur, kr, uc, kc);
	auto compute_result = id(warped_0_ur_c__uc_value);
	// Produce: out
	out.write(compute_result);
}

inline void warped_0_conv_3_30(I_cache& I, warped_0_cache& warped_0, int root, int br, int bc) {
	// Consume: I
	auto I_br__p__0_c__bc__p__0_value = I_warped_0_conv_3_30_read_bundle_read(I/* source_delay */, root, br, bc);
	auto compute_result = conv_3_3(I_br__p__0_c__bc__p__0_value);
	// Produce: warped_0
	warped_0_warped_0_conv_3_30_write_bundle_write(compute_result, warped_0, root, br, bc);
}

// Driver function
void warp_and_upsample(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

  warped_0_cache warped_0;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=warped_0 inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	for (int c0 = 0; c0 <= 63; c0 += 1) {
	  if (c0 >= 2) {
	    for (int c1 = 0; c1 <= 1; c1 += 1) {
	      if (c1 == 0)
	        for (int c2 = 0; c2 <= 1; c2 += 1)
	          store_I_from_in(in, I, 0, c0, c2);
	      for (int c2 = 2; c2 <= 63; c2 += 1) {
	        if (c1 == 0) {
	          store_I_from_in(in, I, 0, c0, c2);
	          warped_0_conv_3_30(I, warped_0, 0, c0 - 2, c2 - 2);
	        }
	        for (int c3 = 0; c3 <= 1; c3 += 1)
	          out_id0(warped_0, out, 0, c0 - 2, c1, c2 - 2, c3);
	      }
	    }
	  } else {
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      store_I_from_in(in, I, 0, c0, c2);
	  }
	}
	
}
