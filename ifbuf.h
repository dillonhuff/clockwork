#pragma once


#include "hw_classes.h"

void ifbuf(InputStream<hw_uint<128> >& dma_if_write, OutputStream<hw_uint<128> >& mac_read);
