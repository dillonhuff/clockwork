#pragma once


#include "hw_classes.h"

void shift_reg(OutputStream<hw_uint<32> >& read0, OutputStream<hw_uint<32> >& read1, OutputStream<hw_uint<32> >& read2, InputStream<hw_uint<32> >& write);
