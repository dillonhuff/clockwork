#include "linebuffer_3x3.h"

#include <iostream>

using namespace std;

int main() {
  InputStream write0;
  for (int r = 0; r < 64; r++) {
    for (int c = 0; c < 64; c++) {
      write0.write(r*64 + c);
    }
  }

  OutputStream read0,
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
    read0.read();
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
