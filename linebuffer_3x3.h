#pragma once


#include "hw_classes.h"

void linebuffer_3x3(OutputStream<int>& read_0_0
, OutputStream<int>& read_0_1
, OutputStream<int>& read_0_2
, OutputStream<int>& read_1_0
, OutputStream<int>& read_1_1
, OutputStream<int>& read_1_2
, OutputStream<int>& read_2_0
, OutputStream<int>& read_2_1
, OutputStream<int>& read_2_2
, InputStream<int>& write0
);
