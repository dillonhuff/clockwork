#include "reduce_1d.h"

int main() {
  HWStream<hw_uint<32> > in, out;
  int sum = 0;
  for (int i = 0; i < 14; i++) {
    in.write(i*3);
    sum += i*3;
  }
  reduce_1d(in, out);

  int result = out.read();
  cout << "result = " << result << endl;
  cout << "expect = " << sum << endl;
  assert(result == sum);

  return 0;
}
