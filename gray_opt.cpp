#include "gray_opt_compute_units.h"

#include "hw_classes.h"

struct Img_Img_update_0_write0_merged_banks_3_cache {
	// Capacity: 2049
	// # of read delays: 3
	// read delays: 0, 1024, 2048
	// Parition [0, 1) capacity = 1
	fifo<hw_uint<32> , 1> f0;
	// Parition [1, 1024) capacity = 1023
	fifo<hw_uint<32> , 1023> f1;
	// Parition [1024, 1025) capacity = 1
	fifo<hw_uint<32> , 1> f2;
	// Parition [1025, 2048) capacity = 1023
	fifo<hw_uint<32> , 1023> f3;
	// Parition [2048, 2048] capacity = 1
	fifo<hw_uint<32> , 1> f4;


	inline hw_uint<32>  peek_0() {
		return f0.back();
	}

	inline hw_uint<32>  peek_1023() {
		return f1.back();
	}

	inline hw_uint<32>  peek_1024() {
		return f2.back();
	}

	inline hw_uint<32>  peek_2047() {
		return f3.back();
	}

	inline hw_uint<32>  peek_2048() {
		return f4.back();
	}



	inline hw_uint<32>  peek(const int offset) {
		if (offset == 0) {
			return f0.back();
		}
		if (offset == 1023) {
			return f1.back();
		}
		if (offset == 1024) {
			return f2.back();
		}
		if (offset == 2047) {
			return f3.back();
		}
		if (offset == 2048) {
			return f4.back();
		}
#ifndef __VIVADO_SYNTH__
		cout << "Error: Unsupported offset in Img_Img_update_0_write0_merged_banks_3: " << offset << endl;
#endif // __VIVADO_SYNTH__
		assert(false);
		return 0;

	}

	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence array inter false
#endif //__VIVADO_SYNTH__
		f4.push(f3.back());
		f3.push(f2.back());
		f2.push(f1.back());
		f1.push(f0.back());
		f0.push(value);
	}

};

struct Img_cache {
  Img_Img_update_0_write0_merged_banks_3_cache Img_Img_update_0_write0_merged_banks_3;
};



inline void Img_Img_update_0_write0_write(hw_uint<32> & Img_Img_update_0_write0, Img_cache& Img, int d0, int d1, int d2) {
  Img.Img_Img_update_0_write0_merged_banks_3.push(Img_Img_update_0_write0);
}

inline hw_uint<32>  gray_rd0_select(Img_cache& Img, int d0, int d1, int d2) {
	// lexmax events: { gray_update_0[d0, d1, d2 = 0] -> Img_update_0[d0' = d0, d1' = d1, d2' = 0] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // gray_rd0 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 0] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek_2048();
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  gray_rd1_select(Img_cache& Img, int d0, int d1, int d2) {
	// lexmax events: { gray_update_0[d0, d1, d2 = 0] -> Img_update_0[d0' = d0, d1' = d1, d2' = 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // gray_rd1 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek_1024();
	return value_Img_Img_update_0_write0;
}

inline hw_uint<32>  gray_rd2_select(Img_cache& Img, int d0, int d1, int d2) {
	// lexmax events: { gray_update_0[d0, d1, d2 = 0] -> Img_update_0[d0' = d0, d1' = d1, d2' = 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // gray_rd2 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
	auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek_0();
	return value_Img_Img_update_0_write0;
}

// # of bundles = 2
// Img_update_0_write
//	Img_Img_update_0_write0
inline void Img_Img_update_0_write_bundle_write(hw_uint<32>& Img_update_0_write, Img_cache& Img, int d0, int d1, int d2) {
	hw_uint<32>  Img_Img_update_0_write0_res = Img_update_0_write.extract<0, 31>();
	Img_Img_update_0_write0_write(Img_Img_update_0_write0_res, Img, d0, d1, d2);
}

// gray_update_0_read
//	gray_rd0
//	gray_rd1
//	gray_rd2
inline hw_uint<96> Img_gray_update_0_read_bundle_read(Img_cache& Img, int d0, int d1, int d2) {
	hw_uint<96> result;
	hw_uint<32>  gray_rd0_res = gray_rd0_select(Img, d0, d1, d2);
	set_at<0, 96>(result, gray_rd0_res);
	hw_uint<32>  gray_rd1_res = gray_rd1_select(Img, d0, d1, d2);
	set_at<32, 96>(result, gray_rd1_res);
	hw_uint<32>  gray_rd2_res = gray_rd2_select(Img, d0, d1, d2);
	set_at<64, 96>(result, gray_rd2_res);
	return result;
}





// Operation logic
inline void Img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Img_off, Img_cache& Img, int d0, int d1, int d2) {
	// Consume: Img_off
	auto Img_off_0_c__0_value = Img_off.read();
	auto compute_result = id(Img_off_0_c__0_value);
	// Produce: Img
	Img_Img_update_0_write_bundle_write(compute_result, Img, d0, d1, d2);
}

inline void gray_update_0(Img_cache& Img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray, int d0, int d1, int d2) {
	// Consume: Img
	auto Img_0_c__0_value = Img_gray_update_0_read_bundle_read(Img/* source_delay */, d0, d1, d2);
	auto compute_result = avg(Img_0_c__0_value);
	// Produce: gray
	gray.write(compute_result);
}

// Driver function
void gray_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */gray) {
  Img_cache Img;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING
for (int c0 = 0; c0 <= 2; c0++) {
  for (int c1 = 0; c1 <= 31; c1++) {
    for (int c2 = 0; c2 <= 31; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 31) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 2) && ((c0 - 0) % 1 == 0)) {
        Img_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 31) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 2) && ((c0 - 2) % 1 == 0)) {
        gray_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 2) / 1);
      }

    }
  }
}

*/
	for (int c0 = 0; c0 <= 2; c0++) {
	  for (int c1 = 0; c1 <= 31; c1++) {
	    for (int c2 = 0; c2 <= 31; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 31) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 2) && ((c0 - 0) % 1 == 0)) {
	        Img_update_0(Img_off, Img, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 31) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 31) && ((c1 - 0) % 1 == 0) && (2 <= c0 && c0 <= 2) && ((c0 - 2) % 1 == 0)) {
	        gray_update_0(Img, gray, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 2) / 1);
	      }
	
	    }
	  }
	}
	
}
