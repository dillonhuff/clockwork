#pragma once
#include "prog.h"

prog conv_multi(); //?
prog strided_conv();
prog accumulation(); //reduce
prog unsharp();
prog cascade(); //stencil
prog gaussian(); //stencil
prog harris(); //stencil
prog pointwise(); //point
prog brighten_blur(); //stencil
prog halide_harris();
prog unet_conv_3_3(); //reduce
prog resnet(); //reduce
//prog mini_conv_halide_fixed();
prog camera_pipeline(); //stencil
prog up_sample(); 
prog down_sample();
prog conv_layer(); //reduce
prog camera_pipeline_dse_1();
prog rom();
prog bilateral();
prog stereo();
prog histogram();
prog mobilenet();
