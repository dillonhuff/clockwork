#include "linebuffer_3x3.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  InputStream<hw_uint<32> > write0;
  vector<int> img;
  for (int r = 0; r < 64; r++) {
    for (int c = 0; c < 64; c++) {
      write0.write(r*64 + c);
      img.push_back(r*64 + c);
    }
  }

  vector<int> expected;
  for (int r = 0; r < 62; r++) {
    for (int c = 0; c < 62; c++) {

      int res = 0;
      for (int ri = 0; ri < 3; ri++) {
        for (int ci = 0; ci < 3; ci++) {
          res += img.at((r + ri)* 64 + c + ci);
        }
      }
      expected.push_back(res);
    }
  }

  OutputStream<hw_uint<32> > read0,
               read1,
               read2,
               read3,
               read4,
               read5,
               read6,
               read7,
               read8;


  linebuffer_3x3(read0,
      read1,
      read2,
      read3,
      read4,
      read5,
      read6,
      read7,
      read8,
      write0);


  for (int v = 0; v < 62*62; v++) {
    int rv = (int) read0.read();
    //cout << "rv[" << v << "] = " << rv << ", expecting: " << expected.at(v) << endl;
    //assert(rv == expected.at(v));
    //read0.read();
    //read1.read();
    //read2.read();
    //read3.read();
    //read4.read();
    //read5.read();
    //read6.read();
    //read7.read();
    //read8.read();
  }

  return 0;
}
