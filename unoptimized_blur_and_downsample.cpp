#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_13_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_14_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_15_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_16_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_17_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_18_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_19_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_20_cache {
	// Capacity: 225
	// # of read delays: 194
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_store_I_from_in_24_to_I_I_blr_conv_3_30_21_cache {
	// Capacity: 225
	// # of read delays: 193
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192
	fifo<hw_uint<32> , 225> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(224 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_cache {
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_13_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_13;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_14_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_14;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_15_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_15;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_16_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_16;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_17_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_17;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_18_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_18;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_19_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_19;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_20_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_20;
  I_store_I_from_in_24_to_I_I_blr_conv_3_30_21_cache I_store_I_from_in_24_to_I_I_blr_conv_3_30_21;
};



inline void I_store_I_from_in_24_write(hw_uint<32> & I_store_I_from_in_24, I_cache& I, int root, int pr, int pc) {
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_13.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_14.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_15.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_16.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_17.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_18.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_19.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_20.push(I_store_I_from_in_24);
  I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_21.push(I_store_I_from_in_24);
}

inline hw_uint<32>  I_I_blr_conv_3_30_13_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_13 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_13.peek(/* is one piece but not a number */((224 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_14_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_14 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_14.peek(/* is one piece but not a number */((223 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_15_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_15 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_15.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((222 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0) ? ((210 - 15 * I_blr_r)) : 0);
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_16_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_16 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_16.peek(/* is one piece but not a number */((209 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_17_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_17 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_17.peek(/* is one piece but not a number */((208 - 15 * I_blr_r) - I_blr_c));
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_18_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 1 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_18 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_18.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((207 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 12 - I_blr_r >= 0) ? ((195 - 15 * I_blr_r)) : 0);
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_19 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_19.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? (((194 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? ((14 - I_blr_c)) : 0);
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_20 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_20.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? (((193 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 12 - I_blr_c >= 0) ? ((13 - I_blr_c)) : 0);
	return value_I_store_I_from_in_24;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	// lexmax events: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> store_I_from_in[root' = 0, pr = 2 + I_blr_r, pc = 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
  // I_I_blr_conv_3_30_21 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 12 and 0 <= I_blr_c <= 12 }
	auto value_I_store_I_from_in_24 = I.I_store_I_from_in_24_to_I_I_blr_conv_3_30_21.peek(/* Needs general delay string */ (root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? (((192 - 15 * I_blr_r) - I_blr_c)) : (-12 + I_blr_c == 0 && root == 0 && I_blr_r >= 0 && 11 - I_blr_r >= 0) ? ((180 - 15 * I_blr_r)) : (-12 + I_blr_r == 0 && root == 0 && I_blr_c >= 0 && 11 - I_blr_c >= 0) ? ((12 - I_blr_c)) : 0);
	return value_I_store_I_from_in_24;
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_13
//	I_I_blr_conv_3_30_14
//	I_I_blr_conv_3_30_15
//	I_I_blr_conv_3_30_16
//	I_I_blr_conv_3_30_17
//	I_I_blr_conv_3_30_18
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_13_res = I_I_blr_conv_3_30_13_select(I, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_13_res);
	hw_uint<32>  I_I_blr_conv_3_30_14_res = I_I_blr_conv_3_30_14_select(I, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_14_res);
	hw_uint<32>  I_I_blr_conv_3_30_15_res = I_I_blr_conv_3_30_15_select(I, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_15_res);
	hw_uint<32>  I_I_blr_conv_3_30_16_res = I_I_blr_conv_3_30_16_select(I, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_16_res);
	hw_uint<32>  I_I_blr_conv_3_30_17_res = I_I_blr_conv_3_30_17_select(I, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_17_res);
	hw_uint<32>  I_I_blr_conv_3_30_18_res = I_I_blr_conv_3_30_18_select(I, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_18_res);
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_21_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_24
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_24_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_24_write(I_store_I_from_in_24_res, I, root, pr, pc);
}



#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_12_to_I_blr_I_blr_ds_id0_23_cache {
	// Capacity: 169
	// # of read delays: 142
	// read delays: 0, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168
	fifo<hw_uint<32> , 169> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(168 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_12_to_I_blr_I_blr_ds_id0_23_cache I_blr_I_blr_conv_3_30_12_to_I_blr_I_blr_ds_id0_23;
};



inline void I_blr_I_blr_conv_3_30_12_write(hw_uint<32> & I_blr_I_blr_conv_3_30_12, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
  I_blr.I_blr_I_blr_conv_3_30_12_to_I_blr_I_blr_ds_id0_23.push(I_blr_I_blr_conv_3_30_12);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_23_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// lexmax events: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr_conv_3_30[root' = 0, I_blr_r = 2I_blr_ds_r, I_blr_c = 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 5 and 0 <= I_blr_ds_c <= 5 }
  // I_blr_I_blr_ds_id0_23 read pattern: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr[2I_blr_ds_r, 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 5 and 0 <= I_blr_ds_c <= 5 }
	auto value_I_blr_I_blr_conv_3_30_12 = I_blr.I_blr_I_blr_conv_3_30_12_to_I_blr_I_blr_ds_id0_23.peek(/* is one piece but not a number */((168 - 26 * I_blr_ds_r) - 2 * I_blr_ds_c));
	return value_I_blr_I_blr_conv_3_30_12;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_12
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_12_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_12_write(I_blr_I_blr_conv_3_30_12_res, I_blr, root, I_blr_r, I_blr_c);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_23
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_23_res = I_blr_I_blr_ds_id0_23_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_23_res);
	return result;
}



#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_1_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_2_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8_cache {
	// Capacity: 36
	// # of read delays: 23
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9_cache {
	// Capacity: 36
	// # of read delays: 22
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21
	fifo<hw_uint<32> , 36> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(35 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_1_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_1;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_2_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_2;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8;
  I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9_cache I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9;
};



inline void I_blr_ds_I_blr_ds_id0_22_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_22, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_1.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_2.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8.push(I_blr_ds_I_blr_ds_id0_22);
  I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9.push(I_blr_ds_I_blr_ds_id0_22);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_1_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_1 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_1.peek(/* is one piece but not a number */((35 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_2_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_2 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_2.peek(/* is one piece but not a number */((34 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_3 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_3.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((33 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0) ? ((30 - 6 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_4 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_4.peek(/* is one piece but not a number */((29 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_5 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_5.peek(/* is one piece but not a number */((28 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c));
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 1 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_6 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_6.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((27 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 3 - I_blr_ds_blr_r >= 0) ? ((24 - 6 * I_blr_ds_blr_r)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_7 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_7.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? (((23 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? ((5 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_8 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_8.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? (((22 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 3 - I_blr_ds_blr_c >= 0) ? ((4 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_22;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// lexmax events: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds_id0[root' = 0, I_blr_ds_r = 2 + I_blr_ds_blr_r, I_blr_ds_c = 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
  // I_blr_ds_I_blr_ds_blr_conv_3_30_9 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 3 and 0 <= I_blr_ds_blr_c <= 3 }
	auto value_I_blr_ds_I_blr_ds_id0_22 = I_blr_ds.I_blr_ds_I_blr_ds_id0_22_to_I_blr_ds_I_blr_ds_blr_conv_3_30_9.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? (((21 - 6 * I_blr_ds_blr_r) - I_blr_ds_blr_c)) : (-3 + I_blr_ds_blr_c == 0 && root == 0 && I_blr_ds_blr_r >= 0 && 2 - I_blr_ds_blr_r >= 0) ? ((18 - 6 * I_blr_ds_blr_r)) : (-3 + I_blr_ds_blr_r == 0 && root == 0 && I_blr_ds_blr_c >= 0 && 2 - I_blr_ds_blr_c >= 0) ? ((3 - I_blr_ds_blr_c)) : 0);
	return value_I_blr_ds_I_blr_ds_id0_22;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_1
//	I_blr_ds_I_blr_ds_blr_conv_3_30_2
//	I_blr_ds_I_blr_ds_blr_conv_3_30_3
//	I_blr_ds_I_blr_ds_blr_conv_3_30_4
//	I_blr_ds_I_blr_ds_blr_conv_3_30_5
//	I_blr_ds_I_blr_ds_blr_conv_3_30_6
//	I_blr_ds_I_blr_ds_blr_conv_3_30_7
//	I_blr_ds_I_blr_ds_blr_conv_3_30_8
//	I_blr_ds_I_blr_ds_blr_conv_3_30_9
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_1_res = I_blr_ds_I_blr_ds_blr_conv_3_30_1_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_1_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_2_res = I_blr_ds_I_blr_ds_blr_conv_3_30_2_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_2_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_3_res = I_blr_ds_I_blr_ds_blr_conv_3_30_3_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_3_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_4_res = I_blr_ds_I_blr_ds_blr_conv_3_30_4_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_4_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_5_res = I_blr_ds_I_blr_ds_blr_conv_3_30_5_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_5_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_6_res = I_blr_ds_I_blr_ds_blr_conv_3_30_6_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_6_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_7_res = I_blr_ds_I_blr_ds_blr_conv_3_30_7_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_7_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_I_blr_ds_blr_conv_3_30_8_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_8_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_22
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_22_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_22_write(I_blr_ds_I_blr_ds_id0_22_res, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}



#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_cache {
	// Capacity: 16
	// # of read delays: 16
	// read delays: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_cache {
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0);
}

inline hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// lexmax events: { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> I_blr_ds_blr_conv_3_30[root' = 0, I_blr_ds_blr_r = I_blr_ds_blr_out_r, I_blr_ds_blr_c = I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_r <= 3 and 0 <= I_blr_ds_blr_out_c <= 3 }
  // I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11 read pattern: { store_I_blr_ds_blr_out_from_I_blr_ds_blr[root = 0, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] -> I_blr_ds_blr[I_blr_ds_blr_out_r, I_blr_ds_blr_out_c] : 0 <= I_blr_ds_blr_out_r <= 3 and 0 <= I_blr_ds_blr_out_c <= 3 }
	auto value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_to_I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11.peek(/* Needs general delay string */ (root == 0 && I_blr_ds_blr_out_r >= 0 && 2 - I_blr_ds_blr_out_r >= 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? (((15 - 4 * I_blr_ds_blr_out_r) - I_blr_ds_blr_out_c)) : (-3 + I_blr_ds_blr_out_c == 0 && root == 0 && I_blr_ds_blr_out_r >= 0 && 2 - I_blr_ds_blr_out_r >= 0) ? ((12 - 4 * I_blr_ds_blr_out_r)) : (-3 + I_blr_ds_blr_out_r == 0 && root == 0 && I_blr_ds_blr_out_c >= 0 && 2 - I_blr_ds_blr_out_c >= 0) ? ((3 - I_blr_ds_blr_out_c)) : 0);
	return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_0_res, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

// store_I_blr_ds_blr_out_from_I_blr_ds_blr_read
//	I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11
inline hw_uint<32> I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_res = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_select(I_blr_ds_blr, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_11_res);
	return result;
}





// Operation logic
inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(compute_result, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

inline void store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr_cache& I_blr_ds_blr, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_out, int root, int I_blr_ds_blr_out_r, int I_blr_ds_blr_out_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value = I_blr_ds_blr_store_I_blr_ds_blr_out_from_I_blr_ds_blr_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_out_r, I_blr_ds_blr_out_c);
	// Produce: I_blr_ds_blr_out
	I_blr_ds_blr_out.write(I_blr_ds_blr_I_blr_ds_blr_out_r_c__I_blr_ds_blr_out_c_value);
}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c);
	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(compute_result, I_blr, root, I_blr_r, I_blr_c);
}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);
	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(compute_result, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}

inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(in_pr_c__pc_value, I, root, pr, pc);
}

// Driver function
void unoptimized_blur_and_downsample(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_out) {
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif // __VIVADO_SYNTH__

  I_blr_cache I_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_cache I_blr_ds;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds inter false
#endif // __VIVADO_SYNTH__

  I_blr_ds_blr_cache I_blr_ds_blr;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I_blr_ds_blr inter false
#endif // __VIVADO_SYNTH__

/* CUSTOM CODE STRING

*/
	{
	  for (int c3 = 0; c3 <= 14; c3 += 1)
	    for (int c5 = 0; c5 <= 14; c5 += 1)
	      store_I_from_in(in, I, 0, c3, c5);
	  for (int c3 = 0; c3 <= 12; c3 += 1)
	    for (int c5 = 0; c5 <= 12; c5 += 1)
	      I_blr_conv_3_30(I, I_blr, 0, c3, c5);
	  for (int c3 = 0; c3 <= 5; c3 += 1)
	    for (int c5 = 0; c5 <= 5; c5 += 1)
	      I_blr_ds_id0(I_blr, I_blr_ds, 0, c3, c5);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
	      I_blr_ds_blr_conv_3_30(I_blr_ds, I_blr_ds_blr, 0, c3, c5);
	  for (int c3 = 0; c3 <= 3; c3 += 1)
	    for (int c5 = 0; c5 <= 3; c5 += 1)
	      store_I_blr_ds_blr_out_from_I_blr_ds_blr(I_blr_ds_blr, I_blr_ds_blr_out, 0, c3, c5);
	}
	
}
