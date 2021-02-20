#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_lp_in0_146_merged497_131_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 519
	// # of read delays: 516
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518
	fifo<hw_uint<32> , 519> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(518 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_lp_in0_146_merged497_133_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 520
	// # of read delays: 516
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519
	fifo<hw_uint<32> , 520> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(519 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 516
	// # of read delays: 513
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515
	fifo<hw_uint<32> , 516> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(515 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 516
	// # of read delays: 513
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515
	fifo<hw_uint<32> , 516> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(515 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 517
	// # of read delays: 517
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516
	fifo<hw_uint<32> , 517> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(516 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 517
	// # of read delays: 517
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516
	fifo<hw_uint<32> , 517> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(516 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3_cache {
	// RAM Box: {[1, 1031], [0, 1026]}
	// Capacity: 1038
	// # of read delays: 4
  // 0, 1, 519, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 517> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 517> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_519() {
		return f4;
	}

	inline hw_uint<32>  peek_1036() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1037() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6_cache {
	// RAM Box: {[0, 1032], [0, 1026]}
	// Capacity: 1038
	// # of read delays: 6
  // 0, 1, 518, 519, 1036, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 516> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 516> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_517() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_518() {
		return f4;
	}

	inline hw_uint<32>  peek_519() {
		return f6;
	}

	inline hw_uint<32>  peek_1035() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1036() {
		return f8;
	}

	inline hw_uint<32>  peek_1037() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in0_1_buf8_cache {
  // Reader addrs...
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
    // { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8[4 + 2lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
    // { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8[3 + 2lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
    // { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[4 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
    // { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[4 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
    // { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[3 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
    // { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[3 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // # of banks: 8
  gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_lp_in0_146_merged497_131_cache gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_lp_in0_146_merged497_131;
  gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_lp_in0_146_merged497_133_cache gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_lp_in0_146_merged497_133;
  gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_cache gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32;
  gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_cache gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33;
  gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_cache gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34;
  gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_cache gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35;
  gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3_cache gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3;
  gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6_cache gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6;
};



inline void gp_in0_1_buf8_gp_in0_110_merged492_207_write(hw_uint<32> & gp_in0_1_buf8_gp_in0_110_merged492_207, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_lp_in0_146_merged497_133.push(gp_in0_1_buf8_gp_in0_110_merged492_207);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34.push(gp_in0_1_buf8_gp_in0_110_merged492_207);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35.push(gp_in0_1_buf8_gp_in0_110_merged492_207);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3.push(gp_in0_1_buf8_gp_in0_110_merged492_207);
}

inline void gp_in0_1_buf8_gp_in0_110_merged492_208_write(hw_uint<32> & gp_in0_1_buf8_gp_in0_110_merged492_208, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_lp_in0_146_merged497_131.push(gp_in0_1_buf8_gp_in0_110_merged492_208);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32.push(gp_in0_1_buf8_gp_in0_110_merged492_208);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33.push(gp_in0_1_buf8_gp_in0_110_merged492_208);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.push(gp_in0_1_buf8_gp_in0_110_merged492_208);
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_1();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3.peek_1();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_0();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_519();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3.peek_519();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_518();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_1037();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_merged_banks_3.peek_1037();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206 read pattern: { gp_in0_218_merged300_sm316_0440[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 515 }
  // Read schedule : { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_merged_banks_6.peek_1036();
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_lp_in0_146_merged497_131_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_lp_in0_146_merged497_131 read pattern: { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8[4 + 2lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
  // Read schedule : { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_lp_in0_146_merged497_131.peek(/* one reader or all rams */ (1022 - lp_in0_145 >= 0) ? (518) : (-1023 + lp_in0_145 == 0) ? ((515 - lp_in0_146)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_lp_in0_146_merged497_133_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_lp_in0_146_merged497_133 read pattern: { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8[3 + 2lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
  // Read schedule : { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_lp_in0_146_merged497_133.peek(/* one reader or all rams */ (1022 - lp_in0_145 >= 0) ? (519) : (-1023 + lp_in0_145 == 0) ? ((516 - lp_in0_146)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32 read pattern: { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[4 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32.peek(/* one reader or all rams */ ((-1 - us_gp_in0_1_buf849) % 2 == 0) ? ((515 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33 read pattern: { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[4 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_208 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_208_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33.peek(/* one reader or all rams */ ((-1 - us_gp_in0_1_buf849) % 2 == 0) ? ((515 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_208;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34 read pattern: { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[3 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34.peek(/* one reader or all rams */ ((-us_gp_in0_1_buf849) % 2 == 0) ? (1) : ((-1 - us_gp_in0_1_buf849) % 2 == 0) ? ((516 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35 read pattern: { us_gp_in0_1_buf850_merged499[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8[3 + 2us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 511 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged492_207 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged492_207_to_gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35.peek(/* one reader or all rams */ ((-us_gp_in0_1_buf849) % 2 == 0) ? (1) : ((-1 - us_gp_in0_1_buf849) % 2 == 0) ? ((516 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged492_207;
  return 0;
}

// # of bundles = 4
// gp_in0_110_merged492_write
//	gp_in0_1_buf8_gp_in0_110_merged492_207
//	gp_in0_1_buf8_gp_in0_110_merged492_208
inline void gp_in0_1_buf8_gp_in0_110_merged492_write_bundle_write(hw_uint<64>& gp_in0_110_merged492_write, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_gp_in0_110_merged492_207_res = gp_in0_110_merged492_write.extract<0, 31>();
	gp_in0_1_buf8_gp_in0_110_merged492_207_write(gp_in0_1_buf8_gp_in0_110_merged492_207_res, gp_in0_1_buf8, root, gp_in0_19, gp_in0_110, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_110_merged492_208_res = gp_in0_110_merged492_write.extract<32, 63>();
	gp_in0_1_buf8_gp_in0_110_merged492_208_write(gp_in0_1_buf8_gp_in0_110_merged492_208_res, gp_in0_1_buf8, root, gp_in0_19, gp_in0_110, dynamic_address);
}

// gp_in0_218_merged300_sm316_0440_read
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205
//	gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206
inline hw_uint<288> gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205
    // gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206

	hw_uint<288> result;
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<0, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_198_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<32, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_199_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<64, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_200_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<96, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_201_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<128, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_202_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<160, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_203_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<192, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_204_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<224, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_205_res);
	hw_uint<32>  gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206_res = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206_select(gp_in0_1_buf8, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<256, 288>(result, gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_206_res);
	return result;
}

// lp_in0_146_merged497_read
//	gp_in0_1_buf8_lp_in0_146_merged497_131
//	gp_in0_1_buf8_lp_in0_146_merged497_133
inline hw_uint<64> gp_in0_1_buf8_lp_in0_146_merged497_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_1_buf8_lp_in0_146_merged497_131
    // gp_in0_1_buf8_lp_in0_146_merged497_133

	hw_uint<64> result;
	hw_uint<32>  gp_in0_1_buf8_lp_in0_146_merged497_131_res = gp_in0_1_buf8_lp_in0_146_merged497_131_select(gp_in0_1_buf8, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 64>(result, gp_in0_1_buf8_lp_in0_146_merged497_131_res);
	hw_uint<32>  gp_in0_1_buf8_lp_in0_146_merged497_133_res = gp_in0_1_buf8_lp_in0_146_merged497_133_select(gp_in0_1_buf8, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<32, 64>(result, gp_in0_1_buf8_lp_in0_146_merged497_133_res);
	return result;
}

// us_gp_in0_1_buf850_merged499_read
//	gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32
//	gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33
//	gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34
//	gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35
inline hw_uint<128> gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  // # of ports in bundle: 4
    // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32
    // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33
    // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34
    // gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35

	hw_uint<128> result;
	hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_res = gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_select(gp_in0_1_buf8, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<0, 128>(result, gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_32_res);
	hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_res = gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_select(gp_in0_1_buf8, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<32, 128>(result, gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_33_res);
	hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_res = gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_select(gp_in0_1_buf8, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<64, 128>(result, gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_34_res);
	hw_uint<32>  gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_res = gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_select(gp_in0_1_buf8, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<96, 128>(result, gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_35_res);
	return result;
}

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_139_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_141_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_143_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_145_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct gp_in0_1_buf8_us48_cache {
  // Reader addrs...
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[3 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[2 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[1 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // # of banks: 4
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_139_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_139;
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_141_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_141;
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_143_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_143;
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_145_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_145;
};



inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_139.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28);
}

inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_141.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29);
}

inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_143.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30);
}

inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_145.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31);
}

inline hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_139_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_lp_in0_054_merged502_139 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[3 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_139.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_141_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_lp_in0_054_merged502_141 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[2 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_141.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_143_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_lp_in0_054_merged502_143 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[1 + 4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_143.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_145_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_lp_in0_054_merged502_145 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48[4lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_to_gp_in0_1_buf8_us48_lp_in0_054_merged502_145.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31;
  return 0;
}

// # of bundles = 2
// lp_in0_054_merged502_read
//	gp_in0_1_buf8_us48_lp_in0_054_merged502_139
//	gp_in0_1_buf8_us48_lp_in0_054_merged502_141
//	gp_in0_1_buf8_us48_lp_in0_054_merged502_143
//	gp_in0_1_buf8_us48_lp_in0_054_merged502_145
inline hw_uint<128> gp_in0_1_buf8_us48_lp_in0_054_merged502_read_bundle_read(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 4
    // gp_in0_1_buf8_us48_lp_in0_054_merged502_139
    // gp_in0_1_buf8_us48_lp_in0_054_merged502_141
    // gp_in0_1_buf8_us48_lp_in0_054_merged502_143
    // gp_in0_1_buf8_us48_lp_in0_054_merged502_145

	hw_uint<128> result;
	hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_139_res = gp_in0_1_buf8_us48_lp_in0_054_merged502_139_select(gp_in0_1_buf8_us48, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 128>(result, gp_in0_1_buf8_us48_lp_in0_054_merged502_139_res);
	hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_141_res = gp_in0_1_buf8_us48_lp_in0_054_merged502_141_select(gp_in0_1_buf8_us48, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<32, 128>(result, gp_in0_1_buf8_us48_lp_in0_054_merged502_141_res);
	hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_143_res = gp_in0_1_buf8_us48_lp_in0_054_merged502_143_select(gp_in0_1_buf8_us48, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<64, 128>(result, gp_in0_1_buf8_us48_lp_in0_054_merged502_143_res);
	hw_uint<32>  gp_in0_1_buf8_us48_lp_in0_054_merged502_145_res = gp_in0_1_buf8_us48_lp_in0_054_merged502_145_select(gp_in0_1_buf8_us48, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<96, 128>(result, gp_in0_1_buf8_us48_lp_in0_054_merged502_145_res);
	return result;
}

// us_gp_in0_1_buf850_merged499_write
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31
inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_write_bundle_write(hw_uint<128>& us_gp_in0_1_buf850_merged499_write, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_res = us_gp_in0_1_buf850_merged499_write.extract<0, 31>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_28_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_res = us_gp_in0_1_buf850_merged499_write.extract<32, 63>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_29_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_res = us_gp_in0_1_buf850_merged499_write.extract<64, 95>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_30_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_res = us_gp_in0_1_buf850_merged499_write.extract<96, 127>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_31_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
}

struct gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_diff39_sm319_0446_231_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 518
	// # of read delays: 516
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517
	fifo<hw_uint<32> , 518> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(517 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 515
	// # of read delays: 513
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514
	fifo<hw_uint<32> , 515> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(514 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 515
	// # of read delays: 513
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514
	fifo<hw_uint<32> , 515> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(514 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1035
	// # of read delays: 9
  // 0, 1, 2, 516, 517, 518, 1032, 1033, 1034
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 513> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 513> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_515() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_516() {
		return f6;
	}

	inline hw_uint<32>  peek_517() {
		return f8;
	}

	inline hw_uint<32>  peek_518() {
		return f10;
	}

	inline hw_uint<32>  peek_1031() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1032() {
		return f12;
	}

	inline hw_uint<32>  peek_1033() {
		return f14;
	}

	inline hw_uint<32>  peek_1034() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in0_2_buf16_cache {
  // Reader addrs...
    // { diff39_sm319_0446[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { us_gp_in0_2_buf1642_merged494[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16[1 + us_gp_in0_2_buf1642, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 511 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
    // { us_gp_in0_2_buf1642_merged494[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16[1 + us_gp_in0_2_buf1642, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 511 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // # of banks: 4
  gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_diff39_sm319_0446_231_cache gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_diff39_sm319_0446_231;
  gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_cache gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26;
  gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_cache gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27;
  gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9_cache gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9;
};



inline void gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_write(hw_uint<32> & gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_diff39_sm319_0446_231.push(gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26.push(gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27.push(gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.push(gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197);
}

inline hw_uint<32>  gp_in0_2_buf16_diff39_sm319_0446_231_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_diff39_sm319_0446_231 read pattern: { diff39_sm319_0446[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39_sm319_0446[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 21] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_diff39_sm319_0446_231.peek(/* one reader or all rams */ (510 - lp_in0_237 >= 0) ? (517) : (-511 + lp_in0_237 == 0) ? ((514 - lp_in0_238)) : 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_2();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_1();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_0();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_518();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_517();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_516();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_1034();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_1033();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196 read pattern: { gp_in0_326_merged303_sm317_0442[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_merged_banks_9.peek_1032();
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26 read pattern: { us_gp_in0_2_buf1642_merged494[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16[1 + us_gp_in0_2_buf1642, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 511 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // Read schedule : { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26.peek(/* one reader or all rams */ ((-1 - us_gp_in0_2_buf1641) % 2 == 0) ? ((514 - us_gp_in0_2_buf1642)) : 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27 read pattern: { us_gp_in0_2_buf1642_merged494[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16[1 + us_gp_in0_2_buf1642, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 511 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // Read schedule : { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_to_gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27.peek(/* one reader or all rams */ ((-1 - us_gp_in0_2_buf1641) % 2 == 0) ? ((514 - us_gp_in0_2_buf1642)) : 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197;
  return 0;
}

// # of bundles = 4
// diff39_sm319_0446_read
//	gp_in0_2_buf16_diff39_sm319_0446_231
inline hw_uint<32> gp_in0_2_buf16_diff39_sm319_0446_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_diff39_sm319_0446_231

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_diff39_sm319_0446_231_res = gp_in0_2_buf16_diff39_sm319_0446_231_select(gp_in0_2_buf16, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_diff39_sm319_0446_231_res);
	return result;
}

// gp_in0_218_merged300_sm316_0440_write
//	gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197
inline void gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_write_bundle_write(hw_uint<32>& gp_in0_218_merged300_sm316_0440_write, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_res = gp_in0_218_merged300_sm316_0440_write.extract<0, 31>();
	gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_write(gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_197_res, gp_in0_2_buf16, root, gp_in0_217, gp_in0_218, dynamic_address);
}

// gp_in0_326_merged303_sm317_0442_read
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195
//	gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196
inline hw_uint<288> gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195
    // gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196

	hw_uint<288> result;
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<0, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_188_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<32, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_189_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<64, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_190_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<96, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_191_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<128, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_192_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<160, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_193_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<192, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_194_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<224, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_195_res);
	hw_uint<32>  gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196_res = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196_select(gp_in0_2_buf16, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<256, 288>(result, gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_196_res);
	return result;
}

// us_gp_in0_2_buf1642_merged494_read
//	gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26
//	gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27
inline hw_uint<64> gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26
    // gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27

	hw_uint<64> result;
	hw_uint<32>  gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_res = gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_select(gp_in0_2_buf16, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
	set_at<0, 64>(result, gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_26_res);
	hw_uint<32>  gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_res = gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_select(gp_in0_2_buf16, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
	set_at<32, 64>(result, gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_27_res);
	return result;
}

struct gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_132_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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

struct gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_134_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct gp_in0_2_buf16_us40_cache {
  // Reader addrs...
    // { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40[1 + 2lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
    // { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40[2lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
  // # of banks: 2
  gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_132_cache gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_132;
  gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_134_cache gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_134;
};



inline void gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_write(hw_uint<32> & gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_132.push(gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24);
}

inline void gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_write(hw_uint<32> & gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_134.push(gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25);
}

inline hw_uint<32>  gp_in0_2_buf16_us40_lp_in0_146_merged497_132_select(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_lp_in0_146_merged497_132 read pattern: { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40[1 + 2lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
  // Read schedule : { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24 = gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_132.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_us40_lp_in0_146_merged497_134_select(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_lp_in0_146_merged497_134 read pattern: { lp_in0_146_merged497[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40[2lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 511 }
  // Read schedule : { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25 = gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_to_gp_in0_2_buf16_us40_lp_in0_146_merged497_134.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25;
  return 0;
}

// # of bundles = 2
// lp_in0_146_merged497_read
//	gp_in0_2_buf16_us40_lp_in0_146_merged497_132
//	gp_in0_2_buf16_us40_lp_in0_146_merged497_134
inline hw_uint<64> gp_in0_2_buf16_us40_lp_in0_146_merged497_read_bundle_read(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_2_buf16_us40_lp_in0_146_merged497_132
    // gp_in0_2_buf16_us40_lp_in0_146_merged497_134

	hw_uint<64> result;
	hw_uint<32>  gp_in0_2_buf16_us40_lp_in0_146_merged497_132_res = gp_in0_2_buf16_us40_lp_in0_146_merged497_132_select(gp_in0_2_buf16_us40, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 64>(result, gp_in0_2_buf16_us40_lp_in0_146_merged497_132_res);
	hw_uint<32>  gp_in0_2_buf16_us40_lp_in0_146_merged497_134_res = gp_in0_2_buf16_us40_lp_in0_146_merged497_134_select(gp_in0_2_buf16_us40, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<32, 64>(result, gp_in0_2_buf16_us40_lp_in0_146_merged497_134_res);
	return result;
}

// us_gp_in0_2_buf1642_merged494_write
//	gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24
//	gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25
inline void gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_write_bundle_write(hw_uint<64>& us_gp_in0_2_buf1642_merged494_write, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_res = us_gp_in0_2_buf1642_merged494_write.extract<0, 31>();
	gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_write(gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_24_res, gp_in0_2_buf16_us40, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
	hw_uint<32>  gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_res = us_gp_in0_2_buf1642_merged494_write.extract<32, 63>();
	gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_write(gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_25_res, gp_in0_2_buf16_us40, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
}

struct gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_us35_sm318_0444_39_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_3_buf24_cache {
  // Reader addrs...
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
    // { us35_sm318_0444[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // # of banks: 2
  gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_cache gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91;
  gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_us35_sm318_0444_39_cache gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_us35_sm318_0444_39;
};



inline void gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_write(hw_uint<32> & gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91.push(gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187);
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_us35_sm318_0444_39.push(gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187);
}

inline hw_uint<32>  gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 14] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187;
  return 0;
}

inline hw_uint<32>  gp_in0_3_buf24_us35_sm318_0444_39_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us35_sm318_0444_39 read pattern: { us35_sm318_0444[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // Read schedule : { us35_sm318_0444[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 18] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_to_gp_in0_3_buf24_us35_sm318_0444_39.peek(/* one reader or all rams */ ((-1 - us_gp_in0_3_buf2433) % 2 == 0 && 509 - us_gp_in0_3_buf2434 >= 0) ? ((255 - floord(2*us_gp_in0_3_buf2434, 4))) : 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187;
  return 0;
}

// # of bundles = 3
// gp_in0_326_merged303_sm317_0442_write
//	gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187
inline void gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_write_bundle_write(hw_uint<32>& gp_in0_326_merged303_sm317_0442_write, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_res = gp_in0_326_merged303_sm317_0442_write.extract<0, 31>();
	gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_write(gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_187_res, gp_in0_3_buf24, root, gp_in0_325, gp_in0_326, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read
//	gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91
inline hw_uint<32> gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_res = gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_select(gp_in0_3_buf24, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_91_res);
	return result;
}

// us35_sm318_0444_read
//	gp_in0_3_buf24_us35_sm318_0444_39
inline hw_uint<32> gp_in0_3_buf24_us35_sm318_0444_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us35_sm318_0444_39

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us35_sm318_0444_39_res = gp_in0_3_buf24_us35_sm318_0444_39_select(gp_in0_3_buf24, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us35_sm318_0444_39_res);
	return result;
}

struct gp_in0_3_buf24_us32_us35_sm318_0444_38_to_gp_in0_3_buf24_us32_diff39_sm319_0446_232_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in0_3_buf24_us32_cache {
  // Reader addrs...
    // { diff39_sm319_0446[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // # of banks: 1
  gp_in0_3_buf24_us32_us35_sm318_0444_38_to_gp_in0_3_buf24_us32_diff39_sm319_0446_232_cache gp_in0_3_buf24_us32_us35_sm318_0444_38_to_gp_in0_3_buf24_us32_diff39_sm319_0446_232;
};



inline void gp_in0_3_buf24_us32_us35_sm318_0444_38_write(hw_uint<32> & gp_in0_3_buf24_us32_us35_sm318_0444_38, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_sm318_0444_38_to_gp_in0_3_buf24_us32_diff39_sm319_0446_232.push(gp_in0_3_buf24_us32_us35_sm318_0444_38);
}

inline hw_uint<32>  gp_in0_3_buf24_us32_diff39_sm319_0446_232_select(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us32_diff39_sm319_0446_232 read pattern: { diff39_sm319_0446[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39_sm319_0446[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 21] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us35_sm318_0444[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 18] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_3_buf24_us32_us35_sm318_0444_38 = gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_sm318_0444_38_to_gp_in0_3_buf24_us32_diff39_sm319_0446_232.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_us32_us35_sm318_0444_38;
  return 0;
}

// # of bundles = 2
// diff39_sm319_0446_read
//	gp_in0_3_buf24_us32_diff39_sm319_0446_232
inline hw_uint<32> gp_in0_3_buf24_us32_diff39_sm319_0446_read_bundle_read(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us32_diff39_sm319_0446_232

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us32_diff39_sm319_0446_232_res = gp_in0_3_buf24_us32_diff39_sm319_0446_232_select(gp_in0_3_buf24_us32, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us32_diff39_sm319_0446_232_res);
	return result;
}

// us35_sm318_0444_write
//	gp_in0_3_buf24_us32_us35_sm318_0444_38
inline void gp_in0_3_buf24_us32_us35_sm318_0444_write_bundle_write(hw_uint<32>& us35_sm318_0444_write, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_us32_us35_sm318_0444_38_res = us35_sm318_0444_write.extract<0, 31>();
	gp_in0_3_buf24_us32_us35_sm318_0444_38_write(gp_in0_3_buf24_us32_us35_sm318_0444_38_res, gp_in0_3_buf24_us32, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
}

struct gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_lp_in1_194_merged510_113_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 519
	// # of read delays: 516
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518
	fifo<hw_uint<32> , 519> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(518 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_lp_in1_194_merged510_115_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 520
	// # of read delays: 516
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519
	fifo<hw_uint<32> , 520> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(519 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 516
	// # of read delays: 513
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515
	fifo<hw_uint<32> , 516> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(515 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_cache {
	// RAM Box: {[4, 1026], [3, 1026]}
	// Capacity: 516
	// # of read delays: 513
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515
	fifo<hw_uint<32> , 516> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(515 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 517
	// # of read delays: 517
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516
	fifo<hw_uint<32> , 517> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(516 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_cache {
	// RAM Box: {[3, 1025], [3, 1026]}
	// Capacity: 517
	// # of read delays: 517
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516
	fifo<hw_uint<32> , 517> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(516 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3_cache {
	// RAM Box: {[1, 1031], [0, 1026]}
	// Capacity: 1038
	// # of read delays: 4
  // 0, 1, 519, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 517> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 517> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_519() {
		return f4;
	}

	inline hw_uint<32>  peek_1036() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1037() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6_cache {
	// RAM Box: {[0, 1032], [0, 1026]}
	// Capacity: 1038
	// # of read delays: 6
  // 0, 1, 518, 519, 1036, 1037
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 516> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 516> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_517() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_518() {
		return f4;
	}

	inline hw_uint<32>  peek_519() {
		return f6;
	}

	inline hw_uint<32>  peek_1035() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1036() {
		return f8;
	}

	inline hw_uint<32>  peek_1037() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in1_1_buf56_cache {
  // Reader addrs...
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
    // { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56[4 + 2lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
    // { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56[3 + 2lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
    // { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[4 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
    // { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[4 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
    // { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[3 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
    // { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[3 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // # of banks: 8
  gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_lp_in1_194_merged510_113_cache gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_lp_in1_194_merged510_113;
  gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_lp_in1_194_merged510_115_cache gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_lp_in1_194_merged510_115;
  gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_cache gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20;
  gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_cache gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21;
  gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_cache gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22;
  gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_cache gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23;
  gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3_cache gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3;
  gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6_cache gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6;
};



inline void gp_in1_1_buf56_gp_in1_158_merged505_167_write(hw_uint<32> & gp_in1_1_buf56_gp_in1_158_merged505_167, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_lp_in1_194_merged510_115.push(gp_in1_1_buf56_gp_in1_158_merged505_167);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22.push(gp_in1_1_buf56_gp_in1_158_merged505_167);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23.push(gp_in1_1_buf56_gp_in1_158_merged505_167);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3.push(gp_in1_1_buf56_gp_in1_158_merged505_167);
}

inline void gp_in1_1_buf56_gp_in1_158_merged505_168_write(hw_uint<32> & gp_in1_1_buf56_gp_in1_158_merged505_168, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_lp_in1_194_merged510_113.push(gp_in1_1_buf56_gp_in1_158_merged505_168);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20.push(gp_in1_1_buf56_gp_in1_158_merged505_168);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21.push(gp_in1_1_buf56_gp_in1_158_merged505_168);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.push(gp_in1_1_buf56_gp_in1_158_merged505_168);
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_1();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3.peek_1();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_0();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_519();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3.peek_519();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_518();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_1037();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_merged_banks_3.peek_1037();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166 read pattern: { gp_in1_266_merged309_sm325_0360[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 515 }
  // Read schedule : { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_merged_banks_6.peek_1036();
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_lp_in1_194_merged510_113_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_lp_in1_194_merged510_113 read pattern: { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56[4 + 2lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
  // Read schedule : { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_lp_in1_194_merged510_113.peek(/* one reader or all rams */ (1022 - lp_in1_193 >= 0) ? (518) : (-1023 + lp_in1_193 == 0) ? ((515 - lp_in1_194)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_lp_in1_194_merged510_115_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_lp_in1_194_merged510_115 read pattern: { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56[3 + 2lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
  // Read schedule : { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_lp_in1_194_merged510_115.peek(/* one reader or all rams */ (1022 - lp_in1_193 >= 0) ? (519) : (-1023 + lp_in1_193 == 0) ? ((516 - lp_in1_194)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20 read pattern: { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[4 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20.peek(/* one reader or all rams */ ((-1 - us_gp_in1_1_buf5697) % 2 == 0) ? ((515 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21 read pattern: { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[4 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_168 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_168_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21.peek(/* one reader or all rams */ ((-1 - us_gp_in1_1_buf5697) % 2 == 0) ? ((515 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_168;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22 read pattern: { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[3 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22.peek(/* one reader or all rams */ ((-us_gp_in1_1_buf5697) % 2 == 0) ? (1) : ((-1 - us_gp_in1_1_buf5697) % 2 == 0) ? ((516 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23 read pattern: { us_gp_in1_1_buf5698_merged512[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56[3 + 2us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 511 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged505_167 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged505_167_to_gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23.peek(/* one reader or all rams */ ((-us_gp_in1_1_buf5697) % 2 == 0) ? (1) : ((-1 - us_gp_in1_1_buf5697) % 2 == 0) ? ((516 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged505_167;
  return 0;
}

// # of bundles = 4
// gp_in1_158_merged505_write
//	gp_in1_1_buf56_gp_in1_158_merged505_167
//	gp_in1_1_buf56_gp_in1_158_merged505_168
inline void gp_in1_1_buf56_gp_in1_158_merged505_write_bundle_write(hw_uint<64>& gp_in1_158_merged505_write, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_gp_in1_158_merged505_167_res = gp_in1_158_merged505_write.extract<0, 31>();
	gp_in1_1_buf56_gp_in1_158_merged505_167_write(gp_in1_1_buf56_gp_in1_158_merged505_167_res, gp_in1_1_buf56, root, gp_in1_157, gp_in1_158, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_158_merged505_168_res = gp_in1_158_merged505_write.extract<32, 63>();
	gp_in1_1_buf56_gp_in1_158_merged505_168_write(gp_in1_1_buf56_gp_in1_158_merged505_168_res, gp_in1_1_buf56, root, gp_in1_157, gp_in1_158, dynamic_address);
}

// gp_in1_266_merged309_sm325_0360_read
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165
//	gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166
inline hw_uint<288> gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165
    // gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166

	hw_uint<288> result;
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<0, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_158_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<32, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_159_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<64, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_160_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<96, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_161_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<128, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_162_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<160, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_163_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<192, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_164_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<224, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_165_res);
	hw_uint<32>  gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166_res = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166_select(gp_in1_1_buf56, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<256, 288>(result, gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_166_res);
	return result;
}

// lp_in1_194_merged510_read
//	gp_in1_1_buf56_lp_in1_194_merged510_113
//	gp_in1_1_buf56_lp_in1_194_merged510_115
inline hw_uint<64> gp_in1_1_buf56_lp_in1_194_merged510_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_1_buf56_lp_in1_194_merged510_113
    // gp_in1_1_buf56_lp_in1_194_merged510_115

	hw_uint<64> result;
	hw_uint<32>  gp_in1_1_buf56_lp_in1_194_merged510_113_res = gp_in1_1_buf56_lp_in1_194_merged510_113_select(gp_in1_1_buf56, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 64>(result, gp_in1_1_buf56_lp_in1_194_merged510_113_res);
	hw_uint<32>  gp_in1_1_buf56_lp_in1_194_merged510_115_res = gp_in1_1_buf56_lp_in1_194_merged510_115_select(gp_in1_1_buf56, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<32, 64>(result, gp_in1_1_buf56_lp_in1_194_merged510_115_res);
	return result;
}

// us_gp_in1_1_buf5698_merged512_read
//	gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20
//	gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21
//	gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22
//	gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23
inline hw_uint<128> gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  // # of ports in bundle: 4
    // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20
    // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21
    // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22
    // gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23

	hw_uint<128> result;
	hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_res = gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_select(gp_in1_1_buf56, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<0, 128>(result, gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_20_res);
	hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_res = gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_select(gp_in1_1_buf56, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<32, 128>(result, gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_21_res);
	hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_res = gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_select(gp_in1_1_buf56, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<64, 128>(result, gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_22_res);
	hw_uint<32>  gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_res = gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_select(gp_in1_1_buf56, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<96, 128>(result, gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_23_res);
	return result;
}

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct gp_in1_1_buf56_us96_cache {
  // Reader addrs...
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[3 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[2 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[1 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // # of banks: 4
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_121;
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_123;
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_125;
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_127;
};



inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_121.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16);
}

inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_123.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17);
}

inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_125.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18);
}

inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_127.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19);
}

inline hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_lp_in1_0102_merged515_121 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[3 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_121.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_lp_in1_0102_merged515_123 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[2 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_123.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_lp_in1_0102_merged515_125 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[1 + 4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_125.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_lp_in1_0102_merged515_127 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96[4lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_to_gp_in1_1_buf56_us96_lp_in1_0102_merged515_127.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19;
  return 0;
}

// # of bundles = 2
// lp_in1_0102_merged515_read
//	gp_in1_1_buf56_us96_lp_in1_0102_merged515_121
//	gp_in1_1_buf56_us96_lp_in1_0102_merged515_123
//	gp_in1_1_buf56_us96_lp_in1_0102_merged515_125
//	gp_in1_1_buf56_us96_lp_in1_0102_merged515_127
inline hw_uint<128> gp_in1_1_buf56_us96_lp_in1_0102_merged515_read_bundle_read(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 4
    // gp_in1_1_buf56_us96_lp_in1_0102_merged515_121
    // gp_in1_1_buf56_us96_lp_in1_0102_merged515_123
    // gp_in1_1_buf56_us96_lp_in1_0102_merged515_125
    // gp_in1_1_buf56_us96_lp_in1_0102_merged515_127

	hw_uint<128> result;
	hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_res = gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_select(gp_in1_1_buf56_us96, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 128>(result, gp_in1_1_buf56_us96_lp_in1_0102_merged515_121_res);
	hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_res = gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_select(gp_in1_1_buf56_us96, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<32, 128>(result, gp_in1_1_buf56_us96_lp_in1_0102_merged515_123_res);
	hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_res = gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_select(gp_in1_1_buf56_us96, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<64, 128>(result, gp_in1_1_buf56_us96_lp_in1_0102_merged515_125_res);
	hw_uint<32>  gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_res = gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_select(gp_in1_1_buf56_us96, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<96, 128>(result, gp_in1_1_buf56_us96_lp_in1_0102_merged515_127_res);
	return result;
}

// us_gp_in1_1_buf5698_merged512_write
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19
inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_write_bundle_write(hw_uint<128>& us_gp_in1_1_buf5698_merged512_write, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_res = us_gp_in1_1_buf5698_merged512_write.extract<0, 31>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_16_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_res = us_gp_in1_1_buf5698_merged512_write.extract<32, 63>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_17_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_res = us_gp_in1_1_buf5698_merged512_write.extract<64, 95>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_18_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_res = us_gp_in1_1_buf5698_merged512_write.extract<96, 127>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_19_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
}

struct gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_diff87_sm328_0362_228_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 518
	// # of read delays: 516
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517
	fifo<hw_uint<32> , 518> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(517 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 515
	// # of read delays: 513
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514
	fifo<hw_uint<32> , 515> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(514 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 515
	// # of read delays: 513
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514
	fifo<hw_uint<32> , 515> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(514 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1035
	// # of read delays: 9
  // 0, 1, 2, 516, 517, 518, 1032, 1033, 1034
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 513> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 513> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_515() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_516() {
		return f6;
	}

	inline hw_uint<32>  peek_517() {
		return f8;
	}

	inline hw_uint<32>  peek_518() {
		return f10;
	}

	inline hw_uint<32>  peek_1031() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1032() {
		return f12;
	}

	inline hw_uint<32>  peek_1033() {
		return f14;
	}

	inline hw_uint<32>  peek_1034() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 513
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 513 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gp_in1_2_buf64_cache {
  // Reader addrs...
    // { diff87_sm328_0362[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { us_gp_in1_2_buf6490_merged507[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64[1 + us_gp_in1_2_buf6490, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 511 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
    // { us_gp_in1_2_buf6490_merged507[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64[1 + us_gp_in1_2_buf6490, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 511 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // # of banks: 4
  gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_diff87_sm328_0362_228_cache gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_diff87_sm328_0362_228;
  gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_cache gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14;
  gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_cache gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15;
  gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9_cache gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9;
};



inline void gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_write(hw_uint<32> & gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_diff87_sm328_0362_228.push(gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14.push(gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15.push(gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.push(gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157);
}

inline hw_uint<32>  gp_in1_2_buf64_diff87_sm328_0362_228_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_diff87_sm328_0362_228 read pattern: { diff87_sm328_0362[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87_sm328_0362[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 20] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_diff87_sm328_0362_228.peek(/* one reader or all rams */ (510 - lp_in1_285 >= 0) ? (517) : (-511 + lp_in1_285 == 0) ? ((514 - lp_in1_286)) : 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_2();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_1();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_0();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_518();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_517();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_516();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_1034();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_1033();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156 read pattern: { gp_in1_374_merged312_sm326_0358[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_merged_banks_9.peek_1032();
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14 read pattern: { us_gp_in1_2_buf6490_merged507[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64[1 + us_gp_in1_2_buf6490, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 511 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // Read schedule : { us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14.peek(/* one reader or all rams */ ((-1 - us_gp_in1_2_buf6489) % 2 == 0) ? ((514 - us_gp_in1_2_buf6490)) : 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15 read pattern: { us_gp_in1_2_buf6490_merged507[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64[1 + us_gp_in1_2_buf6490, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 511 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // Read schedule : { us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_to_gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15.peek(/* one reader or all rams */ ((-1 - us_gp_in1_2_buf6489) % 2 == 0) ? ((514 - us_gp_in1_2_buf6490)) : 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157;
  return 0;
}

// # of bundles = 4
// diff87_sm328_0362_read
//	gp_in1_2_buf64_diff87_sm328_0362_228
inline hw_uint<32> gp_in1_2_buf64_diff87_sm328_0362_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_diff87_sm328_0362_228

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_diff87_sm328_0362_228_res = gp_in1_2_buf64_diff87_sm328_0362_228_select(gp_in1_2_buf64, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_diff87_sm328_0362_228_res);
	return result;
}

// gp_in1_266_merged309_sm325_0360_write
//	gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157
inline void gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_write_bundle_write(hw_uint<32>& gp_in1_266_merged309_sm325_0360_write, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_res = gp_in1_266_merged309_sm325_0360_write.extract<0, 31>();
	gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_write(gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_157_res, gp_in1_2_buf64, root, gp_in1_265, gp_in1_266, dynamic_address);
}

// gp_in1_374_merged312_sm326_0358_read
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155
//	gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156
inline hw_uint<288> gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155
    // gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156

	hw_uint<288> result;
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<0, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_148_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<32, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_149_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<64, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_150_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<96, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_151_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<128, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_152_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<160, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_153_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<192, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_154_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<224, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_155_res);
	hw_uint<32>  gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156_res = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156_select(gp_in1_2_buf64, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<256, 288>(result, gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_156_res);
	return result;
}

// us_gp_in1_2_buf6490_merged507_read
//	gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14
//	gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15
inline hw_uint<64> gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14
    // gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15

	hw_uint<64> result;
	hw_uint<32>  gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_res = gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_select(gp_in1_2_buf64, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
	set_at<0, 64>(result, gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_14_res);
	hw_uint<32>  gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_res = gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_select(gp_in1_2_buf64, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
	set_at<32, 64>(result, gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_15_res);
	return result;
}

struct gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_114_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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

struct gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_116_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct gp_in1_2_buf64_us88_cache {
  // Reader addrs...
    // { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88[1 + 2lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
    // { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88[2lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
  // # of banks: 2
  gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_114_cache gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_114;
  gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_116_cache gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_116;
};



inline void gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_write(hw_uint<32> & gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_114.push(gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12);
}

inline void gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_write(hw_uint<32> & gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_116.push(gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13);
}

inline hw_uint<32>  gp_in1_2_buf64_us88_lp_in1_194_merged510_114_select(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_lp_in1_194_merged510_114 read pattern: { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88[1 + 2lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
  // Read schedule : { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12 = gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_114.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_us88_lp_in1_194_merged510_116_select(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_lp_in1_194_merged510_116 read pattern: { lp_in1_194_merged510[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88[2lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 511 }
  // Read schedule : { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13 = gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_to_gp_in1_2_buf64_us88_lp_in1_194_merged510_116.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13;
  return 0;
}

// # of bundles = 2
// lp_in1_194_merged510_read
//	gp_in1_2_buf64_us88_lp_in1_194_merged510_114
//	gp_in1_2_buf64_us88_lp_in1_194_merged510_116
inline hw_uint<64> gp_in1_2_buf64_us88_lp_in1_194_merged510_read_bundle_read(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_2_buf64_us88_lp_in1_194_merged510_114
    // gp_in1_2_buf64_us88_lp_in1_194_merged510_116

	hw_uint<64> result;
	hw_uint<32>  gp_in1_2_buf64_us88_lp_in1_194_merged510_114_res = gp_in1_2_buf64_us88_lp_in1_194_merged510_114_select(gp_in1_2_buf64_us88, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 64>(result, gp_in1_2_buf64_us88_lp_in1_194_merged510_114_res);
	hw_uint<32>  gp_in1_2_buf64_us88_lp_in1_194_merged510_116_res = gp_in1_2_buf64_us88_lp_in1_194_merged510_116_select(gp_in1_2_buf64_us88, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<32, 64>(result, gp_in1_2_buf64_us88_lp_in1_194_merged510_116_res);
	return result;
}

// us_gp_in1_2_buf6490_merged507_write
//	gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12
//	gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13
inline void gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_write_bundle_write(hw_uint<64>& us_gp_in1_2_buf6490_merged507_write, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_res = us_gp_in1_2_buf6490_merged507_write.extract<0, 31>();
	gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_write(gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_12_res, gp_in1_2_buf64_us88, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
	hw_uint<32>  gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_res = us_gp_in1_2_buf6490_merged507_write.extract<32, 63>();
	gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_write(gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_13_res, gp_in1_2_buf64_us88, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
}

struct gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_us83_sm327_0356_37_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_3_buf72_cache {
  // Reader addrs...
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
    // { us83_sm327_0356[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // # of banks: 2
  gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_cache gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92;
  gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_us83_sm327_0356_37_cache gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_us83_sm327_0356_37;
};



inline void gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_write(hw_uint<32> & gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92.push(gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147);
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_us83_sm327_0356_37.push(gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147);
}

inline hw_uint<32>  gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 14] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147;
  return 0;
}

inline hw_uint<32>  gp_in1_3_buf72_us83_sm327_0356_37_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us83_sm327_0356_37 read pattern: { us83_sm327_0356[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // Read schedule : { us83_sm327_0356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 17] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_to_gp_in1_3_buf72_us83_sm327_0356_37.peek(/* one reader or all rams */ ((-1 - us_gp_in1_3_buf7281) % 2 == 0 && 509 - us_gp_in1_3_buf7282 >= 0) ? ((255 - floord(2*us_gp_in1_3_buf7282, 4))) : 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147;
  return 0;
}

// # of bundles = 3
// gp_in1_374_merged312_sm326_0358_write
//	gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147
inline void gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_write_bundle_write(hw_uint<32>& gp_in1_374_merged312_sm326_0358_write, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_res = gp_in1_374_merged312_sm326_0358_write.extract<0, 31>();
	gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_write(gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_147_res, gp_in1_3_buf72, root, gp_in1_373, gp_in1_374, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read
//	gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92
inline hw_uint<32> gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_res = gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_select(gp_in1_3_buf72, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_92_res);
	return result;
}

// us83_sm327_0356_read
//	gp_in1_3_buf72_us83_sm327_0356_37
inline hw_uint<32> gp_in1_3_buf72_us83_sm327_0356_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us83_sm327_0356_37

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us83_sm327_0356_37_res = gp_in1_3_buf72_us83_sm327_0356_37_select(gp_in1_3_buf72, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us83_sm327_0356_37_res);
	return result;
}

struct gp_in1_3_buf72_us80_us83_sm327_0356_36_to_gp_in1_3_buf72_us80_diff87_sm328_0362_229_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in1_3_buf72_us80_cache {
  // Reader addrs...
    // { diff87_sm328_0362[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // # of banks: 1
  gp_in1_3_buf72_us80_us83_sm327_0356_36_to_gp_in1_3_buf72_us80_diff87_sm328_0362_229_cache gp_in1_3_buf72_us80_us83_sm327_0356_36_to_gp_in1_3_buf72_us80_diff87_sm328_0362_229;
};



inline void gp_in1_3_buf72_us80_us83_sm327_0356_36_write(hw_uint<32> & gp_in1_3_buf72_us80_us83_sm327_0356_36, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_sm327_0356_36_to_gp_in1_3_buf72_us80_diff87_sm328_0362_229.push(gp_in1_3_buf72_us80_us83_sm327_0356_36);
}

inline hw_uint<32>  gp_in1_3_buf72_us80_diff87_sm328_0362_229_select(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us80_diff87_sm328_0362_229 read pattern: { diff87_sm328_0362[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87_sm328_0362[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 20] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us83_sm327_0356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 17] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_3_buf72_us80_us83_sm327_0356_36 = gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_sm327_0356_36_to_gp_in1_3_buf72_us80_diff87_sm328_0362_229.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_us80_us83_sm327_0356_36;
  return 0;
}

// # of bundles = 2
// diff87_sm328_0362_read
//	gp_in1_3_buf72_us80_diff87_sm328_0362_229
inline hw_uint<32> gp_in1_3_buf72_us80_diff87_sm328_0362_read_bundle_read(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us80_diff87_sm328_0362_229

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us80_diff87_sm328_0362_229_res = gp_in1_3_buf72_us80_diff87_sm328_0362_229_select(gp_in1_3_buf72_us80, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us80_diff87_sm328_0362_229_res);
	return result;
}

// us83_sm327_0356_write
//	gp_in1_3_buf72_us80_us83_sm327_0356_36
inline void gp_in1_3_buf72_us80_us83_sm327_0356_write_bundle_write(hw_uint<32>& us83_sm327_0356_write, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_us80_us83_sm327_0356_36_res = us83_sm327_0356_write.extract<0, 31>();
	gp_in1_3_buf72_us80_us83_sm327_0356_36_write(gp_in1_3_buf72_us80_us83_sm327_0356_36_res, gp_in1_3_buf72_us80, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
}

struct in0_pw_math_in0_oc02_merged486_83_to_in0_lp_in0_054_merged502_140_cache {
	// RAM Box: {[10, 2054], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_pw_math_in0_oc02_merged486_84_to_in0_lp_in0_054_merged502_142_cache {
	// RAM Box: {[9, 2053], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_pw_math_in0_oc02_merged486_85_to_in0_lp_in0_054_merged502_144_cache {
	// RAM Box: {[8, 2052], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_pw_math_in0_oc02_merged486_82_to_in0_lp_in0_054_merged502_146_cache {
	// RAM Box: {[7, 2051], [7, 2054]}
	// Capacity: 522
	// # of read delays: 517
  // 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521
	fifo<hw_uint<32> , 522> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(521 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_pw_math_in0_oc02_merged486_82_merged_banks_3_cache {
	// RAM Box: {[3, 2071], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_pw_math_in0_oc02_merged486_83_merged_banks_6_cache {
	// RAM Box: {[2, 2070], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_pw_math_in0_oc02_merged486_84_merged_banks_3_cache {
	// RAM Box: {[1, 2069], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_pw_math_in0_oc02_merged486_85_merged_banks_6_cache {
	// RAM Box: {[0, 2072], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 6
  // 0, 1, 519, 520, 1038, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 517> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 517> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_519() {
		return f4;
	}

	inline hw_uint<32>  peek_520() {
		return f6;
	}

	inline hw_uint<32>  peek_1037() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1038() {
		return f8;
	}

	inline hw_uint<32>  peek_1039() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_cache {
  // Reader addrs...
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[10 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[9 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[8 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
    // { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[7 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // # of banks: 8
  in0_pw_math_in0_oc02_merged486_83_to_in0_lp_in0_054_merged502_140_cache in0_pw_math_in0_oc02_merged486_83_to_in0_lp_in0_054_merged502_140;
  in0_pw_math_in0_oc02_merged486_84_to_in0_lp_in0_054_merged502_142_cache in0_pw_math_in0_oc02_merged486_84_to_in0_lp_in0_054_merged502_142;
  in0_pw_math_in0_oc02_merged486_85_to_in0_lp_in0_054_merged502_144_cache in0_pw_math_in0_oc02_merged486_85_to_in0_lp_in0_054_merged502_144;
  in0_pw_math_in0_oc02_merged486_82_to_in0_lp_in0_054_merged502_146_cache in0_pw_math_in0_oc02_merged486_82_to_in0_lp_in0_054_merged502_146;
  in0_pw_math_in0_oc02_merged486_82_merged_banks_3_cache in0_pw_math_in0_oc02_merged486_82_merged_banks_3;
  in0_pw_math_in0_oc02_merged486_83_merged_banks_6_cache in0_pw_math_in0_oc02_merged486_83_merged_banks_6;
  in0_pw_math_in0_oc02_merged486_84_merged_banks_3_cache in0_pw_math_in0_oc02_merged486_84_merged_banks_3;
  in0_pw_math_in0_oc02_merged486_85_merged_banks_6_cache in0_pw_math_in0_oc02_merged486_85_merged_banks_6;
};



inline void in0_pw_math_in0_oc02_merged486_82_write(hw_uint<32> & in0_pw_math_in0_oc02_merged486_82, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged486_82_to_in0_lp_in0_054_merged502_146.push(in0_pw_math_in0_oc02_merged486_82);
  in0.in0_pw_math_in0_oc02_merged486_82_merged_banks_3.push(in0_pw_math_in0_oc02_merged486_82);
}

inline void in0_pw_math_in0_oc02_merged486_83_write(hw_uint<32> & in0_pw_math_in0_oc02_merged486_83, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged486_83_to_in0_lp_in0_054_merged502_140.push(in0_pw_math_in0_oc02_merged486_83);
  in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.push(in0_pw_math_in0_oc02_merged486_83);
}

inline void in0_pw_math_in0_oc02_merged486_84_write(hw_uint<32> & in0_pw_math_in0_oc02_merged486_84, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged486_84_to_in0_lp_in0_054_merged502_142.push(in0_pw_math_in0_oc02_merged486_84);
  in0.in0_pw_math_in0_oc02_merged486_84_merged_banks_3.push(in0_pw_math_in0_oc02_merged486_84);
}

inline void in0_pw_math_in0_oc02_merged486_85_write(hw_uint<32> & in0_pw_math_in0_oc02_merged486_85, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged486_85_to_in0_lp_in0_054_merged502_144.push(in0_pw_math_in0_oc02_merged486_85);
  in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.push(in0_pw_math_in0_oc02_merged486_85);
}

inline hw_uint<32>  in0_gp_in0_110_merged492_209_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_209 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_1();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_210_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_210 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_82 = in0.in0_pw_math_in0_oc02_merged486_82_merged_banks_3.peek_1();
  return value_in0_pw_math_in0_oc02_merged486_82;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_211_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_211 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_0();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_212_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_212 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_520();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_213_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_213 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_82 = in0.in0_pw_math_in0_oc02_merged486_82_merged_banks_3.peek_520();
  return value_in0_pw_math_in0_oc02_merged486_82;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_214_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_214 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_519();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_215_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_215 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_1039();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_216_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_216 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[3 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_82 = in0.in0_pw_math_in0_oc02_merged486_82_merged_banks_3.peek_1039();
  return value_in0_pw_math_in0_oc02_merged486_82;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_217_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_217 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_1038();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_218_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_218 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_1();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_219_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_219 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_84 = in0.in0_pw_math_in0_oc02_merged486_84_merged_banks_3.peek_1();
  return value_in0_pw_math_in0_oc02_merged486_84;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_220_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_220 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_1();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_221_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_221 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_520();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_222_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_222 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_84 = in0.in0_pw_math_in0_oc02_merged486_84_merged_banks_3.peek_520();
  return value_in0_pw_math_in0_oc02_merged486_84;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_223_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_223 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_520();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_224_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_224 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_merged_banks_6.peek_1039();
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_225_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_225 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[1 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_84 = in0.in0_pw_math_in0_oc02_merged486_84_merged_banks_3.peek_1039();
  return value_in0_pw_math_in0_oc02_merged486_84;
  return 0;
}

inline hw_uint<32>  in0_gp_in0_110_merged492_226_select(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_gp_in0_110_merged492_226 read pattern: { gp_in0_110_merged492[root = 0, gp_in0_19, gp_in0_110] -> in0[2 + 4gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 517 }
  // Read schedule : { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_merged_banks_6.peek_1039();
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_lp_in0_054_merged502_140_select(in0_cache& in0, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_lp_in0_054_merged502_140 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[10 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_83 = in0.in0_pw_math_in0_oc02_merged486_83_to_in0_lp_in0_054_merged502_140.peek(/* one reader or all rams */ (2046 - lp_in0_053 >= 0) ? (520) : (-2047 + lp_in0_053 == 0) ? ((516 - lp_in0_054)) : 0);
  return value_in0_pw_math_in0_oc02_merged486_83;
  return 0;
}

inline hw_uint<32>  in0_lp_in0_054_merged502_142_select(in0_cache& in0, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_lp_in0_054_merged502_142 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[9 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_84 = in0.in0_pw_math_in0_oc02_merged486_84_to_in0_lp_in0_054_merged502_142.peek(/* one reader or all rams */ (2046 - lp_in0_053 >= 0) ? (520) : (-2047 + lp_in0_053 == 0) ? ((516 - lp_in0_054)) : 0);
  return value_in0_pw_math_in0_oc02_merged486_84;
  return 0;
}

inline hw_uint<32>  in0_lp_in0_054_merged502_144_select(in0_cache& in0, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_lp_in0_054_merged502_144 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[8 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_85 = in0.in0_pw_math_in0_oc02_merged486_85_to_in0_lp_in0_054_merged502_144.peek(/* one reader or all rams */ (2046 - lp_in0_053 >= 0) ? (520) : (-2047 + lp_in0_053 == 0) ? ((516 - lp_in0_054)) : 0);
  return value_in0_pw_math_in0_oc02_merged486_85;
  return 0;
}

inline hw_uint<32>  in0_lp_in0_054_merged502_146_select(in0_cache& in0, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_lp_in0_054_merged502_146 read pattern: { lp_in0_054_merged502[root = 0, lp_in0_053, lp_in0_054] -> in0[7 + 4lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 511 }
  // Read schedule : { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in0_pw_math_in0_oc02_merged486_82 = in0.in0_pw_math_in0_oc02_merged486_82_to_in0_lp_in0_054_merged502_146.peek(/* one reader or all rams */ (2046 - lp_in0_053 >= 0) ? (521) : (-2047 + lp_in0_053 == 0) ? ((517 - lp_in0_054)) : 0);
  return value_in0_pw_math_in0_oc02_merged486_82;
  return 0;
}

// # of bundles = 3
// gp_in0_110_merged492_read
//	in0_gp_in0_110_merged492_209
//	in0_gp_in0_110_merged492_210
//	in0_gp_in0_110_merged492_211
//	in0_gp_in0_110_merged492_212
//	in0_gp_in0_110_merged492_213
//	in0_gp_in0_110_merged492_214
//	in0_gp_in0_110_merged492_215
//	in0_gp_in0_110_merged492_216
//	in0_gp_in0_110_merged492_217
//	in0_gp_in0_110_merged492_218
//	in0_gp_in0_110_merged492_219
//	in0_gp_in0_110_merged492_220
//	in0_gp_in0_110_merged492_221
//	in0_gp_in0_110_merged492_222
//	in0_gp_in0_110_merged492_223
//	in0_gp_in0_110_merged492_224
//	in0_gp_in0_110_merged492_225
//	in0_gp_in0_110_merged492_226
inline hw_uint<576> in0_gp_in0_110_merged492_read_bundle_read(in0_cache& in0, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  // # of ports in bundle: 18
    // in0_gp_in0_110_merged492_209
    // in0_gp_in0_110_merged492_210
    // in0_gp_in0_110_merged492_211
    // in0_gp_in0_110_merged492_212
    // in0_gp_in0_110_merged492_213
    // in0_gp_in0_110_merged492_214
    // in0_gp_in0_110_merged492_215
    // in0_gp_in0_110_merged492_216
    // in0_gp_in0_110_merged492_217
    // in0_gp_in0_110_merged492_218
    // in0_gp_in0_110_merged492_219
    // in0_gp_in0_110_merged492_220
    // in0_gp_in0_110_merged492_221
    // in0_gp_in0_110_merged492_222
    // in0_gp_in0_110_merged492_223
    // in0_gp_in0_110_merged492_224
    // in0_gp_in0_110_merged492_225
    // in0_gp_in0_110_merged492_226

	hw_uint<576> result;
	hw_uint<32>  in0_gp_in0_110_merged492_209_res = in0_gp_in0_110_merged492_209_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<0, 576>(result, in0_gp_in0_110_merged492_209_res);
	hw_uint<32>  in0_gp_in0_110_merged492_210_res = in0_gp_in0_110_merged492_210_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<32, 576>(result, in0_gp_in0_110_merged492_210_res);
	hw_uint<32>  in0_gp_in0_110_merged492_211_res = in0_gp_in0_110_merged492_211_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<64, 576>(result, in0_gp_in0_110_merged492_211_res);
	hw_uint<32>  in0_gp_in0_110_merged492_212_res = in0_gp_in0_110_merged492_212_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<96, 576>(result, in0_gp_in0_110_merged492_212_res);
	hw_uint<32>  in0_gp_in0_110_merged492_213_res = in0_gp_in0_110_merged492_213_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<128, 576>(result, in0_gp_in0_110_merged492_213_res);
	hw_uint<32>  in0_gp_in0_110_merged492_214_res = in0_gp_in0_110_merged492_214_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<160, 576>(result, in0_gp_in0_110_merged492_214_res);
	hw_uint<32>  in0_gp_in0_110_merged492_215_res = in0_gp_in0_110_merged492_215_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<192, 576>(result, in0_gp_in0_110_merged492_215_res);
	hw_uint<32>  in0_gp_in0_110_merged492_216_res = in0_gp_in0_110_merged492_216_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<224, 576>(result, in0_gp_in0_110_merged492_216_res);
	hw_uint<32>  in0_gp_in0_110_merged492_217_res = in0_gp_in0_110_merged492_217_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<256, 576>(result, in0_gp_in0_110_merged492_217_res);
	hw_uint<32>  in0_gp_in0_110_merged492_218_res = in0_gp_in0_110_merged492_218_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<288, 576>(result, in0_gp_in0_110_merged492_218_res);
	hw_uint<32>  in0_gp_in0_110_merged492_219_res = in0_gp_in0_110_merged492_219_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<320, 576>(result, in0_gp_in0_110_merged492_219_res);
	hw_uint<32>  in0_gp_in0_110_merged492_220_res = in0_gp_in0_110_merged492_220_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<352, 576>(result, in0_gp_in0_110_merged492_220_res);
	hw_uint<32>  in0_gp_in0_110_merged492_221_res = in0_gp_in0_110_merged492_221_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<384, 576>(result, in0_gp_in0_110_merged492_221_res);
	hw_uint<32>  in0_gp_in0_110_merged492_222_res = in0_gp_in0_110_merged492_222_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<416, 576>(result, in0_gp_in0_110_merged492_222_res);
	hw_uint<32>  in0_gp_in0_110_merged492_223_res = in0_gp_in0_110_merged492_223_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<448, 576>(result, in0_gp_in0_110_merged492_223_res);
	hw_uint<32>  in0_gp_in0_110_merged492_224_res = in0_gp_in0_110_merged492_224_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<480, 576>(result, in0_gp_in0_110_merged492_224_res);
	hw_uint<32>  in0_gp_in0_110_merged492_225_res = in0_gp_in0_110_merged492_225_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<512, 576>(result, in0_gp_in0_110_merged492_225_res);
	hw_uint<32>  in0_gp_in0_110_merged492_226_res = in0_gp_in0_110_merged492_226_select(in0, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<544, 576>(result, in0_gp_in0_110_merged492_226_res);
	return result;
}

// lp_in0_054_merged502_read
//	in0_lp_in0_054_merged502_140
//	in0_lp_in0_054_merged502_142
//	in0_lp_in0_054_merged502_144
//	in0_lp_in0_054_merged502_146
inline hw_uint<128> in0_lp_in0_054_merged502_read_bundle_read(in0_cache& in0, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 4
    // in0_lp_in0_054_merged502_140
    // in0_lp_in0_054_merged502_142
    // in0_lp_in0_054_merged502_144
    // in0_lp_in0_054_merged502_146

	hw_uint<128> result;
	hw_uint<32>  in0_lp_in0_054_merged502_140_res = in0_lp_in0_054_merged502_140_select(in0, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 128>(result, in0_lp_in0_054_merged502_140_res);
	hw_uint<32>  in0_lp_in0_054_merged502_142_res = in0_lp_in0_054_merged502_142_select(in0, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<32, 128>(result, in0_lp_in0_054_merged502_142_res);
	hw_uint<32>  in0_lp_in0_054_merged502_144_res = in0_lp_in0_054_merged502_144_select(in0, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<64, 128>(result, in0_lp_in0_054_merged502_144_res);
	hw_uint<32>  in0_lp_in0_054_merged502_146_res = in0_lp_in0_054_merged502_146_select(in0, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<96, 128>(result, in0_lp_in0_054_merged502_146_res);
	return result;
}

// pw_math_in0_oc02_merged486_write
//	in0_pw_math_in0_oc02_merged486_82
//	in0_pw_math_in0_oc02_merged486_83
//	in0_pw_math_in0_oc02_merged486_84
//	in0_pw_math_in0_oc02_merged486_85
inline void in0_pw_math_in0_oc02_merged486_write_bundle_write(hw_uint<128>& pw_math_in0_oc02_merged486_write, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
	hw_uint<32>  in0_pw_math_in0_oc02_merged486_82_res = pw_math_in0_oc02_merged486_write.extract<0, 31>();
	in0_pw_math_in0_oc02_merged486_82_write(in0_pw_math_in0_oc02_merged486_82_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
	hw_uint<32>  in0_pw_math_in0_oc02_merged486_83_res = pw_math_in0_oc02_merged486_write.extract<32, 63>();
	in0_pw_math_in0_oc02_merged486_83_write(in0_pw_math_in0_oc02_merged486_83_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
	hw_uint<32>  in0_pw_math_in0_oc02_merged486_84_res = pw_math_in0_oc02_merged486_write.extract<64, 95>();
	in0_pw_math_in0_oc02_merged486_84_write(in0_pw_math_in0_oc02_merged486_84_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
	hw_uint<32>  in0_pw_math_in0_oc02_merged486_85_res = pw_math_in0_oc02_merged486_write.extract<96, 127>();
	in0_pw_math_in0_oc02_merged486_85_write(in0_pw_math_in0_oc02_merged486_85_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
}

struct in1_pw_math_in1_oc46_merged489_75_to_in1_lp_in1_0102_merged515_122_cache {
	// RAM Box: {[10, 2054], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_pw_math_in1_oc46_merged489_76_to_in1_lp_in1_0102_merged515_124_cache {
	// RAM Box: {[9, 2053], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_pw_math_in1_oc46_merged489_77_to_in1_lp_in1_0102_merged515_126_cache {
	// RAM Box: {[8, 2052], [7, 2054]}
	// Capacity: 521
	// # of read delays: 517
  // 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520
	fifo<hw_uint<32> , 521> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(520 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_pw_math_in1_oc46_merged489_74_to_in1_lp_in1_0102_merged515_128_cache {
	// RAM Box: {[7, 2051], [7, 2054]}
	// Capacity: 522
	// # of read delays: 517
  // 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521
	fifo<hw_uint<32> , 522> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(521 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_pw_math_in1_oc46_merged489_74_merged_banks_3_cache {
	// RAM Box: {[3, 2071], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_pw_math_in1_oc46_merged489_75_merged_banks_6_cache {
	// RAM Box: {[2, 2070], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_pw_math_in1_oc46_merged489_76_merged_banks_3_cache {
	// RAM Box: {[1, 2069], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 4
  // 0, 1, 520, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 518> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_519() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_520() {
		return f4;
	}

	inline hw_uint<32>  peek_1038() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1039() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_pw_math_in1_oc46_merged489_77_merged_banks_6_cache {
	// RAM Box: {[0, 2072], [0, 2054]}
	// Capacity: 1040
	// # of read delays: 6
  // 0, 1, 519, 520, 1038, 1039
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 517> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 517> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_519() {
		return f4;
	}

	inline hw_uint<32>  peek_520() {
		return f6;
	}

	inline hw_uint<32>  peek_1037() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_1038() {
		return f8;
	}

	inline hw_uint<32>  peek_1039() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 517
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 517 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_cache {
  // Reader addrs...
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[10 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[9 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[8 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
    // { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[7 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // # of banks: 8
  in1_pw_math_in1_oc46_merged489_75_to_in1_lp_in1_0102_merged515_122_cache in1_pw_math_in1_oc46_merged489_75_to_in1_lp_in1_0102_merged515_122;
  in1_pw_math_in1_oc46_merged489_76_to_in1_lp_in1_0102_merged515_124_cache in1_pw_math_in1_oc46_merged489_76_to_in1_lp_in1_0102_merged515_124;
  in1_pw_math_in1_oc46_merged489_77_to_in1_lp_in1_0102_merged515_126_cache in1_pw_math_in1_oc46_merged489_77_to_in1_lp_in1_0102_merged515_126;
  in1_pw_math_in1_oc46_merged489_74_to_in1_lp_in1_0102_merged515_128_cache in1_pw_math_in1_oc46_merged489_74_to_in1_lp_in1_0102_merged515_128;
  in1_pw_math_in1_oc46_merged489_74_merged_banks_3_cache in1_pw_math_in1_oc46_merged489_74_merged_banks_3;
  in1_pw_math_in1_oc46_merged489_75_merged_banks_6_cache in1_pw_math_in1_oc46_merged489_75_merged_banks_6;
  in1_pw_math_in1_oc46_merged489_76_merged_banks_3_cache in1_pw_math_in1_oc46_merged489_76_merged_banks_3;
  in1_pw_math_in1_oc46_merged489_77_merged_banks_6_cache in1_pw_math_in1_oc46_merged489_77_merged_banks_6;
};



inline void in1_pw_math_in1_oc46_merged489_74_write(hw_uint<32> & in1_pw_math_in1_oc46_merged489_74, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged489_74_to_in1_lp_in1_0102_merged515_128.push(in1_pw_math_in1_oc46_merged489_74);
  in1.in1_pw_math_in1_oc46_merged489_74_merged_banks_3.push(in1_pw_math_in1_oc46_merged489_74);
}

inline void in1_pw_math_in1_oc46_merged489_75_write(hw_uint<32> & in1_pw_math_in1_oc46_merged489_75, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged489_75_to_in1_lp_in1_0102_merged515_122.push(in1_pw_math_in1_oc46_merged489_75);
  in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.push(in1_pw_math_in1_oc46_merged489_75);
}

inline void in1_pw_math_in1_oc46_merged489_76_write(hw_uint<32> & in1_pw_math_in1_oc46_merged489_76, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged489_76_to_in1_lp_in1_0102_merged515_124.push(in1_pw_math_in1_oc46_merged489_76);
  in1.in1_pw_math_in1_oc46_merged489_76_merged_banks_3.push(in1_pw_math_in1_oc46_merged489_76);
}

inline void in1_pw_math_in1_oc46_merged489_77_write(hw_uint<32> & in1_pw_math_in1_oc46_merged489_77, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged489_77_to_in1_lp_in1_0102_merged515_126.push(in1_pw_math_in1_oc46_merged489_77);
  in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.push(in1_pw_math_in1_oc46_merged489_77);
}

inline hw_uint<32>  in1_gp_in1_158_merged505_169_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_169 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_1();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_170_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_170 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_74 = in1.in1_pw_math_in1_oc46_merged489_74_merged_banks_3.peek_1();
  return value_in1_pw_math_in1_oc46_merged489_74;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_171_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_171 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_0();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_172_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_172 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_520();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_173_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_173 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_74 = in1.in1_pw_math_in1_oc46_merged489_74_merged_banks_3.peek_520();
  return value_in1_pw_math_in1_oc46_merged489_74;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_174_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_174 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_519();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_175_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_175 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_1039();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_176_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_176 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[3 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_74 = in1.in1_pw_math_in1_oc46_merged489_74_merged_banks_3.peek_1039();
  return value_in1_pw_math_in1_oc46_merged489_74;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_177_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_177 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_1038();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_178_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_178 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_1();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_179_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_179 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_76 = in1.in1_pw_math_in1_oc46_merged489_76_merged_banks_3.peek_1();
  return value_in1_pw_math_in1_oc46_merged489_76;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_180_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_180 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_1();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_181_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_181 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_520();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_182_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_182 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_76 = in1.in1_pw_math_in1_oc46_merged489_76_merged_banks_3.peek_520();
  return value_in1_pw_math_in1_oc46_merged489_76;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_183_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_183 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_520();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_184_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_184 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_merged_banks_6.peek_1039();
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_185_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_185 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[1 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_76 = in1.in1_pw_math_in1_oc46_merged489_76_merged_banks_3.peek_1039();
  return value_in1_pw_math_in1_oc46_merged489_76;
  return 0;
}

inline hw_uint<32>  in1_gp_in1_158_merged505_186_select(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_gp_in1_158_merged505_186 read pattern: { gp_in1_158_merged505[root = 0, gp_in1_157, gp_in1_158] -> in1[2 + 4gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 517 }
  // Read schedule : { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_merged_banks_6.peek_1039();
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_lp_in1_0102_merged515_122_select(in1_cache& in1, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_lp_in1_0102_merged515_122 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[10 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_75 = in1.in1_pw_math_in1_oc46_merged489_75_to_in1_lp_in1_0102_merged515_122.peek(/* one reader or all rams */ (2046 - lp_in1_0101 >= 0) ? (520) : (-2047 + lp_in1_0101 == 0) ? ((516 - lp_in1_0102)) : 0);
  return value_in1_pw_math_in1_oc46_merged489_75;
  return 0;
}

inline hw_uint<32>  in1_lp_in1_0102_merged515_124_select(in1_cache& in1, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_lp_in1_0102_merged515_124 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[9 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_76 = in1.in1_pw_math_in1_oc46_merged489_76_to_in1_lp_in1_0102_merged515_124.peek(/* one reader or all rams */ (2046 - lp_in1_0101 >= 0) ? (520) : (-2047 + lp_in1_0101 == 0) ? ((516 - lp_in1_0102)) : 0);
  return value_in1_pw_math_in1_oc46_merged489_76;
  return 0;
}

inline hw_uint<32>  in1_lp_in1_0102_merged515_126_select(in1_cache& in1, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_lp_in1_0102_merged515_126 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[8 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_77 = in1.in1_pw_math_in1_oc46_merged489_77_to_in1_lp_in1_0102_merged515_126.peek(/* one reader or all rams */ (2046 - lp_in1_0101 >= 0) ? (520) : (-2047 + lp_in1_0101 == 0) ? ((516 - lp_in1_0102)) : 0);
  return value_in1_pw_math_in1_oc46_merged489_77;
  return 0;
}

inline hw_uint<32>  in1_lp_in1_0102_merged515_128_select(in1_cache& in1, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_lp_in1_0102_merged515_128 read pattern: { lp_in1_0102_merged515[root = 0, lp_in1_0101, lp_in1_0102] -> in1[7 + 4lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 511 }
  // Read schedule : { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
  auto value_in1_pw_math_in1_oc46_merged489_74 = in1.in1_pw_math_in1_oc46_merged489_74_to_in1_lp_in1_0102_merged515_128.peek(/* one reader or all rams */ (2046 - lp_in1_0101 >= 0) ? (521) : (-2047 + lp_in1_0101 == 0) ? ((517 - lp_in1_0102)) : 0);
  return value_in1_pw_math_in1_oc46_merged489_74;
  return 0;
}

// # of bundles = 3
// gp_in1_158_merged505_read
//	in1_gp_in1_158_merged505_169
//	in1_gp_in1_158_merged505_170
//	in1_gp_in1_158_merged505_171
//	in1_gp_in1_158_merged505_172
//	in1_gp_in1_158_merged505_173
//	in1_gp_in1_158_merged505_174
//	in1_gp_in1_158_merged505_175
//	in1_gp_in1_158_merged505_176
//	in1_gp_in1_158_merged505_177
//	in1_gp_in1_158_merged505_178
//	in1_gp_in1_158_merged505_179
//	in1_gp_in1_158_merged505_180
//	in1_gp_in1_158_merged505_181
//	in1_gp_in1_158_merged505_182
//	in1_gp_in1_158_merged505_183
//	in1_gp_in1_158_merged505_184
//	in1_gp_in1_158_merged505_185
//	in1_gp_in1_158_merged505_186
inline hw_uint<576> in1_gp_in1_158_merged505_read_bundle_read(in1_cache& in1, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  // # of ports in bundle: 18
    // in1_gp_in1_158_merged505_169
    // in1_gp_in1_158_merged505_170
    // in1_gp_in1_158_merged505_171
    // in1_gp_in1_158_merged505_172
    // in1_gp_in1_158_merged505_173
    // in1_gp_in1_158_merged505_174
    // in1_gp_in1_158_merged505_175
    // in1_gp_in1_158_merged505_176
    // in1_gp_in1_158_merged505_177
    // in1_gp_in1_158_merged505_178
    // in1_gp_in1_158_merged505_179
    // in1_gp_in1_158_merged505_180
    // in1_gp_in1_158_merged505_181
    // in1_gp_in1_158_merged505_182
    // in1_gp_in1_158_merged505_183
    // in1_gp_in1_158_merged505_184
    // in1_gp_in1_158_merged505_185
    // in1_gp_in1_158_merged505_186

	hw_uint<576> result;
	hw_uint<32>  in1_gp_in1_158_merged505_169_res = in1_gp_in1_158_merged505_169_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<0, 576>(result, in1_gp_in1_158_merged505_169_res);
	hw_uint<32>  in1_gp_in1_158_merged505_170_res = in1_gp_in1_158_merged505_170_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<32, 576>(result, in1_gp_in1_158_merged505_170_res);
	hw_uint<32>  in1_gp_in1_158_merged505_171_res = in1_gp_in1_158_merged505_171_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<64, 576>(result, in1_gp_in1_158_merged505_171_res);
	hw_uint<32>  in1_gp_in1_158_merged505_172_res = in1_gp_in1_158_merged505_172_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<96, 576>(result, in1_gp_in1_158_merged505_172_res);
	hw_uint<32>  in1_gp_in1_158_merged505_173_res = in1_gp_in1_158_merged505_173_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<128, 576>(result, in1_gp_in1_158_merged505_173_res);
	hw_uint<32>  in1_gp_in1_158_merged505_174_res = in1_gp_in1_158_merged505_174_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<160, 576>(result, in1_gp_in1_158_merged505_174_res);
	hw_uint<32>  in1_gp_in1_158_merged505_175_res = in1_gp_in1_158_merged505_175_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<192, 576>(result, in1_gp_in1_158_merged505_175_res);
	hw_uint<32>  in1_gp_in1_158_merged505_176_res = in1_gp_in1_158_merged505_176_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<224, 576>(result, in1_gp_in1_158_merged505_176_res);
	hw_uint<32>  in1_gp_in1_158_merged505_177_res = in1_gp_in1_158_merged505_177_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<256, 576>(result, in1_gp_in1_158_merged505_177_res);
	hw_uint<32>  in1_gp_in1_158_merged505_178_res = in1_gp_in1_158_merged505_178_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<288, 576>(result, in1_gp_in1_158_merged505_178_res);
	hw_uint<32>  in1_gp_in1_158_merged505_179_res = in1_gp_in1_158_merged505_179_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<320, 576>(result, in1_gp_in1_158_merged505_179_res);
	hw_uint<32>  in1_gp_in1_158_merged505_180_res = in1_gp_in1_158_merged505_180_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<352, 576>(result, in1_gp_in1_158_merged505_180_res);
	hw_uint<32>  in1_gp_in1_158_merged505_181_res = in1_gp_in1_158_merged505_181_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<384, 576>(result, in1_gp_in1_158_merged505_181_res);
	hw_uint<32>  in1_gp_in1_158_merged505_182_res = in1_gp_in1_158_merged505_182_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<416, 576>(result, in1_gp_in1_158_merged505_182_res);
	hw_uint<32>  in1_gp_in1_158_merged505_183_res = in1_gp_in1_158_merged505_183_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<448, 576>(result, in1_gp_in1_158_merged505_183_res);
	hw_uint<32>  in1_gp_in1_158_merged505_184_res = in1_gp_in1_158_merged505_184_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<480, 576>(result, in1_gp_in1_158_merged505_184_res);
	hw_uint<32>  in1_gp_in1_158_merged505_185_res = in1_gp_in1_158_merged505_185_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<512, 576>(result, in1_gp_in1_158_merged505_185_res);
	hw_uint<32>  in1_gp_in1_158_merged505_186_res = in1_gp_in1_158_merged505_186_select(in1, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<544, 576>(result, in1_gp_in1_158_merged505_186_res);
	return result;
}

// lp_in1_0102_merged515_read
//	in1_lp_in1_0102_merged515_122
//	in1_lp_in1_0102_merged515_124
//	in1_lp_in1_0102_merged515_126
//	in1_lp_in1_0102_merged515_128
inline hw_uint<128> in1_lp_in1_0102_merged515_read_bundle_read(in1_cache& in1, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 4
    // in1_lp_in1_0102_merged515_122
    // in1_lp_in1_0102_merged515_124
    // in1_lp_in1_0102_merged515_126
    // in1_lp_in1_0102_merged515_128

	hw_uint<128> result;
	hw_uint<32>  in1_lp_in1_0102_merged515_122_res = in1_lp_in1_0102_merged515_122_select(in1, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 128>(result, in1_lp_in1_0102_merged515_122_res);
	hw_uint<32>  in1_lp_in1_0102_merged515_124_res = in1_lp_in1_0102_merged515_124_select(in1, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<32, 128>(result, in1_lp_in1_0102_merged515_124_res);
	hw_uint<32>  in1_lp_in1_0102_merged515_126_res = in1_lp_in1_0102_merged515_126_select(in1, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<64, 128>(result, in1_lp_in1_0102_merged515_126_res);
	hw_uint<32>  in1_lp_in1_0102_merged515_128_res = in1_lp_in1_0102_merged515_128_select(in1, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<96, 128>(result, in1_lp_in1_0102_merged515_128_res);
	return result;
}

// pw_math_in1_oc46_merged489_write
//	in1_pw_math_in1_oc46_merged489_74
//	in1_pw_math_in1_oc46_merged489_75
//	in1_pw_math_in1_oc46_merged489_76
//	in1_pw_math_in1_oc46_merged489_77
inline void in1_pw_math_in1_oc46_merged489_write_bundle_write(hw_uint<128>& pw_math_in1_oc46_merged489_write, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
	hw_uint<32>  in1_pw_math_in1_oc46_merged489_74_res = pw_math_in1_oc46_merged489_write.extract<0, 31>();
	in1_pw_math_in1_oc46_merged489_74_write(in1_pw_math_in1_oc46_merged489_74_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
	hw_uint<32>  in1_pw_math_in1_oc46_merged489_75_res = pw_math_in1_oc46_merged489_write.extract<32, 63>();
	in1_pw_math_in1_oc46_merged489_75_write(in1_pw_math_in1_oc46_merged489_75_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
	hw_uint<32>  in1_pw_math_in1_oc46_merged489_76_res = pw_math_in1_oc46_merged489_write.extract<64, 95>();
	in1_pw_math_in1_oc46_merged489_76_write(in1_pw_math_in1_oc46_merged489_76_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
	hw_uint<32>  in1_pw_math_in1_oc46_merged489_77_res = pw_math_in1_oc46_merged489_write.extract<96, 127>();
	in1_pw_math_in1_oc46_merged489_77_write(in1_pw_math_in1_oc46_merged489_77_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
}

struct lp_in0_0_buf52_lp_in0_054_merged502_135_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct lp_in0_0_buf52_lp_in0_054_merged502_136_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct lp_in0_0_buf52_lp_in0_054_merged502_137_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct lp_in0_0_buf52_lp_in0_054_merged502_138_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct lp_in0_0_buf52_cache {
  // Reader addrs...
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[3 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[2 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[1 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // # of banks: 4
  lp_in0_0_buf52_lp_in0_054_merged502_135_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_cache lp_in0_0_buf52_lp_in0_054_merged502_135_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66;
  lp_in0_0_buf52_lp_in0_054_merged502_136_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_cache lp_in0_0_buf52_lp_in0_054_merged502_136_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68;
  lp_in0_0_buf52_lp_in0_054_merged502_137_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_cache lp_in0_0_buf52_lp_in0_054_merged502_137_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70;
  lp_in0_0_buf52_lp_in0_054_merged502_138_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_cache lp_in0_0_buf52_lp_in0_054_merged502_138_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72;
};



inline void lp_in0_0_buf52_lp_in0_054_merged502_135_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged502_135, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_135_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66.push(lp_in0_0_buf52_lp_in0_054_merged502_135);
}

inline void lp_in0_0_buf52_lp_in0_054_merged502_136_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged502_136, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_136_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68.push(lp_in0_0_buf52_lp_in0_054_merged502_136);
}

inline void lp_in0_0_buf52_lp_in0_054_merged502_137_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged502_137, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_137_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70.push(lp_in0_0_buf52_lp_in0_054_merged502_137);
}

inline void lp_in0_0_buf52_lp_in0_054_merged502_138_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged502_138, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_138_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72.push(lp_in0_0_buf52_lp_in0_054_merged502_138);
}

inline hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[3 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged502_135 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_135_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged502_135;
  return 0;
}

inline hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[2 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged502_136 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_136_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged502_136;
  return 0;
}

inline hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[1 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged502_137 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_137_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged502_137;
  return 0;
}

inline hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52[4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged502_138 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged502_138_to_lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged502_138;
  return 0;
}

// # of bundles = 2
// lp_in0_054_merged502_write
//	lp_in0_0_buf52_lp_in0_054_merged502_135
//	lp_in0_0_buf52_lp_in0_054_merged502_136
//	lp_in0_0_buf52_lp_in0_054_merged502_137
//	lp_in0_0_buf52_lp_in0_054_merged502_138
inline void lp_in0_0_buf52_lp_in0_054_merged502_write_bundle_write(hw_uint<128>& lp_in0_054_merged502_write, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged502_135_res = lp_in0_054_merged502_write.extract<0, 31>();
	lp_in0_0_buf52_lp_in0_054_merged502_135_write(lp_in0_0_buf52_lp_in0_054_merged502_135_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged502_136_res = lp_in0_054_merged502_write.extract<32, 63>();
	lp_in0_0_buf52_lp_in0_054_merged502_136_write(lp_in0_0_buf52_lp_in0_054_merged502_136_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged502_137_res = lp_in0_054_merged502_write.extract<64, 95>();
	lp_in0_0_buf52_lp_in0_054_merged502_137_write(lp_in0_0_buf52_lp_in0_054_merged502_137_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged502_138_res = lp_in0_054_merged502_write.extract<96, 127>();
	lp_in0_0_buf52_lp_in0_054_merged502_138_write(lp_in0_0_buf52_lp_in0_054_merged502_138_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read
//	lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66
//	lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68
//	lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70
//	lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72
inline hw_uint<128> lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read_bundle_read(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 4
    // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66
    // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68
    // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70
    // lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72

	hw_uint<128> result;
	hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_res = lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_select(lp_in0_0_buf52, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 128>(result, lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_66_res);
	hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_res = lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_select(lp_in0_0_buf52, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<32, 128>(result, lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_68_res);
	hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_res = lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_select(lp_in0_0_buf52, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<64, 128>(result, lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_70_res);
	hw_uint<32>  lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_res = lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_select(lp_in0_0_buf52, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<96, 128>(result, lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_72_res);
	return result;
}

struct lp_in0_1_buf44_lp_in0_146_merged497_129_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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

struct lp_in0_1_buf44_lp_in0_146_merged497_130_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct lp_in0_1_buf44_cache {
  // Reader addrs...
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44[1 + 2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44[2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // # of banks: 2
  lp_in0_1_buf44_lp_in0_146_merged497_129_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_cache lp_in0_1_buf44_lp_in0_146_merged497_129_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58;
  lp_in0_1_buf44_lp_in0_146_merged497_130_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_cache lp_in0_1_buf44_lp_in0_146_merged497_130_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60;
};



inline void lp_in0_1_buf44_lp_in0_146_merged497_129_write(hw_uint<32> & lp_in0_1_buf44_lp_in0_146_merged497_129, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  lp_in0_1_buf44.lp_in0_1_buf44_lp_in0_146_merged497_129_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58.push(lp_in0_1_buf44_lp_in0_146_merged497_129);
}

inline void lp_in0_1_buf44_lp_in0_146_merged497_130_write(hw_uint<32> & lp_in0_1_buf44_lp_in0_146_merged497_130, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  lp_in0_1_buf44.lp_in0_1_buf44_lp_in0_146_merged497_130_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60.push(lp_in0_1_buf44_lp_in0_146_merged497_130);
}

inline hw_uint<32>  lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_select(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44[1 + 2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_lp_in0_1_buf44_lp_in0_146_merged497_129 = lp_in0_1_buf44.lp_in0_1_buf44_lp_in0_146_merged497_129_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_lp_in0_146_merged497_129;
  return 0;
}

inline hw_uint<32>  lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_select(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44[2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_lp_in0_1_buf44_lp_in0_146_merged497_130 = lp_in0_1_buf44.lp_in0_1_buf44_lp_in0_146_merged497_130_to_lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_lp_in0_146_merged497_130;
  return 0;
}

// # of bundles = 2
// lp_in0_146_merged497_write
//	lp_in0_1_buf44_lp_in0_146_merged497_129
//	lp_in0_1_buf44_lp_in0_146_merged497_130
inline void lp_in0_1_buf44_lp_in0_146_merged497_write_bundle_write(hw_uint<64>& lp_in0_146_merged497_write, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
	hw_uint<32>  lp_in0_1_buf44_lp_in0_146_merged497_129_res = lp_in0_146_merged497_write.extract<0, 31>();
	lp_in0_1_buf44_lp_in0_146_merged497_129_write(lp_in0_1_buf44_lp_in0_146_merged497_129_res, lp_in0_1_buf44, root, lp_in0_145, lp_in0_146, dynamic_address);
	hw_uint<32>  lp_in0_1_buf44_lp_in0_146_merged497_130_res = lp_in0_146_merged497_write.extract<32, 63>();
	lp_in0_1_buf44_lp_in0_146_merged497_130_write(lp_in0_1_buf44_lp_in0_146_merged497_130_res, lp_in0_1_buf44, root, lp_in0_145, lp_in0_146, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read
//	lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58
//	lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60
inline hw_uint<64> lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read_bundle_read(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58
    // lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60

	hw_uint<64> result;
	hw_uint<32>  lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_res = lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_select(lp_in0_1_buf44, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 64>(result, lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_58_res);
	hw_uint<32>  lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_res = lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_select(lp_in0_1_buf44, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<32, 64>(result, lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_60_res);
	return result;
}

struct lp_in0_2_buf36_diff39_sm319_0446_230_to_lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in0_2_buf36_cache {
  // Reader addrs...
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in0_2_buf36_diff39_sm319_0446_230_to_lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_cache lp_in0_2_buf36_diff39_sm319_0446_230_to_lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54;
};



inline void lp_in0_2_buf36_diff39_sm319_0446_230_write(hw_uint<32> & lp_in0_2_buf36_diff39_sm319_0446_230, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  lp_in0_2_buf36.lp_in0_2_buf36_diff39_sm319_0446_230_to_lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54.push(lp_in0_2_buf36_diff39_sm319_0446_230);
}

inline hw_uint<32>  lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_select(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 23] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff39_sm319_0446[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 21] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in0_2_buf36_diff39_sm319_0446_230 = lp_in0_2_buf36.lp_in0_2_buf36_diff39_sm319_0446_230_to_lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54.peek(/* one reader or all rams */ 0);
  return value_lp_in0_2_buf36_diff39_sm319_0446_230;
  return 0;
}

// # of bundles = 2
// diff39_sm319_0446_write
//	lp_in0_2_buf36_diff39_sm319_0446_230
inline void lp_in0_2_buf36_diff39_sm319_0446_write_bundle_write(hw_uint<32>& diff39_sm319_0446_write, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
	hw_uint<32>  lp_in0_2_buf36_diff39_sm319_0446_230_res = diff39_sm319_0446_write.extract<0, 31>();
	lp_in0_2_buf36_diff39_sm319_0446_230_write(lp_in0_2_buf36_diff39_sm319_0446_230_res, lp_in0_2_buf36, root, lp_in0_237, lp_in0_238, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read
//	lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54
inline hw_uint<32> lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read_bundle_read(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54

	hw_uint<32> result;
	hw_uint<32>  lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_res = lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_select(lp_in0_2_buf36, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_54_res);
	return result;
}

struct lp_in1_0_buf100_lp_in1_0102_merged515_117_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct lp_in1_0_buf100_lp_in1_0102_merged515_118_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct lp_in1_0_buf100_lp_in1_0102_merged515_119_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct lp_in1_0_buf100_lp_in1_0102_merged515_120_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct lp_in1_0_buf100_cache {
  // Reader addrs...
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[3 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[2 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[1 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // # of banks: 4
  lp_in1_0_buf100_lp_in1_0102_merged515_117_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_cache lp_in1_0_buf100_lp_in1_0102_merged515_117_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67;
  lp_in1_0_buf100_lp_in1_0102_merged515_118_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_cache lp_in1_0_buf100_lp_in1_0102_merged515_118_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69;
  lp_in1_0_buf100_lp_in1_0102_merged515_119_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_cache lp_in1_0_buf100_lp_in1_0102_merged515_119_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71;
  lp_in1_0_buf100_lp_in1_0102_merged515_120_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_cache lp_in1_0_buf100_lp_in1_0102_merged515_120_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73;
};



inline void lp_in1_0_buf100_lp_in1_0102_merged515_117_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged515_117, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_117_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67.push(lp_in1_0_buf100_lp_in1_0102_merged515_117);
}

inline void lp_in1_0_buf100_lp_in1_0102_merged515_118_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged515_118, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_118_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69.push(lp_in1_0_buf100_lp_in1_0102_merged515_118);
}

inline void lp_in1_0_buf100_lp_in1_0102_merged515_119_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged515_119, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_119_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71.push(lp_in1_0_buf100_lp_in1_0102_merged515_119);
}

inline void lp_in1_0_buf100_lp_in1_0102_merged515_120_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged515_120, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_120_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73.push(lp_in1_0_buf100_lp_in1_0102_merged515_120);
}

inline hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[3 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged515_117 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_117_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged515_117;
  return 0;
}

inline hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[2 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged515_118 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_118_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged515_118;
  return 0;
}

inline hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[1 + 4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged515_119 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_119_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged515_119;
  return 0;
}

inline hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100[4pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 511 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged515_120 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged515_120_to_lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged515_120;
  return 0;
}

// # of bundles = 2
// lp_in1_0102_merged515_write
//	lp_in1_0_buf100_lp_in1_0102_merged515_117
//	lp_in1_0_buf100_lp_in1_0102_merged515_118
//	lp_in1_0_buf100_lp_in1_0102_merged515_119
//	lp_in1_0_buf100_lp_in1_0102_merged515_120
inline void lp_in1_0_buf100_lp_in1_0102_merged515_write_bundle_write(hw_uint<128>& lp_in1_0102_merged515_write, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged515_117_res = lp_in1_0102_merged515_write.extract<0, 31>();
	lp_in1_0_buf100_lp_in1_0102_merged515_117_write(lp_in1_0_buf100_lp_in1_0102_merged515_117_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged515_118_res = lp_in1_0102_merged515_write.extract<32, 63>();
	lp_in1_0_buf100_lp_in1_0102_merged515_118_write(lp_in1_0_buf100_lp_in1_0102_merged515_118_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged515_119_res = lp_in1_0102_merged515_write.extract<64, 95>();
	lp_in1_0_buf100_lp_in1_0102_merged515_119_write(lp_in1_0_buf100_lp_in1_0102_merged515_119_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged515_120_res = lp_in1_0102_merged515_write.extract<96, 127>();
	lp_in1_0_buf100_lp_in1_0102_merged515_120_write(lp_in1_0_buf100_lp_in1_0102_merged515_120_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read
//	lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67
//	lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69
//	lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71
//	lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73
inline hw_uint<128> lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read_bundle_read(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 4
    // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67
    // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69
    // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71
    // lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73

	hw_uint<128> result;
	hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_res = lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_select(lp_in1_0_buf100, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 128>(result, lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_67_res);
	hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_res = lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_select(lp_in1_0_buf100, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<32, 128>(result, lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_69_res);
	hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_res = lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_select(lp_in1_0_buf100, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<64, 128>(result, lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_71_res);
	hw_uint<32>  lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_res = lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_select(lp_in1_0_buf100, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<96, 128>(result, lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_73_res);
	return result;
}

struct lp_in1_1_buf92_lp_in1_194_merged510_111_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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

struct lp_in1_1_buf92_lp_in1_194_merged510_112_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct lp_in1_1_buf92_cache {
  // Reader addrs...
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92[1 + 2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92[2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // # of banks: 2
  lp_in1_1_buf92_lp_in1_194_merged510_111_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_cache lp_in1_1_buf92_lp_in1_194_merged510_111_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59;
  lp_in1_1_buf92_lp_in1_194_merged510_112_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_cache lp_in1_1_buf92_lp_in1_194_merged510_112_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61;
};



inline void lp_in1_1_buf92_lp_in1_194_merged510_111_write(hw_uint<32> & lp_in1_1_buf92_lp_in1_194_merged510_111, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  lp_in1_1_buf92.lp_in1_1_buf92_lp_in1_194_merged510_111_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59.push(lp_in1_1_buf92_lp_in1_194_merged510_111);
}

inline void lp_in1_1_buf92_lp_in1_194_merged510_112_write(hw_uint<32> & lp_in1_1_buf92_lp_in1_194_merged510_112, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  lp_in1_1_buf92.lp_in1_1_buf92_lp_in1_194_merged510_112_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61.push(lp_in1_1_buf92_lp_in1_194_merged510_112);
}

inline hw_uint<32>  lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_select(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92[1 + 2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_lp_in1_1_buf92_lp_in1_194_merged510_111 = lp_in1_1_buf92.lp_in1_1_buf92_lp_in1_194_merged510_111_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_lp_in1_194_merged510_111;
  return 0;
}

inline hw_uint<32>  lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_select(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92[2pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 511 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_lp_in1_1_buf92_lp_in1_194_merged510_112 = lp_in1_1_buf92.lp_in1_1_buf92_lp_in1_194_merged510_112_to_lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_lp_in1_194_merged510_112;
  return 0;
}

// # of bundles = 2
// lp_in1_194_merged510_write
//	lp_in1_1_buf92_lp_in1_194_merged510_111
//	lp_in1_1_buf92_lp_in1_194_merged510_112
inline void lp_in1_1_buf92_lp_in1_194_merged510_write_bundle_write(hw_uint<64>& lp_in1_194_merged510_write, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
	hw_uint<32>  lp_in1_1_buf92_lp_in1_194_merged510_111_res = lp_in1_194_merged510_write.extract<0, 31>();
	lp_in1_1_buf92_lp_in1_194_merged510_111_write(lp_in1_1_buf92_lp_in1_194_merged510_111_res, lp_in1_1_buf92, root, lp_in1_193, lp_in1_194, dynamic_address);
	hw_uint<32>  lp_in1_1_buf92_lp_in1_194_merged510_112_res = lp_in1_194_merged510_write.extract<32, 63>();
	lp_in1_1_buf92_lp_in1_194_merged510_112_write(lp_in1_1_buf92_lp_in1_194_merged510_112_res, lp_in1_1_buf92, root, lp_in1_193, lp_in1_194, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read
//	lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59
//	lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61
inline hw_uint<64> lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read_bundle_read(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59
    // lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61

	hw_uint<64> result;
	hw_uint<32>  lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_res = lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_select(lp_in1_1_buf92, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 64>(result, lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_59_res);
	hw_uint<32>  lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_res = lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_select(lp_in1_1_buf92, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<32, 64>(result, lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_61_res);
	return result;
}

struct lp_in1_2_buf84_diff87_sm328_0362_227_to_lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in1_2_buf84_cache {
  // Reader addrs...
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in1_2_buf84_diff87_sm328_0362_227_to_lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_cache lp_in1_2_buf84_diff87_sm328_0362_227_to_lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55;
};



inline void lp_in1_2_buf84_diff87_sm328_0362_227_write(hw_uint<32> & lp_in1_2_buf84_diff87_sm328_0362_227, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  lp_in1_2_buf84.lp_in1_2_buf84_diff87_sm328_0362_227_to_lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55.push(lp_in1_2_buf84_diff87_sm328_0362_227);
}

inline hw_uint<32>  lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_select(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 23] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff87_sm328_0362[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 20] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in1_2_buf84_diff87_sm328_0362_227 = lp_in1_2_buf84.lp_in1_2_buf84_diff87_sm328_0362_227_to_lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55.peek(/* one reader or all rams */ 0);
  return value_lp_in1_2_buf84_diff87_sm328_0362_227;
  return 0;
}

// # of bundles = 2
// diff87_sm328_0362_write
//	lp_in1_2_buf84_diff87_sm328_0362_227
inline void lp_in1_2_buf84_diff87_sm328_0362_write_bundle_write(hw_uint<32>& diff87_sm328_0362_write, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
	hw_uint<32>  lp_in1_2_buf84_diff87_sm328_0362_227_res = diff87_sm328_0362_write.extract<0, 31>();
	lp_in1_2_buf84_diff87_sm328_0362_227_write(lp_in1_2_buf84_diff87_sm328_0362_227_res, lp_in1_2_buf84, root, lp_in1_285, lp_in1_286, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read
//	lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55
inline hw_uint<32> lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read_bundle_read(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55

	hw_uint<32> result;
	hw_uint<32>  lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_res = lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_select(lp_in1_2_buf84, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_55_res);
	return result;
}

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_to_merged_0_merged_0_reconstruct_lp138140_merged531_103_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
	// Capacity: 3074
	// # of read delays: 3074
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073
	fifo<hw_uint<32> , 3074> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3073 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_to_merged_0_merged_0_reconstruct_lp138140_merged531_105_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
	// Capacity: 3074
	// # of read delays: 3074
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073
	fifo<hw_uint<32> , 3074> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3073 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_to_merged_0_merged_0_reconstruct_lp138140_merged531_107_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
	// Capacity: 3074
	// # of read delays: 3074
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073
	fifo<hw_uint<32> , 3074> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3073 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_to_merged_0_merged_0_reconstruct_lp138140_merged531_109_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
	// Capacity: 3074
	// # of read delays: 3074
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073
	fifo<hw_uint<32> , 3074> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3073 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_0_cache {
  // Reader addrs...
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[3 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[2 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[1 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // # of banks: 4
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_to_merged_0_merged_0_reconstruct_lp138140_merged531_103_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_to_merged_0_merged_0_reconstruct_lp138140_merged531_103;
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_to_merged_0_merged_0_reconstruct_lp138140_merged531_105_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_to_merged_0_merged_0_reconstruct_lp138140_merged531_105;
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_to_merged_0_merged_0_reconstruct_lp138140_merged531_107_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_to_merged_0_merged_0_reconstruct_lp138140_merged531_107;
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_to_merged_0_merged_0_reconstruct_lp138140_merged531_109_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_to_merged_0_merged_0_reconstruct_lp138140_merged531_109;
};



inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_to_merged_0_merged_0_reconstruct_lp138140_merged531_103.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62);
}

inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_to_merged_0_merged_0_reconstruct_lp138140_merged531_105.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63);
}

inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_to_merged_0_merged_0_reconstruct_lp138140_merged531_107.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64);
}

inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_to_merged_0_merged_0_reconstruct_lp138140_merged531_109.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65);
}

inline hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_103_select(merged_0_cache& merged_0, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_reconstruct_lp138140_merged531_103 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[3 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_to_merged_0_merged_0_reconstruct_lp138140_merged531_103.peek(/* one reader or all rams */ (-511 + merged_0_reconstruct_lp138140 == 0 && -2042 + merged_0_reconstruct_lp138139 == 0) ? (2560) : (510 - merged_0_reconstruct_lp138140 >= 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3073) : (-511 + merged_0_reconstruct_lp138140 == 0 && -2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0) ? ((1048064 - 512 * merged_0_reconstruct_lp138139)) : (-2047 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((511 - merged_0_reconstruct_lp138140)) : (-511 + merged_0_reconstruct_lp138140 == 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3072) : (-2042 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((3071 - merged_0_reconstruct_lp138140)) : (-2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? (((1048575 - 512 * merged_0_reconstruct_lp138139) - merged_0_reconstruct_lp138140)) : 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62;
  return 0;
}

inline hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_105_select(merged_0_cache& merged_0, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_reconstruct_lp138140_merged531_105 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[2 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_to_merged_0_merged_0_reconstruct_lp138140_merged531_105.peek(/* one reader or all rams */ (-511 + merged_0_reconstruct_lp138140 == 0 && -2042 + merged_0_reconstruct_lp138139 == 0) ? (2560) : (510 - merged_0_reconstruct_lp138140 >= 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3073) : (-511 + merged_0_reconstruct_lp138140 == 0 && -2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0) ? ((1048064 - 512 * merged_0_reconstruct_lp138139)) : (-2047 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((511 - merged_0_reconstruct_lp138140)) : (-511 + merged_0_reconstruct_lp138140 == 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3072) : (-2042 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((3071 - merged_0_reconstruct_lp138140)) : (-2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? (((1048575 - 512 * merged_0_reconstruct_lp138139) - merged_0_reconstruct_lp138140)) : 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63;
  return 0;
}

inline hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_107_select(merged_0_cache& merged_0, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_reconstruct_lp138140_merged531_107 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[1 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_to_merged_0_merged_0_reconstruct_lp138140_merged531_107.peek(/* one reader or all rams */ (-511 + merged_0_reconstruct_lp138140 == 0 && -2042 + merged_0_reconstruct_lp138139 == 0) ? (2560) : (510 - merged_0_reconstruct_lp138140 >= 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3073) : (-511 + merged_0_reconstruct_lp138140 == 0 && -2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0) ? ((1048064 - 512 * merged_0_reconstruct_lp138139)) : (-2047 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((511 - merged_0_reconstruct_lp138140)) : (-511 + merged_0_reconstruct_lp138140 == 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3072) : (-2042 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((3071 - merged_0_reconstruct_lp138140)) : (-2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? (((1048575 - 512 * merged_0_reconstruct_lp138139) - merged_0_reconstruct_lp138140)) : 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64;
  return 0;
}

inline hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_109_select(merged_0_cache& merged_0, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_reconstruct_lp138140_merged531_109 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0[4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_to_merged_0_merged_0_reconstruct_lp138140_merged531_109.peek(/* one reader or all rams */ (-511 + merged_0_reconstruct_lp138140 == 0 && -2042 + merged_0_reconstruct_lp138139 == 0) ? (2560) : (510 - merged_0_reconstruct_lp138140 >= 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3073) : (-511 + merged_0_reconstruct_lp138140 == 0 && -2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0) ? ((1048064 - 512 * merged_0_reconstruct_lp138139)) : (-2047 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((511 - merged_0_reconstruct_lp138140)) : (-511 + merged_0_reconstruct_lp138140 == 0 && 2041 - merged_0_reconstruct_lp138139 >= 0) ? (3072) : (-2042 + merged_0_reconstruct_lp138139 == 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? ((3071 - merged_0_reconstruct_lp138140)) : (-2043 + merged_0_reconstruct_lp138139 >= 0 && 2046 - merged_0_reconstruct_lp138139 >= 0 && 510 - merged_0_reconstruct_lp138140 >= 0) ? (((1048575 - 512 * merged_0_reconstruct_lp138139) - merged_0_reconstruct_lp138140)) : 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged531_read
//	merged_0_merged_0_reconstruct_lp138140_merged531_103
//	merged_0_merged_0_reconstruct_lp138140_merged531_105
//	merged_0_merged_0_reconstruct_lp138140_merged531_107
//	merged_0_merged_0_reconstruct_lp138140_merged531_109
inline hw_uint<128> merged_0_merged_0_reconstruct_lp138140_merged531_read_bundle_read(merged_0_cache& merged_0, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 4
    // merged_0_merged_0_reconstruct_lp138140_merged531_103
    // merged_0_merged_0_reconstruct_lp138140_merged531_105
    // merged_0_merged_0_reconstruct_lp138140_merged531_107
    // merged_0_merged_0_reconstruct_lp138140_merged531_109

	hw_uint<128> result;
	hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_103_res = merged_0_merged_0_reconstruct_lp138140_merged531_103_select(merged_0, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 128>(result, merged_0_merged_0_reconstruct_lp138140_merged531_103_res);
	hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_105_res = merged_0_merged_0_reconstruct_lp138140_merged531_105_select(merged_0, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<32, 128>(result, merged_0_merged_0_reconstruct_lp138140_merged531_105_res);
	hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_107_res = merged_0_merged_0_reconstruct_lp138140_merged531_107_select(merged_0, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<64, 128>(result, merged_0_merged_0_reconstruct_lp138140_merged531_107_res);
	hw_uint<32>  merged_0_merged_0_reconstruct_lp138140_merged531_109_res = merged_0_merged_0_reconstruct_lp138140_merged531_109_select(merged_0, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<96, 128>(result, merged_0_merged_0_reconstruct_lp138140_merged531_109_res);
	return result;
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65
inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write_bundle_write(hw_uint<128>& pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write.extract<0, 31>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_62_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write.extract<32, 63>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_63_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write.extract<64, 95>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_64_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write.extract<96, 127>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_65_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
}

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_cache {
  // Reader addrs...
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[3 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[2 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[1 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
  // # of banks: 4
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49;
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50;
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51;
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52;
};



inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100);
}

inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101);
}

inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102);
}

inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99);
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[3 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99;
  return 0;
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[2 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100;
  return 0;
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[1 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101;
  return 0;
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141[4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_to_merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged531_write
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102
inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_write_bundle_write(hw_uint<128>& merged_0_reconstruct_lp138140_merged531_write, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_res = merged_0_reconstruct_lp138140_merged531_write.extract<0, 31>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_99_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_res = merged_0_reconstruct_lp138140_merged531_write.extract<32, 63>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_100_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_res = merged_0_reconstruct_lp138140_merged531_write.extract<64, 95>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_101_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_res = merged_0_reconstruct_lp138140_merged531_write.extract<96, 127>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_102_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
}

// pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_read
//	merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49
//	merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50
//	merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51
//	merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52
inline hw_uint<128> merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_read_bundle_read(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
  // # of ports in bundle: 4
    // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49
    // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50
    // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51
    // merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52

	hw_uint<128> result;
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_res = merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_select(merged_0_reconstruct_lp138_buf141, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<0, 128>(result, merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_49_res);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_res = merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_select(merged_0_reconstruct_lp138_buf141, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<32, 128>(result, merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_50_res);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_res = merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_select(merged_0_reconstruct_lp138_buf141, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<64, 128>(result, merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_51_res);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_res = merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_select(merged_0_reconstruct_lp138_buf141, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<96, 128>(result, merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_52_res);
	return result;
}

struct merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_to_merged_1_merged_1_reconstruct_lp129131_merged526_95_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
	// Capacity: 1026
	// # of read delays: 1026
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025
	fifo<hw_uint<32> , 1026> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1025 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_to_merged_1_merged_1_reconstruct_lp129131_merged526_97_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
	// Capacity: 1026
	// # of read delays: 1026
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025
	fifo<hw_uint<32> , 1026> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1025 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_cache {
  // Reader addrs...
    // { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1[1 + 2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
    // { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1[2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // # of banks: 2
  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_to_merged_1_merged_1_reconstruct_lp129131_merged526_95_cache merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_to_merged_1_merged_1_reconstruct_lp129131_merged526_95;
  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_to_merged_1_merged_1_reconstruct_lp129131_merged526_97_cache merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_to_merged_1_merged_1_reconstruct_lp129131_merged526_97;
};



inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_write(hw_uint<32> & merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_to_merged_1_merged_1_reconstruct_lp129131_merged526_95.push(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56);
}

inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_write(hw_uint<32> & merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_to_merged_1_merged_1_reconstruct_lp129131_merged526_97.push(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57);
}

inline hw_uint<32>  merged_1_merged_1_reconstruct_lp129131_merged526_95_select(merged_1_cache& merged_1, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_merged_1_reconstruct_lp129131_merged526_95 read pattern: { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1[1 + 2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // Read schedule : { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56 = merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_to_merged_1_merged_1_reconstruct_lp129131_merged526_95.peek(/* one reader or all rams */ (-511 + merged_1_reconstruct_lp129131 == 0 && -1022 + merged_1_reconstruct_lp129130 == 0) ? (512) : (510 - merged_1_reconstruct_lp129131 >= 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (1025) : (-1023 + merged_1_reconstruct_lp129130 == 0 && 510 - merged_1_reconstruct_lp129131 >= 0) ? ((511 - merged_1_reconstruct_lp129131)) : (-511 + merged_1_reconstruct_lp129131 == 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (1024) : (-1022 + merged_1_reconstruct_lp129130 == 0 && 510 - merged_1_reconstruct_lp129131 >= 0) ? ((1023 - merged_1_reconstruct_lp129131)) : 0);
  return value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56;
  return 0;
}

inline hw_uint<32>  merged_1_merged_1_reconstruct_lp129131_merged526_97_select(merged_1_cache& merged_1, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_merged_1_reconstruct_lp129131_merged526_97 read pattern: { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1[2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // Read schedule : { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57 = merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_to_merged_1_merged_1_reconstruct_lp129131_merged526_97.peek(/* one reader or all rams */ (-511 + merged_1_reconstruct_lp129131 == 0 && -1022 + merged_1_reconstruct_lp129130 == 0) ? (512) : (510 - merged_1_reconstruct_lp129131 >= 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (1025) : (-1023 + merged_1_reconstruct_lp129130 == 0 && 510 - merged_1_reconstruct_lp129131 >= 0) ? ((511 - merged_1_reconstruct_lp129131)) : (-511 + merged_1_reconstruct_lp129131 == 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (1024) : (-1022 + merged_1_reconstruct_lp129130 == 0 && 510 - merged_1_reconstruct_lp129131 >= 0) ? ((1023 - merged_1_reconstruct_lp129131)) : 0);
  return value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57;
  return 0;
}

// # of bundles = 2
// merged_1_reconstruct_lp129131_merged526_read
//	merged_1_merged_1_reconstruct_lp129131_merged526_95
//	merged_1_merged_1_reconstruct_lp129131_merged526_97
inline hw_uint<64> merged_1_merged_1_reconstruct_lp129131_merged526_read_bundle_read(merged_1_cache& merged_1, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_1_merged_1_reconstruct_lp129131_merged526_95
    // merged_1_merged_1_reconstruct_lp129131_merged526_97

	hw_uint<64> result;
	hw_uint<32>  merged_1_merged_1_reconstruct_lp129131_merged526_95_res = merged_1_merged_1_reconstruct_lp129131_merged526_95_select(merged_1, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 64>(result, merged_1_merged_1_reconstruct_lp129131_merged526_95_res);
	hw_uint<32>  merged_1_merged_1_reconstruct_lp129131_merged526_97_res = merged_1_merged_1_reconstruct_lp129131_merged526_97_select(merged_1, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<32, 64>(result, merged_1_merged_1_reconstruct_lp129131_merged526_97_res);
	return result;
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write
//	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56
//	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57
inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write_bundle_write(hw_uint<64>& pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
	hw_uint<32>  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_res = pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write.extract<0, 31>();
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_write(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_56_res, merged_1, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	hw_uint<32>  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_res = pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write.extract<32, 63>();
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_write(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_57_res, merged_1, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
}

struct merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_cache {
  // Reader addrs...
    // { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
    // { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
    // { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[1 + 2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
    // { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[1 + 2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // # of banks: 4
  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_cache merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10;
  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_cache merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11;
  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_cache merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8;
  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_cache merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9;
};



inline void merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8.push(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93);
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9.push(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93);
}

inline void merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10.push(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94);
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11.push(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 510 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((511 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 510 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((511 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[1 + 2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 510 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((511 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged528[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132[1 + 2us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 511 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_to_merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 510 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((511 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93;
  return 0;
}

// # of bundles = 2
// merged_1_reconstruct_lp129131_merged526_write
//	merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93
//	merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94
inline void merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_write_bundle_write(hw_uint<64>& merged_1_reconstruct_lp129131_merged526_write, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_res = merged_1_reconstruct_lp129131_merged526_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_write(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_93_res, merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_res = merged_1_reconstruct_lp129131_merged526_write.extract<32, 63>();
	merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_write(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_94_res, merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
}

// us_merged_1_reconstruct_lp129_buf132144_merged528_read
//	merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8
//	merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9
//	merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10
//	merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11
inline hw_uint<128> merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_read_bundle_read(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  // # of ports in bundle: 4
    // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8
    // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9
    // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10
    // merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11

	hw_uint<128> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_res = merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_select(merged_1_reconstruct_lp129_buf132, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<0, 128>(result, merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_8_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_res = merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_select(merged_1_reconstruct_lp129_buf132, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<32, 128>(result, merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_9_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_res = merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_select(merged_1_reconstruct_lp129_buf132, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<64, 128>(result, merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_10_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_res = merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_select(merged_1_reconstruct_lp129_buf132, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<96, 128>(result, merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_11_res);
	return result;
}

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_cache {
	// RAM Box: {[3, 2047], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_cache {
	// RAM Box: {[2, 2046], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_cache {
	// RAM Box: {[1, 2045], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_cache {
	// RAM Box: {[0, 2044], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_cache {
  // Reader addrs...
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[3 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[2 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[1 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
    // { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // # of banks: 4
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104;
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106;
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108;
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110;
};



inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4);
}

inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5);
}

inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6);
}

inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[3 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[2 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[1 + 4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110 read pattern: { merged_0_reconstruct_lp138140_merged531[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142[4merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 511 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_to_merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged531_read
//	merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104
//	merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106
//	merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108
//	merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110
inline hw_uint<128> merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 4
    // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104
    // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106
    // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108
    // merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110

	hw_uint<128> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_res = merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 128>(result, merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_104_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_res = merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<32, 128>(result, merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_106_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_res = merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<64, 128>(result, merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_108_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_res = merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<96, 128>(result, merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_110_res);
	return result;
}

// us_merged_1_reconstruct_lp129_buf132144_merged528_write
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7
inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_write_bundle_write(hw_uint<128>& us_merged_1_reconstruct_lp129_buf132144_merged528_write, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_res = us_merged_1_reconstruct_lp129_buf132144_merged528_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_4_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_res = us_merged_1_reconstruct_lp129_buf132144_merged528_write.extract<32, 63>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_5_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_res = us_merged_1_reconstruct_lp129_buf132144_merged528_write.extract<64, 95>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_6_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_res = us_merged_1_reconstruct_lp129_buf132144_merged528_write.extract<96, 127>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_7_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
}

struct merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_to_merged_2_rc128_sm338_0406_43_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_2_cache {
  // Reader addrs...
    // { rc128_sm338_0406[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_to_merged_2_rc128_sm338_0406_43_cache merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_to_merged_2_rc128_sm338_0406_43;
};



inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_write(hw_uint<32> & merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_to_merged_2_rc128_sm338_0406_43.push(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53);
}

inline hw_uint<32>  merged_2_rc128_sm338_0406_43_select(merged_2_cache& merged_2, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_rc128_sm338_0406_43 read pattern: { rc128_sm338_0406[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 23] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53 = merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_to_merged_2_rc128_sm338_0406_43.peek(/* one reader or all rams */ 0);
  return value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53;
  return 0;
}

// # of bundles = 2
// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_write
//	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53
inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_write_bundle_write(hw_uint<32>& pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_write, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
	hw_uint<32>  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_res = pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_write.extract<0, 31>();
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_write(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_53_res, merged_2, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
}

// rc128_sm338_0406_read
//	merged_2_rc128_sm338_0406_43
inline hw_uint<32> merged_2_rc128_sm338_0406_read_bundle_read(merged_2_cache& merged_2, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_rc128_sm338_0406_43

	hw_uint<32> result;
	hw_uint<32>  merged_2_rc128_sm338_0406_43_res = merged_2_rc128_sm338_0406_43_select(merged_2, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_2_rc128_sm338_0406_43_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_cache {
	// RAM Box: {[0, 511], [0, 511]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_cache {
	// RAM Box: {[0, 511], [0, 511]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_2_reconstruct_lp120_buf123_cache {
  // Reader addrs...
    // { us_merged_2_reconstruct_lp120_buf123135_merged523[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123[us_merged_2_reconstruct_lp120_buf123135, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 511 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
    // { us_merged_2_reconstruct_lp120_buf123135_merged523[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123[us_merged_2_reconstruct_lp120_buf123135, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 511 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // # of banks: 2
  merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_cache merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2;
  merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_cache merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3;
};



inline void merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2.push(merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42);
  merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3.push(merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_select(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2 read pattern: { us_merged_2_reconstruct_lp120_buf123135_merged523[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123[us_merged_2_reconstruct_lp120_buf123135, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 511 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // Read schedule : { us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42 = merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2.peek(/* one reader or all rams */ ((-1 - us_merged_2_reconstruct_lp120_buf123134) % 2 == 0 && 510 - us_merged_2_reconstruct_lp120_buf123135 >= 0) ? ((511 - us_merged_2_reconstruct_lp120_buf123135)) : 0);
  return value_merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42;
  return 0;
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_select(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3 read pattern: { us_merged_2_reconstruct_lp120_buf123135_merged523[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123[us_merged_2_reconstruct_lp120_buf123135, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 511 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // Read schedule : { us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42 = merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_to_merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3.peek(/* one reader or all rams */ ((-1 - us_merged_2_reconstruct_lp120_buf123134) % 2 == 0 && 510 - us_merged_2_reconstruct_lp120_buf123135 >= 0) ? ((511 - us_merged_2_reconstruct_lp120_buf123135)) : 0);
  return value_merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42;
  return 0;
}

// # of bundles = 2
// rc128_sm338_0406_write
//	merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42
inline void merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_write_bundle_write(hw_uint<32>& rc128_sm338_0406_write, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_res = rc128_sm338_0406_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_write(merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_42_res, merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
}

// us_merged_2_reconstruct_lp120_buf123135_merged523_read
//	merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2
//	merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3
inline hw_uint<64> merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_read_bundle_read(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2
    // merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3

	hw_uint<64> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_res = merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_select(merged_2_reconstruct_lp120_buf123, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
	set_at<0, 64>(result, merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_2_res);
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_res = merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_select(merged_2_reconstruct_lp120_buf123, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
	set_at<32, 64>(result, merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_3_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_cache {
	// RAM Box: {[1, 1023], [0, 1023]}
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

struct merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_cache {
	// RAM Box: {[0, 1022], [0, 1023]}
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

struct merged_2_reconstruct_lp120_buf123_us133_cache {
  // Reader addrs...
    // { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133[1 + 2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
    // { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133[2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // # of banks: 2
  merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_cache merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96;
  merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_cache merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98;
};



inline void merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96.push(merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0);
}

inline void merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98.push(merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_select(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96 read pattern: { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133[1 + 2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // Read schedule : { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0 = merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0;
  return 0;
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_select(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98 read pattern: { merged_1_reconstruct_lp129131_merged526[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133[2merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 511 }
  // Read schedule : { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  // Write schedule: { us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1 = merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_to_merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1;
  return 0;
}

// # of bundles = 2
// merged_1_reconstruct_lp129131_merged526_read
//	merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96
//	merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98
inline hw_uint<64> merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96
    // merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98

	hw_uint<64> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_res = merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_select(merged_2_reconstruct_lp120_buf123_us133, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 64>(result, merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_96_res);
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_res = merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_select(merged_2_reconstruct_lp120_buf123_us133, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<32, 64>(result, merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_98_res);
	return result;
}

// us_merged_2_reconstruct_lp120_buf123135_merged523_write
//	merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0
//	merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1
inline void merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_write_bundle_write(hw_uint<64>& us_merged_2_reconstruct_lp120_buf123135_merged523_write, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_res = us_merged_2_reconstruct_lp120_buf123135_merged523_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_write(merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_0_res, merged_2_reconstruct_lp120_buf123_us133, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_res = us_merged_2_reconstruct_lp120_buf123135_merged523_write.extract<32, 63>();
	merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_write(merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_1_res, merged_2_reconstruct_lp120_buf123_us133, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
}

struct merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_to_merged_3_us127_sm337_0404_41_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_3_cache {
  // Reader addrs...
    // { us127_sm337_0404[root = 0, us_merged_3125, us_merged_3126] -> merged_3[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // # of banks: 1
  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_to_merged_3_us127_sm337_0404_41_cache merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_to_merged_3_us127_sm337_0404_41;
};



inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_write(hw_uint<32> & merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_to_merged_3_us127_sm337_0404_41.push(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90);
}

inline hw_uint<32>  merged_3_us127_sm337_0404_41_select(merged_3_cache& merged_3, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us127_sm337_0404_41 read pattern: { us127_sm337_0404[root = 0, us_merged_3125, us_merged_3126] -> merged_3[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // Read schedule : { us127_sm337_0404[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 15] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 14] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90 = merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_to_merged_3_us127_sm337_0404_41.peek(/* one reader or all rams */ ((-1 - us_merged_3125) % 2 == 0 && 509 - us_merged_3126 >= 0) ? ((255 - floord(2*us_merged_3126, 4))) : 0);
  return value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90;
  return 0;
}

// # of bundles = 2
// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_write
//	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90
inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_write_bundle_write(hw_uint<32>& pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_write, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
	hw_uint<32>  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_res = pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_write.extract<0, 31>();
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_write(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_90_res, merged_3, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
}

// us127_sm337_0404_read
//	merged_3_us127_sm337_0404_41
inline hw_uint<32> merged_3_us127_sm337_0404_read_bundle_read(merged_3_cache& merged_3, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us127_sm337_0404_41

	hw_uint<32> result;
	hw_uint<32>  merged_3_us127_sm337_0404_41_res = merged_3_us127_sm337_0404_41_select(merged_3, root, us_merged_3125, us_merged_3126, dynamic_address);
	set_at<0, 32>(result, merged_3_us127_sm337_0404_41_res);
	return result;
}

struct merged_3_us124_us127_sm337_0404_40_to_merged_3_us124_rc128_sm338_0406_44_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_3_us124_cache {
  // Reader addrs...
    // { rc128_sm338_0406[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_3_us124_us127_sm337_0404_40_to_merged_3_us124_rc128_sm338_0406_44_cache merged_3_us124_us127_sm337_0404_40_to_merged_3_us124_rc128_sm338_0406_44;
};



inline void merged_3_us124_us127_sm337_0404_40_write(hw_uint<32> & merged_3_us124_us127_sm337_0404_40, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  merged_3_us124.merged_3_us124_us127_sm337_0404_40_to_merged_3_us124_rc128_sm338_0406_44.push(merged_3_us124_us127_sm337_0404_40);
}

inline hw_uint<32>  merged_3_us124_rc128_sm338_0406_44_select(merged_3_us124_cache& merged_3_us124, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us124_rc128_sm338_0406_44 read pattern: { rc128_sm338_0406[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us127_sm337_0404[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 15] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_3_us124_us127_sm337_0404_40 = merged_3_us124.merged_3_us124_us127_sm337_0404_40_to_merged_3_us124_rc128_sm338_0406_44.peek(/* one reader or all rams */ 0);
  return value_merged_3_us124_us127_sm337_0404_40;
  return 0;
}

// # of bundles = 2
// rc128_sm338_0406_read
//	merged_3_us124_rc128_sm338_0406_44
inline hw_uint<32> merged_3_us124_rc128_sm338_0406_read_bundle_read(merged_3_us124_cache& merged_3_us124, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us124_rc128_sm338_0406_44

	hw_uint<32> result;
	hw_uint<32>  merged_3_us124_rc128_sm338_0406_44_res = merged_3_us124_rc128_sm338_0406_44_select(merged_3_us124, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_3_us124_rc128_sm338_0406_44_res);
	return result;
}

// us127_sm337_0404_write
//	merged_3_us124_us127_sm337_0404_40
inline void merged_3_us124_us127_sm337_0404_write_bundle_write(hw_uint<32>& us127_sm337_0404_write, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
	hw_uint<32>  merged_3_us124_us127_sm337_0404_40_res = us127_sm337_0404_write.extract<0, 31>();
	merged_3_us124_us127_sm337_0404_40_write(merged_3_us124_us127_sm337_0404_40_res, merged_3_us124, root, us_merged_3125, us_merged_3126, dynamic_address);
}

// Total re-use buffer capacity: 1476832 bits


// Operation logic
inline void us83_sm327_0356(gp_in1_3_buf72_cache& gp_in1_3_buf72, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72_floor_lp__lp_1_m_us_gp_in1_3_buf7282__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value = gp_in1_3_buf72_us83_sm327_0356_read_bundle_read(gp_in1_3_buf72/* source_delay */, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_us80
	gp_in1_3_buf72_us80_us83_sm327_0356_write_bundle_write(/* arg names */gp_in1_3_buf72_floor_lp__lp_1_m_us_gp_in1_3_buf7282__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value, gp_in1_3_buf72_us80, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_374_merged312_sm326_0358(gp_in1_2_buf64_cache& gp_in1_2_buf64, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64_2_m__lp_1_m_gp_in1_374__p__0_rp___p___m_1_p_1_c_______2_m_gp_in1_373__p__1_p_1_value = gp_in1_2_buf64_gp_in1_374_merged312_sm326_0358_read_bundle_read(gp_in1_2_buf64/* source_delay */, root, gp_in1_373, gp_in1_374, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_374_cu310(gp_in1_2_buf64_2_m__lp_1_m_gp_in1_374__p__0_rp___p___m_1_p_1_c_______2_m_gp_in1_373__p__1_p_1_value);
	// Produce: gp_in1_3_buf72
	gp_in1_3_buf72_gp_in1_374_merged312_sm326_0358_write_bundle_write(/* arg names */compute_result, gp_in1_3_buf72, root, gp_in1_373, gp_in1_374, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_266_merged309_sm325_0360(gp_in1_1_buf56_cache& gp_in1_1_buf56, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56_2_m__lp__lp_1_m_gp_in1_266__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value = gp_in1_1_buf56_gp_in1_266_merged309_sm325_0360_read_bundle_read(gp_in1_1_buf56/* source_delay */, root, gp_in1_265, gp_in1_266, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_266_cu307(gp_in1_1_buf56_2_m__lp__lp_1_m_gp_in1_266__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in1_2_buf64
	gp_in1_2_buf64_gp_in1_266_merged309_sm325_0360_write_bundle_write(/* arg names */compute_result, gp_in1_2_buf64, root, gp_in1_265, gp_in1_266, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff87_sm328_0362(gp_in1_2_buf64_cache& gp_in1_2_buf64, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64__lp_1_m_lp_in1_286__p__0_rp__p_1_c_____lp_in1_285_p_1_value = gp_in1_2_buf64_diff87_sm328_0362_read_bundle_read(gp_in1_2_buf64/* source_delay */, root, lp_in1_285, lp_in1_286, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72_us80
	auto gp_in1_3_buf72_us80__lp_1_m_lp_in1_286__p__0_rp__p_0_c_____lp_in1_285_p_0_value = gp_in1_3_buf72_us80_diff87_sm328_0362_read_bundle_read(gp_in1_3_buf72_us80/* source_delay */, root, lp_in1_285, lp_in1_286, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in1_2_buf64__lp_1_m_lp_in1_286__p__0_rp__p_1_c_____lp_in1_285_p_1_value, gp_in1_3_buf72_us80__lp_1_m_lp_in1_286__p__0_rp__p_0_c_____lp_in1_285_p_0_value);
	// Produce: lp_in1_2_buf84
	lp_in1_2_buf84_diff87_sm328_0362_write_bundle_write(/* arg names */compute_result, lp_in1_2_buf84, root, lp_in1_285, lp_in1_286, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400(lp_in0_2_buf36_cache& lp_in0_2_buf36, lp_in1_2_buf84_cache& lp_in1_2_buf84, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36
	auto lp_in0_2_buf36__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in0_2_buf36_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read_bundle_read(lp_in0_2_buf36/* source_delay */, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_2_buf84
	auto lp_in1_2_buf84__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in1_2_buf84_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_read_bundle_read(lp_in1_2_buf84/* source_delay */, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_2_buf36__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value, lp_in1_2_buf84__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value);
	// Produce: merged_2
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400_write_bundle_write(/* arg names */compute_result, merged_2, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402(gp_in0_3_buf24_cache& gp_in0_3_buf24, gp_in1_3_buf72_cache& gp_in1_3_buf72, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in0_3_buf24_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read_bundle_read(gp_in0_3_buf24/* source_delay */, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in1_3_buf72_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_read_bundle_read(gp_in1_3_buf72/* source_delay */, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(gp_in0_3_buf24__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value, gp_in1_3_buf72__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value);
	// Produce: merged_3
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402_write_bundle_write(/* arg names */compute_result, merged_3, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us127_sm337_0404(merged_3_cache& merged_3, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126) {
  // Dynamic address computation

	// Consume: merged_3
	auto merged_3_floor_lp__lp_1_m_us_merged_3126__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_3125__div__2_rp__p_0_value = merged_3_us127_sm337_0404_read_bundle_read(merged_3/* source_delay */, root, us_merged_3125, us_merged_3126, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_us124
	merged_3_us124_us127_sm337_0404_write_bundle_write(/* arg names */merged_3_floor_lp__lp_1_m_us_merged_3126__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_3125__div__2_rp__p_0_value, merged_3_us124, root, us_merged_3125, us_merged_3126, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc128_sm338_0406(merged_2_cache& merged_2, merged_3_us124_cache& merged_3_us124, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122) {
  // Dynamic address computation

	// Consume: merged_2
	auto merged_2__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value = merged_2_rc128_sm338_0406_read_bundle_read(merged_2/* source_delay */, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_3_us124
	auto merged_3_us124__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value = merged_3_us124_rc128_sm338_0406_read_bundle_read(merged_3_us124/* source_delay */, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_2__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value, merged_3_us124__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value);
	// Produce: merged_2_reconstruct_lp120_buf123
	merged_2_reconstruct_lp120_buf123_rc128_sm338_0406_write_bundle_write(/* arg names */compute_result, merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_218_merged300_sm316_0440(gp_in0_1_buf8_cache& gp_in0_1_buf8, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8_2_m__lp__lp_1_m_gp_in0_218__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value = gp_in0_1_buf8_gp_in0_218_merged300_sm316_0440_read_bundle_read(gp_in0_1_buf8/* source_delay */, root, gp_in0_217, gp_in0_218, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_218_cu298(gp_in0_1_buf8_2_m__lp__lp_1_m_gp_in0_218__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in0_2_buf16
	gp_in0_2_buf16_gp_in0_218_merged300_sm316_0440_write_bundle_write(/* arg names */compute_result, gp_in0_2_buf16, root, gp_in0_217, gp_in0_218, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_326_merged303_sm317_0442(gp_in0_2_buf16_cache& gp_in0_2_buf16, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16_2_m__lp_1_m_gp_in0_326__p__0_rp___p___m_1_p_1_c_______2_m_gp_in0_325__p__1_p_1_value = gp_in0_2_buf16_gp_in0_326_merged303_sm317_0442_read_bundle_read(gp_in0_2_buf16/* source_delay */, root, gp_in0_325, gp_in0_326, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_326_cu301(gp_in0_2_buf16_2_m__lp_1_m_gp_in0_326__p__0_rp___p___m_1_p_1_c_______2_m_gp_in0_325__p__1_p_1_value);
	// Produce: gp_in0_3_buf24
	gp_in0_3_buf24_gp_in0_326_merged303_sm317_0442_write_bundle_write(/* arg names */compute_result, gp_in0_3_buf24, root, gp_in0_325, gp_in0_326, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us35_sm318_0444(gp_in0_3_buf24_cache& gp_in0_3_buf24, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24_floor_lp__lp_1_m_us_gp_in0_3_buf2434__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value = gp_in0_3_buf24_us35_sm318_0444_read_bundle_read(gp_in0_3_buf24/* source_delay */, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_us32
	gp_in0_3_buf24_us32_us35_sm318_0444_write_bundle_write(/* arg names */gp_in0_3_buf24_floor_lp__lp_1_m_us_gp_in0_3_buf2434__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value, gp_in0_3_buf24_us32, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff39_sm319_0446(gp_in0_2_buf16_cache& gp_in0_2_buf16, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16__lp_1_m_lp_in0_238__p__0_rp__p_1_c_____lp_in0_237_p_1_value = gp_in0_2_buf16_diff39_sm319_0446_read_bundle_read(gp_in0_2_buf16/* source_delay */, root, lp_in0_237, lp_in0_238, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_3_buf24_us32
	auto gp_in0_3_buf24_us32__lp_1_m_lp_in0_238__p__0_rp__p_0_c_____lp_in0_237_p_0_value = gp_in0_3_buf24_us32_diff39_sm319_0446_read_bundle_read(gp_in0_3_buf24_us32/* source_delay */, root, lp_in0_237, lp_in0_238, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in0_2_buf16__lp_1_m_lp_in0_238__p__0_rp__p_1_c_____lp_in0_237_p_1_value, gp_in0_3_buf24_us32__lp_1_m_lp_in0_238__p__0_rp__p_0_c_____lp_in0_237_p_0_value);
	// Produce: lp_in0_2_buf36
	lp_in0_2_buf36_diff39_sm319_0446_write_bundle_write(/* arg names */compute_result, lp_in0_2_buf36, root, lp_in0_237, lp_in0_238, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in0_146_merged497(gp_in0_1_buf8_cache& gp_in0_1_buf8, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8__lp_2_m_lp_in0_146__p__1_rp__p_3_c_____lp_in0_145_p_3_value = gp_in0_1_buf8_lp_in0_146_merged497_read_bundle_read(gp_in0_1_buf8/* source_delay */, root, lp_in0_145, lp_in0_146, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_2_buf16_us40
	auto gp_in0_2_buf16_us40__lp_2_m_lp_in0_146__p__1_rp__p_0_c_____lp_in0_145_p_0_value = gp_in0_2_buf16_us40_lp_in0_146_merged497_read_bundle_read(gp_in0_2_buf16_us40/* source_delay */, root, lp_in0_145, lp_in0_146, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in0_146_cu495(gp_in0_1_buf8__lp_2_m_lp_in0_146__p__1_rp__p_3_c_____lp_in0_145_p_3_value, gp_in0_2_buf16_us40__lp_2_m_lp_in0_146__p__1_rp__p_0_c_____lp_in0_145_p_0_value);
	// Produce: lp_in0_1_buf44
	lp_in0_1_buf44_lp_in0_146_merged497_write_bundle_write(/* arg names */compute_result, lp_in0_1_buf44, root, lp_in0_145, lp_in0_146, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_110_merged492(in0_cache& in0, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110) {
  // Dynamic address computation

	// Consume: in0
	auto in0_2_m__lp__lp_2_m_gp_in0_110__p__1_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value = in0_gp_in0_110_merged492_read_bundle_read(in0/* source_delay */, root, gp_in0_19, gp_in0_110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_110_cu490(in0_2_m__lp__lp_2_m_gp_in0_110__p__1_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in0_1_buf8
	gp_in0_1_buf8_gp_in0_110_merged492_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8, root, gp_in0_19, gp_in0_110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in1_oc46_merged489(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in1_oc, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46) {
  // Dynamic address computation

	// Consume: in1_oc
	auto in1_oc__lp__lp_4_m_pw_math_in1_oc46__p__3_rp___p___m_7_rp__p_7_c________lp_pw_math_in1_oc45__p___m_7_rp__p_7_value = in1_oc.read();
	auto compute_result = pw_math_in1_oc46_cu487(in1_oc__lp__lp_4_m_pw_math_in1_oc46__p__3_rp___p___m_7_rp__p_7_c________lp_pw_math_in1_oc45__p___m_7_rp__p_7_value);
	// Produce: in1
	in1_pw_math_in1_oc46_merged489_write_bundle_write(/* arg names */compute_result, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in0_1_buf850_merged499(gp_in0_1_buf8_cache& gp_in0_1_buf8, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8_floor_lp__lp_4_m_us_gp_in0_1_buf850__p__3_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value = gp_in0_1_buf8_us_gp_in0_1_buf850_merged499_read_bundle_read(gp_in0_1_buf8/* source_delay */, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in0_1_buf850_cu498(gp_in0_1_buf8_floor_lp__lp_4_m_us_gp_in0_1_buf850__p__3_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value);
	// Produce: gp_in0_1_buf8_us48
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged499_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_158_merged505(in1_cache& in1, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158) {
  // Dynamic address computation

	// Consume: in1
	auto in1_2_m__lp__lp_2_m_gp_in1_158__p__1_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value = in1_gp_in1_158_merged505_read_bundle_read(in1/* source_delay */, root, gp_in1_157, gp_in1_158, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_158_cu503(in1_2_m__lp__lp_2_m_gp_in1_158__p__1_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in1_1_buf56
	gp_in1_1_buf56_gp_in1_158_merged505_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56, root, gp_in1_157, gp_in1_158, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in0_2_buf1642_merged494(gp_in0_2_buf16_cache& gp_in0_2_buf16, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16_floor_lp__lp_2_m_us_gp_in0_2_buf1642__p__1_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value = gp_in0_2_buf16_us_gp_in0_2_buf1642_merged494_read_bundle_read(gp_in0_2_buf16/* source_delay */, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in0_2_buf1642_cu493(gp_in0_2_buf16_floor_lp__lp_2_m_us_gp_in0_2_buf1642__p__1_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value);
	// Produce: gp_in0_2_buf16_us40
	gp_in0_2_buf16_us40_us_gp_in0_2_buf1642_merged494_write_bundle_write(/* arg names */compute_result, gp_in0_2_buf16_us40, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_in0_oc02_merged486(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in0_oc, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02) {
  // Dynamic address computation

	// Consume: in0_oc
	auto in0_oc__lp__lp_4_m_pw_math_in0_oc02__p__3_rp___p___m_7_rp__p_7_c________lp_pw_math_in0_oc01__p___m_7_rp__p_7_value = in0_oc.read();
	auto compute_result = pw_math_in0_oc02_cu484(in0_oc__lp__lp_4_m_pw_math_in0_oc02__p__3_rp___p___m_7_rp__p_7_c________lp_pw_math_in0_oc01__p___m_7_rp__p_7_value);
	// Produce: in0
	in0_pw_math_in0_oc02_merged486_write_bundle_write(/* arg names */compute_result, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in0_054_merged502(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, in0_cache& in0, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48
	auto gp_in0_1_buf8_us48__lp_4_m_lp_in0_054__p__3_rp__p_0_c_____lp_in0_053_p_0_value = gp_in0_1_buf8_us48_lp_in0_054_merged502_read_bundle_read(gp_in0_1_buf8_us48/* source_delay */, root, lp_in0_053, lp_in0_054, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in0
	auto in0__lp_4_m_lp_in0_054__p__3_rp__p_7_c_____lp_in0_053_p_7_value = in0_lp_in0_054_merged502_read_bundle_read(in0/* source_delay */, root, lp_in0_053, lp_in0_054, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in0_054_cu500(gp_in0_1_buf8_us48__lp_4_m_lp_in0_054__p__3_rp__p_0_c_____lp_in0_053_p_0_value, in0__lp_4_m_lp_in0_054__p__3_rp__p_7_c_____lp_in0_053_p_7_value);
	// Produce: lp_in0_0_buf52
	lp_in0_0_buf52_lp_in0_054_merged502_write_bundle_write(/* arg names */compute_result, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in1_2_buf6490_merged507(gp_in1_2_buf64_cache& gp_in1_2_buf64, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64_floor_lp__lp_2_m_us_gp_in1_2_buf6490__p__1_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value = gp_in1_2_buf64_us_gp_in1_2_buf6490_merged507_read_bundle_read(gp_in1_2_buf64/* source_delay */, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in1_2_buf6490_cu506(gp_in1_2_buf64_floor_lp__lp_2_m_us_gp_in1_2_buf6490__p__1_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value);
	// Produce: gp_in1_2_buf64_us88
	gp_in1_2_buf64_us88_us_gp_in1_2_buf6490_merged507_write_bundle_write(/* arg names */compute_result, gp_in1_2_buf64_us88, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in1_194_merged510(gp_in1_1_buf56_cache& gp_in1_1_buf56, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56__lp_2_m_lp_in1_194__p__1_rp__p_3_c_____lp_in1_193_p_3_value = gp_in1_1_buf56_lp_in1_194_merged510_read_bundle_read(gp_in1_1_buf56/* source_delay */, root, lp_in1_193, lp_in1_194, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_2_buf64_us88
	auto gp_in1_2_buf64_us88__lp_2_m_lp_in1_194__p__1_rp__p_0_c_____lp_in1_193_p_0_value = gp_in1_2_buf64_us88_lp_in1_194_merged510_read_bundle_read(gp_in1_2_buf64_us88/* source_delay */, root, lp_in1_193, lp_in1_194, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in1_194_cu508(gp_in1_1_buf56__lp_2_m_lp_in1_194__p__1_rp__p_3_c_____lp_in1_193_p_3_value, gp_in1_2_buf64_us88__lp_2_m_lp_in1_194__p__1_rp__p_0_c_____lp_in1_193_p_0_value);
	// Produce: lp_in1_1_buf92
	lp_in1_1_buf92_lp_in1_194_merged510_write_bundle_write(/* arg names */compute_result, lp_in1_1_buf92, root, lp_in1_193, lp_in1_194, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in1_1_buf5698_merged512(gp_in1_1_buf56_cache& gp_in1_1_buf56, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56_floor_lp__lp_4_m_us_gp_in1_1_buf5698__p__3_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value = gp_in1_1_buf56_us_gp_in1_1_buf5698_merged512_read_bundle_read(gp_in1_1_buf56/* source_delay */, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in1_1_buf5698_cu511(gp_in1_1_buf56_floor_lp__lp_4_m_us_gp_in1_1_buf5698__p__3_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value);
	// Produce: gp_in1_1_buf56_us96
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged512_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518(lp_in0_0_buf52_cache& lp_in0_0_buf52, lp_in1_0_buf100_cache& lp_in1_0_buf100, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52
	auto lp_in0_0_buf52__lp_4_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__3_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in0_0_buf52_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read_bundle_read(lp_in0_0_buf52/* source_delay */, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_0_buf100
	auto lp_in1_0_buf100__lp_4_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__3_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in1_0_buf100_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_read_bundle_read(lp_in1_0_buf100/* source_delay */, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu516(lp_in0_0_buf52__lp_4_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__3_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value, lp_in1_0_buf100__lp_4_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__3_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value);
	// Produce: merged_0
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518_write_bundle_write(/* arg names */compute_result, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in1_0102_merged515(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, in1_cache& in1, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96
	auto gp_in1_1_buf56_us96__lp_4_m_lp_in1_0102__p__3_rp__p_0_c_____lp_in1_0101_p_0_value = gp_in1_1_buf56_us96_lp_in1_0102_merged515_read_bundle_read(gp_in1_1_buf56_us96/* source_delay */, root, lp_in1_0101, lp_in1_0102, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in1
	auto in1__lp_4_m_lp_in1_0102__p__3_rp__p_7_c_____lp_in1_0101_p_7_value = in1_lp_in1_0102_merged515_read_bundle_read(in1/* source_delay */, root, lp_in1_0101, lp_in1_0102, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in1_0102_cu513(gp_in1_1_buf56_us96__lp_4_m_lp_in1_0102__p__3_rp__p_0_c_____lp_in1_0101_p_0_value, in1__lp_4_m_lp_in1_0102__p__3_rp__p_7_c_____lp_in1_0101_p_7_value);
	// Produce: lp_in1_0_buf100
	lp_in1_0_buf100_lp_in1_0102_merged515_write_bundle_write(/* arg names */compute_result, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521(lp_in0_1_buf44_cache& lp_in0_1_buf44, lp_in1_1_buf92_cache& lp_in1_1_buf92, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44
	auto lp_in0_1_buf44__lp_2_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__1_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in0_1_buf44_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read_bundle_read(lp_in0_1_buf44/* source_delay */, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_1_buf92
	auto lp_in1_1_buf92__lp_2_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__1_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in1_1_buf92_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_read_bundle_read(lp_in1_1_buf92/* source_delay */, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu519(lp_in0_1_buf44__lp_2_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__1_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value, lp_in1_1_buf92__lp_2_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__1_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value);
	// Produce: merged_1
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521_write_bundle_write(/* arg names */compute_result, merged_1, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_merged_2_reconstruct_lp120_buf123135_merged523(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123
	auto merged_2_reconstruct_lp120_buf123_floor_lp__lp_2_m_us_merged_2_reconstruct_lp120_buf123135__p__1_rp___div__2_rp__p_0_c_____floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value = merged_2_reconstruct_lp120_buf123_us_merged_2_reconstruct_lp120_buf123135_merged523_read_bundle_read(merged_2_reconstruct_lp120_buf123/* source_delay */, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_merged_2_reconstruct_lp120_buf123135_cu522(merged_2_reconstruct_lp120_buf123_floor_lp__lp_2_m_us_merged_2_reconstruct_lp120_buf123135__p__1_rp___div__2_rp__p_0_c_____floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value);
	// Produce: merged_2_reconstruct_lp120_buf123_us133
	merged_2_reconstruct_lp120_buf123_us133_us_merged_2_reconstruct_lp120_buf123135_merged523_write_bundle_write(/* arg names */compute_result, merged_2_reconstruct_lp120_buf123_us133, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_1_reconstruct_lp129131_merged526(merged_1_cache& merged_1, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131) {
  // Dynamic address computation

	// Consume: merged_1
	auto merged_1__lp_2_m_merged_1_reconstruct_lp129131__p__1_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value = merged_1_merged_1_reconstruct_lp129131_merged526_read_bundle_read(merged_1/* source_delay */, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_2_reconstruct_lp120_buf123_us133
	auto merged_2_reconstruct_lp120_buf123_us133__lp_2_m_merged_1_reconstruct_lp129131__p__1_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value = merged_2_reconstruct_lp120_buf123_us133_merged_1_reconstruct_lp129131_merged526_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133/* source_delay */, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_1_reconstruct_lp129131_cu524(merged_1__lp_2_m_merged_1_reconstruct_lp129131__p__1_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value, merged_2_reconstruct_lp120_buf123_us133__lp_2_m_merged_1_reconstruct_lp129131__p__1_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value);
	// Produce: merged_1_reconstruct_lp129_buf132
	merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129131_merged526_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_merged_1_reconstruct_lp129_buf132144_merged528(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132
	auto merged_1_reconstruct_lp129_buf132_floor_lp__lp_4_m_us_merged_1_reconstruct_lp129_buf132144__p__3_rp___div__2_rp__p_0_c_____floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value = merged_1_reconstruct_lp129_buf132_us_merged_1_reconstruct_lp129_buf132144_merged528_read_bundle_read(merged_1_reconstruct_lp129_buf132/* source_delay */, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_merged_1_reconstruct_lp129_buf132144_cu527(merged_1_reconstruct_lp129_buf132_floor_lp__lp_4_m_us_merged_1_reconstruct_lp129_buf132144__p__3_rp___div__2_rp__p_0_c_____floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value);
	// Produce: merged_1_reconstruct_lp129_buf132_us142
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged528_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_0_reconstruct_lp138140_merged531(merged_0_cache& merged_0, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140) {
  // Dynamic address computation

	// Consume: merged_0
	auto merged_0__lp_4_m_merged_0_reconstruct_lp138140__p__3_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value = merged_0_merged_0_reconstruct_lp138140_merged531_read_bundle_read(merged_0/* source_delay */, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_1_reconstruct_lp129_buf132_us142
	auto merged_1_reconstruct_lp129_buf132_us142__lp_4_m_merged_0_reconstruct_lp138140__p__3_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value = merged_1_reconstruct_lp129_buf132_us142_merged_0_reconstruct_lp138140_merged531_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142/* source_delay */, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_0_reconstruct_lp138140_cu529(merged_0__lp_4_m_merged_0_reconstruct_lp138140__p__3_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value, merged_1_reconstruct_lp129_buf132_us142__lp_4_m_merged_0_reconstruct_lp138140__p__3_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value);
	// Produce: merged_0_reconstruct_lp138_buf141
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged531_write_bundle_write(/* arg names */compute_result, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_merged_0_reconstruct_lp138_buf141147149_merged534(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */out, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141
	auto merged_0_reconstruct_lp138_buf141__lp_4_m_pw_math_merged_0_reconstruct_lp138_buf141147149__p__3_rp__p_0_c_____pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value = merged_0_reconstruct_lp138_buf141_pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_read_bundle_read(merged_0_reconstruct_lp138_buf141/* source_delay */, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_merged_0_reconstruct_lp138_buf141147149_cu532(merged_0_reconstruct_lp138_buf141__lp_4_m_pw_math_merged_0_reconstruct_lp138_buf141147149__p__3_rp__p_0_c_____pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void two_in_blnd_4(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in0_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in1_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("two_in_blnd_4_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_cache gp_in0_1_buf8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_us48_cache gp_in0_1_buf8_us48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_cache gp_in0_2_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_us40_cache gp_in0_2_buf16_us40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_cache gp_in0_3_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_us32_cache gp_in0_3_buf24_us32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_cache gp_in1_1_buf56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_us96_cache gp_in1_1_buf56_us96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_cache gp_in1_2_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_us88_cache gp_in1_2_buf64_us88;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_cache gp_in1_3_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_us80_cache gp_in1_3_buf72_us80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in0_cache in0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in1_cache in1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_0_buf52_cache lp_in0_0_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_1_buf44_cache lp_in0_1_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_2_buf36_cache lp_in0_2_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_0_buf100_cache lp_in1_0_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_1_buf92_cache lp_in1_1_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_2_buf84_cache lp_in1_2_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_0_cache merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_0_reconstruct_lp138_buf141_cache merged_0_reconstruct_lp138_buf141;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_cache merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_cache merged_1_reconstruct_lp129_buf132;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_us142_cache merged_1_reconstruct_lp129_buf132_us142;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_cache merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_cache merged_2_reconstruct_lp120_buf123;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_us133_cache merged_2_reconstruct_lp120_buf123_us133;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_3_cache merged_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_3_us124_cache merged_3_us124;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517; lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515; us35_sm318_0444[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 18] : 0 <= d1 <= 511 and 0 <= d2 <= 511; lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; us127_sm337_0404[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 15] : 0 <= d1 <= 511 and 0 <= d2 <= 511; pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518; diff87_sm328_0362[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 20] : 0 <= d1 <= 511 and 0 <= d2 <= 511; merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 23] : 0 <= d1 <= 511 and 0 <= d2 <= 511; pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518; us83_sm327_0356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 17] : 0 <= d1 <= 511 and 0 <= d2 <= 511; merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 14] : 0 <= d1 <= 255 and 0 <= d2 <= 255; gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255; gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517; gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255; gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515; lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; diff39_sm319_0446[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 21] : 0 <= d1 <= 511 and 0 <= d2 <= 511; us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511; pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511; us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511; pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
//   { us_gp_in0_2_buf1642_merged494[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 5] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for us_gp_in0_2_buf1642_merged494(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { gp_in0_110_merged492[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 2] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
// Condition for gp_in0_110_merged492(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((518 + -1*i2)) >= 0)))
//   { lp_in1_194_merged510[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 22] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for lp_in1_194_merged510(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { gp_in0_218_merged300_sm316_0440[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 3] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
// Condition for gp_in0_218_merged300_sm316_0440(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((517 + -1*i2)) >= 0)))
//   { us35_sm318_0444[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 18] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us35_sm318_0444(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { lp_in0_054_merged502[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 13] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for lp_in0_054_merged502(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 30] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for pw_math_merged_0_reconstruct_lp138_buf141147149_merged534(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { us_merged_1_reconstruct_lp129_buf132144_merged528[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for us_merged_1_reconstruct_lp129_buf132144_merged528(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { us127_sm337_0404[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 15] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us127_sm337_0404(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { pw_math_in1_oc46_merged489[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
// Condition for pw_math_in1_oc46_merged489(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((518 + -1*i2)) >= 0)))
//   { diff87_sm328_0362[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 20] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff87_sm328_0362(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { merged_0_reconstruct_lp138140_merged531[d0 = 0, d1, d2] -> [0, 14 + d1, 4 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for merged_0_reconstruct_lp138140_merged531(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { lp_in1_0102_merged515[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 8] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for lp_in1_0102_merged515(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 23] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { pw_math_in0_oc02_merged486[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 518 }
// Condition for pw_math_in0_oc02_merged486(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((518 + -1*i2)) >= 0)))
//   { us83_sm327_0356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 17] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us83_sm327_0356(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { merged_1_reconstruct_lp129131_merged526[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 27] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for merged_1_reconstruct_lp129131_merged526(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 14] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { gp_in0_326_merged303_sm317_0442[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 10] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in0_326_merged303_sm317_0442(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { gp_in1_158_merged505[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 4] : 0 <= d1 <= 1026 and 0 <= d2 <= 517 }
// Condition for gp_in1_158_merged505(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((518 + -1*i2)) >= 0)))
//   { gp_in1_374_merged312_sm326_0358[d0 = 0, d1, d2] -> [0, 14 + 8d1, 4 + 2d2, 12] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in1_374_merged312_sm326_0358(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { gp_in1_266_merged309_sm325_0360[d0 = 0, d1, d2] -> [0, 6 + 4d1, 2 + d2, 9] : 0 <= d1 <= 512 and 0 <= d2 <= 515 }
// Condition for gp_in1_266_merged309_sm325_0360(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((517 + -1*i2)) >= 0)))
//   { lp_in0_146_merged497[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 11] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for lp_in0_146_merged497(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { us_gp_in0_1_buf850_merged499[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for us_gp_in0_1_buf850_merged499(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { us_gp_in1_2_buf6490_merged507[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for us_gp_in1_2_buf6490_merged507(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { diff39_sm319_0446[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 21] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff39_sm319_0446(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { us_gp_in1_1_buf5698_merged512[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 6] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for us_gp_in1_1_buf5698_merged512(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { rc128_sm338_0406[d0 = 0, d1, d2] -> [0, 14 + 4d1, 4 + d2, 25] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for rc128_sm338_0406(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518[d0 = 0, d1, d2] -> [0, 8 + d1, 3 + d2, 16] : 0 <= d1 <= 2047 and 0 <= d2 <= 511 }
// Condition for pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))
//   { us_merged_2_reconstruct_lp120_buf123135_merged523[d0 = 0, d1, d2] -> [0, 14 + 2d1, 4 + d2, 26] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for us_merged_2_reconstruct_lp120_buf123135_merged523(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521[d0 = 0, d1, d2] -> [0, 10 + 2d1, 3 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 511 }
// Condition for pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 2061 and 0 <= i2 <= 518 and 0 <= i3 <= 30 and ((i1 >= 14 and 4 <= i2 <= 515 and i3 >= 28) or (8 <= i1 <= 2055 and 3 <= i2 <= 514 and 6 <= i3 <= 8) or (i1 <= 2054 and i3 <= 1) or ((2 + i1) mod 4 = 0 and 14 <= i1 <= 2058 and 4 <= i2 <= 515 and 20 <= i3 <= 21) or ((2 + i1) mod 4 = 0 and 14 <= i1 <= 2058 and 4 <= i2 <= 515 and 17 <= i3 <= 18) or ((i1) mod 2 = 0 and 14 <= i1 <= 2060 and 4 <= i2 <= 515 and 26 <= i3 <= 27)); [0, i1, i2, 9] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517; [0, i1, i2, 5] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514; [0, i1, i2, 4] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 518; [0, i1, i2, 3] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517; [0, i1, i2, 2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 518; [0, i1, i2, 16] : 8 <= i1 <= 2055 and 3 <= i2 <= 514; [0, i1, i2, 14] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2054 and 4 <= i2 <= 514; [0, i1, i2, 13] : 8 <= i1 <= 2055 and 3 <= i2 <= 514; [0, i1, i2, 12] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2054 and 4 <= i2 <= 514; [0, i1, i2, 10] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2054 and 4 <= i2 <= 514; [0, i1, i2, 25] : (2 + i1) mod 4 = 0 and 14 <= i1 <= 2058 and 4 <= i2 <= 515; [0, i1, i2, 24] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514; [0, i1, i2, 23] : (2 + i1) mod 4 = 0 and 14 <= i1 <= 2058 and 4 <= i2 <= 515; [0, i1, i2, 22] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514; [0, i1, i2, 19] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514; [0, i1, i2, 15] : (2 + i1) mod 4 = 0 and 14 <= i1 <= 2058 and 4 <= i2 <= 515; [0, i1, i2, 11] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2061; i1++) {
	    for (int i2 = 0; i2 <= 518; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          pw_math_in0_oc02_merged486(in0_oc /* buf name */, in0, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          pw_math_in1_oc46_merged489(in1_oc /* buf name */, in1, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          gp_in0_110_merged492(in0 /* buf name */, gp_in0_1_buf8, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	          // { [i0, i1, i2] : 517 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((517 + -1*i2)) >= 0)))) {
	          gp_in0_218_merged300_sm316_0440(gp_in0_1_buf8 /* buf name */, gp_in0_2_buf16, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          gp_in1_158_merged505(in1 /* buf name */, gp_in1_1_buf56, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          us_gp_in0_2_buf1642_merged494(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_us40, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2055 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          us_gp_in1_1_buf5698_merged512(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_us96, 0, ((-8 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2055 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          us_gp_in0_1_buf850_merged499(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_us48, 0, ((-8 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2055 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          lp_in1_0102_merged515(gp_in1_1_buf56_us96 /* buf name */, in1 /* buf name */, lp_in1_0_buf100, 0, ((-8 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and 6 <= i1 <= 2054 and 2 <= i2 <= 517 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	          // { [i0, i1, i2] : 517 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((517 + -1*i2)) >= 0)))) {
	          gp_in1_266_merged309_sm325_0360(gp_in1_1_buf56 /* buf name */, gp_in1_2_buf64, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          gp_in0_326_merged303_sm317_0442(gp_in0_2_buf16 /* buf name */, gp_in0_3_buf24, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          lp_in0_146_merged497(gp_in0_1_buf8 /* buf name */, gp_in0_2_buf16_us40 /* buf name */, lp_in0_1_buf44, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          gp_in1_374_merged312_sm326_0358(gp_in1_2_buf64 /* buf name */, gp_in1_3_buf72, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2055 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          lp_in0_054_merged502(gp_in0_1_buf8_us48 /* buf name */, in0 /* buf name */, lp_in0_0_buf52, 0, ((-8 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (i2) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0402(gp_in0_3_buf24 /* buf name */, gp_in1_3_buf72 /* buf name */, merged_3, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          us127_sm337_0404(merged_3 /* buf name */, merged_3_us124, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : 8 <= i1 <= 2055 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2055 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged518(lp_in0_0_buf52 /* buf name */, lp_in1_0_buf100 /* buf name */, merged_0, 0, ((-8 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          us83_sm327_0356(gp_in1_3_buf72 /* buf name */, gp_in1_3_buf72_us80, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          us35_sm318_0444(gp_in0_3_buf24 /* buf name */, gp_in0_3_buf24_us32, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          us_gp_in1_2_buf6490_merged507(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_us88, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          diff87_sm328_0362(gp_in1_2_buf64 /* buf name */, gp_in1_3_buf72_us80 /* buf name */, lp_in1_2_buf84, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          diff39_sm319_0446(gp_in0_2_buf16 /* buf name */, gp_in0_3_buf24_us32 /* buf name */, lp_in0_2_buf36, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          lp_in1_194_merged510(gp_in1_1_buf56 /* buf name */, gp_in1_2_buf64_us88 /* buf name */, lp_in1_1_buf92, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0400(lp_in0_2_buf36 /* buf name */, lp_in1_2_buf84 /* buf name */, merged_2, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 3 <= i2 <= 514 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	          // { [i0, i1, i2] : 514 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((514 + -1*i2)) >= 0)))) {
	          pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_merged521(lp_in0_1_buf44 /* buf name */, lp_in1_1_buf92 /* buf name */, merged_1, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          rc128_sm338_0406(merged_2 /* buf name */, merged_3_us124 /* buf name */, merged_2_reconstruct_lp120_buf123, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          us_merged_2_reconstruct_lp120_buf123135_merged523(merged_2_reconstruct_lp120_buf123 /* buf name */, merged_2_reconstruct_lp120_buf123_us133, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          merged_1_reconstruct_lp129131_merged526(merged_1 /* buf name */, merged_2_reconstruct_lp120_buf123_us133 /* buf name */, merged_1_reconstruct_lp129_buf132, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          us_merged_1_reconstruct_lp129_buf132144_merged528(merged_1_reconstruct_lp129_buf132 /* buf name */, merged_1_reconstruct_lp129_buf132_us142, 0, ((-14 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          merged_0_reconstruct_lp138140_merged531(merged_0 /* buf name */, merged_1_reconstruct_lp129_buf132_us142 /* buf name */, merged_0_reconstruct_lp138_buf141, 0, ((-14 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	        // { [i0, i1, i2] : i1 >= 14 and 4 <= i2 <= 515 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 515 - i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((515 + -1*i2)) >= 0)))) {
	          pw_math_merged_0_reconstruct_lp138_buf141147149_merged534(merged_0_reconstruct_lp138_buf141 /* buf name */, out, 0, ((-14 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void two_in_blnd_4_wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in0_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in1_oc, HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    two_in_blnd_4(in0_oc, in1_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in0_oc02_merged486[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[3 + 4pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 518; pw_math_in0_oc02_merged486[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[2 + 4pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 518; pw_math_in0_oc02_merged486[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[1 + 4pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 518; pw_math_in0_oc02_merged486[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[4pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 518 }
const int pw_math_in0_oc02_merged486_read_pipe0_num_transfers = 1066545;
  // { pw_math_in1_oc46_merged489[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[3 + 4pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 518; pw_math_in1_oc46_merged489[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[2 + 4pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 518; pw_math_in1_oc46_merged489[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[1 + 4pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 518; pw_math_in1_oc46_merged489[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[4pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 518 }
const int pw_math_in1_oc46_merged489_read_pipe0_num_transfers = 1066545;
  // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[3 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511; pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[2 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511; pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[1 + 4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511; pw_math_merged_0_reconstruct_lp138_buf141147149_merged534[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[4pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 511 }
const int pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0_num_transfers = 1048576;


extern "C" {

void two_in_blnd_4_accel(hw_uint<128>* pw_math_in0_oc02_merged486_read_pipe0, hw_uint<128>* pw_math_in1_oc46_merged489_read_pipe0, hw_uint<128>* pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in0_oc02_merged486_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_in1_oc46_merged489_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = pw_math_in0_oc02_merged486_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_in1_oc46_merged489_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > pw_math_in0_oc02_merged486_read_pipe0_channel;
  static HWStream<hw_uint<128> > pw_math_in1_oc46_merged489_read_pipe0_channel;
  static HWStream<hw_uint<128> > pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0_channel;

  burst_read<128>(pw_math_in0_oc02_merged486_read_pipe0, pw_math_in0_oc02_merged486_read_pipe0_channel, pw_math_in0_oc02_merged486_read_pipe0_num_transfers*size);
  burst_read<128>(pw_math_in1_oc46_merged489_read_pipe0, pw_math_in1_oc46_merged489_read_pipe0_channel, pw_math_in1_oc46_merged489_read_pipe0_num_transfers*size);

  two_in_blnd_4_wrapper(pw_math_in0_oc02_merged486_read_pipe0_channel, pw_math_in1_oc46_merged489_read_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0_channel, size);

  burst_write<128>(pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0_num_transfers*size);
}

}
extern "C" {

void two_in_blnd_4_rdai(HWStream<hw_uint<128> >& pw_math_in0_oc02_merged486_read_pipe0, HWStream<hw_uint<128> >& pw_math_in1_oc46_merged489_read_pipe0, HWStream<hw_uint<128> >&  pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in0_oc02_merged486_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_in1_oc46_merged489_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  two_in_blnd_4(pw_math_in0_oc02_merged486_read_pipe0, pw_math_in1_oc46_merged489_read_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147149_merged534_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

