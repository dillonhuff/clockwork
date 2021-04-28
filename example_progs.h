#pragma once
#include "prog.h"

prog fft8_unroll0();
prog fft8_unroll2();
prog fft8_unroll4();
prog fft8_unroll8();
prog fft8_unroll8_ratematch();
prog fft8_unroll8_pease();
prog fft8_unroll8_split();

prog counter();
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
prog conv_3_3_wide(); //stencil
prog conv_1_2(); //stencil
prog unet_conv_3_3(); //reduce
prog resnet(); //reduce
prog resnet_simple(); //for regfile debug
//prog mini_conv_halide_fixed();
prog camera_pipeline(); //stencil
prog camera_pipeline_new(); //stencil
//prog camera_pipeline_new_trunc(); //stencil
//prog camera_pipeline_trunc(); //stencil
prog up_sample();
prog up_sample_exp();
prog down_sample();
prog conv_layer(); //reduce
prog camera_pipeline_dse_1();
prog rom();
prog demosaic_complex();
prog demosaic_2x2();
prog demosaic_unrolled();
prog bilateral();
prog stereo();
prog histogram();
prog mobilenet();
prog mobilenet_small();
prog three_level_memory();
prog three_level_pond();
prog three_level_pond_rolled();
prog resnet_unrolled();
prog resnet88();
prog resnet88_chain();
prog resnet_coarse_pipeline_loop();
prog mobilenet_unrolled();
prog harris_sch1_onebuf();
prog harris_sch2_fourbuf();
prog harris_sch3_1pp9c();
prog harris_sch4_1pp3c();
prog harris_sch5_1ppc();
prog harris_sch6_2ppc();
prog harris_sch7_bigtile();
prog harris_sch8_endcim();
prog three_level_memory_two();
prog fft8_unroll8();

//SMT test
prog conv_3_3(int32_t, int32_t, string);
prog cascade(int32_t, int32_t, string);
prog harris(int32_t, int32_t, string);
prog resnet_full_layer();
prog histogram1d();

prog jitnet();
//prog exposure_fusion();
prog conv1x1();
prog mod_example();
prog three_level_pond_copy();
