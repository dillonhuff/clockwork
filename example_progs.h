#pragma once
#include "prog.h"

prog fp_arith();
prog fp_pointwise();

prog fft8_unroll0();
prog fft8_unroll2();
prog fft8_unroll4();
prog fft8_unroll8();
prog fft8_unroll8_ratematch();
prog fft8_unroll8_pease();
prog fft8_unroll8_split();
prog laplacian_composite();
prog laplacian_pyramid();
prog laplacian_pyramid_docker();
prog counter();
prog conv_multi(); //multiple-tile-cnn
prog strided_conv();
prog accumulation(); //reduce
prog accumulation_simple(); //reduce
prog unsharp();
prog unsharp_new();
prog unsharp_large();
prog cascade(); //stencil
prog cascade_coarse(); //stencil
prog gaussian(); //stencil


//Gaussian pyramid without sharing
prog gpyr_default(); //pyramid
//Gaussian pyramid with compute sharing
prog gpyr_tagged(); //pyramid
//Gaussian pyramid with unroll glb transfer
prog gpyr_unroll(); //pyramid
prog gpyr_unroll_default(); //pyramid

prog harris(); //stencil
prog harris_remove(); //manually edit
prog pointwise(); //point
prog pointwise_conv(); //use for buffet test
prog brighten_blur(); //stencil
prog brighten_blur_paper(); //stencil
prog halide_harris();

prog nlmeans();
prog nlmeans_unroll();
prog nlmeans_small();
prog nlmeans_unroll_reorder();
prog nlmeans_rolled_int();
prog nlmeans_simple();
prog nlmeans_simple_trunc();
prog nlmeans_simple_blur();
prog nlmeans_rolled_7x7();
prog conv_3_3(); //stencil
prog conv_3_3_reorder(); //unit test without core ir compute
prog conv_3_3_buffet(); //stencil
prog conv_unit_test(); //stencil
prog bank_test(); //stencil

prog conv_3_3_wide(); //stencil
prog conv_3_3_rolled(); //stencil
prog conv_1_2(); //stencil
prog conv_1_3(); //stencil
prog conv_1_3_buffet(); //stencil
prog conv_rolled(); //stencil
prog unet_conv_3_3(); //reduce
prog resnet(); //reduce
prog resnet_simple(); //for regfile debug
prog resnet_tiny(); //for regfile debug
prog resnet_size_test(); //for schedule debug
prog resnet_multi_tiny(); //for regfile debug
//prog mini_conv_halide_fixed();

//all camera pipeline variants
prog camera_pipeline(); //stencil
prog camera_pipeline_new(); //stencil
prog camera_pipeline_isscc(); //stencil
prog camera_pipeline_2x2(); //compute demosaic directly from denoised
prog camera_pipeline_2x2_unroll(); //compute demosaic directly from denoised
prog camera_pipeline_2x2_unrollx(); //compute demosaic directly from denoised
prog camera_pipeline_unrolly(); //stencil
prog camera_pipeline_extra_buf(); //stencil

//This doesn't work in scheduler
prog camera_pipeline_extra_buf_glb(); //stencil

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
prog stereo_unroll();
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
prog resnet_one_input();

//SMT test
prog conv_3_3(int32_t, int32_t, string);
prog cascade(int32_t, int32_t, string);
prog harris(int32_t, int32_t, string);
prog resnet_full_layer();
prog histogram1d();

prog jitnet();
prog exposure_fusion_halide();
prog conv1x1();
prog mod_example();
prog three_level_pond_copy();

//GLB applications
prog glb_conv33();
prog glb_db();
prog glb_channel_reduction();
prog resnet_glb();
prog gaussian_isscc();
prog gaussian_glb();
prog gaussian_glb2();
prog gaussian_glb8();
prog gaussian_aha();
prog unsharp_glb();
prog unsharp_isscc();
prog up_sample_glb();
prog harris_color();
prog harris_color_unroll4();
prog harris_glb2();
prog camera_pipeline_glb();

prog matmul();
prog matmul_tiny();
prog matmul_unroll2();
prog matmul_single();
prog matmul_single_m1();
prog matmul_fpga();
prog gemm();
prog gemm_reorder();

prog maxpool_layer();

prog fsrcnn();
prog fsrcnn_shared();
prog fsrcnn_reorder();
//resnet without input tiling
prog resnet_output_stationary_i16();
prog resnet_output_stationary_i8();
prog resnet_init_unroll();
prog resnet_init_unroll_tile();
prog resnet_init_unroll_tile_dp();
prog resnet3_1();
prog resnet_1x1();
prog resnet1();
prog resnet1_docker();
prog resnet4_x();
prog resnet3_x_glb_unroll();
prog resnet3_x_tiny();
prog resnet5_x();
prog resnet5_x_docker();
prog resnet5_1();
prog resnet5_1_new();
prog resnet5_1_unroll();
prog resnet5_x_unroll();
prog resnet5_x_unroll_mic();
prog resnet5_glb_unroll();
prog resnet5_1_unroll_cyclic();
prog resnet5_x_new();
prog resnet_multi_channel();
prog resnet16x16();
prog resnet16x16_mic();
prog resnet16x16_mic_moc();
prog resnet_mic_moc();

//Full layer simulation
prog resnet_output_stationary_small();
prog resnet_output_stationary_tiny();
prog resnet_output_stationary();
prog resnet_output_stationary_full();

//Full Resnet experiement
prog resnet5_1_unroll_full();
prog resnet5_x_unroll_full();
prog resnet5_x_full();
prog resnet5_1_full();
prog resnet4_x_full();
prog resnet4_1_full();
prog resnet3_x_full();
prog resnet3_1_full();
prog resnet2_x_full();
prog resnet1_full();
prog resnet_last();

//pond resnet test
prog complex_mem_pond_rolled();
prog complex_mem_pond();
prog complex_mem_pond_input();

prog lucas_kanade();

prog bc_const();
prog bc_repeat();
prog bc_mirror();

prog gaussian_unroll();
prog gaussian_unroll14();
