#pragma once
#include "prog.h"

prog conv_multi(); //multiple-tile-cnn
prog strided_conv();
prog accumulation(); //reduce
prog unsharp();
prog cascade(); //stencil
prog gaussian(); //stencil
prog harris(); //stencil
prog harris_remove(); //manually edit
prog pointwise(); //point
prog brighten_blur(); //stencil
prog halide_harris();
prog conv_3_3(); //stencil
prog conv_1_2(); //stencil
prog unet_conv_3_3(); //reduce
prog resnet(); //reduce
//prog mini_conv_halide_fixed();
prog camera_pipeline(); //stencil
prog up_sample();
prog down_sample();
prog conv_layer(); //reduce
prog camera_pipeline_dse_1();
prog rom();
prog demosaic_complex();
prog bilateral();
prog stereo();
prog histogram();
prog mobilenet();
prog mobilenet_small();
prog three_level_memory();
prog resnet_layer_gen();