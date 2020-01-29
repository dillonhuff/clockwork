#include "hw_classes.h"

void conv_1d(HWStream<int>& in, HWStream<int>& out) {
  int M[10];

  for (int i = 0; i < 10; i++) {
get_input: M[i] = in.read();
  }

  for (int i = 0; i < 10 - 2; i++) {
compute_output: out.write(M[i] + M[i + 1] + M[i + 2]);
  }
	
}
