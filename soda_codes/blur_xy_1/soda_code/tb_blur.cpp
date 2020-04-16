#include "blur.h"

#include <iostream>
#include <fstream>

#define BURST_WIDTH 16
#define PIXEL_WIDTH 16

using namespace std;


template<int pixel_width>
struct Image {

  int nrows;
  int ncols;
  ap_uint<pixel_width>* pixels;

  Image(const int ncols_, const int nrows_) : ncols(ncols_), nrows(nrows_) {
    pixels = new ap_uint<pixel_width>(ncols*nrows);
  }

  ~Image() {
    delete pixels;
  }

  ap_uint<pixel_width>& operator()(const int c, const int r) {
    return pixels.at(r*ncols + c);
  }

  Image<pixel_width> pad_cols(const int multiple) const {
    int leftover = ncols - (ncols / multiple)*multiple;
    Image<pixel_width> padded(ncols + leftover, nrows);

    assert(padded.ncols % multiple == 0);

    for (int r = 0; r < nrows; r++) {
      for (int c = 0; c < ncols; c++) {
        padded(c, r) = (*this)(c, r);
      }
    }

    return padded;
  }

  template<int packed_width>
  Image<packed_width> pack_pixels(const int multiple) const {
    assert(false);
    //int leftover = ncols - (ncols / multiple)*multiple;
    Image<packed_width> packed(ncols, nrows);

    //assert(padded.ncols % multiple == 0);

    return packed;
  }
};

int main() {

  const int nrows = 32;
  const int ncols = 32;

  uint64_t img_pixels=
    nrows*ncols;

  const uint64_t bits_per_pixel = PIXEL_WIDTH;
  uint64_t img_bits =
    bits_per_pixel*img_pixels;

  const uint64_t num_transfers =
    img_bits / BURST_WIDTH;

  const uint64_t pixels_per_burst =
    BURST_WIDTH / bits_per_pixel;

  cout << "num transfers    : " << num_transfers << endl;
  cout << "pixels / transfer: " << pixels_per_burst << endl;

  const uint64_t transfer_cols =
    ncols / pixels_per_burst;

  ap_uint<BURST_WIDTH>* y_res =
    (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);
  ap_uint<BURST_WIDTH>* input =
    (ap_uint<BURST_WIDTH>*) malloc(sizeof(ap_uint<BURST_WIDTH>) * num_transfers);
  ofstream in("input_pixels.csv");
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      //cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      //cout << "offset = " << offset << endl;

      ap_uint<BURST_WIDTH>* val = &(input[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        ap_uint<PIXEL_WIDTH> next_pix = r*ncols + c + l;
        in << next_pix << endl;
        (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel) = next_pix;
      }
    }
  }

  in.close();
  blur_kernel(y_res,
      input,
      num_transfers);

  cout << "Results..." << endl;
  ofstream out("soda_blur_xy_unrolled_opt_16.csv");
  for (int r = 0; r < nrows; r++) {
    for (int c = 0; c < transfer_cols; c++) {

      //cout << "r = " << r << ", c = " << c << endl;
      auto offset = r*transfer_cols + c;
      //cout << "offset = " << offset << endl;

      ap_uint<BURST_WIDTH>* val = &(y_res[offset]);
      for (int l = 0; l < (BURST_WIDTH / bits_per_pixel); l++) {
        out << (*val)(l*bits_per_pixel + bits_per_pixel - 1, l*bits_per_pixel) << endl;
      }

    }
    //cout << endl;
  }
  out.close();
  cout << "Done" << endl;

}
