#pragma once

#include <string>

using namespace std;

template<int width>
string binary_string(ap_uint<width>& val) {
  ostringstream ss;
  for (int i = width - 1; i >= 0; i--) {
    ss << val[i];
  }
  return ss.str();
}

template<int bits_per_pixel>
static
void fill_array(const string& in_name,
    ap_uint<BURST_WIDTH>* input,
    const int nrows,
    const int ncols,
    const int transfer_cols) {

  ofstream in(in_name);
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      auto offset = r*transfer_cols + c;

      ap_uint<BURST_WIDTH>* val = &(input[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        ap_uint<PIXEL_WIDTH> next_pix = r*ncols + c + l;
        in << binary_string(next_pix) << endl;
        (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel) = next_pix;
      }
    }
  }

  in.close();
}

template<int bits_per_pixel>
static
void write_results(const std::string& out_name,
    ap_uint<BURST_WIDTH>* y_res,
    const int nrows,
    const int ncols,
    const int transfer_cols) {

  ofstream out(out_name);
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      auto offset = r*transfer_cols + c;

      ap_uint<BURST_WIDTH>* val = &(y_res[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        ap_uint<bits_per_pixel> v = (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel);
        out << binary_string(v) << endl;
      }
    }
  }
  out.close();

}
