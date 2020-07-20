#pragma once

#include "hw_classes.h"

hw_uint<32> simple_upsample_plus_one(const hw_uint<32>& in) {
  return in + 1;
}
