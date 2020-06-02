#include "bitmap_image.hpp"
#include <iostream>

using namespace std;

int main() {

  bitmap_image image("./images/taxi.bmp");
  
  //int rows = 128;
  //int cols = 128;

  int size = 128;

  int rows = size;
  int cols = size;

  int row_start = 500;
  int col_start = 500;

  bitmap_image smaller(cols, rows);
  for (int r = row_start; r < row_start + rows; r++) {
    for (int c = col_start; c < col_start + cols; c++) {
      //cout << "r, c = " << r << ", " << c << endl;
      rgb_t pix;
      image.get_pixel(c, r, pix);
      //cout << "setting pixels" << endl;
      smaller.set_pixel(c - col_start, r - row_start, pix);
    }
  }

  smaller.save_image("taxi_slice_" + to_string(size) + ".bmp");
}
