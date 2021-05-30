#include "example_progs.h"

//prog jitnet() {
  //prog prg;
  //prg.compute_unit_file = "jitnet_compute.h";
  //prg.name = "jitnet";

//// Stencil<float, 8, 3, 3, 3> &conv1_weights_im_global_wrapper_stencil = arg_0;
  //prg.add_input("conv1_weights_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv1_weights_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 8, 3, 3, 8> &conv2_weights_im_global_wrapper_stencil = arg_1;
  //prg.add_input("conv2_weights_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv2_weights_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32, 3, 3, 32> &conv3_weights_im_global_wrapper_stencil = arg_2;
  //prg.add_input("conv3_weights_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv3_weights_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 18, 3, 3, 32> &conv4_weights_im_global_wrapper_stencil = arg_3;
  //prg.add_input("conv4_weights_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv4_weights_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32, 1, 1, 32> &conv5_weights_im_global_wrapper_stencil = arg_4;
  //prg.add_input("conv5_weights_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv5_weights_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 8> &conv_mu_0_im_global_wrapper_stencil = arg_5;
  //prg.add_input("conv_mu_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_mu_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32> &conv_mu_10_im_global_wrapper_stencil = arg_6;
  //prg.add_input("conv_mu_10_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_mu_10_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 8> &conv_mu_1_im_global_wrapper_stencil = arg_7;
  //prg.add_input("conv_mu_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_mu_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32> &conv_mu_8_im_global_wrapper_stencil = arg_8;
  //prg.add_input("conv_mu_8_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_mu_8_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 18> &conv_mu_9_im_global_wrapper_stencil = arg_9;
  //prg.add_input("conv_mu_9_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_mu_9_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 8> &conv_sigma_0_im_global_wrapper_stencil = arg_10;
  //prg.add_input("conv_sigma_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_sigma_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32> &conv_sigma_10_im_global_wrapper_stencil = arg_11;
  //prg.add_input("conv_sigma_10_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_sigma_10_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 8> &conv_sigma_1_im_global_wrapper_stencil = arg_12;
  //prg.add_input("conv_sigma_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_sigma_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32> &conv_sigma_8_im_global_wrapper_stencil = arg_13;
  //prg.add_input("conv_sigma_8_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_sigma_8_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 18> &conv_sigma_9_im_global_wrapper_stencil = arg_14;
  //prg.add_input("conv_sigma_9_im_global_wrapper_stencil");
  //prg.buffer_port_widths["conv_sigma_9_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32, 3, 3, 128> &dec1_weights_0_im_global_wrapper_stencil = arg_15;
  //prg.add_input("dec1_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec1_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32, 1, 3, 32> &dec1_weights_1_im_global_wrapper_stencil = arg_16;
  //prg.add_input("dec1_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec1_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 12, 3, 1, 32> &dec1_weights_2_im_global_wrapper_stencil = arg_17;
  //prg.add_input("dec1_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec1_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 12, 1, 1, 128> &dec1_weights_3_im_global_wrapper_stencil = arg_18;
  //prg.add_input("dec1_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec1_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 3, 3, 192> &dec2_weights_0_im_global_wrapper_stencil = arg_19;
  //prg.add_input("dec2_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec2_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 1, 3, 64> &dec2_weights_1_im_global_wrapper_stencil = arg_20;
  //prg.add_input("dec2_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec2_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 66, 3, 1, 64> &dec2_weights_2_im_global_wrapper_stencil = arg_21;
  //prg.add_input("dec2_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec2_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 66, 1, 1, 192> &dec2_weights_3_im_global_wrapper_stencil = arg_22;
  //prg.add_input("dec2_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec2_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 40, 3, 3, 128> &dec3_weights_0_im_global_wrapper_stencil = arg_23;
  //prg.add_input("dec3_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec3_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 1, 3, 128> &dec3_weights_1_im_global_wrapper_stencil = arg_24;
  //prg.add_input("dec3_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec3_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 98, 3, 1, 128> &dec3_weights_2_im_global_wrapper_stencil = arg_25;
  //prg.add_input("dec3_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec3_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 98, 1, 1, 128> &dec3_weights_3_im_global_wrapper_stencil = arg_26;
  //prg.add_input("dec3_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["dec3_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 3, 3, 8> &enc1_weights_0_im_global_wrapper_stencil = arg_27;
  //prg.add_input("enc1_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc1_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 1, 3, 64> &enc1_weights_1_im_global_wrapper_stencil = arg_28;
  //prg.add_input("enc1_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc1_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 3, 1, 64> &enc1_weights_2_im_global_wrapper_stencil = arg_29;
  //prg.add_input("enc1_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc1_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 1, 1, 8> &enc1_weights_3_im_global_wrapper_stencil = arg_30;
  //prg.add_input("enc1_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc1_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 3, 3, 64> &enc2_weights_0_im_global_wrapper_stencil = arg_31;
  //prg.add_input("enc2_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc2_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 64, 1, 3, 64> &enc2_weights_1_im_global_wrapper_stencil = arg_32;
  //prg.add_input("enc2_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc2_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 192, 3, 1, 64> &enc2_weights_2_im_global_wrapper_stencil = arg_33;
  //prg.add_input("enc2_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc2_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 192, 1, 1, 64> &enc2_weights_3_im_global_wrapper_stencil = arg_34;
  //prg.add_input("enc2_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc2_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 40, 3, 3, 64> &enc3_weights_0_im_global_wrapper_stencil = arg_35;
  //prg.add_input("enc3_weights_0_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc3_weights_0_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 1, 3, 128> &enc3_weights_1_im_global_wrapper_stencil = arg_36;
  //prg.add_input("enc3_weights_1_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc3_weights_1_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 3, 1, 128> &enc3_weights_2_im_global_wrapper_stencil = arg_37;
  //prg.add_input("enc3_weights_2_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc3_weights_2_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 128, 1, 1, 64> &enc3_weights_3_im_global_wrapper_stencil = arg_38;
  //prg.add_input("enc3_weights_3_im_global_wrapper_stencil");
  //prg.buffer_port_widths["enc3_weights_3_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 3, 720, 23695> &input_im_global_wrapper_stencil = arg_39;
  //prg.add_input("input_im_global_wrapper_stencil");
  //prg.buffer_port_widths["input_im_global_wrapper_stencil"] = 32;
//// Stencil<float, 32, 1280, 720> &conv5_relu_stencil = arg_40;
  //prg.add_output("conv5_relu_stencil");
  //prg.buffer_port_widths["conv5_relu_stencil"] = 32;

//////producing dec1_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto dec1_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec1_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec1_weights_3_im_global_wrapper_global_wrapper_s0__0 = dec1_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("dec1_weights_3_im_global_wrapper_global_wrapper_s0__0", -2, 10);

////store is: dec1_weights_3_im_global_wrapper_global_wrapper.stencil((dec1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 2), 0, 0, dec1_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_3_im_global_wrapper.stencil(dec1_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec1_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil = dec1_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("dec1_weights_3_im_global_wrapper_stencil", "dec1_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "dec1_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec1_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec1_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("dec1_weights_3_im_global_wrapper_global_wrapper_stencil", "dec1_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "(dec1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 2)");

////consuming dec1_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing dec2_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto dec2_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec2_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 192);
  //auto dec2_weights_3_im_global_wrapper_global_wrapper_s0__0 = dec2_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("dec2_weights_3_im_global_wrapper_global_wrapper_s0__0", -1, 65);

////store is: dec2_weights_3_im_global_wrapper_global_wrapper.stencil((dec2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1), 0, 0, dec2_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_3_im_global_wrapper.stencil(dec2_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec2_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil = dec2_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("dec2_weights_3_im_global_wrapper_stencil", "dec2_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "dec2_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec2_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec2_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("dec2_weights_3_im_global_wrapper_global_wrapper_stencil", "dec2_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "(dec2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming dec2_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing dec3_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto dec3_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec3_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec3_weights_3_im_global_wrapper_global_wrapper_s0__0 = dec3_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("dec3_weights_3_im_global_wrapper_global_wrapper_s0__0", -1, 97);

////store is: dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1), 0, 0, dec3_weights_3_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_3_im_global_wrapper.stencil(dec3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, dec3_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil = dec3_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("dec3_weights_3_im_global_wrapper_stencil", "dec3_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "dec3_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec3_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec3_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("dec3_weights_3_im_global_wrapper_global_wrapper_stencil", "dec3_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "(dec3_weights_3_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming dec3_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing input_im_global_wrapper_global_wrapper.stencil
  //auto input_im_global_wrapper_global_wrapper_s0__2 = prg.add_loop("input_im_global_wrapper_global_wrapper_s0__2", -343, 23352);
  //auto input_im_global_wrapper_global_wrapper_s0__1 = input_im_global_wrapper_global_wrapper_s0__2->add_loop("input_im_global_wrapper_global_wrapper_s0__1", 0, 720);
  //auto input_im_global_wrapper_global_wrapper_s0__0 = input_im_global_wrapper_global_wrapper_s0__1->add_loop("input_im_global_wrapper_global_wrapper_s0__0", 0, 3);

////store is: input_im_global_wrapper_global_wrapper.stencil(input_im_global_wrapper_global_wrapper_s0__0, input_im_global_wrapper_global_wrapper_s0__1, (input_im_global_wrapper_global_wrapper_s0__2 + 343)) = input_im_global_wrapper.stencil(input_im_global_wrapper_global_wrapper_s0__0, input_im_global_wrapper_global_wrapper_s0__1, input_im_global_wrapper_global_wrapper_s0__2)
  //auto hcompute_input_im_global_wrapper_global_wrapper_stencil = input_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_input_im_global_wrapper_global_wrapper_stencil");
  //hcompute_input_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_input_im_global_wrapper_global_wrapper_stencil");
  //hcompute_input_im_global_wrapper_global_wrapper_stencil->add_load("input_im_global_wrapper_stencil", "input_im_global_wrapper_global_wrapper_s0__2", "input_im_global_wrapper_global_wrapper_s0__1", "input_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["input_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_input_im_global_wrapper_global_wrapper_stencil->add_store("input_im_global_wrapper_global_wrapper_stencil", "(input_im_global_wrapper_global_wrapper_s0__2 + 343)", "input_im_global_wrapper_global_wrapper_s0__1", "input_im_global_wrapper_global_wrapper_s0__0");

////consuming input_im_global_wrapper_global_wrapper.stencil
//////producing conv1_weights_im_global_wrapper_global_wrapper.stencil
  //auto conv1_weights_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("conv1_weights_im_global_wrapper_global_wrapper_s0__3", 0, 3);
  //auto conv1_weights_im_global_wrapper_global_wrapper_s0__2 = conv1_weights_im_global_wrapper_global_wrapper_s0__3->add_loop("conv1_weights_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto conv1_weights_im_global_wrapper_global_wrapper_s0__1 = conv1_weights_im_global_wrapper_global_wrapper_s0__2->add_loop("conv1_weights_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto conv1_weights_im_global_wrapper_global_wrapper_s0__0 = conv1_weights_im_global_wrapper_global_wrapper_s0__1->add_loop("conv1_weights_im_global_wrapper_global_wrapper_s0__0", 0, 8);

////store is: conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_weights_im_global_wrapper_global_wrapper_s0__0, conv1_weights_im_global_wrapper_global_wrapper_s0__1, conv1_weights_im_global_wrapper_global_wrapper_s0__2, conv1_weights_im_global_wrapper_global_wrapper_s0__3) = conv1_weights_im_global_wrapper.stencil(conv1_weights_im_global_wrapper_global_wrapper_s0__0, conv1_weights_im_global_wrapper_global_wrapper_s0__1, conv1_weights_im_global_wrapper_global_wrapper_s0__2, conv1_weights_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil = conv1_weights_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil->add_load("conv1_weights_im_global_wrapper_stencil", "conv1_weights_im_global_wrapper_global_wrapper_s0__3", "conv1_weights_im_global_wrapper_global_wrapper_s0__2", "conv1_weights_im_global_wrapper_global_wrapper_s0__1", "conv1_weights_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv1_weights_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv1_weights_im_global_wrapper_global_wrapper_stencil->add_store("conv1_weights_im_global_wrapper_global_wrapper_stencil", "conv1_weights_im_global_wrapper_global_wrapper_s0__3", "conv1_weights_im_global_wrapper_global_wrapper_s0__2", "conv1_weights_im_global_wrapper_global_wrapper_s0__1", "conv1_weights_im_global_wrapper_global_wrapper_s0__0");

////consuming conv1_weights_im_global_wrapper_global_wrapper.stencil
//////producing conv_mu_0_im_global_wrapper_global_wrapper.stencil
  //auto conv_mu_0_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_mu_0_im_global_wrapper_global_wrapper_s0__0", 0, 8);

////store is: conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv_mu_0_im_global_wrapper_global_wrapper_s0__0) = conv_mu_0_im_global_wrapper.stencil(conv_mu_0_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil = conv_mu_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil->add_load("conv_mu_0_im_global_wrapper_stencil", "conv_mu_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_mu_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_mu_0_im_global_wrapper_global_wrapper_stencil->add_store("conv_mu_0_im_global_wrapper_global_wrapper_stencil", "conv_mu_0_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_mu_0_im_global_wrapper_global_wrapper.stencil
//////producing conv_sigma_0_im_global_wrapper_global_wrapper.stencil
  //auto conv_sigma_0_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_sigma_0_im_global_wrapper_global_wrapper_s0__0", 0, 8);

////store is: conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv_sigma_0_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_0_im_global_wrapper.stencil(conv_sigma_0_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil = conv_sigma_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil->add_load("conv_sigma_0_im_global_wrapper_stencil", "conv_sigma_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_sigma_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_sigma_0_im_global_wrapper_global_wrapper_stencil->add_store("conv_sigma_0_im_global_wrapper_global_wrapper_stencil", "conv_sigma_0_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_sigma_0_im_global_wrapper_global_wrapper.stencil
//////producing conv1_relu.stencil
  //auto conv1_relu_s0_j = prg.add_loop("conv1_relu_s0_j", -171, 11676);
  //auto conv1_relu_s0_c = conv1_relu_s0_j->add_loop("conv1_relu_s0_c", 0, 8);
//////producing conv1.stencil

////store is: conv1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv1_stencil = conv1_relu_s0_c->add_op("op_hcompute_conv1_stencil");
  //hcompute_conv1_stencil->add_function("hcompute_conv1_stencil");
  //prg.buffer_port_widths["conv1_stencil"] = 32;
  //hcompute_conv1_stencil->add_store("conv1_stencil", "0", "0", "0");
  //auto conv1_s1_r_z = conv1_relu_s0_c->add_loop("conv1_s1_r_z", 0, 3);
  //auto conv1_s1_r_y = conv1_s1_r_z->add_loop("conv1_s1_r_y", 0, 3);
  //auto conv1_s1_r_x = conv1_s1_r_y->add_loop("conv1_s1_r_x", 0, 3);

////store is: conv1.stencil(0, 0, 0) = (conv1.stencil(0, 0, 0) + (conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c, conv1_s1_r_y, conv1_s1_r_z, conv1_s1_r_x)*select((conv1_s1_r_y < 1), 0.000000f, input_im_global_wrapper_global_wrapper.stencil(conv1_s1_r_x, (max(conv1_s1_r_y, 1) + -1), (((conv1_relu_s0_j*2) + conv1_s1_r_z) + 342)))))
  //auto hcompute_conv1_stencil_1 = conv1_s1_r_x->add_op("op_hcompute_conv1_stencil_1");
  //hcompute_conv1_stencil_1->add_function("hcompute_conv1_stencil_1");
  //hcompute_conv1_stencil_1->add_load("conv1_stencil", "0", "0", "0");
  //hcompute_conv1_stencil_1->add_load("conv1_weights_im_global_wrapper_global_wrapper_stencil", "conv1_s1_r_x", "conv1_s1_r_z", "conv1_s1_r_y", "conv1_relu_s0_c");
  //hcompute_conv1_stencil_1->add_load("input_im_global_wrapper_global_wrapper_stencil", "(((conv1_relu_s0_j*2) + conv1_s1_r_z) + 342)", "(max(conv1_s1_r_y, 1) + -1)", "conv1_s1_r_x");
  //hcompute_conv1_stencil_1->add_store("conv1_stencil", "0", "0", "0");
  //hcompute_conv1_stencil_1->compute_unit_needs_index_variable("conv1_s1_r_y");

////consuming conv1.stencil

////store is: conv1_relu.stencil(conv1_relu_s0_c, 0, (conv1_relu_s0_j + 171)) = max(((conv1.stencil(0, 0, 0) - conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c))/sqrt_f32((conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c) + 0.000010f))), 0.000000f)
  //auto hcompute_conv1_relu_stencil = conv1_relu_s0_c->add_op("op_hcompute_conv1_relu_stencil");
  //hcompute_conv1_relu_stencil->add_function("hcompute_conv1_relu_stencil");
  //hcompute_conv1_relu_stencil->add_load("conv1_stencil", "0", "0", "0");
  //hcompute_conv1_relu_stencil->add_load("conv_mu_0_im_global_wrapper_global_wrapper_stencil", "conv1_relu_s0_c");
  //hcompute_conv1_relu_stencil->add_load("conv_sigma_0_im_global_wrapper_global_wrapper_stencil", "conv1_relu_s0_c");
  //prg.buffer_port_widths["conv1_relu_stencil"] = 32;
  //hcompute_conv1_relu_stencil->add_store("conv1_relu_stencil", "(conv1_relu_s0_j + 171)", "0", "conv1_relu_s0_c");
  //auto conv1_relu_s0_i = conv1_relu_s0_j->add_loop("conv1_relu_s0_i", 1, 360);
  //auto conv1_relu_s0_c_1 = conv1_relu_s0_i->add_loop("conv1_relu_s0_c_1", 0, 8);
//////producing conv1.stencil

////store is: conv1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv1_stencil_2 = conv1_relu_s0_c_1->add_op("op_hcompute_conv1_stencil_2");
  //hcompute_conv1_stencil_2->add_function("hcompute_conv1_stencil_2");
  //hcompute_conv1_stencil_2->add_store("conv1_stencil", "0", "0", "0");
  //auto conv1_s1_r_z_1 = conv1_relu_s0_c_1->add_loop("conv1_s1_r_z_1", 0, 3);
  //auto conv1_s1_r_y_1 = conv1_s1_r_z_1->add_loop("conv1_s1_r_y_1", 0, 3);
  //auto conv1_s1_r_x_1 = conv1_s1_r_y_1->add_loop("conv1_s1_r_x_1", 0, 3);

////store is: conv1.stencil(0, 0, 0) = (conv1.stencil(0, 0, 0) + (conv1_weights_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1, conv1_s1_r_y_1, conv1_s1_r_z_1, conv1_s1_r_x_1)*input_im_global_wrapper_global_wrapper.stencil(conv1_s1_r_x_1, (((conv1_relu_s0_i*2) + conv1_s1_r_y_1) + -1), (((conv1_relu_s0_j*2) + conv1_s1_r_z_1) + 342))))
  //auto hcompute_conv1_stencil_3 = conv1_s1_r_x_1->add_op("op_hcompute_conv1_stencil_3");
  //hcompute_conv1_stencil_3->add_function("hcompute_conv1_stencil_3");
  //hcompute_conv1_stencil_3->add_load("conv1_stencil", "0", "0", "0");
  //hcompute_conv1_stencil_3->add_load("conv1_weights_im_global_wrapper_global_wrapper_stencil", "conv1_s1_r_x_1", "conv1_s1_r_z_1", "conv1_s1_r_y_1", "conv1_relu_s0_c_1");
  //hcompute_conv1_stencil_3->add_load("input_im_global_wrapper_global_wrapper_stencil", "(((conv1_relu_s0_j*2) + conv1_s1_r_z_1) + 342)", "(((conv1_relu_s0_i*2) + conv1_s1_r_y_1) + -1)", "conv1_s1_r_x_1");
  //hcompute_conv1_stencil_3->add_store("conv1_stencil", "0", "0", "0");

////consuming conv1.stencil

////store is: conv1_relu.stencil(conv1_relu_s0_c_1, conv1_relu_s0_i, (conv1_relu_s0_j + 171)) = max(((conv1.stencil(0, 0, 0) - conv_mu_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1))/sqrt_f32((conv_sigma_0_im_global_wrapper_global_wrapper.stencil(conv1_relu_s0_c_1) + 0.000010f))), 0.000000f)
  //auto hcompute_conv1_relu_stencil_1 = conv1_relu_s0_c_1->add_op("op_hcompute_conv1_relu_stencil_1");
  //hcompute_conv1_relu_stencil_1->add_function("hcompute_conv1_relu_stencil_1");
  //hcompute_conv1_relu_stencil_1->add_load("conv1_stencil", "0", "0", "0");
  //hcompute_conv1_relu_stencil_1->add_load("conv_mu_0_im_global_wrapper_global_wrapper_stencil", "conv1_relu_s0_c_1");
  //hcompute_conv1_relu_stencil_1->add_load("conv_sigma_0_im_global_wrapper_global_wrapper_stencil", "conv1_relu_s0_c_1");
  //hcompute_conv1_relu_stencil_1->add_store("conv1_relu_stencil", "(conv1_relu_s0_j + 171)", "conv1_relu_s0_i", "conv1_relu_s0_c_1");

////consuming conv1_relu.stencil
//////producing conv2_weights_im_global_wrapper_global_wrapper.stencil
  //auto conv2_weights_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("conv2_weights_im_global_wrapper_global_wrapper_s0__3", 0, 8);
  //auto conv2_weights_im_global_wrapper_global_wrapper_s0__2 = conv2_weights_im_global_wrapper_global_wrapper_s0__3->add_loop("conv2_weights_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto conv2_weights_im_global_wrapper_global_wrapper_s0__1 = conv2_weights_im_global_wrapper_global_wrapper_s0__2->add_loop("conv2_weights_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto conv2_weights_im_global_wrapper_global_wrapper_s0__0 = conv2_weights_im_global_wrapper_global_wrapper_s0__1->add_loop("conv2_weights_im_global_wrapper_global_wrapper_s0__0", 0, 8);

////store is: conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_weights_im_global_wrapper_global_wrapper_s0__0, conv2_weights_im_global_wrapper_global_wrapper_s0__1, conv2_weights_im_global_wrapper_global_wrapper_s0__2, conv2_weights_im_global_wrapper_global_wrapper_s0__3) = conv2_weights_im_global_wrapper.stencil(conv2_weights_im_global_wrapper_global_wrapper_s0__0, conv2_weights_im_global_wrapper_global_wrapper_s0__1, conv2_weights_im_global_wrapper_global_wrapper_s0__2, conv2_weights_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil = conv2_weights_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil->add_load("conv2_weights_im_global_wrapper_stencil", "conv2_weights_im_global_wrapper_global_wrapper_s0__3", "conv2_weights_im_global_wrapper_global_wrapper_s0__2", "conv2_weights_im_global_wrapper_global_wrapper_s0__1", "conv2_weights_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv2_weights_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv2_weights_im_global_wrapper_global_wrapper_stencil->add_store("conv2_weights_im_global_wrapper_global_wrapper_stencil", "conv2_weights_im_global_wrapper_global_wrapper_s0__3", "conv2_weights_im_global_wrapper_global_wrapper_s0__2", "conv2_weights_im_global_wrapper_global_wrapper_s0__1", "conv2_weights_im_global_wrapper_global_wrapper_s0__0");

////consuming conv2_weights_im_global_wrapper_global_wrapper.stencil
//////producing conv_mu_1_im_global_wrapper_global_wrapper.stencil
  //auto conv_mu_1_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_mu_1_im_global_wrapper_global_wrapper_s0__0", 0, 8);

////store is: conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv_mu_1_im_global_wrapper_global_wrapper_s0__0) = conv_mu_1_im_global_wrapper.stencil(conv_mu_1_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil = conv_mu_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil->add_load("conv_mu_1_im_global_wrapper_stencil", "conv_mu_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_mu_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_mu_1_im_global_wrapper_global_wrapper_stencil->add_store("conv_mu_1_im_global_wrapper_global_wrapper_stencil", "conv_mu_1_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_mu_1_im_global_wrapper_global_wrapper.stencil
//////producing conv_sigma_1_im_global_wrapper_global_wrapper.stencil
  //auto conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2 = prg.add_loop("conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2", 0, 8);

////store is: conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2) = conv_sigma_1_im_global_wrapper.stencil(conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2)
  //auto hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil = conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2->add_op("op_hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil->add_load("conv_sigma_1_im_global_wrapper_stencil", "conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2");
  //prg.buffer_port_widths["conv_sigma_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_sigma_1_im_global_wrapper_global_wrapper_stencil->add_store("conv_sigma_1_im_global_wrapper_global_wrapper_stencil", "conv_sigma_1_im_global_wrapper_global_wrapper_s0__0_2");

////consuming conv_sigma_1_im_global_wrapper_global_wrapper.stencil
//////producing conv2_relu.stencil
  //auto conv2_relu_s0_j = prg.add_loop("conv2_relu_s0_j", -85, 5838);
  //auto conv2_relu_s0_i = conv2_relu_s0_j->add_loop("conv2_relu_s0_i", -16, 1);
  //auto conv2_relu_s0_c = conv2_relu_s0_i->add_loop("conv2_relu_s0_c", 0, 8);
//////producing conv2.stencil

////store is: conv2.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv2_stencil = conv2_relu_s0_c->add_op("op_hcompute_conv2_stencil");
  //hcompute_conv2_stencil->add_function("hcompute_conv2_stencil");
  //prg.buffer_port_widths["conv2_stencil"] = 32;
  //hcompute_conv2_stencil->add_store("conv2_stencil", "0", "0", "0");
  //auto conv2_s1_r_1_z = conv2_relu_s0_c->add_loop("conv2_s1_r_1_z", 0, 3);
  //auto conv2_s1_r_1_y = conv2_s1_r_1_z->add_loop("conv2_s1_r_1_y", 0, 3);
  //auto conv2_s1_r_1_x = conv2_s1_r_1_y->add_loop("conv2_s1_r_1_x", 0, 8);

////store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c, conv2_s1_r_1_y, conv2_s1_r_1_z, conv2_s1_r_1_x)*select((((conv2_relu_s0_i*2) + conv2_s1_r_1_y) < 1), 0.000000f, conv1_relu.stencil(conv2_s1_r_1_x, (max(((conv2_relu_s0_i*2) + conv2_s1_r_1_y), 1) + -1), (((conv2_relu_s0_j*2) + conv2_s1_r_1_z) + 170)))))
  //auto hcompute_conv2_stencil_1 = conv2_s1_r_1_x->add_op("op_hcompute_conv2_stencil_1");
  //hcompute_conv2_stencil_1->add_function("hcompute_conv2_stencil_1");
  //hcompute_conv2_stencil_1->add_load("conv1_relu_stencil", "(((conv2_relu_s0_j*2) + conv2_s1_r_1_z) + 170)", "(max(((conv2_relu_s0_i*2) + conv2_s1_r_1_y), 1) + -1)", "conv2_s1_r_1_x");
  //hcompute_conv2_stencil_1->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_stencil_1->add_load("conv2_weights_im_global_wrapper_global_wrapper_stencil", "conv2_s1_r_1_x", "conv2_s1_r_1_z", "conv2_s1_r_1_y", "conv2_relu_s0_c");
  //hcompute_conv2_stencil_1->add_store("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_stencil_1->compute_unit_needs_index_variable("conv2_relu_s0_i");
  //hcompute_conv2_stencil_1->compute_unit_needs_index_variable("conv2_s1_r_1_y");

////consuming conv2.stencil

////store is: conv2_relu.stencil(conv2_relu_s0_c, (conv2_relu_s0_i + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c) + 0.000010f))), 0.000000f)
  //auto hcompute_conv2_relu_stencil = conv2_relu_s0_c->add_op("op_hcompute_conv2_relu_stencil");
  //hcompute_conv2_relu_stencil->add_function("hcompute_conv2_relu_stencil");
  //hcompute_conv2_relu_stencil->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_relu_stencil->add_load("conv_mu_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c");
  //hcompute_conv2_relu_stencil->add_load("conv_sigma_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c");
  //prg.buffer_port_widths["conv2_relu_stencil"] = 32;
  //hcompute_conv2_relu_stencil->add_store("conv2_relu_stencil", "(conv2_relu_s0_j + 85)", "(conv2_relu_s0_i + 16)", "conv2_relu_s0_c");
  //auto conv2_relu_s0_i_1 = conv2_relu_s0_j->add_loop("conv2_relu_s0_i_1", 1, 180);
  //auto conv2_relu_s0_c_1 = conv2_relu_s0_i_1->add_loop("conv2_relu_s0_c_1", 0, 8);
//////producing conv2.stencil

////store is: conv2.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv2_stencil_2 = conv2_relu_s0_c_1->add_op("op_hcompute_conv2_stencil_2");
  //hcompute_conv2_stencil_2->add_function("hcompute_conv2_stencil_2");
  //hcompute_conv2_stencil_2->add_store("conv2_stencil", "0", "0", "0");
  //auto conv2_s1_r_1_z_1 = conv2_relu_s0_c_1->add_loop("conv2_s1_r_1_z_1", 0, 3);
  //auto conv2_s1_r_1_y_1 = conv2_s1_r_1_z_1->add_loop("conv2_s1_r_1_y_1", 0, 3);
  //auto conv2_s1_r_1_x_1 = conv2_s1_r_1_y_1->add_loop("conv2_s1_r_1_x_1", 0, 8);

////store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1, conv2_s1_r_1_y_1, conv2_s1_r_1_z_1, conv2_s1_r_1_x_1)*conv1_relu.stencil(conv2_s1_r_1_x_1, (((conv2_relu_s0_i_1*2) + conv2_s1_r_1_y_1) + -1), (((conv2_relu_s0_j*2) + conv2_s1_r_1_z_1) + 170))))
  //auto hcompute_conv2_stencil_3 = conv2_s1_r_1_x_1->add_op("op_hcompute_conv2_stencil_3");
  //hcompute_conv2_stencil_3->add_function("hcompute_conv2_stencil_3");
  //hcompute_conv2_stencil_3->add_load("conv1_relu_stencil", "(((conv2_relu_s0_j*2) + conv2_s1_r_1_z_1) + 170)", "(((conv2_relu_s0_i_1*2) + conv2_s1_r_1_y_1) + -1)", "conv2_s1_r_1_x_1");
  //hcompute_conv2_stencil_3->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_stencil_3->add_load("conv2_weights_im_global_wrapper_global_wrapper_stencil", "conv2_s1_r_1_x_1", "conv2_s1_r_1_z_1", "conv2_s1_r_1_y_1", "conv2_relu_s0_c_1");
  //hcompute_conv2_stencil_3->add_store("conv2_stencil", "0", "0", "0");

////consuming conv2.stencil

////store is: conv2_relu.stencil(conv2_relu_s0_c_1, (conv2_relu_s0_i_1 + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_1) + 0.000010f))), 0.000000f)
  //auto hcompute_conv2_relu_stencil_1 = conv2_relu_s0_c_1->add_op("op_hcompute_conv2_relu_stencil_1");
  //hcompute_conv2_relu_stencil_1->add_function("hcompute_conv2_relu_stencil_1");
  //hcompute_conv2_relu_stencil_1->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_relu_stencil_1->add_load("conv_mu_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c_1");
  //hcompute_conv2_relu_stencil_1->add_load("conv_sigma_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c_1");
  //hcompute_conv2_relu_stencil_1->add_store("conv2_relu_stencil", "(conv2_relu_s0_j + 85)", "(conv2_relu_s0_i_1 + 16)", "conv2_relu_s0_c_1");
  //auto conv2_relu_s0_i_2 = conv2_relu_s0_j->add_loop("conv2_relu_s0_i_2", 180, 193);
  //auto conv2_relu_s0_c_2 = conv2_relu_s0_i_2->add_loop("conv2_relu_s0_c_2", 0, 8);
//////producing conv2.stencil

////store is: conv2.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv2_stencil_4 = conv2_relu_s0_c_2->add_op("op_hcompute_conv2_stencil_4");
  //hcompute_conv2_stencil_4->add_function("hcompute_conv2_stencil_4");
  //hcompute_conv2_stencil_4->add_store("conv2_stencil", "0", "0", "0");
  //auto conv2_s1_r_1_z_2 = conv2_relu_s0_c_2->add_loop("conv2_s1_r_1_z_2", 0, 3);
  //auto conv2_s1_r_1_y_2 = conv2_s1_r_1_z_2->add_loop("conv2_s1_r_1_y_2", 0, 3);
  //auto conv2_s1_r_1_x_2 = conv2_s1_r_1_y_2->add_loop("conv2_s1_r_1_x_2", 0, 8);

////store is: conv2.stencil(0, 0, 0) = (conv2.stencil(0, 0, 0) + (conv2_weights_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2, conv2_s1_r_1_y_2, conv2_s1_r_1_z_2, conv2_s1_r_1_x_2)*select((((conv2_relu_s0_i_2*2) + conv2_s1_r_1_y_2) < 361), conv1_relu.stencil(conv2_s1_r_1_x_2, 359, (((conv2_relu_s0_j*2) + conv2_s1_r_1_z_2) + 170)), 0.000000f)))
  //auto hcompute_conv2_stencil_5 = conv2_s1_r_1_x_2->add_op("op_hcompute_conv2_stencil_5");
  //hcompute_conv2_stencil_5->add_function("hcompute_conv2_stencil_5");
  //hcompute_conv2_stencil_5->add_load("conv1_relu_stencil", "(((conv2_relu_s0_j*2) + conv2_s1_r_1_z_2) + 170)", "359", "conv2_s1_r_1_x_2");
  //hcompute_conv2_stencil_5->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_stencil_5->add_load("conv2_weights_im_global_wrapper_global_wrapper_stencil", "conv2_s1_r_1_x_2", "conv2_s1_r_1_z_2", "conv2_s1_r_1_y_2", "conv2_relu_s0_c_2");
  //hcompute_conv2_stencil_5->add_store("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_stencil_5->compute_unit_needs_index_variable("conv2_relu_s0_i_2");
  //hcompute_conv2_stencil_5->compute_unit_needs_index_variable("conv2_s1_r_1_y_2");

////consuming conv2.stencil

////store is: conv2_relu.stencil(conv2_relu_s0_c_2, (conv2_relu_s0_i_2 + 16), (conv2_relu_s0_j + 85)) = max(((conv2.stencil(0, 0, 0) - conv_mu_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2))/sqrt_f32((conv_sigma_1_im_global_wrapper_global_wrapper.stencil(conv2_relu_s0_c_2) + 0.000010f))), 0.000000f)
  //auto hcompute_conv2_relu_stencil_2 = conv2_relu_s0_c_2->add_op("op_hcompute_conv2_relu_stencil_2");
  //hcompute_conv2_relu_stencil_2->add_function("hcompute_conv2_relu_stencil_2");
  //hcompute_conv2_relu_stencil_2->add_load("conv2_stencil", "0", "0", "0");
  //hcompute_conv2_relu_stencil_2->add_load("conv_mu_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c_2");
  //hcompute_conv2_relu_stencil_2->add_load("conv_sigma_1_im_global_wrapper_global_wrapper_stencil", "conv2_relu_s0_c_2");
  //hcompute_conv2_relu_stencil_2->add_store("conv2_relu_stencil", "(conv2_relu_s0_j + 85)", "(conv2_relu_s0_i_2 + 16)", "conv2_relu_s0_c_2");

////consuming conv2_relu.stencil
//////producing enc1_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto enc1_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc1_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 8);
  //auto enc1_weights_3_im_global_wrapper_global_wrapper_s0__0 = enc1_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("enc1_weights_3_im_global_wrapper_global_wrapper_s0__0", -64, 64);

////store is: enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 64), 0, 0, enc1_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_3_im_global_wrapper.stencil(enc1_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc1_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil = enc1_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("enc1_weights_3_im_global_wrapper_stencil", "enc1_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "enc1_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc1_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc1_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("enc1_weights_3_im_global_wrapper_global_wrapper_stencil", "enc1_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "(enc1_weights_3_im_global_wrapper_global_wrapper_s0__0 + 64)");

////consuming enc1_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing enc1_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto enc1_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc1_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 8);
  //auto enc1_weights_0_im_global_wrapper_global_wrapper_s0__2 = enc1_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("enc1_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc1_weights_0_im_global_wrapper_global_wrapper_s0__1 = enc1_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("enc1_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc1_weights_0_im_global_wrapper_global_wrapper_s0__0 = enc1_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("enc1_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_weights_0_im_global_wrapper_global_wrapper_s0__0, enc1_weights_0_im_global_wrapper_global_wrapper_s0__1, enc1_weights_0_im_global_wrapper_global_wrapper_s0__2, enc1_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_0_im_global_wrapper.stencil(enc1_weights_0_im_global_wrapper_global_wrapper_s0__0, enc1_weights_0_im_global_wrapper_global_wrapper_s0__1, enc1_weights_0_im_global_wrapper_global_wrapper_s0__2, enc1_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil = enc1_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("enc1_weights_0_im_global_wrapper_stencil", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc1_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc1_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("enc1_weights_0_im_global_wrapper_global_wrapper_stencil", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc1_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming enc1_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing enc1_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto enc1_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc1_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc1_weights_1_im_global_wrapper_global_wrapper_s0__2 = enc1_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("enc1_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc1_weights_1_im_global_wrapper_global_wrapper_s0__0 = enc1_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("enc1_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc1_weights_1_im_global_wrapper_global_wrapper_s0__2, enc1_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_1_im_global_wrapper.stencil(enc1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc1_weights_1_im_global_wrapper_global_wrapper_s0__2, enc1_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil = enc1_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("enc1_weights_1_im_global_wrapper_stencil", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc1_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc1_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("enc1_weights_1_im_global_wrapper_global_wrapper_stencil", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc1_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming enc1_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing enc1_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto enc1_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc1_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc1_weights_2_im_global_wrapper_global_wrapper_s0__1 = enc1_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("enc1_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc1_weights_2_im_global_wrapper_global_wrapper_s0__0 = enc1_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("enc1_weights_2_im_global_wrapper_global_wrapper_s0__0", -64, 64);

////store is: enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 64), enc1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc1_weights_2_im_global_wrapper.stencil(enc1_weights_2_im_global_wrapper_global_wrapper_s0__0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc1_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil = enc1_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("enc1_weights_2_im_global_wrapper_stencil", "enc1_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc1_weights_2_im_global_wrapper_global_wrapper_s0__1", "enc1_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc1_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc1_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("enc1_weights_2_im_global_wrapper_global_wrapper_stencil", "enc1_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc1_weights_2_im_global_wrapper_global_wrapper_s0__1", "(enc1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 64)");

////consuming enc1_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing enc1_sum.stencil
  //auto enc1_sum_s0_j = prg.add_loop("enc1_sum_s0_j", -41, 2918);
  //auto enc1_sum_s0_i = enc1_sum_s0_j->add_loop("enc1_sum_s0_i", -8, 2);
  //auto enc1_sum_s0_c = enc1_sum_s0_i->add_loop("enc1_sum_s0_c", -64, 64);
//////producing enc1_conv3x1.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv3x1_stencil = enc1_sum_s0_c->add_op("op_hcompute_enc1_conv3x1_stencil");
  //hcompute_enc1_conv3x1_stencil->add_function("hcompute_enc1_conv3x1_stencil");
  //prg.buffer_port_widths["enc1_conv3x1_stencil"] = 32;
  //hcompute_enc1_conv3x1_stencil->add_store("enc1_conv3x1_stencil", "0", "0", "0");
  //auto enc1_conv3x1_s1_r_4_y = enc1_sum_s0_c->add_loop("enc1_conv3x1_s1_r_4_y", 0, 3);
  //auto enc1_conv3x1_s1_r_4_x = enc1_conv3x1_s1_r_4_y->add_loop("enc1_conv3x1_s1_r_4_x", 0, 64);
//////producing enc1_conv1x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x3_stencil = enc1_conv3x1_s1_r_4_x->add_op("op_hcompute_enc1_conv1x3_stencil");
  //hcompute_enc1_conv1x3_stencil->add_function("hcompute_enc1_conv1x3_stencil");
  //prg.buffer_port_widths["enc1_conv1x3_stencil"] = 32;
  //hcompute_enc1_conv1x3_stencil->add_store("enc1_conv1x3_stencil", "0", "0", "0");
  //auto enc1_conv1x3_s1_r_3_z = enc1_conv3x1_s1_r_4_x->add_loop("enc1_conv1x3_s1_r_3_z", 0, 3);
  //auto enc1_conv1x3_s1_r_3_x = enc1_conv1x3_s1_r_3_z->add_loop("enc1_conv1x3_s1_r_3_x", 0, 64);
//////producing enc1_conv3x3.stencil

////store is: enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) = 0.000000f
  //auto hcompute_enc1_conv3x3_stencil = enc1_conv1x3_s1_r_3_x->add_op("op_hcompute_enc1_conv3x3_stencil");
  //hcompute_enc1_conv3x3_stencil->add_function("hcompute_enc1_conv3x3_stencil");
  //prg.buffer_port_widths["enc1_conv3x3_stencil"] = 32;
  //hcompute_enc1_conv3x3_stencil->add_store("enc1_conv3x3_stencil", "0", "(min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1)", "0");
  //auto enc1_conv3x3_s1_r_2_z = enc1_conv1x3_s1_r_3_x->add_loop("enc1_conv3x3_s1_r_2_z", 0, 3);
  //auto enc1_conv3x3_s1_r_2_y = enc1_conv3x3_s1_r_2_z->add_loop("enc1_conv3x3_s1_r_2_y", 0, 3);
  //auto enc1_conv3x3_s1_r_2_x = enc1_conv3x3_s1_r_2_y->add_loop("enc1_conv3x3_s1_r_2_x", 0, 8);

////store is: enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) = (enc1_conv3x3.stencil(0, (min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1), 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x, enc1_conv3x3_s1_r_2_y, enc1_conv3x3_s1_r_2_z, enc1_conv3x3_s1_r_2_x)*select(((((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i)*2) + enc1_conv3x3_s1_r_2_y) < 3), 0.000000f, conv2_relu.stencil(enc1_conv3x3_s1_r_2_x, (max((((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i)*2) + enc1_conv3x3_s1_r_2_y), 3) + 13), ((((enc1_conv1x3_s1_r_3_z + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z) + 82)))))
  //auto hcompute_enc1_conv3x3_stencil_1 = enc1_conv3x3_s1_r_2_x->add_op("op_hcompute_enc1_conv3x3_stencil_1");
  //hcompute_enc1_conv3x3_stencil_1->add_function("hcompute_enc1_conv3x3_stencil_1");
  //hcompute_enc1_conv3x3_stencil_1->add_load("conv2_relu_stencil", "((((enc1_conv1x3_s1_r_3_z + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z) + 82)", "(max((((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i)*2) + enc1_conv3x3_s1_r_2_y), 3) + 13)", "enc1_conv3x3_s1_r_2_x");
  //hcompute_enc1_conv3x3_stencil_1->add_load("enc1_conv3x3_stencil", "0", "(min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1)", "0");
  //hcompute_enc1_conv3x3_stencil_1->add_load("enc1_weights_0_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x3_s1_r_2_x", "enc1_conv3x3_s1_r_2_z", "enc1_conv3x3_s1_r_2_y", "enc1_conv1x3_s1_r_3_x");
  //hcompute_enc1_conv3x3_stencil_1->add_store("enc1_conv3x3_stencil", "0", "(min((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i), 1) + -1)", "0");
  //hcompute_enc1_conv3x3_stencil_1->compute_unit_needs_index_variable("enc1_conv3x1_s1_r_4_y");
  //hcompute_enc1_conv3x3_stencil_1->compute_unit_needs_index_variable("enc1_conv3x3_s1_r_2_y");
  //hcompute_enc1_conv3x3_stencil_1->compute_unit_needs_index_variable("enc1_sum_s0_i");

////consuming enc1_conv3x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x, 0, enc1_conv1x3_s1_r_3_z, enc1_conv1x3_s1_r_3_x)*select(((enc1_conv3x1_s1_r_4_y + enc1_sum_s0_i) < 1), 0.000000f, enc1_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_enc1_conv1x3_stencil_1 = enc1_conv1x3_s1_r_3_x->add_op("op_hcompute_enc1_conv1x3_stencil_1");
  //hcompute_enc1_conv1x3_stencil_1->add_function("hcompute_enc1_conv1x3_stencil_1");
  //hcompute_enc1_conv1x3_stencil_1->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_1->add_load("enc1_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_1->add_load("enc1_weights_1_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x3_s1_r_3_x", "enc1_conv1x3_s1_r_3_z", "0", "enc1_conv3x1_s1_r_4_x");
  //hcompute_enc1_conv1x3_stencil_1->add_store("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_1->compute_unit_needs_index_variable("enc1_conv3x1_s1_r_4_y");
  //hcompute_enc1_conv1x3_stencil_1->compute_unit_needs_index_variable("enc1_sum_s0_i");

////consuming enc1_conv1x3.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c + 64), enc1_conv3x1_s1_r_4_y, 0, enc1_conv3x1_s1_r_4_x)*enc1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc1_conv3x1_stencil_1 = enc1_conv3x1_s1_r_4_x->add_op("op_hcompute_enc1_conv3x1_stencil_1");
  //hcompute_enc1_conv3x1_stencil_1->add_function("hcompute_enc1_conv3x1_stencil_1");
  //hcompute_enc1_conv3x1_stencil_1->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_1->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_1->add_load("enc1_weights_2_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x1_s1_r_4_x", "0", "enc1_conv3x1_s1_r_4_y", "(enc1_sum_s0_c + 64)");
  //hcompute_enc1_conv3x1_stencil_1->add_store("enc1_conv3x1_stencil", "0", "0", "0");

////consuming enc1_conv3x1.stencil
//////producing enc1_conv1x1.stencil

////store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x1_stencil = enc1_sum_s0_c->add_op("op_hcompute_enc1_conv1x1_stencil");
  //hcompute_enc1_conv1x1_stencil->add_function("hcompute_enc1_conv1x1_stencil");
  //prg.buffer_port_widths["enc1_conv1x1_stencil"] = 32;
  //hcompute_enc1_conv1x1_stencil->add_store("enc1_conv1x1_stencil", "0", "0", "0");
  //auto enc1_conv1x1_s1_r_5_x = enc1_sum_s0_c->add_loop("enc1_conv1x1_s1_r_5_x", 0, 8);

////store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c + 64), 0, 0, enc1_conv1x1_s1_r_5_x)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x, ((enc1_sum_s0_i*2) + 16), ((enc1_sum_s0_j*2) + 85))))
  //auto hcompute_enc1_conv1x1_stencil_1 = enc1_conv1x1_s1_r_5_x->add_op("op_hcompute_enc1_conv1x1_stencil_1");
  //hcompute_enc1_conv1x1_stencil_1->add_function("hcompute_enc1_conv1x1_stencil_1");
  //hcompute_enc1_conv1x1_stencil_1->add_load("conv2_relu_stencil", "((enc1_sum_s0_j*2) + 85)", "((enc1_sum_s0_i*2) + 16)", "enc1_conv1x1_s1_r_5_x");
  //hcompute_enc1_conv1x1_stencil_1->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x1_stencil_1->add_load("enc1_weights_3_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x1_s1_r_5_x", "0", "0", "(enc1_sum_s0_c + 64)");
  //hcompute_enc1_conv1x1_stencil_1->add_store("enc1_conv1x1_stencil", "0", "0", "0");

////consuming enc1_conv1x1.stencil

////store is: enc1_sum.stencil((enc1_sum_s0_c + 64), (enc1_sum_s0_i + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc1_sum_stencil = enc1_sum_s0_c->add_op("op_hcompute_enc1_sum_stencil");
  //hcompute_enc1_sum_stencil->add_function("hcompute_enc1_sum_stencil");
  //hcompute_enc1_sum_stencil->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_sum_stencil->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //prg.buffer_port_widths["enc1_sum_stencil"] = 32;
  //hcompute_enc1_sum_stencil->add_store("enc1_sum_stencil", "(enc1_sum_s0_j + 41)", "(enc1_sum_s0_i + 8)", "(enc1_sum_s0_c + 64)");
  //auto enc1_sum_s0_i_1 = enc1_sum_s0_j->add_loop("enc1_sum_s0_i_1", 2, 89);
  //auto enc1_sum_s0_c_1 = enc1_sum_s0_i_1->add_loop("enc1_sum_s0_c_1", -64, 64);
//////producing enc1_conv3x1.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv3x1_stencil_2 = enc1_sum_s0_c_1->add_op("op_hcompute_enc1_conv3x1_stencil_2");
  //hcompute_enc1_conv3x1_stencil_2->add_function("hcompute_enc1_conv3x1_stencil_2");
  //hcompute_enc1_conv3x1_stencil_2->add_store("enc1_conv3x1_stencil", "0", "0", "0");
  //auto enc1_conv3x1_s1_r_4_y_1 = enc1_sum_s0_c_1->add_loop("enc1_conv3x1_s1_r_4_y_1", 0, 3);
  //auto enc1_conv3x1_s1_r_4_x_1 = enc1_conv3x1_s1_r_4_y_1->add_loop("enc1_conv3x1_s1_r_4_x_1", 0, 64);
//////producing enc1_conv1x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x3_stencil_2 = enc1_conv3x1_s1_r_4_x_1->add_op("op_hcompute_enc1_conv1x3_stencil_2");
  //hcompute_enc1_conv1x3_stencil_2->add_function("hcompute_enc1_conv1x3_stencil_2");
  //hcompute_enc1_conv1x3_stencil_2->add_store("enc1_conv1x3_stencil", "0", "0", "0");
  //auto enc1_conv1x3_s1_r_3_z_1 = enc1_conv3x1_s1_r_4_x_1->add_loop("enc1_conv1x3_s1_r_3_z_1", 0, 3);
  //auto enc1_conv1x3_s1_r_3_x_1 = enc1_conv1x3_s1_r_3_z_1->add_loop("enc1_conv1x3_s1_r_3_x_1", 0, 64);
//////producing enc1_conv3x3.stencil

////store is: enc1_conv3x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv3x3_stencil_2 = enc1_conv1x3_s1_r_3_x_1->add_op("op_hcompute_enc1_conv3x3_stencil_2");
  //hcompute_enc1_conv3x3_stencil_2->add_function("hcompute_enc1_conv3x3_stencil_2");
  //hcompute_enc1_conv3x3_stencil_2->add_store("enc1_conv3x3_stencil", "0", "0", "0");
  //auto enc1_conv3x3_s1_r_2_z_1 = enc1_conv1x3_s1_r_3_x_1->add_loop("enc1_conv3x3_s1_r_2_z_1", 0, 3);
  //auto enc1_conv3x3_s1_r_2_y_1 = enc1_conv3x3_s1_r_2_z_1->add_loop("enc1_conv3x3_s1_r_2_y_1", 0, 3);
  //auto enc1_conv3x3_s1_r_2_x_1 = enc1_conv3x3_s1_r_2_y_1->add_loop("enc1_conv3x3_s1_r_2_x_1", 0, 8);

////store is: enc1_conv3x3.stencil(0, 0, 0) = (enc1_conv3x3.stencil(0, 0, 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x_1, enc1_conv3x3_s1_r_2_y_1, enc1_conv3x3_s1_r_2_z_1, enc1_conv3x3_s1_r_2_x_1)*conv2_relu.stencil(enc1_conv3x3_s1_r_2_x_1, ((((enc1_conv3x1_s1_r_4_y_1 + enc1_sum_s0_i_1)*2) + enc1_conv3x3_s1_r_2_y_1) + 13), ((((enc1_conv1x3_s1_r_3_z_1 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_1) + 82))))
  //auto hcompute_enc1_conv3x3_stencil_3 = enc1_conv3x3_s1_r_2_x_1->add_op("op_hcompute_enc1_conv3x3_stencil_3");
  //hcompute_enc1_conv3x3_stencil_3->add_function("hcompute_enc1_conv3x3_stencil_3");
  //hcompute_enc1_conv3x3_stencil_3->add_load("conv2_relu_stencil", "((((enc1_conv1x3_s1_r_3_z_1 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_1) + 82)", "((((enc1_conv3x1_s1_r_4_y_1 + enc1_sum_s0_i_1)*2) + enc1_conv3x3_s1_r_2_y_1) + 13)", "enc1_conv3x3_s1_r_2_x_1");
  //hcompute_enc1_conv3x3_stencil_3->add_load("enc1_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x3_stencil_3->add_load("enc1_weights_0_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x3_s1_r_2_x_1", "enc1_conv3x3_s1_r_2_z_1", "enc1_conv3x3_s1_r_2_y_1", "enc1_conv1x3_s1_r_3_x_1");
  //hcompute_enc1_conv3x3_stencil_3->add_store("enc1_conv3x3_stencil", "0", "0", "0");

////consuming enc1_conv3x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x_1, 0, enc1_conv1x3_s1_r_3_z_1, enc1_conv1x3_s1_r_3_x_1)*enc1_conv3x3.stencil(0, 0, 0)))
  //auto hcompute_enc1_conv1x3_stencil_3 = enc1_conv1x3_s1_r_3_x_1->add_op("op_hcompute_enc1_conv1x3_stencil_3");
  //hcompute_enc1_conv1x3_stencil_3->add_function("hcompute_enc1_conv1x3_stencil_3");
  //hcompute_enc1_conv1x3_stencil_3->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_3->add_load("enc1_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_3->add_load("enc1_weights_1_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x3_s1_r_3_x_1", "enc1_conv1x3_s1_r_3_z_1", "0", "enc1_conv3x1_s1_r_4_x_1");
  //hcompute_enc1_conv1x3_stencil_3->add_store("enc1_conv1x3_stencil", "0", "0", "0");

////consuming enc1_conv1x3.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_1 + 64), enc1_conv3x1_s1_r_4_y_1, 0, enc1_conv3x1_s1_r_4_x_1)*enc1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc1_conv3x1_stencil_3 = enc1_conv3x1_s1_r_4_x_1->add_op("op_hcompute_enc1_conv3x1_stencil_3");
  //hcompute_enc1_conv3x1_stencil_3->add_function("hcompute_enc1_conv3x1_stencil_3");
  //hcompute_enc1_conv3x1_stencil_3->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_3->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_3->add_load("enc1_weights_2_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x1_s1_r_4_x_1", "0", "enc1_conv3x1_s1_r_4_y_1", "(enc1_sum_s0_c_1 + 64)");
  //hcompute_enc1_conv3x1_stencil_3->add_store("enc1_conv3x1_stencil", "0", "0", "0");

////consuming enc1_conv3x1.stencil
//////producing enc1_conv1x1.stencil

////store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x1_stencil_2 = enc1_sum_s0_c_1->add_op("op_hcompute_enc1_conv1x1_stencil_2");
  //hcompute_enc1_conv1x1_stencil_2->add_function("hcompute_enc1_conv1x1_stencil_2");
  //hcompute_enc1_conv1x1_stencil_2->add_store("enc1_conv1x1_stencil", "0", "0", "0");
  //auto enc1_conv1x1_s1_r_5_x_1 = enc1_sum_s0_c_1->add_loop("enc1_conv1x1_s1_r_5_x_1", 0, 8);

////store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_1 + 64), 0, 0, enc1_conv1x1_s1_r_5_x_1)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x_1, ((enc1_sum_s0_i_1*2) + 16), ((enc1_sum_s0_j*2) + 85))))
  //auto hcompute_enc1_conv1x1_stencil_3 = enc1_conv1x1_s1_r_5_x_1->add_op("op_hcompute_enc1_conv1x1_stencil_3");
  //hcompute_enc1_conv1x1_stencil_3->add_function("hcompute_enc1_conv1x1_stencil_3");
  //hcompute_enc1_conv1x1_stencil_3->add_load("conv2_relu_stencil", "((enc1_sum_s0_j*2) + 85)", "((enc1_sum_s0_i_1*2) + 16)", "enc1_conv1x1_s1_r_5_x_1");
  //hcompute_enc1_conv1x1_stencil_3->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x1_stencil_3->add_load("enc1_weights_3_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x1_s1_r_5_x_1", "0", "0", "(enc1_sum_s0_c_1 + 64)");
  //hcompute_enc1_conv1x1_stencil_3->add_store("enc1_conv1x1_stencil", "0", "0", "0");

////consuming enc1_conv1x1.stencil

////store is: enc1_sum.stencil((enc1_sum_s0_c_1 + 64), (enc1_sum_s0_i_1 + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc1_sum_stencil_1 = enc1_sum_s0_c_1->add_op("op_hcompute_enc1_sum_stencil_1");
  //hcompute_enc1_sum_stencil_1->add_function("hcompute_enc1_sum_stencil_1");
  //hcompute_enc1_sum_stencil_1->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_sum_stencil_1->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc1_sum_stencil_1->add_store("enc1_sum_stencil", "(enc1_sum_s0_j + 41)", "(enc1_sum_s0_i_1 + 8)", "(enc1_sum_s0_c_1 + 64)");
  //auto enc1_sum_s0_i_2 = enc1_sum_s0_j->add_loop("enc1_sum_s0_i_2", 89, 97);
  //auto enc1_sum_s0_c_2 = enc1_sum_s0_i_2->add_loop("enc1_sum_s0_c_2", -64, 64);
//////producing enc1_conv3x1.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv3x1_stencil_4 = enc1_sum_s0_c_2->add_op("op_hcompute_enc1_conv3x1_stencil_4");
  //hcompute_enc1_conv3x1_stencil_4->add_function("hcompute_enc1_conv3x1_stencil_4");
  //hcompute_enc1_conv3x1_stencil_4->add_store("enc1_conv3x1_stencil", "0", "0", "0");
  //auto enc1_conv3x1_s1_r_4_y_2 = enc1_sum_s0_c_2->add_loop("enc1_conv3x1_s1_r_4_y_2", 0, 3);
  //auto enc1_conv3x1_s1_r_4_x_2 = enc1_conv3x1_s1_r_4_y_2->add_loop("enc1_conv3x1_s1_r_4_x_2", 0, 64);
//////producing enc1_conv1x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x3_stencil_4 = enc1_conv3x1_s1_r_4_x_2->add_op("op_hcompute_enc1_conv1x3_stencil_4");
  //hcompute_enc1_conv1x3_stencil_4->add_function("hcompute_enc1_conv1x3_stencil_4");
  //hcompute_enc1_conv1x3_stencil_4->add_store("enc1_conv1x3_stencil", "0", "0", "0");
  //auto enc1_conv1x3_s1_r_3_z_2 = enc1_conv3x1_s1_r_4_x_2->add_loop("enc1_conv1x3_s1_r_3_z_2", 0, 3);
  //auto enc1_conv1x3_s1_r_3_x_2 = enc1_conv1x3_s1_r_3_z_2->add_loop("enc1_conv1x3_s1_r_3_x_2", 0, 64);
//////producing enc1_conv3x3.stencil

////store is: enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) = 0.000000f
  //auto hcompute_enc1_conv3x3_stencil_4 = enc1_conv1x3_s1_r_3_x_2->add_op("op_hcompute_enc1_conv3x3_stencil_4");
  //hcompute_enc1_conv3x3_stencil_4->add_function("hcompute_enc1_conv3x3_stencil_4");
  //hcompute_enc1_conv3x3_stencil_4->add_store("enc1_conv3x3_stencil", "0", "(max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90)", "0");
  //auto enc1_conv3x3_s1_r_2_z_2 = enc1_conv1x3_s1_r_3_x_2->add_loop("enc1_conv3x3_s1_r_2_z_2", 0, 3);
  //auto enc1_conv3x3_s1_r_2_y_2 = enc1_conv3x3_s1_r_2_z_2->add_loop("enc1_conv3x3_s1_r_2_y_2", 0, 3);
  //auto enc1_conv3x3_s1_r_2_x_2 = enc1_conv3x3_s1_r_2_y_2->add_loop("enc1_conv3x3_s1_r_2_x_2", 0, 8);

////store is: enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) = (enc1_conv3x3.stencil(0, (max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90), 0) + (enc1_weights_0_im_global_wrapper_global_wrapper.stencil(enc1_conv1x3_s1_r_3_x_2, enc1_conv3x3_s1_r_2_y_2, enc1_conv3x3_s1_r_2_z_2, enc1_conv3x3_s1_r_2_x_2)*conv2_relu.stencil(enc1_conv3x3_s1_r_2_x_2, (min((((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2)*2) + enc1_conv3x3_s1_r_2_y_2), 182) + 13), ((((enc1_conv1x3_s1_r_3_z_2 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_2) + 82))))
  //auto hcompute_enc1_conv3x3_stencil_5 = enc1_conv3x3_s1_r_2_x_2->add_op("op_hcompute_enc1_conv3x3_stencil_5");
  //hcompute_enc1_conv3x3_stencil_5->add_function("hcompute_enc1_conv3x3_stencil_5");
  //hcompute_enc1_conv3x3_stencil_5->add_load("conv2_relu_stencil", "((((enc1_conv1x3_s1_r_3_z_2 + enc1_sum_s0_j)*2) + enc1_conv3x3_s1_r_2_z_2) + 82)", "(min((((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2)*2) + enc1_conv3x3_s1_r_2_y_2), 182) + 13)", "enc1_conv3x3_s1_r_2_x_2");
  //hcompute_enc1_conv3x3_stencil_5->add_load("enc1_conv3x3_stencil", "0", "(max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90)", "0");
  //hcompute_enc1_conv3x3_stencil_5->add_load("enc1_weights_0_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x3_s1_r_2_x_2", "enc1_conv3x3_s1_r_2_z_2", "enc1_conv3x3_s1_r_2_y_2", "enc1_conv1x3_s1_r_3_x_2");
  //hcompute_enc1_conv3x3_stencil_5->add_store("enc1_conv3x3_stencil", "0", "(max((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2), 90) + -90)", "0");

////consuming enc1_conv3x3.stencil

////store is: enc1_conv1x3.stencil(0, 0, 0) = (enc1_conv1x3.stencil(0, 0, 0) + (enc1_weights_1_im_global_wrapper_global_wrapper.stencil(enc1_conv3x1_s1_r_4_x_2, 0, enc1_conv1x3_s1_r_3_z_2, enc1_conv1x3_s1_r_3_x_2)*select(((enc1_conv3x1_s1_r_4_y_2 + enc1_sum_s0_i_2) < 91), enc1_conv3x3.stencil(0, 0, 0), 0.000000f)))
  //auto hcompute_enc1_conv1x3_stencil_5 = enc1_conv1x3_s1_r_3_x_2->add_op("op_hcompute_enc1_conv1x3_stencil_5");
  //hcompute_enc1_conv1x3_stencil_5->add_function("hcompute_enc1_conv1x3_stencil_5");
  //hcompute_enc1_conv1x3_stencil_5->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_5->add_load("enc1_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_5->add_load("enc1_weights_1_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x3_s1_r_3_x_2", "enc1_conv1x3_s1_r_3_z_2", "0", "enc1_conv3x1_s1_r_4_x_2");
  //hcompute_enc1_conv1x3_stencil_5->add_store("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x3_stencil_5->compute_unit_needs_index_variable("enc1_conv3x1_s1_r_4_y_2");
  //hcompute_enc1_conv1x3_stencil_5->compute_unit_needs_index_variable("enc1_sum_s0_i_2");

////consuming enc1_conv1x3.stencil

////store is: enc1_conv3x1.stencil(0, 0, 0) = (enc1_conv3x1.stencil(0, 0, 0) + (enc1_weights_2_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_2 + 64), enc1_conv3x1_s1_r_4_y_2, 0, enc1_conv3x1_s1_r_4_x_2)*enc1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc1_conv3x1_stencil_5 = enc1_conv3x1_s1_r_4_x_2->add_op("op_hcompute_enc1_conv3x1_stencil_5");
  //hcompute_enc1_conv3x1_stencil_5->add_function("hcompute_enc1_conv3x1_stencil_5");
  //hcompute_enc1_conv3x1_stencil_5->add_load("enc1_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_5->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv3x1_stencil_5->add_load("enc1_weights_2_im_global_wrapper_global_wrapper_stencil", "enc1_conv3x1_s1_r_4_x_2", "0", "enc1_conv3x1_s1_r_4_y_2", "(enc1_sum_s0_c_2 + 64)");
  //hcompute_enc1_conv3x1_stencil_5->add_store("enc1_conv3x1_stencil", "0", "0", "0");

////consuming enc1_conv3x1.stencil
//////producing enc1_conv1x1.stencil

////store is: enc1_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc1_conv1x1_stencil_4 = enc1_sum_s0_c_2->add_op("op_hcompute_enc1_conv1x1_stencil_4");
  //hcompute_enc1_conv1x1_stencil_4->add_function("hcompute_enc1_conv1x1_stencil_4");
  //hcompute_enc1_conv1x1_stencil_4->add_store("enc1_conv1x1_stencil", "0", "0", "0");
  //auto enc1_conv1x1_s1_r_5_x_2 = enc1_sum_s0_c_2->add_loop("enc1_conv1x1_s1_r_5_x_2", 0, 8);

////store is: enc1_conv1x1.stencil(0, 0, 0) = (enc1_conv1x1.stencil(0, 0, 0) + (enc1_weights_3_im_global_wrapper_global_wrapper.stencil((enc1_sum_s0_c_2 + 64), 0, 0, enc1_conv1x1_s1_r_5_x_2)*conv2_relu.stencil(enc1_conv1x1_s1_r_5_x_2, ((enc1_sum_s0_i_2*2) + 16), ((enc1_sum_s0_j*2) + 85))))
  //auto hcompute_enc1_conv1x1_stencil_5 = enc1_conv1x1_s1_r_5_x_2->add_op("op_hcompute_enc1_conv1x1_stencil_5");
  //hcompute_enc1_conv1x1_stencil_5->add_function("hcompute_enc1_conv1x1_stencil_5");
  //hcompute_enc1_conv1x1_stencil_5->add_load("conv2_relu_stencil", "((enc1_sum_s0_j*2) + 85)", "((enc1_sum_s0_i_2*2) + 16)", "enc1_conv1x1_s1_r_5_x_2");
  //hcompute_enc1_conv1x1_stencil_5->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_conv1x1_stencil_5->add_load("enc1_weights_3_im_global_wrapper_global_wrapper_stencil", "enc1_conv1x1_s1_r_5_x_2", "0", "0", "(enc1_sum_s0_c_2 + 64)");
  //hcompute_enc1_conv1x1_stencil_5->add_store("enc1_conv1x1_stencil", "0", "0", "0");

////consuming enc1_conv1x1.stencil

////store is: enc1_sum.stencil((enc1_sum_s0_c_2 + 64), (enc1_sum_s0_i_2 + 8), (enc1_sum_s0_j + 41)) = (enc1_conv3x1.stencil(0, 0, 0) + enc1_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc1_sum_stencil_2 = enc1_sum_s0_c_2->add_op("op_hcompute_enc1_sum_stencil_2");
  //hcompute_enc1_sum_stencil_2->add_function("hcompute_enc1_sum_stencil_2");
  //hcompute_enc1_sum_stencil_2->add_load("enc1_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc1_sum_stencil_2->add_load("enc1_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc1_sum_stencil_2->add_store("enc1_sum_stencil", "(enc1_sum_s0_j + 41)", "(enc1_sum_s0_i_2 + 8)", "(enc1_sum_s0_c_2 + 64)");

////consuming enc1_sum.stencil
//////producing enc2_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto enc2_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc2_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc2_weights_3_im_global_wrapper_global_wrapper_s0__0 = enc2_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("enc2_weights_3_im_global_wrapper_global_wrapper_s0__0", -128, 64);

////store is: enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 128), 0, 0, enc2_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_3_im_global_wrapper.stencil(enc2_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc2_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil = enc2_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("enc2_weights_3_im_global_wrapper_stencil", "enc2_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "enc2_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc2_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc2_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("enc2_weights_3_im_global_wrapper_global_wrapper_stencil", "enc2_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "(enc2_weights_3_im_global_wrapper_global_wrapper_s0__0 + 128)");

////consuming enc2_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing enc2_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto enc2_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc2_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc2_weights_0_im_global_wrapper_global_wrapper_s0__2 = enc2_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("enc2_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc2_weights_0_im_global_wrapper_global_wrapper_s0__1 = enc2_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("enc2_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc2_weights_0_im_global_wrapper_global_wrapper_s0__0 = enc2_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("enc2_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_weights_0_im_global_wrapper_global_wrapper_s0__0, enc2_weights_0_im_global_wrapper_global_wrapper_s0__1, enc2_weights_0_im_global_wrapper_global_wrapper_s0__2, enc2_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_0_im_global_wrapper.stencil(enc2_weights_0_im_global_wrapper_global_wrapper_s0__0, enc2_weights_0_im_global_wrapper_global_wrapper_s0__1, enc2_weights_0_im_global_wrapper_global_wrapper_s0__2, enc2_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil = enc2_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("enc2_weights_0_im_global_wrapper_stencil", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc2_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc2_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("enc2_weights_0_im_global_wrapper_global_wrapper_stencil", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc2_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming enc2_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing enc2_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto enc2_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc2_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc2_weights_1_im_global_wrapper_global_wrapper_s0__2 = enc2_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("enc2_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc2_weights_1_im_global_wrapper_global_wrapper_s0__0 = enc2_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("enc2_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc2_weights_1_im_global_wrapper_global_wrapper_s0__2, enc2_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_1_im_global_wrapper.stencil(enc2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc2_weights_1_im_global_wrapper_global_wrapper_s0__2, enc2_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil = enc2_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("enc2_weights_1_im_global_wrapper_stencil", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc2_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc2_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("enc2_weights_1_im_global_wrapper_global_wrapper_stencil", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc2_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming enc2_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing enc2_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto enc2_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc2_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc2_weights_2_im_global_wrapper_global_wrapper_s0__1 = enc2_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("enc2_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc2_weights_2_im_global_wrapper_global_wrapper_s0__0 = enc2_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("enc2_weights_2_im_global_wrapper_global_wrapper_s0__0", -128, 64);

////store is: enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 128), enc2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc2_weights_2_im_global_wrapper.stencil(enc2_weights_2_im_global_wrapper_global_wrapper_s0__0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc2_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil = enc2_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("enc2_weights_2_im_global_wrapper_stencil", "enc2_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc2_weights_2_im_global_wrapper_global_wrapper_s0__1", "enc2_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc2_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc2_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("enc2_weights_2_im_global_wrapper_global_wrapper_stencil", "enc2_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc2_weights_2_im_global_wrapper_global_wrapper_s0__1", "(enc2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 128)");

////consuming enc2_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing enc2_sum.stencil
  //auto enc2_sum_s0_j = prg.add_loop("enc2_sum_s0_j", -19, 1458);
  //auto enc2_sum_s0_i = enc2_sum_s0_j->add_loop("enc2_sum_s0_i", -4, 2);
  //auto enc2_sum_s0_c = enc2_sum_s0_i->add_loop("enc2_sum_s0_c", -128, 64);
//////producing enc2_conv3x1.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv3x1_stencil = enc2_sum_s0_c->add_op("op_hcompute_enc2_conv3x1_stencil");
  //hcompute_enc2_conv3x1_stencil->add_function("hcompute_enc2_conv3x1_stencil");
  //prg.buffer_port_widths["enc2_conv3x1_stencil"] = 32;
  //hcompute_enc2_conv3x1_stencil->add_store("enc2_conv3x1_stencil", "0", "0", "0");
  //auto enc2_conv3x1_s1_r_8_y = enc2_sum_s0_c->add_loop("enc2_conv3x1_s1_r_8_y", 0, 3);
  //auto enc2_conv3x1_s1_r_8_x = enc2_conv3x1_s1_r_8_y->add_loop("enc2_conv3x1_s1_r_8_x", 0, 64);
//////producing enc2_conv1x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x3_stencil = enc2_conv3x1_s1_r_8_x->add_op("op_hcompute_enc2_conv1x3_stencil");
  //hcompute_enc2_conv1x3_stencil->add_function("hcompute_enc2_conv1x3_stencil");
  //prg.buffer_port_widths["enc2_conv1x3_stencil"] = 32;
  //hcompute_enc2_conv1x3_stencil->add_store("enc2_conv1x3_stencil", "0", "0", "0");
  //auto enc2_conv1x3_s1_r_7_z = enc2_conv3x1_s1_r_8_x->add_loop("enc2_conv1x3_s1_r_7_z", 0, 3);
  //auto enc2_conv1x3_s1_r_7_x = enc2_conv1x3_s1_r_7_z->add_loop("enc2_conv1x3_s1_r_7_x", 0, 64);
//////producing enc2_conv3x3.stencil

////store is: enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) = 0.000000f
  //auto hcompute_enc2_conv3x3_stencil = enc2_conv1x3_s1_r_7_x->add_op("op_hcompute_enc2_conv3x3_stencil");
  //hcompute_enc2_conv3x3_stencil->add_function("hcompute_enc2_conv3x3_stencil");
  //prg.buffer_port_widths["enc2_conv3x3_stencil"] = 32;
  //hcompute_enc2_conv3x3_stencil->add_store("enc2_conv3x3_stencil", "0", "(min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1)", "0");
  //auto enc2_conv3x3_s1_r_6_z = enc2_conv1x3_s1_r_7_x->add_loop("enc2_conv3x3_s1_r_6_z", 0, 3);
  //auto enc2_conv3x3_s1_r_6_y = enc2_conv3x3_s1_r_6_z->add_loop("enc2_conv3x3_s1_r_6_y", 0, 3);
  //auto enc2_conv3x3_s1_r_6_x = enc2_conv3x3_s1_r_6_y->add_loop("enc2_conv3x3_s1_r_6_x", 0, 64);

////store is: enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) = (enc2_conv3x3.stencil(0, (min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1), 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x, enc2_conv3x3_s1_r_6_y, enc2_conv3x3_s1_r_6_z, enc2_conv3x3_s1_r_6_x)*select(((((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i)*2) + enc2_conv3x3_s1_r_6_y) < 3), 0.000000f, enc1_sum.stencil((enc2_conv3x3_s1_r_6_x + 64), (max((((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i)*2) + enc2_conv3x3_s1_r_6_y), 3) + 5), ((((enc2_conv1x3_s1_r_7_z + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z) + 38)))))
  //auto hcompute_enc2_conv3x3_stencil_1 = enc2_conv3x3_s1_r_6_x->add_op("op_hcompute_enc2_conv3x3_stencil_1");
  //hcompute_enc2_conv3x3_stencil_1->add_function("hcompute_enc2_conv3x3_stencil_1");
  //hcompute_enc2_conv3x3_stencil_1->add_load("enc1_sum_stencil", "((((enc2_conv1x3_s1_r_7_z + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z) + 38)", "(max((((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i)*2) + enc2_conv3x3_s1_r_6_y), 3) + 5)", "(enc2_conv3x3_s1_r_6_x + 64)");
  //hcompute_enc2_conv3x3_stencil_1->add_load("enc2_conv3x3_stencil", "0", "(min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1)", "0");
  //hcompute_enc2_conv3x3_stencil_1->add_load("enc2_weights_0_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x3_s1_r_6_x", "enc2_conv3x3_s1_r_6_z", "enc2_conv3x3_s1_r_6_y", "enc2_conv1x3_s1_r_7_x");
  //hcompute_enc2_conv3x3_stencil_1->add_store("enc2_conv3x3_stencil", "0", "(min((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i), 1) + -1)", "0");
  //hcompute_enc2_conv3x3_stencil_1->compute_unit_needs_index_variable("enc2_conv3x1_s1_r_8_y");
  //hcompute_enc2_conv3x3_stencil_1->compute_unit_needs_index_variable("enc2_conv3x3_s1_r_6_y");
  //hcompute_enc2_conv3x3_stencil_1->compute_unit_needs_index_variable("enc2_sum_s0_i");

////consuming enc2_conv3x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x, 0, enc2_conv1x3_s1_r_7_z, enc2_conv1x3_s1_r_7_x)*select(((enc2_conv3x1_s1_r_8_y + enc2_sum_s0_i) < 1), 0.000000f, enc2_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_enc2_conv1x3_stencil_1 = enc2_conv1x3_s1_r_7_x->add_op("op_hcompute_enc2_conv1x3_stencil_1");
  //hcompute_enc2_conv1x3_stencil_1->add_function("hcompute_enc2_conv1x3_stencil_1");
  //hcompute_enc2_conv1x3_stencil_1->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_1->add_load("enc2_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_1->add_load("enc2_weights_1_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x3_s1_r_7_x", "enc2_conv1x3_s1_r_7_z", "0", "enc2_conv3x1_s1_r_8_x");
  //hcompute_enc2_conv1x3_stencil_1->add_store("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_1->compute_unit_needs_index_variable("enc2_conv3x1_s1_r_8_y");
  //hcompute_enc2_conv1x3_stencil_1->compute_unit_needs_index_variable("enc2_sum_s0_i");

////consuming enc2_conv1x3.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c + 128), enc2_conv3x1_s1_r_8_y, 0, enc2_conv3x1_s1_r_8_x)*enc2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc2_conv3x1_stencil_1 = enc2_conv3x1_s1_r_8_x->add_op("op_hcompute_enc2_conv3x1_stencil_1");
  //hcompute_enc2_conv3x1_stencil_1->add_function("hcompute_enc2_conv3x1_stencil_1");
  //hcompute_enc2_conv3x1_stencil_1->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_1->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_1->add_load("enc2_weights_2_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x1_s1_r_8_x", "0", "enc2_conv3x1_s1_r_8_y", "(enc2_sum_s0_c + 128)");
  //hcompute_enc2_conv3x1_stencil_1->add_store("enc2_conv3x1_stencil", "0", "0", "0");

////consuming enc2_conv3x1.stencil
//////producing enc2_conv1x1.stencil

////store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x1_stencil = enc2_sum_s0_c->add_op("op_hcompute_enc2_conv1x1_stencil");
  //hcompute_enc2_conv1x1_stencil->add_function("hcompute_enc2_conv1x1_stencil");
  //prg.buffer_port_widths["enc2_conv1x1_stencil"] = 32;
  //hcompute_enc2_conv1x1_stencil->add_store("enc2_conv1x1_stencil", "0", "0", "0");
  //auto enc2_conv1x1_s1_r_9_x = enc2_sum_s0_c->add_loop("enc2_conv1x1_s1_r_9_x", 0, 64);

////store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c + 128), 0, 0, enc2_conv1x1_s1_r_9_x)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x + 64), ((enc2_sum_s0_i*2) + 8), ((enc2_sum_s0_j*2) + 41))))
  //auto hcompute_enc2_conv1x1_stencil_1 = enc2_conv1x1_s1_r_9_x->add_op("op_hcompute_enc2_conv1x1_stencil_1");
  //hcompute_enc2_conv1x1_stencil_1->add_function("hcompute_enc2_conv1x1_stencil_1");
  //hcompute_enc2_conv1x1_stencil_1->add_load("enc1_sum_stencil", "((enc2_sum_s0_j*2) + 41)", "((enc2_sum_s0_i*2) + 8)", "(enc2_conv1x1_s1_r_9_x + 64)");
  //hcompute_enc2_conv1x1_stencil_1->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x1_stencil_1->add_load("enc2_weights_3_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x1_s1_r_9_x", "0", "0", "(enc2_sum_s0_c + 128)");
  //hcompute_enc2_conv1x1_stencil_1->add_store("enc2_conv1x1_stencil", "0", "0", "0");

////consuming enc2_conv1x1.stencil

////store is: enc2_sum.stencil((enc2_sum_s0_c + 128), (enc2_sum_s0_i + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc2_sum_stencil = enc2_sum_s0_c->add_op("op_hcompute_enc2_sum_stencil");
  //hcompute_enc2_sum_stencil->add_function("hcompute_enc2_sum_stencil");
  //hcompute_enc2_sum_stencil->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_sum_stencil->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //prg.buffer_port_widths["enc2_sum_stencil"] = 32;
  //hcompute_enc2_sum_stencil->add_store("enc2_sum_stencil", "(enc2_sum_s0_j + 19)", "(enc2_sum_s0_i + 4)", "(enc2_sum_s0_c + 128)");
  //auto enc2_sum_s0_i_1 = enc2_sum_s0_j->add_loop("enc2_sum_s0_i_1", 2, 44);
  //auto enc2_sum_s0_c_1 = enc2_sum_s0_i_1->add_loop("enc2_sum_s0_c_1", -128, 64);
//////producing enc2_conv3x1.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv3x1_stencil_2 = enc2_sum_s0_c_1->add_op("op_hcompute_enc2_conv3x1_stencil_2");
  //hcompute_enc2_conv3x1_stencil_2->add_function("hcompute_enc2_conv3x1_stencil_2");
  //hcompute_enc2_conv3x1_stencil_2->add_store("enc2_conv3x1_stencil", "0", "0", "0");
  //auto enc2_conv3x1_s1_r_8_y_1 = enc2_sum_s0_c_1->add_loop("enc2_conv3x1_s1_r_8_y_1", 0, 3);
  //auto enc2_conv3x1_s1_r_8_x_1 = enc2_conv3x1_s1_r_8_y_1->add_loop("enc2_conv3x1_s1_r_8_x_1", 0, 64);
//////producing enc2_conv1x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x3_stencil_2 = enc2_conv3x1_s1_r_8_x_1->add_op("op_hcompute_enc2_conv1x3_stencil_2");
  //hcompute_enc2_conv1x3_stencil_2->add_function("hcompute_enc2_conv1x3_stencil_2");
  //hcompute_enc2_conv1x3_stencil_2->add_store("enc2_conv1x3_stencil", "0", "0", "0");
  //auto enc2_conv1x3_s1_r_7_z_1 = enc2_conv3x1_s1_r_8_x_1->add_loop("enc2_conv1x3_s1_r_7_z_1", 0, 3);
  //auto enc2_conv1x3_s1_r_7_x_1 = enc2_conv1x3_s1_r_7_z_1->add_loop("enc2_conv1x3_s1_r_7_x_1", 0, 64);
//////producing enc2_conv3x3.stencil

////store is: enc2_conv3x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv3x3_stencil_2 = enc2_conv1x3_s1_r_7_x_1->add_op("op_hcompute_enc2_conv3x3_stencil_2");
  //hcompute_enc2_conv3x3_stencil_2->add_function("hcompute_enc2_conv3x3_stencil_2");
  //hcompute_enc2_conv3x3_stencil_2->add_store("enc2_conv3x3_stencil", "0", "0", "0");
  //auto enc2_conv3x3_s1_r_6_z_1 = enc2_conv1x3_s1_r_7_x_1->add_loop("enc2_conv3x3_s1_r_6_z_1", 0, 3);
  //auto enc2_conv3x3_s1_r_6_y_1 = enc2_conv3x3_s1_r_6_z_1->add_loop("enc2_conv3x3_s1_r_6_y_1", 0, 3);
  //auto enc2_conv3x3_s1_r_6_x_1 = enc2_conv3x3_s1_r_6_y_1->add_loop("enc2_conv3x3_s1_r_6_x_1", 0, 64);

////store is: enc2_conv3x3.stencil(0, 0, 0) = (enc2_conv3x3.stencil(0, 0, 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x_1, enc2_conv3x3_s1_r_6_y_1, enc2_conv3x3_s1_r_6_z_1, enc2_conv3x3_s1_r_6_x_1)*enc1_sum.stencil((enc2_conv3x3_s1_r_6_x_1 + 64), ((((enc2_conv3x1_s1_r_8_y_1 + enc2_sum_s0_i_1)*2) + enc2_conv3x3_s1_r_6_y_1) + 5), ((((enc2_conv1x3_s1_r_7_z_1 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_1) + 38))))
  //auto hcompute_enc2_conv3x3_stencil_3 = enc2_conv3x3_s1_r_6_x_1->add_op("op_hcompute_enc2_conv3x3_stencil_3");
  //hcompute_enc2_conv3x3_stencil_3->add_function("hcompute_enc2_conv3x3_stencil_3");
  //hcompute_enc2_conv3x3_stencil_3->add_load("enc1_sum_stencil", "((((enc2_conv1x3_s1_r_7_z_1 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_1) + 38)", "((((enc2_conv3x1_s1_r_8_y_1 + enc2_sum_s0_i_1)*2) + enc2_conv3x3_s1_r_6_y_1) + 5)", "(enc2_conv3x3_s1_r_6_x_1 + 64)");
  //hcompute_enc2_conv3x3_stencil_3->add_load("enc2_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x3_stencil_3->add_load("enc2_weights_0_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x3_s1_r_6_x_1", "enc2_conv3x3_s1_r_6_z_1", "enc2_conv3x3_s1_r_6_y_1", "enc2_conv1x3_s1_r_7_x_1");
  //hcompute_enc2_conv3x3_stencil_3->add_store("enc2_conv3x3_stencil", "0", "0", "0");

////consuming enc2_conv3x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x_1, 0, enc2_conv1x3_s1_r_7_z_1, enc2_conv1x3_s1_r_7_x_1)*enc2_conv3x3.stencil(0, 0, 0)))
  //auto hcompute_enc2_conv1x3_stencil_3 = enc2_conv1x3_s1_r_7_x_1->add_op("op_hcompute_enc2_conv1x3_stencil_3");
  //hcompute_enc2_conv1x3_stencil_3->add_function("hcompute_enc2_conv1x3_stencil_3");
  //hcompute_enc2_conv1x3_stencil_3->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_3->add_load("enc2_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_3->add_load("enc2_weights_1_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x3_s1_r_7_x_1", "enc2_conv1x3_s1_r_7_z_1", "0", "enc2_conv3x1_s1_r_8_x_1");
  //hcompute_enc2_conv1x3_stencil_3->add_store("enc2_conv1x3_stencil", "0", "0", "0");

////consuming enc2_conv1x3.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_1 + 128), enc2_conv3x1_s1_r_8_y_1, 0, enc2_conv3x1_s1_r_8_x_1)*enc2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc2_conv3x1_stencil_3 = enc2_conv3x1_s1_r_8_x_1->add_op("op_hcompute_enc2_conv3x1_stencil_3");
  //hcompute_enc2_conv3x1_stencil_3->add_function("hcompute_enc2_conv3x1_stencil_3");
  //hcompute_enc2_conv3x1_stencil_3->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_3->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_3->add_load("enc2_weights_2_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x1_s1_r_8_x_1", "0", "enc2_conv3x1_s1_r_8_y_1", "(enc2_sum_s0_c_1 + 128)");
  //hcompute_enc2_conv3x1_stencil_3->add_store("enc2_conv3x1_stencil", "0", "0", "0");

////consuming enc2_conv3x1.stencil
//////producing enc2_conv1x1.stencil

////store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x1_stencil_2 = enc2_sum_s0_c_1->add_op("op_hcompute_enc2_conv1x1_stencil_2");
  //hcompute_enc2_conv1x1_stencil_2->add_function("hcompute_enc2_conv1x1_stencil_2");
  //hcompute_enc2_conv1x1_stencil_2->add_store("enc2_conv1x1_stencil", "0", "0", "0");
  //auto enc2_conv1x1_s1_r_9_x_1 = enc2_sum_s0_c_1->add_loop("enc2_conv1x1_s1_r_9_x_1", 0, 64);

////store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_1 + 128), 0, 0, enc2_conv1x1_s1_r_9_x_1)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x_1 + 64), ((enc2_sum_s0_i_1*2) + 8), ((enc2_sum_s0_j*2) + 41))))
  //auto hcompute_enc2_conv1x1_stencil_3 = enc2_conv1x1_s1_r_9_x_1->add_op("op_hcompute_enc2_conv1x1_stencil_3");
  //hcompute_enc2_conv1x1_stencil_3->add_function("hcompute_enc2_conv1x1_stencil_3");
  //hcompute_enc2_conv1x1_stencil_3->add_load("enc1_sum_stencil", "((enc2_sum_s0_j*2) + 41)", "((enc2_sum_s0_i_1*2) + 8)", "(enc2_conv1x1_s1_r_9_x_1 + 64)");
  //hcompute_enc2_conv1x1_stencil_3->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x1_stencil_3->add_load("enc2_weights_3_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x1_s1_r_9_x_1", "0", "0", "(enc2_sum_s0_c_1 + 128)");
  //hcompute_enc2_conv1x1_stencil_3->add_store("enc2_conv1x1_stencil", "0", "0", "0");

////consuming enc2_conv1x1.stencil

////store is: enc2_sum.stencil((enc2_sum_s0_c_1 + 128), (enc2_sum_s0_i_1 + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc2_sum_stencil_1 = enc2_sum_s0_c_1->add_op("op_hcompute_enc2_sum_stencil_1");
  //hcompute_enc2_sum_stencil_1->add_function("hcompute_enc2_sum_stencil_1");
  //hcompute_enc2_sum_stencil_1->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_sum_stencil_1->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc2_sum_stencil_1->add_store("enc2_sum_stencil", "(enc2_sum_s0_j + 19)", "(enc2_sum_s0_i_1 + 4)", "(enc2_sum_s0_c_1 + 128)");
  //auto enc2_sum_s0_i_2 = enc2_sum_s0_j->add_loop("enc2_sum_s0_i_2", 44, 49);
  //auto enc2_sum_s0_c_2 = enc2_sum_s0_i_2->add_loop("enc2_sum_s0_c_2", -128, 64);
//////producing enc2_conv3x1.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv3x1_stencil_4 = enc2_sum_s0_c_2->add_op("op_hcompute_enc2_conv3x1_stencil_4");
  //hcompute_enc2_conv3x1_stencil_4->add_function("hcompute_enc2_conv3x1_stencil_4");
  //hcompute_enc2_conv3x1_stencil_4->add_store("enc2_conv3x1_stencil", "0", "0", "0");
  //auto enc2_conv3x1_s1_r_8_y_2 = enc2_sum_s0_c_2->add_loop("enc2_conv3x1_s1_r_8_y_2", 0, 3);
  //auto enc2_conv3x1_s1_r_8_x_2 = enc2_conv3x1_s1_r_8_y_2->add_loop("enc2_conv3x1_s1_r_8_x_2", 0, 64);
//////producing enc2_conv1x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x3_stencil_4 = enc2_conv3x1_s1_r_8_x_2->add_op("op_hcompute_enc2_conv1x3_stencil_4");
  //hcompute_enc2_conv1x3_stencil_4->add_function("hcompute_enc2_conv1x3_stencil_4");
  //hcompute_enc2_conv1x3_stencil_4->add_store("enc2_conv1x3_stencil", "0", "0", "0");
  //auto enc2_conv1x3_s1_r_7_z_2 = enc2_conv3x1_s1_r_8_x_2->add_loop("enc2_conv1x3_s1_r_7_z_2", 0, 3);
  //auto enc2_conv1x3_s1_r_7_x_2 = enc2_conv1x3_s1_r_7_z_2->add_loop("enc2_conv1x3_s1_r_7_x_2", 0, 64);
//////producing enc2_conv3x3.stencil

////store is: enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) = 0.000000f
  //auto hcompute_enc2_conv3x3_stencil_4 = enc2_conv1x3_s1_r_7_x_2->add_op("op_hcompute_enc2_conv3x3_stencil_4");
  //hcompute_enc2_conv3x3_stencil_4->add_function("hcompute_enc2_conv3x3_stencil_4");
  //hcompute_enc2_conv3x3_stencil_4->add_store("enc2_conv3x3_stencil", "0", "(max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45)", "0");
  //auto enc2_conv3x3_s1_r_6_z_2 = enc2_conv1x3_s1_r_7_x_2->add_loop("enc2_conv3x3_s1_r_6_z_2", 0, 3);
  //auto enc2_conv3x3_s1_r_6_y_2 = enc2_conv3x3_s1_r_6_z_2->add_loop("enc2_conv3x3_s1_r_6_y_2", 0, 3);
  //auto enc2_conv3x3_s1_r_6_x_2 = enc2_conv3x3_s1_r_6_y_2->add_loop("enc2_conv3x3_s1_r_6_x_2", 0, 64);

////store is: enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) = (enc2_conv3x3.stencil(0, (max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45), 0) + (enc2_weights_0_im_global_wrapper_global_wrapper.stencil(enc2_conv1x3_s1_r_7_x_2, enc2_conv3x3_s1_r_6_y_2, enc2_conv3x3_s1_r_6_z_2, enc2_conv3x3_s1_r_6_x_2)*enc1_sum.stencil((enc2_conv3x3_s1_r_6_x_2 + 64), (min((((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2)*2) + enc2_conv3x3_s1_r_6_y_2), 92) + 5), ((((enc2_conv1x3_s1_r_7_z_2 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_2) + 38))))
  //auto hcompute_enc2_conv3x3_stencil_5 = enc2_conv3x3_s1_r_6_x_2->add_op("op_hcompute_enc2_conv3x3_stencil_5");
  //hcompute_enc2_conv3x3_stencil_5->add_function("hcompute_enc2_conv3x3_stencil_5");
  //hcompute_enc2_conv3x3_stencil_5->add_load("enc1_sum_stencil", "((((enc2_conv1x3_s1_r_7_z_2 + enc2_sum_s0_j)*2) + enc2_conv3x3_s1_r_6_z_2) + 38)", "(min((((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2)*2) + enc2_conv3x3_s1_r_6_y_2), 92) + 5)", "(enc2_conv3x3_s1_r_6_x_2 + 64)");
  //hcompute_enc2_conv3x3_stencil_5->add_load("enc2_conv3x3_stencil", "0", "(max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45)", "0");
  //hcompute_enc2_conv3x3_stencil_5->add_load("enc2_weights_0_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x3_s1_r_6_x_2", "enc2_conv3x3_s1_r_6_z_2", "enc2_conv3x3_s1_r_6_y_2", "enc2_conv1x3_s1_r_7_x_2");
  //hcompute_enc2_conv3x3_stencil_5->add_store("enc2_conv3x3_stencil", "0", "(max((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2), 45) + -45)", "0");

////consuming enc2_conv3x3.stencil

////store is: enc2_conv1x3.stencil(0, 0, 0) = (enc2_conv1x3.stencil(0, 0, 0) + (enc2_weights_1_im_global_wrapper_global_wrapper.stencil(enc2_conv3x1_s1_r_8_x_2, 0, enc2_conv1x3_s1_r_7_z_2, enc2_conv1x3_s1_r_7_x_2)*select(((enc2_conv3x1_s1_r_8_y_2 + enc2_sum_s0_i_2) < 46), enc2_conv3x3.stencil(0, 0, 0), 0.000000f)))
  //auto hcompute_enc2_conv1x3_stencil_5 = enc2_conv1x3_s1_r_7_x_2->add_op("op_hcompute_enc2_conv1x3_stencil_5");
  //hcompute_enc2_conv1x3_stencil_5->add_function("hcompute_enc2_conv1x3_stencil_5");
  //hcompute_enc2_conv1x3_stencil_5->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_5->add_load("enc2_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_5->add_load("enc2_weights_1_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x3_s1_r_7_x_2", "enc2_conv1x3_s1_r_7_z_2", "0", "enc2_conv3x1_s1_r_8_x_2");
  //hcompute_enc2_conv1x3_stencil_5->add_store("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x3_stencil_5->compute_unit_needs_index_variable("enc2_conv3x1_s1_r_8_y_2");
  //hcompute_enc2_conv1x3_stencil_5->compute_unit_needs_index_variable("enc2_sum_s0_i_2");

////consuming enc2_conv1x3.stencil

////store is: enc2_conv3x1.stencil(0, 0, 0) = (enc2_conv3x1.stencil(0, 0, 0) + (enc2_weights_2_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_2 + 128), enc2_conv3x1_s1_r_8_y_2, 0, enc2_conv3x1_s1_r_8_x_2)*enc2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc2_conv3x1_stencil_5 = enc2_conv3x1_s1_r_8_x_2->add_op("op_hcompute_enc2_conv3x1_stencil_5");
  //hcompute_enc2_conv3x1_stencil_5->add_function("hcompute_enc2_conv3x1_stencil_5");
  //hcompute_enc2_conv3x1_stencil_5->add_load("enc2_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_5->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv3x1_stencil_5->add_load("enc2_weights_2_im_global_wrapper_global_wrapper_stencil", "enc2_conv3x1_s1_r_8_x_2", "0", "enc2_conv3x1_s1_r_8_y_2", "(enc2_sum_s0_c_2 + 128)");
  //hcompute_enc2_conv3x1_stencil_5->add_store("enc2_conv3x1_stencil", "0", "0", "0");

////consuming enc2_conv3x1.stencil
//////producing enc2_conv1x1.stencil

////store is: enc2_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc2_conv1x1_stencil_4 = enc2_sum_s0_c_2->add_op("op_hcompute_enc2_conv1x1_stencil_4");
  //hcompute_enc2_conv1x1_stencil_4->add_function("hcompute_enc2_conv1x1_stencil_4");
  //hcompute_enc2_conv1x1_stencil_4->add_store("enc2_conv1x1_stencil", "0", "0", "0");
  //auto enc2_conv1x1_s1_r_9_x_2 = enc2_sum_s0_c_2->add_loop("enc2_conv1x1_s1_r_9_x_2", 0, 64);

////store is: enc2_conv1x1.stencil(0, 0, 0) = (enc2_conv1x1.stencil(0, 0, 0) + (enc2_weights_3_im_global_wrapper_global_wrapper.stencil((enc2_sum_s0_c_2 + 128), 0, 0, enc2_conv1x1_s1_r_9_x_2)*enc1_sum.stencil((enc2_conv1x1_s1_r_9_x_2 + 64), ((enc2_sum_s0_i_2*2) + 8), ((enc2_sum_s0_j*2) + 41))))
  //auto hcompute_enc2_conv1x1_stencil_5 = enc2_conv1x1_s1_r_9_x_2->add_op("op_hcompute_enc2_conv1x1_stencil_5");
  //hcompute_enc2_conv1x1_stencil_5->add_function("hcompute_enc2_conv1x1_stencil_5");
  //hcompute_enc2_conv1x1_stencil_5->add_load("enc1_sum_stencil", "((enc2_sum_s0_j*2) + 41)", "((enc2_sum_s0_i_2*2) + 8)", "(enc2_conv1x1_s1_r_9_x_2 + 64)");
  //hcompute_enc2_conv1x1_stencil_5->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_conv1x1_stencil_5->add_load("enc2_weights_3_im_global_wrapper_global_wrapper_stencil", "enc2_conv1x1_s1_r_9_x_2", "0", "0", "(enc2_sum_s0_c_2 + 128)");
  //hcompute_enc2_conv1x1_stencil_5->add_store("enc2_conv1x1_stencil", "0", "0", "0");

////consuming enc2_conv1x1.stencil

////store is: enc2_sum.stencil((enc2_sum_s0_c_2 + 128), (enc2_sum_s0_i_2 + 4), (enc2_sum_s0_j + 19)) = (enc2_conv3x1.stencil(0, 0, 0) + enc2_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc2_sum_stencil_2 = enc2_sum_s0_c_2->add_op("op_hcompute_enc2_sum_stencil_2");
  //hcompute_enc2_sum_stencil_2->add_function("hcompute_enc2_sum_stencil_2");
  //hcompute_enc2_sum_stencil_2->add_load("enc2_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc2_sum_stencil_2->add_load("enc2_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc2_sum_stencil_2->add_store("enc2_sum_stencil", "(enc2_sum_s0_j + 19)", "(enc2_sum_s0_i_2 + 4)", "(enc2_sum_s0_c_2 + 128)");

////consuming enc2_sum.stencil
//////producing enc3_weights_3_im_global_wrapper_global_wrapper.stencil
  //auto enc3_weights_3_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc3_weights_3_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc3_weights_3_im_global_wrapper_global_wrapper_s0__0 = enc3_weights_3_im_global_wrapper_global_wrapper_s0__3->add_loop("enc3_weights_3_im_global_wrapper_global_wrapper_s0__0", 0, 128);

////store is: enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc3_weights_3_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_3_im_global_wrapper.stencil(enc3_weights_3_im_global_wrapper_global_wrapper_s0__0, 0, 0, enc3_weights_3_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil = enc3_weights_3_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil->add_load("enc3_weights_3_im_global_wrapper_stencil", "enc3_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "enc3_weights_3_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc3_weights_3_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc3_weights_3_im_global_wrapper_global_wrapper_stencil->add_store("enc3_weights_3_im_global_wrapper_global_wrapper_stencil", "enc3_weights_3_im_global_wrapper_global_wrapper_s0__3", "0", "0", "enc3_weights_3_im_global_wrapper_global_wrapper_s0__0");

////consuming enc3_weights_3_im_global_wrapper_global_wrapper.stencil
//////producing enc3_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto enc3_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc3_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto enc3_weights_0_im_global_wrapper_global_wrapper_s0__2 = enc3_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("enc3_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc3_weights_0_im_global_wrapper_global_wrapper_s0__1 = enc3_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("enc3_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc3_weights_0_im_global_wrapper_global_wrapper_s0__0 = enc3_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("enc3_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 40);

////store is: enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_weights_0_im_global_wrapper_global_wrapper_s0__0, enc3_weights_0_im_global_wrapper_global_wrapper_s0__1, enc3_weights_0_im_global_wrapper_global_wrapper_s0__2, enc3_weights_0_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_0_im_global_wrapper.stencil(enc3_weights_0_im_global_wrapper_global_wrapper_s0__0, enc3_weights_0_im_global_wrapper_global_wrapper_s0__1, enc3_weights_0_im_global_wrapper_global_wrapper_s0__2, enc3_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil = enc3_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("enc3_weights_0_im_global_wrapper_stencil", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc3_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc3_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("enc3_weights_0_im_global_wrapper_global_wrapper_stencil", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__3", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__2", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__1", "enc3_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming enc3_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing enc3_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto enc3_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc3_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto enc3_weights_1_im_global_wrapper_global_wrapper_s0__2 = enc3_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("enc3_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto enc3_weights_1_im_global_wrapper_global_wrapper_s0__0 = enc3_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("enc3_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 128);

////store is: enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc3_weights_1_im_global_wrapper_global_wrapper_s0__2, enc3_weights_1_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_1_im_global_wrapper.stencil(enc3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, enc3_weights_1_im_global_wrapper_global_wrapper_s0__2, enc3_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil = enc3_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("enc3_weights_1_im_global_wrapper_stencil", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc3_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc3_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("enc3_weights_1_im_global_wrapper_global_wrapper_stencil", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__3", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "enc3_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming enc3_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing enc3_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto enc3_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("enc3_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto enc3_weights_2_im_global_wrapper_global_wrapper_s0__1 = enc3_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("enc3_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto enc3_weights_2_im_global_wrapper_global_wrapper_s0__0 = enc3_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("enc3_weights_2_im_global_wrapper_global_wrapper_s0__0", 0, 128);

////store is: enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_weights_2_im_global_wrapper_global_wrapper_s0__0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__3) = enc3_weights_2_im_global_wrapper.stencil(enc3_weights_2_im_global_wrapper_global_wrapper_s0__0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, enc3_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil = enc3_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("enc3_weights_2_im_global_wrapper_stencil", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__1", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["enc3_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_enc3_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("enc3_weights_2_im_global_wrapper_global_wrapper_stencil", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__1", "enc3_weights_2_im_global_wrapper_global_wrapper_s0__0");

////consuming enc3_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing enc3_sum.stencil
  //auto enc3_sum_s0_j = prg.add_loop("enc3_sum_s0_j", -8, 728);
  //auto enc3_sum_s0_i = enc3_sum_s0_j->add_loop("enc3_sum_s0_i", -2, 2);
  //auto enc3_sum_s0_c = enc3_sum_s0_i->add_loop("enc3_sum_s0_c", 0, 128);
//////producing enc3_conv3x1.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv3x1_stencil = enc3_sum_s0_c->add_op("op_hcompute_enc3_conv3x1_stencil");
  //hcompute_enc3_conv3x1_stencil->add_function("hcompute_enc3_conv3x1_stencil");
  //prg.buffer_port_widths["enc3_conv3x1_stencil"] = 32;
  //hcompute_enc3_conv3x1_stencil->add_store("enc3_conv3x1_stencil", "0", "0", "0");
  //auto enc3_conv3x1_s1_r_12_y = enc3_sum_s0_c->add_loop("enc3_conv3x1_s1_r_12_y", 0, 3);
  //auto enc3_conv3x1_s1_r_12_x = enc3_conv3x1_s1_r_12_y->add_loop("enc3_conv3x1_s1_r_12_x", 0, 128);
//////producing enc3_conv1x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x3_stencil = enc3_conv3x1_s1_r_12_x->add_op("op_hcompute_enc3_conv1x3_stencil");
  //hcompute_enc3_conv1x3_stencil->add_function("hcompute_enc3_conv1x3_stencil");
  //prg.buffer_port_widths["enc3_conv1x3_stencil"] = 32;
  //hcompute_enc3_conv1x3_stencil->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //auto enc3_conv1x3_s1_r_11_z = enc3_conv3x1_s1_r_12_x->add_loop("enc3_conv1x3_s1_r_11_z", 0, 3);
  //auto enc3_conv1x3_s1_r_11_x = enc3_conv1x3_s1_r_11_z->add_loop("enc3_conv1x3_s1_r_11_x", 0, 128);
//////producing enc3_conv3x3.stencil

////store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) = 0.000000f
  //auto hcompute_enc3_conv3x3_stencil = enc3_conv1x3_s1_r_11_x->add_op("op_hcompute_enc3_conv3x3_stencil");
  //hcompute_enc3_conv3x3_stencil->add_function("hcompute_enc3_conv3x3_stencil");
  //prg.buffer_port_widths["enc3_conv3x3_stencil"] = 32;
  //hcompute_enc3_conv3x3_stencil->add_store("enc3_conv3x3_stencil", "0", "(min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1)", "(max(enc3_conv1x3_s1_r_11_x, 39) + -39)");
  //auto enc3_conv3x3_s1_r_10_z = enc3_conv1x3_s1_r_11_x->add_loop("enc3_conv3x3_s1_r_10_z", 0, 3);
  //auto enc3_conv3x3_s1_r_10_y = enc3_conv3x3_s1_r_10_z->add_loop("enc3_conv3x3_s1_r_10_y", 0, 3);
  //auto enc3_conv3x3_s1_r_10_x = enc3_conv3x3_s1_r_10_y->add_loop("enc3_conv3x3_s1_r_10_x", 0, 64);

////store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) = (enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x, 39) + -39), (min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1), 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x, enc3_conv3x3_s1_r_10_y, enc3_conv3x3_s1_r_10_z, enc3_conv3x3_s1_r_10_x)*select(((((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i)*2) + enc3_conv3x3_s1_r_10_y) < 3), 0.000000f, enc2_sum.stencil((enc3_conv3x3_s1_r_10_x + 128), (max((((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i)*2) + enc3_conv3x3_s1_r_10_y), 3) + 1), ((((enc3_conv1x3_s1_r_11_z + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z) + 16)))))
  //auto hcompute_enc3_conv3x3_stencil_1 = enc3_conv3x3_s1_r_10_x->add_op("op_hcompute_enc3_conv3x3_stencil_1");
  //hcompute_enc3_conv3x3_stencil_1->add_function("hcompute_enc3_conv3x3_stencil_1");
  //hcompute_enc3_conv3x3_stencil_1->add_load("enc2_sum_stencil", "((((enc3_conv1x3_s1_r_11_z + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z) + 16)", "(max((((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i)*2) + enc3_conv3x3_s1_r_10_y), 3) + 1)", "(enc3_conv3x3_s1_r_10_x + 128)");
  //hcompute_enc3_conv3x3_stencil_1->add_load("enc3_conv3x3_stencil", "0", "(min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1)", "(max(enc3_conv1x3_s1_r_11_x, 39) + -39)");
  //hcompute_enc3_conv3x3_stencil_1->add_load("enc3_weights_0_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x3_s1_r_10_x", "enc3_conv3x3_s1_r_10_z", "enc3_conv3x3_s1_r_10_y", "enc3_conv1x3_s1_r_11_x");
  //hcompute_enc3_conv3x3_stencil_1->add_store("enc3_conv3x3_stencil", "0", "(min((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i), 1) + -1)", "(max(enc3_conv1x3_s1_r_11_x, 39) + -39)");
  //hcompute_enc3_conv3x3_stencil_1->compute_unit_needs_index_variable("enc3_conv3x1_s1_r_12_y");
  //hcompute_enc3_conv3x3_stencil_1->compute_unit_needs_index_variable("enc3_conv3x3_s1_r_10_y");
  //hcompute_enc3_conv3x3_stencil_1->compute_unit_needs_index_variable("enc3_sum_s0_i");

////consuming enc3_conv3x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x, 0, enc3_conv1x3_s1_r_11_z, enc3_conv1x3_s1_r_11_x)*select(((40 <= enc3_conv1x3_s1_r_11_x) || ((enc3_conv3x1_s1_r_12_y + enc3_sum_s0_i) < 1)), 0.000000f, enc3_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_enc3_conv1x3_stencil_1 = enc3_conv1x3_s1_r_11_x->add_op("op_hcompute_enc3_conv1x3_stencil_1");
  //hcompute_enc3_conv1x3_stencil_1->add_function("hcompute_enc3_conv1x3_stencil_1");
  //hcompute_enc3_conv1x3_stencil_1->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_1->add_load("enc3_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_1->add_load("enc3_weights_1_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x3_s1_r_11_x", "enc3_conv1x3_s1_r_11_z", "0", "enc3_conv3x1_s1_r_12_x");
  //hcompute_enc3_conv1x3_stencil_1->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_1->compute_unit_needs_index_variable("enc3_conv1x3_s1_r_11_x");
  //hcompute_enc3_conv1x3_stencil_1->compute_unit_needs_index_variable("enc3_conv3x1_s1_r_12_y");
  //hcompute_enc3_conv1x3_stencil_1->compute_unit_needs_index_variable("enc3_sum_s0_i");

////consuming enc3_conv1x3.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c, enc3_conv3x1_s1_r_12_y, 0, enc3_conv3x1_s1_r_12_x)*enc3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc3_conv3x1_stencil_1 = enc3_conv3x1_s1_r_12_x->add_op("op_hcompute_enc3_conv3x1_stencil_1");
  //hcompute_enc3_conv3x1_stencil_1->add_function("hcompute_enc3_conv3x1_stencil_1");
  //hcompute_enc3_conv3x1_stencil_1->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_1->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_1->add_load("enc3_weights_2_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x1_s1_r_12_x", "0", "enc3_conv3x1_s1_r_12_y", "enc3_sum_s0_c");
  //hcompute_enc3_conv3x1_stencil_1->add_store("enc3_conv3x1_stencil", "0", "0", "0");

////consuming enc3_conv3x1.stencil
//////producing enc3_conv1x1.stencil

////store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x1_stencil = enc3_sum_s0_c->add_op("op_hcompute_enc3_conv1x1_stencil");
  //hcompute_enc3_conv1x1_stencil->add_function("hcompute_enc3_conv1x1_stencil");
  //prg.buffer_port_widths["enc3_conv1x1_stencil"] = 32;
  //hcompute_enc3_conv1x1_stencil->add_store("enc3_conv1x1_stencil", "0", "0", "0");
  //auto enc3_conv1x1_s1_r_13_x = enc3_sum_s0_c->add_loop("enc3_conv1x1_s1_r_13_x", 0, 64);

////store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c, 0, 0, enc3_conv1x1_s1_r_13_x)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x + 128), ((enc3_sum_s0_i*2) + 4), ((enc3_sum_s0_j*2) + 19))))
  //auto hcompute_enc3_conv1x1_stencil_1 = enc3_conv1x1_s1_r_13_x->add_op("op_hcompute_enc3_conv1x1_stencil_1");
  //hcompute_enc3_conv1x1_stencil_1->add_function("hcompute_enc3_conv1x1_stencil_1");
  //hcompute_enc3_conv1x1_stencil_1->add_load("enc2_sum_stencil", "((enc3_sum_s0_j*2) + 19)", "((enc3_sum_s0_i*2) + 4)", "(enc3_conv1x1_s1_r_13_x + 128)");
  //hcompute_enc3_conv1x1_stencil_1->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x1_stencil_1->add_load("enc3_weights_3_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x1_s1_r_13_x", "0", "0", "enc3_sum_s0_c");
  //hcompute_enc3_conv1x1_stencil_1->add_store("enc3_conv1x1_stencil", "0", "0", "0");

////consuming enc3_conv1x1.stencil

////store is: enc3_sum.stencil(enc3_sum_s0_c, (enc3_sum_s0_i + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc3_sum_stencil = enc3_sum_s0_c->add_op("op_hcompute_enc3_sum_stencil");
  //hcompute_enc3_sum_stencil->add_function("hcompute_enc3_sum_stencil");
  //hcompute_enc3_sum_stencil->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_sum_stencil->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //prg.buffer_port_widths["enc3_sum_stencil"] = 32;
  //hcompute_enc3_sum_stencil->add_store("enc3_sum_stencil", "(enc3_sum_s0_j + 8)", "(enc3_sum_s0_i + 2)", "enc3_sum_s0_c");
  //auto enc3_sum_s0_i_1 = enc3_sum_s0_j->add_loop("enc3_sum_s0_i_1", 2, 21);
  //auto enc3_sum_s0_c_1 = enc3_sum_s0_i_1->add_loop("enc3_sum_s0_c_1", 0, 128);
//////producing enc3_conv3x1.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv3x1_stencil_2 = enc3_sum_s0_c_1->add_op("op_hcompute_enc3_conv3x1_stencil_2");
  //hcompute_enc3_conv3x1_stencil_2->add_function("hcompute_enc3_conv3x1_stencil_2");
  //hcompute_enc3_conv3x1_stencil_2->add_store("enc3_conv3x1_stencil", "0", "0", "0");
  //auto enc3_conv3x1_s1_r_12_y_1 = enc3_sum_s0_c_1->add_loop("enc3_conv3x1_s1_r_12_y_1", 0, 3);
  //auto enc3_conv3x1_s1_r_12_x_1 = enc3_conv3x1_s1_r_12_y_1->add_loop("enc3_conv3x1_s1_r_12_x_1", 0, 128);
//////producing enc3_conv1x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x3_stencil_2 = enc3_conv3x1_s1_r_12_x_1->add_op("op_hcompute_enc3_conv1x3_stencil_2");
  //hcompute_enc3_conv1x3_stencil_2->add_function("hcompute_enc3_conv1x3_stencil_2");
  //hcompute_enc3_conv1x3_stencil_2->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //auto enc3_conv1x3_s1_r_11_z_1 = enc3_conv3x1_s1_r_12_x_1->add_loop("enc3_conv1x3_s1_r_11_z_1", 0, 3);
  //auto enc3_conv1x3_s1_r_11_x_1 = enc3_conv1x3_s1_r_11_z_1->add_loop("enc3_conv1x3_s1_r_11_x_1", 0, 40);
//////producing enc3_conv3x3.stencil

////store is: enc3_conv3x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv3x3_stencil_2 = enc3_conv1x3_s1_r_11_x_1->add_op("op_hcompute_enc3_conv3x3_stencil_2");
  //hcompute_enc3_conv3x3_stencil_2->add_function("hcompute_enc3_conv3x3_stencil_2");
  //hcompute_enc3_conv3x3_stencil_2->add_store("enc3_conv3x3_stencil", "0", "0", "0");
  //auto enc3_conv3x3_s1_r_10_z_1 = enc3_conv1x3_s1_r_11_x_1->add_loop("enc3_conv3x3_s1_r_10_z_1", 0, 3);
  //auto enc3_conv3x3_s1_r_10_y_1 = enc3_conv3x3_s1_r_10_z_1->add_loop("enc3_conv3x3_s1_r_10_y_1", 0, 3);
  //auto enc3_conv3x3_s1_r_10_x_1 = enc3_conv3x3_s1_r_10_y_1->add_loop("enc3_conv3x3_s1_r_10_x_1", 0, 64);

////store is: enc3_conv3x3.stencil(0, 0, 0) = (enc3_conv3x3.stencil(0, 0, 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x_1, enc3_conv3x3_s1_r_10_y_1, enc3_conv3x3_s1_r_10_z_1, enc3_conv3x3_s1_r_10_x_1)*enc2_sum.stencil((enc3_conv3x3_s1_r_10_x_1 + 128), ((((enc3_conv3x1_s1_r_12_y_1 + enc3_sum_s0_i_1)*2) + enc3_conv3x3_s1_r_10_y_1) + 1), ((((enc3_conv1x3_s1_r_11_z_1 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_1) + 16))))
  //auto hcompute_enc3_conv3x3_stencil_3 = enc3_conv3x3_s1_r_10_x_1->add_op("op_hcompute_enc3_conv3x3_stencil_3");
  //hcompute_enc3_conv3x3_stencil_3->add_function("hcompute_enc3_conv3x3_stencil_3");
  //hcompute_enc3_conv3x3_stencil_3->add_load("enc2_sum_stencil", "((((enc3_conv1x3_s1_r_11_z_1 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_1) + 16)", "((((enc3_conv3x1_s1_r_12_y_1 + enc3_sum_s0_i_1)*2) + enc3_conv3x3_s1_r_10_y_1) + 1)", "(enc3_conv3x3_s1_r_10_x_1 + 128)");
  //hcompute_enc3_conv3x3_stencil_3->add_load("enc3_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x3_stencil_3->add_load("enc3_weights_0_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x3_s1_r_10_x_1", "enc3_conv3x3_s1_r_10_z_1", "enc3_conv3x3_s1_r_10_y_1", "enc3_conv1x3_s1_r_11_x_1");
  //hcompute_enc3_conv3x3_stencil_3->add_store("enc3_conv3x3_stencil", "0", "0", "0");

////consuming enc3_conv3x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x_1, 0, enc3_conv1x3_s1_r_11_z_1, enc3_conv1x3_s1_r_11_x_1)*enc3_conv3x3.stencil(0, 0, 0)))
  //auto hcompute_enc3_conv1x3_stencil_3 = enc3_conv1x3_s1_r_11_x_1->add_op("op_hcompute_enc3_conv1x3_stencil_3");
  //hcompute_enc3_conv1x3_stencil_3->add_function("hcompute_enc3_conv1x3_stencil_3");
  //hcompute_enc3_conv1x3_stencil_3->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_3->add_load("enc3_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_3->add_load("enc3_weights_1_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x3_s1_r_11_x_1", "enc3_conv1x3_s1_r_11_z_1", "0", "enc3_conv3x1_s1_r_12_x_1");
  //hcompute_enc3_conv1x3_stencil_3->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //auto enc3_conv1x3_s1_r_11_x_2 = enc3_conv1x3_s1_r_11_z_1->add_loop("enc3_conv1x3_s1_r_11_x_2", 40, 128);

////consuming enc3_conv3x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = enc3_conv1x3.stencil(0, 0, 0)
  //auto hcompute_enc3_conv1x3_stencil_4 = enc3_conv1x3_s1_r_11_x_2->add_op("op_hcompute_enc3_conv1x3_stencil_4");
  //hcompute_enc3_conv1x3_stencil_4->add_function("hcompute_enc3_conv1x3_stencil_4");
  //hcompute_enc3_conv1x3_stencil_4->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_4->add_store("enc3_conv1x3_stencil", "0", "0", "0");

////consuming enc3_conv1x3.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_1, enc3_conv3x1_s1_r_12_y_1, 0, enc3_conv3x1_s1_r_12_x_1)*enc3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc3_conv3x1_stencil_3 = enc3_conv3x1_s1_r_12_x_1->add_op("op_hcompute_enc3_conv3x1_stencil_3");
  //hcompute_enc3_conv3x1_stencil_3->add_function("hcompute_enc3_conv3x1_stencil_3");
  //hcompute_enc3_conv3x1_stencil_3->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_3->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_3->add_load("enc3_weights_2_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x1_s1_r_12_x_1", "0", "enc3_conv3x1_s1_r_12_y_1", "enc3_sum_s0_c_1");
  //hcompute_enc3_conv3x1_stencil_3->add_store("enc3_conv3x1_stencil", "0", "0", "0");

////consuming enc3_conv3x1.stencil
//////producing enc3_conv1x1.stencil

////store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x1_stencil_2 = enc3_sum_s0_c_1->add_op("op_hcompute_enc3_conv1x1_stencil_2");
  //hcompute_enc3_conv1x1_stencil_2->add_function("hcompute_enc3_conv1x1_stencil_2");
  //hcompute_enc3_conv1x1_stencil_2->add_store("enc3_conv1x1_stencil", "0", "0", "0");
  //auto enc3_conv1x1_s1_r_13_x_1 = enc3_sum_s0_c_1->add_loop("enc3_conv1x1_s1_r_13_x_1", 0, 64);

////store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_1, 0, 0, enc3_conv1x1_s1_r_13_x_1)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x_1 + 128), ((enc3_sum_s0_i_1*2) + 4), ((enc3_sum_s0_j*2) + 19))))
  //auto hcompute_enc3_conv1x1_stencil_3 = enc3_conv1x1_s1_r_13_x_1->add_op("op_hcompute_enc3_conv1x1_stencil_3");
  //hcompute_enc3_conv1x1_stencil_3->add_function("hcompute_enc3_conv1x1_stencil_3");
  //hcompute_enc3_conv1x1_stencil_3->add_load("enc2_sum_stencil", "((enc3_sum_s0_j*2) + 19)", "((enc3_sum_s0_i_1*2) + 4)", "(enc3_conv1x1_s1_r_13_x_1 + 128)");
  //hcompute_enc3_conv1x1_stencil_3->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x1_stencil_3->add_load("enc3_weights_3_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x1_s1_r_13_x_1", "0", "0", "enc3_sum_s0_c_1");
  //hcompute_enc3_conv1x1_stencil_3->add_store("enc3_conv1x1_stencil", "0", "0", "0");

////consuming enc3_conv1x1.stencil

////store is: enc3_sum.stencil(enc3_sum_s0_c_1, (enc3_sum_s0_i_1 + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc3_sum_stencil_1 = enc3_sum_s0_c_1->add_op("op_hcompute_enc3_sum_stencil_1");
  //hcompute_enc3_sum_stencil_1->add_function("hcompute_enc3_sum_stencil_1");
  //hcompute_enc3_sum_stencil_1->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_sum_stencil_1->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc3_sum_stencil_1->add_store("enc3_sum_stencil", "(enc3_sum_s0_j + 8)", "(enc3_sum_s0_i_1 + 2)", "enc3_sum_s0_c_1");
  //auto enc3_sum_s0_i_2 = enc3_sum_s0_j->add_loop("enc3_sum_s0_i_2", 21, 25);
  //auto enc3_sum_s0_c_2 = enc3_sum_s0_i_2->add_loop("enc3_sum_s0_c_2", 0, 128);
//////producing enc3_conv3x1.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv3x1_stencil_4 = enc3_sum_s0_c_2->add_op("op_hcompute_enc3_conv3x1_stencil_4");
  //hcompute_enc3_conv3x1_stencil_4->add_function("hcompute_enc3_conv3x1_stencil_4");
  //hcompute_enc3_conv3x1_stencil_4->add_store("enc3_conv3x1_stencil", "0", "0", "0");
  //auto enc3_conv3x1_s1_r_12_y_2 = enc3_sum_s0_c_2->add_loop("enc3_conv3x1_s1_r_12_y_2", 0, 3);
  //auto enc3_conv3x1_s1_r_12_x_2 = enc3_conv3x1_s1_r_12_y_2->add_loop("enc3_conv3x1_s1_r_12_x_2", 0, 128);
//////producing enc3_conv1x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x3_stencil_5 = enc3_conv3x1_s1_r_12_x_2->add_op("op_hcompute_enc3_conv1x3_stencil_5");
  //hcompute_enc3_conv1x3_stencil_5->add_function("hcompute_enc3_conv1x3_stencil_5");
  //hcompute_enc3_conv1x3_stencil_5->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //auto enc3_conv1x3_s1_r_11_z_2 = enc3_conv3x1_s1_r_12_x_2->add_loop("enc3_conv1x3_s1_r_11_z_2", 0, 3);
  //auto enc3_conv1x3_s1_r_11_x_3 = enc3_conv1x3_s1_r_11_z_2->add_loop("enc3_conv1x3_s1_r_11_x_3", 0, 128);
//////producing enc3_conv3x3.stencil

////store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) = 0.000000f
  //auto hcompute_enc3_conv3x3_stencil_4 = enc3_conv1x3_s1_r_11_x_3->add_op("op_hcompute_enc3_conv3x3_stencil_4");
  //hcompute_enc3_conv3x3_stencil_4->add_function("hcompute_enc3_conv3x3_stencil_4");
  //hcompute_enc3_conv3x3_stencil_4->add_store("enc3_conv3x3_stencil", "0", "(max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23)", "(max(enc3_conv1x3_s1_r_11_x_3, 39) + -39)");
  //auto enc3_conv3x3_s1_r_10_z_2 = enc3_conv1x3_s1_r_11_x_3->add_loop("enc3_conv3x3_s1_r_10_z_2", 0, 3);
  //auto enc3_conv3x3_s1_r_10_y_2 = enc3_conv3x3_s1_r_10_z_2->add_loop("enc3_conv3x3_s1_r_10_y_2", 0, 3);
  //auto enc3_conv3x3_s1_r_10_x_2 = enc3_conv3x3_s1_r_10_y_2->add_loop("enc3_conv3x3_s1_r_10_x_2", 0, 64);

////store is: enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) = (enc3_conv3x3.stencil((max(enc3_conv1x3_s1_r_11_x_3, 39) + -39), (max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23), 0) + (enc3_weights_0_im_global_wrapper_global_wrapper.stencil(enc3_conv1x3_s1_r_11_x_3, enc3_conv3x3_s1_r_10_y_2, enc3_conv3x3_s1_r_10_z_2, enc3_conv3x3_s1_r_10_x_2)*select(((((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2)*2) + enc3_conv3x3_s1_r_10_y_2) < 48), enc2_sum.stencil((enc3_conv3x3_s1_r_10_x_2 + 128), (min((((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2)*2) + enc3_conv3x3_s1_r_10_y_2), 47) + 1), ((((enc3_conv1x3_s1_r_11_z_2 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_2) + 16)), 0.000000f)))
  //auto hcompute_enc3_conv3x3_stencil_5 = enc3_conv3x3_s1_r_10_x_2->add_op("op_hcompute_enc3_conv3x3_stencil_5");
  //hcompute_enc3_conv3x3_stencil_5->add_function("hcompute_enc3_conv3x3_stencil_5");
  //hcompute_enc3_conv3x3_stencil_5->add_load("enc2_sum_stencil", "((((enc3_conv1x3_s1_r_11_z_2 + enc3_sum_s0_j)*2) + enc3_conv3x3_s1_r_10_z_2) + 16)", "(min((((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2)*2) + enc3_conv3x3_s1_r_10_y_2), 47) + 1)", "(enc3_conv3x3_s1_r_10_x_2 + 128)");
  //hcompute_enc3_conv3x3_stencil_5->add_load("enc3_conv3x3_stencil", "0", "(max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23)", "(max(enc3_conv1x3_s1_r_11_x_3, 39) + -39)");
  //hcompute_enc3_conv3x3_stencil_5->add_load("enc3_weights_0_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x3_s1_r_10_x_2", "enc3_conv3x3_s1_r_10_z_2", "enc3_conv3x3_s1_r_10_y_2", "enc3_conv1x3_s1_r_11_x_3");
  //hcompute_enc3_conv3x3_stencil_5->add_store("enc3_conv3x3_stencil", "0", "(max((enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2), 23) + -23)", "(max(enc3_conv1x3_s1_r_11_x_3, 39) + -39)");
  //hcompute_enc3_conv3x3_stencil_5->compute_unit_needs_index_variable("enc3_conv3x1_s1_r_12_y_2");
  //hcompute_enc3_conv3x3_stencil_5->compute_unit_needs_index_variable("enc3_conv3x3_s1_r_10_y_2");
  //hcompute_enc3_conv3x3_stencil_5->compute_unit_needs_index_variable("enc3_sum_s0_i_2");

////consuming enc3_conv3x3.stencil

////store is: enc3_conv1x3.stencil(0, 0, 0) = (enc3_conv1x3.stencil(0, 0, 0) + (enc3_weights_1_im_global_wrapper_global_wrapper.stencil(enc3_conv3x1_s1_r_12_x_2, 0, enc3_conv1x3_s1_r_11_z_2, enc3_conv1x3_s1_r_11_x_3)*select(((40 <= enc3_conv1x3_s1_r_11_x_3) || (24 <= (enc3_conv3x1_s1_r_12_y_2 + enc3_sum_s0_i_2))), 0.000000f, enc3_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_enc3_conv1x3_stencil_6 = enc3_conv1x3_s1_r_11_x_3->add_op("op_hcompute_enc3_conv1x3_stencil_6");
  //hcompute_enc3_conv1x3_stencil_6->add_function("hcompute_enc3_conv1x3_stencil_6");
  //hcompute_enc3_conv1x3_stencil_6->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_6->add_load("enc3_conv3x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_6->add_load("enc3_weights_1_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x3_s1_r_11_x_3", "enc3_conv1x3_s1_r_11_z_2", "0", "enc3_conv3x1_s1_r_12_x_2");
  //hcompute_enc3_conv1x3_stencil_6->add_store("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x3_stencil_6->compute_unit_needs_index_variable("enc3_conv1x3_s1_r_11_x_3");
  //hcompute_enc3_conv1x3_stencil_6->compute_unit_needs_index_variable("enc3_conv3x1_s1_r_12_y_2");
  //hcompute_enc3_conv1x3_stencil_6->compute_unit_needs_index_variable("enc3_sum_s0_i_2");

////consuming enc3_conv1x3.stencil

////store is: enc3_conv3x1.stencil(0, 0, 0) = (enc3_conv3x1.stencil(0, 0, 0) + (enc3_weights_2_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_2, enc3_conv3x1_s1_r_12_y_2, 0, enc3_conv3x1_s1_r_12_x_2)*enc3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_enc3_conv3x1_stencil_5 = enc3_conv3x1_s1_r_12_x_2->add_op("op_hcompute_enc3_conv3x1_stencil_5");
  //hcompute_enc3_conv3x1_stencil_5->add_function("hcompute_enc3_conv3x1_stencil_5");
  //hcompute_enc3_conv3x1_stencil_5->add_load("enc3_conv1x3_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_5->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv3x1_stencil_5->add_load("enc3_weights_2_im_global_wrapper_global_wrapper_stencil", "enc3_conv3x1_s1_r_12_x_2", "0", "enc3_conv3x1_s1_r_12_y_2", "enc3_sum_s0_c_2");
  //hcompute_enc3_conv3x1_stencil_5->add_store("enc3_conv3x1_stencil", "0", "0", "0");

////consuming enc3_conv3x1.stencil
//////producing enc3_conv1x1.stencil

////store is: enc3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_enc3_conv1x1_stencil_4 = enc3_sum_s0_c_2->add_op("op_hcompute_enc3_conv1x1_stencil_4");
  //hcompute_enc3_conv1x1_stencil_4->add_function("hcompute_enc3_conv1x1_stencil_4");
  //hcompute_enc3_conv1x1_stencil_4->add_store("enc3_conv1x1_stencil", "0", "0", "0");
  //auto enc3_conv1x1_s1_r_13_x_2 = enc3_sum_s0_c_2->add_loop("enc3_conv1x1_s1_r_13_x_2", 0, 64);

////store is: enc3_conv1x1.stencil(0, 0, 0) = (enc3_conv1x1.stencil(0, 0, 0) + (enc3_weights_3_im_global_wrapper_global_wrapper.stencil(enc3_sum_s0_c_2, 0, 0, enc3_conv1x1_s1_r_13_x_2)*enc2_sum.stencil((enc3_conv1x1_s1_r_13_x_2 + 128), ((enc3_sum_s0_i_2*2) + 4), ((enc3_sum_s0_j*2) + 19))))
  //auto hcompute_enc3_conv1x1_stencil_5 = enc3_conv1x1_s1_r_13_x_2->add_op("op_hcompute_enc3_conv1x1_stencil_5");
  //hcompute_enc3_conv1x1_stencil_5->add_function("hcompute_enc3_conv1x1_stencil_5");
  //hcompute_enc3_conv1x1_stencil_5->add_load("enc2_sum_stencil", "((enc3_sum_s0_j*2) + 19)", "((enc3_sum_s0_i_2*2) + 4)", "(enc3_conv1x1_s1_r_13_x_2 + 128)");
  //hcompute_enc3_conv1x1_stencil_5->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_conv1x1_stencil_5->add_load("enc3_weights_3_im_global_wrapper_global_wrapper_stencil", "enc3_conv1x1_s1_r_13_x_2", "0", "0", "enc3_sum_s0_c_2");
  //hcompute_enc3_conv1x1_stencil_5->add_store("enc3_conv1x1_stencil", "0", "0", "0");

////consuming enc3_conv1x1.stencil

////store is: enc3_sum.stencil(enc3_sum_s0_c_2, (enc3_sum_s0_i_2 + 2), (enc3_sum_s0_j + 8)) = (enc3_conv3x1.stencil(0, 0, 0) + enc3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_enc3_sum_stencil_2 = enc3_sum_s0_c_2->add_op("op_hcompute_enc3_sum_stencil_2");
  //hcompute_enc3_sum_stencil_2->add_function("hcompute_enc3_sum_stencil_2");
  //hcompute_enc3_sum_stencil_2->add_load("enc3_conv1x1_stencil", "0", "0", "0");
  //hcompute_enc3_sum_stencil_2->add_load("enc3_conv3x1_stencil", "0", "0", "0");
  //hcompute_enc3_sum_stencil_2->add_store("enc3_sum_stencil", "(enc3_sum_s0_j + 8)", "(enc3_sum_s0_i_2 + 2)", "enc3_sum_s0_c_2");

////consuming enc3_sum.stencil
//////producing dec3_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto dec3_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec3_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec3_weights_0_im_global_wrapper_global_wrapper_s0__2 = dec3_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("dec3_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec3_weights_0_im_global_wrapper_global_wrapper_s0__1 = dec3_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("dec3_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec3_weights_0_im_global_wrapper_global_wrapper_s0__0 = dec3_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("dec3_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 40);

////store is: dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_weights_0_im_global_wrapper_global_wrapper_s0__0, dec3_weights_0_im_global_wrapper_global_wrapper_s0__1, dec3_weights_0_im_global_wrapper_global_wrapper_s0__2, dec3_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_0_im_global_wrapper.stencil(dec3_weights_0_im_global_wrapper_global_wrapper_s0__0, dec3_weights_0_im_global_wrapper_global_wrapper_s0__1, dec3_weights_0_im_global_wrapper_global_wrapper_s0__2, dec3_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil = dec3_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("dec3_weights_0_im_global_wrapper_stencil", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec3_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec3_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("dec3_weights_0_im_global_wrapper_global_wrapper_stencil", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec3_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming dec3_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing dec3_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto dec3_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec3_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec3_weights_1_im_global_wrapper_global_wrapper_s0__2 = dec3_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("dec3_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec3_weights_1_im_global_wrapper_global_wrapper_s0__0 = dec3_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("dec3_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 128);

////store is: dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec3_weights_1_im_global_wrapper_global_wrapper_s0__2, dec3_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_1_im_global_wrapper.stencil(dec3_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec3_weights_1_im_global_wrapper_global_wrapper_s0__2, dec3_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil = dec3_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("dec3_weights_1_im_global_wrapper_stencil", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec3_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec3_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("dec3_weights_1_im_global_wrapper_global_wrapper_stencil", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec3_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming dec3_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing dec3_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto dec3_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec3_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec3_weights_2_im_global_wrapper_global_wrapper_s0__1 = dec3_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("dec3_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec3_weights_2_im_global_wrapper_global_wrapper_s0__0 = dec3_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("dec3_weights_2_im_global_wrapper_global_wrapper_s0__0", -1, 97);

////store is: dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1), dec3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec3_weights_2_im_global_wrapper.stencil(dec3_weights_2_im_global_wrapper_global_wrapper_s0__0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec3_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil = dec3_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("dec3_weights_2_im_global_wrapper_stencil", "dec3_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec3_weights_2_im_global_wrapper_global_wrapper_s0__1", "dec3_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec3_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec3_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("dec3_weights_2_im_global_wrapper_global_wrapper_stencil", "dec3_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec3_weights_2_im_global_wrapper_global_wrapper_s0__1", "(dec3_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming dec3_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing dec3_sum.stencil
  //auto dec3_sum_s0_j = prg.add_loop("dec3_sum_s0_j", -6, 726);
  //auto dec3_sum_s0_i = dec3_sum_s0_j->add_loop("dec3_sum_s0_i", -2, 2);
  //auto dec3_sum_s0_c = dec3_sum_s0_i->add_loop("dec3_sum_s0_c", -1, 97);
//////producing dec3_conv3x1.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv3x1_stencil = dec3_sum_s0_c->add_op("op_hcompute_dec3_conv3x1_stencil");
  //hcompute_dec3_conv3x1_stencil->add_function("hcompute_dec3_conv3x1_stencil");
  //prg.buffer_port_widths["dec3_conv3x1_stencil"] = 32;
  //hcompute_dec3_conv3x1_stencil->add_store("dec3_conv3x1_stencil", "0", "0", "0");
  //auto dec3_conv3x1_s1_r_16_y = dec3_sum_s0_c->add_loop("dec3_conv3x1_s1_r_16_y", 0, 3);
  //auto dec3_conv3x1_s1_r_16_x = dec3_conv3x1_s1_r_16_y->add_loop("dec3_conv3x1_s1_r_16_x", 0, 128);
//////producing dec3_conv1x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x3_stencil_1 = dec3_conv3x1_s1_r_16_x->add_op("op_hcompute_dec3_conv1x3_stencil_1");
  //hcompute_dec3_conv1x3_stencil_1->add_function("hcompute_dec3_conv1x3_stencil_1");
  //prg.buffer_port_widths["dec3_conv1x3_stencil"] = 32;
  //hcompute_dec3_conv1x3_stencil_1->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //auto dec3_conv1x3_s1_r_15_z = dec3_conv3x1_s1_r_16_x->add_loop("dec3_conv1x3_s1_r_15_z", 0, 3);
  //auto dec3_conv1x3_s1_r_15_x = dec3_conv1x3_s1_r_15_z->add_loop("dec3_conv1x3_s1_r_15_x", 0, 128);
//////producing dec3_conv3x3.stencil

////store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) = 0.000000f
  //auto hcompute_dec3_conv3x3_stencil = dec3_conv1x3_s1_r_15_x->add_op("op_hcompute_dec3_conv3x3_stencil");
  //hcompute_dec3_conv3x3_stencil->add_function("hcompute_dec3_conv3x3_stencil");
  //prg.buffer_port_widths["dec3_conv3x3_stencil"] = 32;
  //hcompute_dec3_conv3x3_stencil->add_store("dec3_conv3x3_stencil", "0", "(min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1)", "(max(dec3_conv1x3_s1_r_15_x, 39) + -39)");
  //auto dec3_conv3x3_s1_r_14_z = dec3_conv1x3_s1_r_15_x->add_loop("dec3_conv3x3_s1_r_14_z", 0, 3);
  //auto dec3_conv3x3_s1_r_14_y = dec3_conv3x3_s1_r_14_z->add_loop("dec3_conv3x3_s1_r_14_y", 0, 3);
  //auto dec3_conv3x3_s1_r_14_x = dec3_conv3x3_s1_r_14_y->add_loop("dec3_conv3x3_s1_r_14_x", 0, 128);

////store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) = (dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x, 39) + -39), (min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1), 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x, dec3_conv3x3_s1_r_14_y, dec3_conv3x3_s1_r_14_z, dec3_conv3x3_s1_r_14_x)*select(((40 <= dec3_conv3x3_s1_r_14_x) || (((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) + dec3_conv3x3_s1_r_14_y) < 2)), 0.000000f, enc3_sum.stencil(min(dec3_conv3x3_s1_r_14_x, 39), max(((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) + dec3_conv3x3_s1_r_14_y), 2), (((dec3_conv1x3_s1_r_15_z + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z) + 6)))))
  //auto hcompute_dec3_conv3x3_stencil_1 = dec3_conv3x3_s1_r_14_x->add_op("op_hcompute_dec3_conv3x3_stencil_1");
  //hcompute_dec3_conv3x3_stencil_1->add_function("hcompute_dec3_conv3x3_stencil_1");
  //hcompute_dec3_conv3x3_stencil_1->add_load("dec3_conv3x3_stencil", "0", "(min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1)", "(max(dec3_conv1x3_s1_r_15_x, 39) + -39)");
  //hcompute_dec3_conv3x3_stencil_1->add_load("dec3_weights_0_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x3_s1_r_14_x", "dec3_conv3x3_s1_r_14_z", "dec3_conv3x3_s1_r_14_y", "dec3_conv1x3_s1_r_15_x");
  //hcompute_dec3_conv3x3_stencil_1->add_load("enc3_sum_stencil", "(((dec3_conv1x3_s1_r_15_z + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z) + 6)", "max(((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) + dec3_conv3x3_s1_r_14_y), 2)", "min(dec3_conv3x3_s1_r_14_x, 39)");
  //hcompute_dec3_conv3x3_stencil_1->add_store("dec3_conv3x3_stencil", "0", "(min((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i), 1) + -1)", "(max(dec3_conv1x3_s1_r_15_x, 39) + -39)");
  //hcompute_dec3_conv3x3_stencil_1->compute_unit_needs_index_variable("dec3_conv3x1_s1_r_16_y");
  //hcompute_dec3_conv3x3_stencil_1->compute_unit_needs_index_variable("dec3_conv3x3_s1_r_14_x");
  //hcompute_dec3_conv3x3_stencil_1->compute_unit_needs_index_variable("dec3_conv3x3_s1_r_14_y");
  //hcompute_dec3_conv3x3_stencil_1->compute_unit_needs_index_variable("dec3_sum_s0_i");

////consuming dec3_conv3x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x, 0, dec3_conv1x3_s1_r_15_z, dec3_conv1x3_s1_r_15_x)*select(((40 <= dec3_conv1x3_s1_r_15_x) || ((dec3_conv3x1_s1_r_16_y + dec3_sum_s0_i) < 1)), 0.000000f, dec3_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_dec3_conv1x3_stencil_2 = dec3_conv1x3_s1_r_15_x->add_op("op_hcompute_dec3_conv1x3_stencil_2");
  //hcompute_dec3_conv1x3_stencil_2->add_function("hcompute_dec3_conv1x3_stencil_2");
  //hcompute_dec3_conv1x3_stencil_2->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_2->add_load("dec3_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_2->add_load("dec3_weights_1_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x3_s1_r_15_x", "dec3_conv1x3_s1_r_15_z", "0", "dec3_conv3x1_s1_r_16_x");
  //hcompute_dec3_conv1x3_stencil_2->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_2->compute_unit_needs_index_variable("dec3_conv1x3_s1_r_15_x");
  //hcompute_dec3_conv1x3_stencil_2->compute_unit_needs_index_variable("dec3_conv3x1_s1_r_16_y");
  //hcompute_dec3_conv1x3_stencil_2->compute_unit_needs_index_variable("dec3_sum_s0_i");

////consuming dec3_conv1x3.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c + 1), dec3_conv3x1_s1_r_16_y, 0, dec3_conv3x1_s1_r_16_x)*dec3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec3_conv3x1_stencil_1 = dec3_conv3x1_s1_r_16_x->add_op("op_hcompute_dec3_conv3x1_stencil_1");
  //hcompute_dec3_conv3x1_stencil_1->add_function("hcompute_dec3_conv3x1_stencil_1");
  //hcompute_dec3_conv3x1_stencil_1->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_1->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_1->add_load("dec3_weights_2_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x1_s1_r_16_x", "0", "dec3_conv3x1_s1_r_16_y", "(dec3_sum_s0_c + 1)");
  //hcompute_dec3_conv3x1_stencil_1->add_store("dec3_conv3x1_stencil", "0", "0", "0");

////consuming dec3_conv3x1.stencil
//////producing dec3_conv1x1.stencil

////store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x1_stencil = dec3_sum_s0_c->add_op("op_hcompute_dec3_conv1x1_stencil");
  //hcompute_dec3_conv1x1_stencil->add_function("hcompute_dec3_conv1x1_stencil");
  //prg.buffer_port_widths["dec3_conv1x1_stencil"] = 32;
  //hcompute_dec3_conv1x1_stencil->add_store("dec3_conv1x1_stencil", "0", "0", "0");
  //auto dec3_conv1x1_s1_r_17_x = dec3_sum_s0_c->add_loop("dec3_conv1x1_s1_r_17_x", 0, 128);

////store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c + 1), 0, 0, dec3_conv1x1_s1_r_17_x)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x, (dec3_sum_s0_i + 2), (dec3_sum_s0_j + 8))))
  //auto hcompute_dec3_conv1x1_stencil_1 = dec3_conv1x1_s1_r_17_x->add_op("op_hcompute_dec3_conv1x1_stencil_1");
  //hcompute_dec3_conv1x1_stencil_1->add_function("hcompute_dec3_conv1x1_stencil_1");
  //hcompute_dec3_conv1x1_stencil_1->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x1_stencil_1->add_load("dec3_weights_3_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x1_s1_r_17_x", "0", "0", "(dec3_sum_s0_c + 1)");
  //hcompute_dec3_conv1x1_stencil_1->add_load("enc3_sum_stencil", "(dec3_sum_s0_j + 8)", "(dec3_sum_s0_i + 2)", "dec3_conv1x1_s1_r_17_x");
  //hcompute_dec3_conv1x1_stencil_1->add_store("dec3_conv1x1_stencil", "0", "0", "0");

////consuming dec3_conv1x1.stencil

////store is: dec3_sum.stencil((dec3_sum_s0_c + 1), (dec3_sum_s0_i + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_dec3_sum_stencil = dec3_sum_s0_c->add_op("op_hcompute_dec3_sum_stencil");
  //hcompute_dec3_sum_stencil->add_function("hcompute_dec3_sum_stencil");
  //hcompute_dec3_sum_stencil->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_sum_stencil->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //prg.buffer_port_widths["dec3_sum_stencil"] = 32;
  //hcompute_dec3_sum_stencil->add_store("dec3_sum_stencil", "(dec3_sum_s0_j + 6)", "(dec3_sum_s0_i + 2)", "(dec3_sum_s0_c + 1)");
  //auto dec3_sum_s0_i_1 = dec3_sum_s0_j->add_loop("dec3_sum_s0_i_1", 2, 21);
  //auto dec3_sum_s0_c_1 = dec3_sum_s0_i_1->add_loop("dec3_sum_s0_c_1", -1, 97);
//////producing dec3_conv3x1.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv3x1_stencil_2 = dec3_sum_s0_c_1->add_op("op_hcompute_dec3_conv3x1_stencil_2");
  //hcompute_dec3_conv3x1_stencil_2->add_function("hcompute_dec3_conv3x1_stencil_2");
  //hcompute_dec3_conv3x1_stencil_2->add_store("dec3_conv3x1_stencil", "0", "0", "0");
  //auto dec3_conv3x1_s1_r_16_y_1 = dec3_sum_s0_c_1->add_loop("dec3_conv3x1_s1_r_16_y_1", 0, 3);
  //auto dec3_conv3x1_s1_r_16_x_1 = dec3_conv3x1_s1_r_16_y_1->add_loop("dec3_conv3x1_s1_r_16_x_1", 0, 128);
//////producing dec3_conv1x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x3_stencil_3 = dec3_conv3x1_s1_r_16_x_1->add_op("op_hcompute_dec3_conv1x3_stencil_3");
  //hcompute_dec3_conv1x3_stencil_3->add_function("hcompute_dec3_conv1x3_stencil_3");
  //hcompute_dec3_conv1x3_stencil_3->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //auto dec3_conv1x3_s1_r_15_z_1 = dec3_conv3x1_s1_r_16_x_1->add_loop("dec3_conv1x3_s1_r_15_z_1", 0, 3);
  //auto dec3_conv1x3_s1_r_15_x_1 = dec3_conv1x3_s1_r_15_z_1->add_loop("dec3_conv1x3_s1_r_15_x_1", 0, 40);
//////producing dec3_conv3x3.stencil

////store is: dec3_conv3x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv3x3_stencil_2 = dec3_conv1x3_s1_r_15_x_1->add_op("op_hcompute_dec3_conv3x3_stencil_2");
  //hcompute_dec3_conv3x3_stencil_2->add_function("hcompute_dec3_conv3x3_stencil_2");
  //hcompute_dec3_conv3x3_stencil_2->add_store("dec3_conv3x3_stencil", "0", "0", "0");
  //auto dec3_conv3x3_s1_r_14_z_1 = dec3_conv1x3_s1_r_15_x_1->add_loop("dec3_conv3x3_s1_r_14_z_1", 0, 3);
  //auto dec3_conv3x3_s1_r_14_y_1 = dec3_conv3x3_s1_r_14_z_1->add_loop("dec3_conv3x3_s1_r_14_y_1", 0, 3);
  //auto dec3_conv3x3_s1_r_14_x_1 = dec3_conv3x3_s1_r_14_y_1->add_loop("dec3_conv3x3_s1_r_14_x_1", 0, 40);

////store is: dec3_conv3x3.stencil(0, 0, 0) = (dec3_conv3x3.stencil(0, 0, 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x_1, dec3_conv3x3_s1_r_14_y_1, dec3_conv3x3_s1_r_14_z_1, dec3_conv3x3_s1_r_14_x_1)*enc3_sum.stencil(dec3_conv3x3_s1_r_14_x_1, ((dec3_conv3x1_s1_r_16_y_1 + dec3_sum_s0_i_1) + dec3_conv3x3_s1_r_14_y_1), (((dec3_conv1x3_s1_r_15_z_1 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_1) + 6))))
  //auto hcompute_dec3_conv3x3_stencil_3 = dec3_conv3x3_s1_r_14_x_1->add_op("op_hcompute_dec3_conv3x3_stencil_3");
  //hcompute_dec3_conv3x3_stencil_3->add_function("hcompute_dec3_conv3x3_stencil_3");
  //hcompute_dec3_conv3x3_stencil_3->add_load("dec3_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x3_stencil_3->add_load("dec3_weights_0_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x3_s1_r_14_x_1", "dec3_conv3x3_s1_r_14_z_1", "dec3_conv3x3_s1_r_14_y_1", "dec3_conv1x3_s1_r_15_x_1");
  //hcompute_dec3_conv3x3_stencil_3->add_load("enc3_sum_stencil", "(((dec3_conv1x3_s1_r_15_z_1 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_1) + 6)", "((dec3_conv3x1_s1_r_16_y_1 + dec3_sum_s0_i_1) + dec3_conv3x3_s1_r_14_y_1)", "dec3_conv3x3_s1_r_14_x_1");
  //hcompute_dec3_conv3x3_stencil_3->add_store("dec3_conv3x3_stencil", "0", "0", "0");
  //auto dec3_conv3x3_s1_r_14_x_2 = dec3_conv3x3_s1_r_14_y_1->add_loop("dec3_conv3x3_s1_r_14_x_2", 40, 128);

////store is: dec3_conv3x3.stencil(0, 0, 0) = dec3_conv3x3.stencil(0, 0, 0)
  //auto hcompute_dec3_conv3x3_stencil_4 = dec3_conv3x3_s1_r_14_x_2->add_op("op_hcompute_dec3_conv3x3_stencil_4");
  //hcompute_dec3_conv3x3_stencil_4->add_function("hcompute_dec3_conv3x3_stencil_4");
  //hcompute_dec3_conv3x3_stencil_4->add_load("dec3_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x3_stencil_4->add_store("dec3_conv3x3_stencil", "0", "0", "0");

////consuming dec3_conv3x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x_1, 0, dec3_conv1x3_s1_r_15_z_1, dec3_conv1x3_s1_r_15_x_1)*dec3_conv3x3.stencil(0, 0, 0)))
  //auto hcompute_dec3_conv1x3_stencil_4 = dec3_conv1x3_s1_r_15_x_1->add_op("op_hcompute_dec3_conv1x3_stencil_4");
  //hcompute_dec3_conv1x3_stencil_4->add_function("hcompute_dec3_conv1x3_stencil_4");
  //hcompute_dec3_conv1x3_stencil_4->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_4->add_load("dec3_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_4->add_load("dec3_weights_1_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x3_s1_r_15_x_1", "dec3_conv1x3_s1_r_15_z_1", "0", "dec3_conv3x1_s1_r_16_x_1");
  //hcompute_dec3_conv1x3_stencil_4->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //auto dec3_conv1x3_s1_r_15_x_2 = dec3_conv1x3_s1_r_15_z_1->add_loop("dec3_conv1x3_s1_r_15_x_2", 40, 128);

////consuming dec3_conv3x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = dec3_conv1x3.stencil(0, 0, 0)
  //auto hcompute_dec3_conv1x3_stencil_5 = dec3_conv1x3_s1_r_15_x_2->add_op("op_hcompute_dec3_conv1x3_stencil_5");
  //hcompute_dec3_conv1x3_stencil_5->add_function("hcompute_dec3_conv1x3_stencil_5");
  //hcompute_dec3_conv1x3_stencil_5->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_5->add_store("dec3_conv1x3_stencil", "0", "0", "0");

////consuming dec3_conv1x3.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_1 + 1), dec3_conv3x1_s1_r_16_y_1, 0, dec3_conv3x1_s1_r_16_x_1)*dec3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec3_conv3x1_stencil_3 = dec3_conv3x1_s1_r_16_x_1->add_op("op_hcompute_dec3_conv3x1_stencil_3");
  //hcompute_dec3_conv3x1_stencil_3->add_function("hcompute_dec3_conv3x1_stencil_3");
  //hcompute_dec3_conv3x1_stencil_3->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_3->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_3->add_load("dec3_weights_2_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x1_s1_r_16_x_1", "0", "dec3_conv3x1_s1_r_16_y_1", "(dec3_sum_s0_c_1 + 1)");
  //hcompute_dec3_conv3x1_stencil_3->add_store("dec3_conv3x1_stencil", "0", "0", "0");

////consuming dec3_conv3x1.stencil
//////producing dec3_conv1x1.stencil

////store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x1_stencil_2 = dec3_sum_s0_c_1->add_op("op_hcompute_dec3_conv1x1_stencil_2");
  //hcompute_dec3_conv1x1_stencil_2->add_function("hcompute_dec3_conv1x1_stencil_2");
  //hcompute_dec3_conv1x1_stencil_2->add_store("dec3_conv1x1_stencil", "0", "0", "0");
  //auto dec3_conv1x1_s1_r_17_x_1 = dec3_sum_s0_c_1->add_loop("dec3_conv1x1_s1_r_17_x_1", 0, 128);

////store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_1 + 1), 0, 0, dec3_conv1x1_s1_r_17_x_1)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x_1, (dec3_sum_s0_i_1 + 2), (dec3_sum_s0_j + 8))))
  //auto hcompute_dec3_conv1x1_stencil_3 = dec3_conv1x1_s1_r_17_x_1->add_op("op_hcompute_dec3_conv1x1_stencil_3");
  //hcompute_dec3_conv1x1_stencil_3->add_function("hcompute_dec3_conv1x1_stencil_3");
  //hcompute_dec3_conv1x1_stencil_3->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x1_stencil_3->add_load("dec3_weights_3_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x1_s1_r_17_x_1", "0", "0", "(dec3_sum_s0_c_1 + 1)");
  //hcompute_dec3_conv1x1_stencil_3->add_load("enc3_sum_stencil", "(dec3_sum_s0_j + 8)", "(dec3_sum_s0_i_1 + 2)", "dec3_conv1x1_s1_r_17_x_1");
  //hcompute_dec3_conv1x1_stencil_3->add_store("dec3_conv1x1_stencil", "0", "0", "0");

////consuming dec3_conv1x1.stencil

////store is: dec3_sum.stencil((dec3_sum_s0_c_1 + 1), (dec3_sum_s0_i_1 + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_dec3_sum_stencil_1 = dec3_sum_s0_c_1->add_op("op_hcompute_dec3_sum_stencil_1");
  //hcompute_dec3_sum_stencil_1->add_function("hcompute_dec3_sum_stencil_1");
  //hcompute_dec3_sum_stencil_1->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_sum_stencil_1->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //hcompute_dec3_sum_stencil_1->add_store("dec3_sum_stencil", "(dec3_sum_s0_j + 6)", "(dec3_sum_s0_i_1 + 2)", "(dec3_sum_s0_c_1 + 1)");
  //auto dec3_sum_s0_i_2 = dec3_sum_s0_j->add_loop("dec3_sum_s0_i_2", 21, 25);
  //auto dec3_sum_s0_c_2 = dec3_sum_s0_i_2->add_loop("dec3_sum_s0_c_2", -1, 97);
//////producing dec3_conv3x1.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv3x1_stencil_4 = dec3_sum_s0_c_2->add_op("op_hcompute_dec3_conv3x1_stencil_4");
  //hcompute_dec3_conv3x1_stencil_4->add_function("hcompute_dec3_conv3x1_stencil_4");
  //hcompute_dec3_conv3x1_stencil_4->add_store("dec3_conv3x1_stencil", "0", "0", "0");
  //auto dec3_conv3x1_s1_r_16_y_2 = dec3_sum_s0_c_2->add_loop("dec3_conv3x1_s1_r_16_y_2", 0, 3);
  //auto dec3_conv3x1_s1_r_16_x_2 = dec3_conv3x1_s1_r_16_y_2->add_loop("dec3_conv3x1_s1_r_16_x_2", 0, 128);
//////producing dec3_conv1x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x3_stencil_6 = dec3_conv3x1_s1_r_16_x_2->add_op("op_hcompute_dec3_conv1x3_stencil_6");
  //hcompute_dec3_conv1x3_stencil_6->add_function("hcompute_dec3_conv1x3_stencil_6");
  //hcompute_dec3_conv1x3_stencil_6->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //auto dec3_conv1x3_s1_r_15_z_2 = dec3_conv3x1_s1_r_16_x_2->add_loop("dec3_conv1x3_s1_r_15_z_2", 0, 3);
  //auto dec3_conv1x3_s1_r_15_x_3 = dec3_conv1x3_s1_r_15_z_2->add_loop("dec3_conv1x3_s1_r_15_x_3", 0, 128);
//////producing dec3_conv3x3.stencil

////store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) = 0.000000f
  //auto hcompute_dec3_conv3x3_stencil_5 = dec3_conv1x3_s1_r_15_x_3->add_op("op_hcompute_dec3_conv3x3_stencil_5");
  //hcompute_dec3_conv3x3_stencil_5->add_function("hcompute_dec3_conv3x3_stencil_5");
  //hcompute_dec3_conv3x3_stencil_5->add_store("dec3_conv3x3_stencil", "0", "(max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23)", "(max(dec3_conv1x3_s1_r_15_x_3, 39) + -39)");
  //auto dec3_conv3x3_s1_r_14_z_2 = dec3_conv1x3_s1_r_15_x_3->add_loop("dec3_conv3x3_s1_r_14_z_2", 0, 3);
  //auto dec3_conv3x3_s1_r_14_y_2 = dec3_conv3x3_s1_r_14_z_2->add_loop("dec3_conv3x3_s1_r_14_y_2", 0, 3);
  //auto dec3_conv3x3_s1_r_14_x_3 = dec3_conv3x3_s1_r_14_y_2->add_loop("dec3_conv3x3_s1_r_14_x_3", 0, 128);

////store is: dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) = (dec3_conv3x3.stencil((max(dec3_conv1x3_s1_r_15_x_3, 39) + -39), (max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23), 0) + (dec3_weights_0_im_global_wrapper_global_wrapper.stencil(dec3_conv1x3_s1_r_15_x_3, dec3_conv3x3_s1_r_14_y_2, dec3_conv3x3_s1_r_14_z_2, dec3_conv3x3_s1_r_14_x_3)*select(((40 <= dec3_conv3x3_s1_r_14_x_3) || (25 <= ((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2) + dec3_conv3x3_s1_r_14_y_2))), 0.000000f, enc3_sum.stencil(min(dec3_conv3x3_s1_r_14_x_3, 39), min(((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2) + dec3_conv3x3_s1_r_14_y_2), 24), (((dec3_conv1x3_s1_r_15_z_2 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_2) + 6)))))
  //auto hcompute_dec3_conv3x3_stencil_6 = dec3_conv3x3_s1_r_14_x_3->add_op("op_hcompute_dec3_conv3x3_stencil_6");
  //hcompute_dec3_conv3x3_stencil_6->add_function("hcompute_dec3_conv3x3_stencil_6");
  //hcompute_dec3_conv3x3_stencil_6->add_load("dec3_conv3x3_stencil", "0", "(max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23)", "(max(dec3_conv1x3_s1_r_15_x_3, 39) + -39)");
  //hcompute_dec3_conv3x3_stencil_6->add_load("dec3_weights_0_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x3_s1_r_14_x_3", "dec3_conv3x3_s1_r_14_z_2", "dec3_conv3x3_s1_r_14_y_2", "dec3_conv1x3_s1_r_15_x_3");
  //hcompute_dec3_conv3x3_stencil_6->add_load("enc3_sum_stencil", "(((dec3_conv1x3_s1_r_15_z_2 + dec3_sum_s0_j) + dec3_conv3x3_s1_r_14_z_2) + 6)", "min(((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2) + dec3_conv3x3_s1_r_14_y_2), 24)", "min(dec3_conv3x3_s1_r_14_x_3, 39)");
  //hcompute_dec3_conv3x3_stencil_6->add_store("dec3_conv3x3_stencil", "0", "(max((dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2), 23) + -23)", "(max(dec3_conv1x3_s1_r_15_x_3, 39) + -39)");
  //hcompute_dec3_conv3x3_stencil_6->compute_unit_needs_index_variable("dec3_conv3x1_s1_r_16_y_2");
  //hcompute_dec3_conv3x3_stencil_6->compute_unit_needs_index_variable("dec3_conv3x3_s1_r_14_x_3");
  //hcompute_dec3_conv3x3_stencil_6->compute_unit_needs_index_variable("dec3_conv3x3_s1_r_14_y_2");
  //hcompute_dec3_conv3x3_stencil_6->compute_unit_needs_index_variable("dec3_sum_s0_i_2");

////consuming dec3_conv3x3.stencil

////store is: dec3_conv1x3.stencil(0, 0, 0) = (dec3_conv1x3.stencil(0, 0, 0) + (dec3_weights_1_im_global_wrapper_global_wrapper.stencil(dec3_conv3x1_s1_r_16_x_2, 0, dec3_conv1x3_s1_r_15_z_2, dec3_conv1x3_s1_r_15_x_3)*select(((40 <= dec3_conv1x3_s1_r_15_x_3) || (24 <= (dec3_conv3x1_s1_r_16_y_2 + dec3_sum_s0_i_2))), 0.000000f, dec3_conv3x3.stencil(0, 0, 0))))
  //auto hcompute_dec3_conv1x3_stencil_7 = dec3_conv1x3_s1_r_15_x_3->add_op("op_hcompute_dec3_conv1x3_stencil_7");
  //hcompute_dec3_conv1x3_stencil_7->add_function("hcompute_dec3_conv1x3_stencil_7");
  //hcompute_dec3_conv1x3_stencil_7->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_7->add_load("dec3_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_7->add_load("dec3_weights_1_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x3_s1_r_15_x_3", "dec3_conv1x3_s1_r_15_z_2", "0", "dec3_conv3x1_s1_r_16_x_2");
  //hcompute_dec3_conv1x3_stencil_7->add_store("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x3_stencil_7->compute_unit_needs_index_variable("dec3_conv1x3_s1_r_15_x_3");
  //hcompute_dec3_conv1x3_stencil_7->compute_unit_needs_index_variable("dec3_conv3x1_s1_r_16_y_2");
  //hcompute_dec3_conv1x3_stencil_7->compute_unit_needs_index_variable("dec3_sum_s0_i_2");

////consuming dec3_conv1x3.stencil

////store is: dec3_conv3x1.stencil(0, 0, 0) = (dec3_conv3x1.stencil(0, 0, 0) + (dec3_weights_2_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_2 + 1), dec3_conv3x1_s1_r_16_y_2, 0, dec3_conv3x1_s1_r_16_x_2)*dec3_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec3_conv3x1_stencil_5 = dec3_conv3x1_s1_r_16_x_2->add_op("op_hcompute_dec3_conv3x1_stencil_5");
  //hcompute_dec3_conv3x1_stencil_5->add_function("hcompute_dec3_conv3x1_stencil_5");
  //hcompute_dec3_conv3x1_stencil_5->add_load("dec3_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_5->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv3x1_stencil_5->add_load("dec3_weights_2_im_global_wrapper_global_wrapper_stencil", "dec3_conv3x1_s1_r_16_x_2", "0", "dec3_conv3x1_s1_r_16_y_2", "(dec3_sum_s0_c_2 + 1)");
  //hcompute_dec3_conv3x1_stencil_5->add_store("dec3_conv3x1_stencil", "0", "0", "0");

////consuming dec3_conv3x1.stencil
//////producing dec3_conv1x1.stencil

////store is: dec3_conv1x1.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec3_conv1x1_stencil_4 = dec3_sum_s0_c_2->add_op("op_hcompute_dec3_conv1x1_stencil_4");
  //hcompute_dec3_conv1x1_stencil_4->add_function("hcompute_dec3_conv1x1_stencil_4");
  //hcompute_dec3_conv1x1_stencil_4->add_store("dec3_conv1x1_stencil", "0", "0", "0");
  //auto dec3_conv1x1_s1_r_17_x_2 = dec3_sum_s0_c_2->add_loop("dec3_conv1x1_s1_r_17_x_2", 0, 128);

////store is: dec3_conv1x1.stencil(0, 0, 0) = (dec3_conv1x1.stencil(0, 0, 0) + (dec3_weights_3_im_global_wrapper_global_wrapper.stencil((dec3_sum_s0_c_2 + 1), 0, 0, dec3_conv1x1_s1_r_17_x_2)*enc3_sum.stencil(dec3_conv1x1_s1_r_17_x_2, (dec3_sum_s0_i_2 + 2), (dec3_sum_s0_j + 8))))
  //auto hcompute_dec3_conv1x1_stencil_5 = dec3_conv1x1_s1_r_17_x_2->add_op("op_hcompute_dec3_conv1x1_stencil_5");
  //hcompute_dec3_conv1x1_stencil_5->add_function("hcompute_dec3_conv1x1_stencil_5");
  //hcompute_dec3_conv1x1_stencil_5->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_conv1x1_stencil_5->add_load("dec3_weights_3_im_global_wrapper_global_wrapper_stencil", "dec3_conv1x1_s1_r_17_x_2", "0", "0", "(dec3_sum_s0_c_2 + 1)");
  //hcompute_dec3_conv1x1_stencil_5->add_load("enc3_sum_stencil", "(dec3_sum_s0_j + 8)", "(dec3_sum_s0_i_2 + 2)", "dec3_conv1x1_s1_r_17_x_2");
  //hcompute_dec3_conv1x1_stencil_5->add_store("dec3_conv1x1_stencil", "0", "0", "0");

////consuming dec3_conv1x1.stencil

////store is: dec3_sum.stencil((dec3_sum_s0_c_2 + 1), (dec3_sum_s0_i_2 + 2), (dec3_sum_s0_j + 6)) = (dec3_conv3x1.stencil(0, 0, 0) + dec3_conv1x1.stencil(0, 0, 0))
  //auto hcompute_dec3_sum_stencil_2 = dec3_sum_s0_c_2->add_op("op_hcompute_dec3_sum_stencil_2");
  //hcompute_dec3_sum_stencil_2->add_function("hcompute_dec3_sum_stencil_2");
  //hcompute_dec3_sum_stencil_2->add_load("dec3_conv1x1_stencil", "0", "0", "0");
  //hcompute_dec3_sum_stencil_2->add_load("dec3_conv3x1_stencil", "0", "0", "0");
  //hcompute_dec3_sum_stencil_2->add_store("dec3_sum_stencil", "(dec3_sum_s0_j + 6)", "(dec3_sum_s0_i_2 + 2)", "(dec3_sum_s0_c_2 + 1)");

////consuming dec3_sum.stencil
//////producing dec2_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto dec2_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec2_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 192);
  //auto dec2_weights_0_im_global_wrapper_global_wrapper_s0__2 = dec2_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("dec2_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec2_weights_0_im_global_wrapper_global_wrapper_s0__1 = dec2_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("dec2_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec2_weights_0_im_global_wrapper_global_wrapper_s0__0 = dec2_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("dec2_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_weights_0_im_global_wrapper_global_wrapper_s0__0, dec2_weights_0_im_global_wrapper_global_wrapper_s0__1, dec2_weights_0_im_global_wrapper_global_wrapper_s0__2, dec2_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_0_im_global_wrapper.stencil(dec2_weights_0_im_global_wrapper_global_wrapper_s0__0, dec2_weights_0_im_global_wrapper_global_wrapper_s0__1, dec2_weights_0_im_global_wrapper_global_wrapper_s0__2, dec2_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil = dec2_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("dec2_weights_0_im_global_wrapper_stencil", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec2_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec2_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("dec2_weights_0_im_global_wrapper_global_wrapper_stencil", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec2_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming dec2_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing dec2_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto dec2_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec2_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto dec2_weights_1_im_global_wrapper_global_wrapper_s0__2 = dec2_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("dec2_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec2_weights_1_im_global_wrapper_global_wrapper_s0__0 = dec2_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("dec2_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 64);

////store is: dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec2_weights_1_im_global_wrapper_global_wrapper_s0__2, dec2_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_1_im_global_wrapper.stencil(dec2_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec2_weights_1_im_global_wrapper_global_wrapper_s0__2, dec2_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil = dec2_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("dec2_weights_1_im_global_wrapper_stencil", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec2_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec2_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("dec2_weights_1_im_global_wrapper_global_wrapper_stencil", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec2_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming dec2_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing dec2_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto dec2_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec2_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 64);
  //auto dec2_weights_2_im_global_wrapper_global_wrapper_s0__1 = dec2_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("dec2_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec2_weights_2_im_global_wrapper_global_wrapper_s0__0 = dec2_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("dec2_weights_2_im_global_wrapper_global_wrapper_s0__0", -1, 65);

////store is: dec2_weights_2_im_global_wrapper_global_wrapper.stencil((dec2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1), dec2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec2_weights_2_im_global_wrapper.stencil(dec2_weights_2_im_global_wrapper_global_wrapper_s0__0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec2_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil = dec2_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("dec2_weights_2_im_global_wrapper_stencil", "dec2_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec2_weights_2_im_global_wrapper_global_wrapper_s0__1", "dec2_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec2_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec2_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("dec2_weights_2_im_global_wrapper_global_wrapper_stencil", "dec2_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec2_weights_2_im_global_wrapper_global_wrapper_s0__1", "(dec2_weights_2_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming dec2_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing dec2_up.stencil
  //auto dec2_up_s0__0 = prg.add_loop("dec2_up_s0__0", -4, 724);
  //auto dec2_up_s0_y_1 = dec2_up_s0__0->add_loop("dec2_up_s0_y_1", -2, 92);
  //auto dec2_up_s0_x_1 = dec2_up_s0_y_1->add_loop("dec2_up_s0_x_1", 0, 128);
//////producing dec2_conv3x1.stencil
  //auto dec2_conv3x1_s0_i = dec2_up_s0_x_1->add_loop("dec2_conv3x1_s0_i", 0, 3);
  //auto dec2_conv3x1_s0_c = dec2_conv3x1_s0_i->add_loop("dec2_conv3x1_s0_c", 0, 3);

////store is: dec2_conv3x1.stencil(dec2_conv3x1_s0_c, dec2_conv3x1_s0_i, 0) = 0.000000f
  //auto hcompute_dec2_conv3x1_stencil = dec2_conv3x1_s0_c->add_op("op_hcompute_dec2_conv3x1_stencil");
  //hcompute_dec2_conv3x1_stencil->add_function("hcompute_dec2_conv3x1_stencil");
  //prg.buffer_port_widths["dec2_conv3x1_stencil"] = 32;
  //hcompute_dec2_conv3x1_stencil->add_store("dec2_conv3x1_stencil", "0", "dec2_conv3x1_s0_i", "dec2_conv3x1_s0_c");
  //auto dec2_conv3x1_s1_i = dec2_up_s0_x_1->add_loop("dec2_conv3x1_s1_i", 0, _10489);
  //auto dec2_conv3x1_s1_c = dec2_conv3x1_s1_i->add_loop("dec2_conv3x1_s1_c", 0, 3);
  //auto dec2_conv3x1_s1_r_20_y = dec2_conv3x1_s1_c->add_loop("dec2_conv3x1_s1_r_20_y", 0, 3);
  //auto dec2_conv3x1_s1_r_20_x = dec2_conv3x1_s1_r_20_y->add_loop("dec2_conv3x1_s1_r_20_x", 0, 64);
//////producing dec2_conv1x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec2_conv1x3_stencil = dec2_conv3x1_s1_r_20_x->add_op("op_hcompute_dec2_conv1x3_stencil");
  //hcompute_dec2_conv1x3_stencil->add_function("hcompute_dec2_conv1x3_stencil");
  //prg.buffer_port_widths["dec2_conv1x3_stencil"] = 32;
  //hcompute_dec2_conv1x3_stencil->add_store("dec2_conv1x3_stencil", "0", "0", "0");
  //auto dec2_conv1x3_s1_r_19_z = dec2_conv3x1_s1_r_20_x->add_loop("dec2_conv1x3_s1_r_19_z", 0, 3);
  //auto dec2_conv1x3_s1_r_19_x_1 = dec2_conv1x3_s1_r_19_z->add_loop("dec2_conv1x3_s1_r_19_x_1", 0, 64);
//////producing dec2_conv3x3.stencil

////store is: dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) = 0.000000f
  //auto hcompute_dec2_conv3x3_stencil = dec2_conv1x3_s1_r_19_x_1->add_op("op_hcompute_dec2_conv3x3_stencil");
  //hcompute_dec2_conv3x3_stencil->add_function("hcompute_dec2_conv3x3_stencil");
  //prg.buffer_port_widths["dec2_conv3x3_stencil"] = 32;
  //hcompute_dec2_conv3x3_stencil->add_store("dec2_conv3x3_stencil", "0", "((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2))", "0");
  //auto dec2_conv3x3_s1_r_18_z = dec2_conv1x3_s1_r_19_x_1->add_loop("dec2_conv3x3_s1_r_18_z", 0, 3);
  //auto dec2_conv3x3_s1_r_18_y = dec2_conv3x3_s1_r_18_z->add_loop("dec2_conv3x3_s1_r_18_y", 0, 3);
  //auto dec2_conv3x3_s1_r_18_x = dec2_conv3x3_s1_r_18_y->add_loop("dec2_conv3x3_s1_r_18_x", 0, 192);

////store is: dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) = (dec2_conv3x3.stencil(0, ((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0) + (dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_1, dec2_conv3x3_s1_r_18_y, dec2_conv3x3_s1_r_18_z, dec2_conv3x3_s1_r_18_x)*select(((80 <= dec2_conv3x3_s1_r_18_x) || (((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y) < 3)), 0.000000f, ((((dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2)), ((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1)/2), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + 1), ((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1)/2), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2)), (((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + -1)/2) + (((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x, 79)/2) + 1), (((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + -1)/2) + (((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4))*3.000000f)))*0.062500f))))
  //auto hcompute_dec2_conv3x3_stencil_1 = dec2_conv3x3_s1_r_18_x->add_op("op_hcompute_dec2_conv3x3_stencil_1");
  //hcompute_dec2_conv3x3_stencil_1->add_function("hcompute_dec2_conv3x3_stencil_1");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec2_conv3x3_stencil", "0", "(((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min(((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2))", "0");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec2_weights_0_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x3_s1_r_18_x", "dec2_conv3x3_s1_r_18_z", "dec2_conv3x3_s1_r_18_y", "dec2_conv1x3_s1_r_19_x_1");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)", "floor(((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1)/2))", "(floor((min(dec2_conv3x3_s1_r_18_x, 79)/2)) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)", "floor(((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1)/2))", "(floor((min(dec2_conv3x3_s1_r_18_x, 79)/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)", "(floor(((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + -1)/2)) + (((max((((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1) % 2)*2))", "(floor((min(dec2_conv3x3_s1_r_18_x, 79)/2)) + ((min(dec2_conv3x3_s1_r_18_x, 79) % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_1->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z) + 4)", "(floor(((max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + -1)/2)) + (((max((((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) + dec2_conv3x3_s1_r_18_y), 3) + 1) % 2)*2))", "(floor((min(dec2_conv3x3_s1_r_18_x, 79)/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_1->add_store("dec2_conv3x3_stencil", "0", "((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2))", "0");
  //hcompute_dec2_conv3x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x1_s1_i");
  //hcompute_dec2_conv3x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x1_s1_r_20_y");
  //hcompute_dec2_conv3x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x3_s1_r_18_x");
  //hcompute_dec2_conv3x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x3_s1_r_18_y");
  //hcompute_dec2_conv3x3_stencil_1->compute_unit_needs_index_variable("dec2_up_s0_y_1");

////consuming dec2_conv3x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x, 0, dec2_conv1x3_s1_r_19_z, dec2_conv1x3_s1_r_19_x_1)*select(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) < 2), 0.000000f, dec2_conv3x3.stencil(0, max(((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min((((dec2_up_s0_y_1/2) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0), 0))))
  //auto hcompute_dec2_conv1x3_stencil_1 = dec2_conv1x3_s1_r_19_x_1->add_op("op_hcompute_dec2_conv1x3_stencil_1");
  //hcompute_dec2_conv1x3_stencil_1->add_function("hcompute_dec2_conv1x3_stencil_1");
  //hcompute_dec2_conv1x3_stencil_1->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_1->add_load("dec2_conv3x3_stencil", "0", "max((((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y) - max(min(((floor((dec2_up_s0_y_1/2)) + dec2_conv3x1_s1_i) + dec2_conv3x1_s1_r_20_y), 46), 2)), 0)", "0");
  //hcompute_dec2_conv1x3_stencil_1->add_load("dec2_weights_1_im_global_wrapper_global_wrapper_stencil", "dec2_conv1x3_s1_r_19_x_1", "dec2_conv1x3_s1_r_19_z", "0", "dec2_conv3x1_s1_r_20_x");
  //hcompute_dec2_conv1x3_stencil_1->add_store("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x1_s1_i");
  //hcompute_dec2_conv1x3_stencil_1->compute_unit_needs_index_variable("dec2_conv3x1_s1_r_20_y");
  //hcompute_dec2_conv1x3_stencil_1->compute_unit_needs_index_variable("dec2_up_s0_y_1");

////consuming dec2_conv1x3.stencil

////store is: dec2_conv3x1.stencil(dec2_conv3x1_s1_c, dec2_conv3x1_s1_i, 0) = (dec2_conv3x1.stencil(dec2_conv3x1_s1_c, dec2_conv3x1_s1_i, 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c), dec2_conv3x1_s1_r_20_y, 0, dec2_conv3x1_s1_r_20_x)*dec2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec2_conv3x1_stencil_1 = dec2_conv3x1_s1_r_20_x->add_op("op_hcompute_dec2_conv3x1_stencil_1");
  //hcompute_dec2_conv3x1_stencil_1->add_function("hcompute_dec2_conv3x1_stencil_1");
  //hcompute_dec2_conv3x1_stencil_1->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv3x1_stencil_1->add_load("dec2_conv3x1_stencil", "0", "dec2_conv3x1_s1_i", "dec2_conv3x1_s1_c");
  //hcompute_dec2_conv3x1_stencil_1->add_load("dec2_weights_2_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x1_s1_r_20_x", "0", "dec2_conv3x1_s1_r_20_y", "(floor((dec2_up_s0_x_1/2)) + dec2_conv3x1_s1_c)");
  //hcompute_dec2_conv3x1_stencil_1->add_store("dec2_conv3x1_stencil", "0", "dec2_conv3x1_s1_i", "dec2_conv3x1_s1_c");
  //auto dec2_conv3x1_s1_i_1 = dec2_up_s0_x_1->add_loop("dec2_conv3x1_s1_i_1", 0, _10666);
  //auto dec2_conv3x1_s1_c_1 = dec2_conv3x1_s1_i_1->add_loop("dec2_conv3x1_s1_c_1", 0, 3);
  //auto dec2_conv3x1_s1_r_20_y_1 = dec2_conv3x1_s1_c_1->add_loop("dec2_conv3x1_s1_r_20_y_1", 0, 3);
  //auto dec2_conv3x1_s1_r_20_x_1 = dec2_conv3x1_s1_r_20_y_1->add_loop("dec2_conv3x1_s1_r_20_x_1", 0, 64);
//////producing dec2_conv1x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec2_conv1x3_stencil_2 = dec2_conv3x1_s1_r_20_x_1->add_op("op_hcompute_dec2_conv1x3_stencil_2");
  //hcompute_dec2_conv1x3_stencil_2->add_function("hcompute_dec2_conv1x3_stencil_2");
  //hcompute_dec2_conv1x3_stencil_2->add_store("dec2_conv1x3_stencil", "0", "0", "0");
  //auto dec2_conv1x3_s1_r_19_z_1 = dec2_conv3x1_s1_r_20_x_1->add_loop("dec2_conv1x3_s1_r_19_z_1", 0, 3);
  //auto dec2_conv1x3_s1_r_19_x_2 = dec2_conv1x3_s1_r_19_z_1->add_loop("dec2_conv1x3_s1_r_19_x_2", 0, 64);
//////producing dec2_conv3x3.stencil

////store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = 0.000000f
  //auto hcompute_dec2_conv3x3_stencil_2 = dec2_conv1x3_s1_r_19_x_2->add_op("op_hcompute_dec2_conv3x3_stencil_2");
  //hcompute_dec2_conv3x3_stencil_2->add_function("hcompute_dec2_conv3x3_stencil_2");
  //hcompute_dec2_conv3x3_stencil_2->add_store("dec2_conv3x3_stencil", "0", "(max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");
  //auto dec2_conv3x3_s1_r_18_z_1 = dec2_conv1x3_s1_r_19_x_2->add_loop("dec2_conv3x3_s1_r_18_z_1", 0, 3);
  //auto dec2_conv3x3_s1_r_18_y_1 = dec2_conv3x3_s1_r_18_z_1->add_loop("dec2_conv3x3_s1_r_18_y_1", 0, 3);
  //auto dec2_conv3x3_s1_r_18_x_1 = dec2_conv3x3_s1_r_18_y_1->add_loop("dec2_conv3x3_s1_r_18_x_1", 0, 80);

////store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = (dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) + ((dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_2, dec2_conv3x3_s1_r_18_y_1, dec2_conv3x3_s1_r_18_z_1, dec2_conv3x3_s1_r_18_x_1)*(((dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2)), (((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1)/2), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + 1), (((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1)/2), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2)), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + -1)/2) + ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)) + (dec3_sum.stencil(((dec2_conv3x3_s1_r_18_x_1/2) + 1), ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + -1)/2) + ((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4))*3.000000f))))*0.062500f))
  //auto hcompute_dec2_conv3x3_stencil_3 = dec2_conv3x3_s1_r_18_x_1->add_op("op_hcompute_dec2_conv3x3_stencil_3");
  //hcompute_dec2_conv3x3_stencil_3->add_function("hcompute_dec2_conv3x3_stencil_3");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec2_conv3x3_stencil", "0", "(max(((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec2_weights_0_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x3_s1_r_18_x_1", "dec2_conv3x3_s1_r_18_z_1", "dec2_conv3x3_s1_r_18_y_1", "dec2_conv1x3_s1_r_19_x_2");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)", "floor((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1)/2))", "(floor((dec2_conv3x3_s1_r_18_x_1/2)) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)", "floor((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1)/2))", "(floor((dec2_conv3x3_s1_r_18_x_1/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)", "(floor((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + -1)/2)) + ((((((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1) % 2)*2))", "(floor((dec2_conv3x3_s1_r_18_x_1/2)) + ((dec2_conv3x3_s1_r_18_x_1 % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_3->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_1 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_1) + 4)", "(floor((((((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + -1)/2)) + ((((((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1) + dec2_conv3x3_s1_r_18_y_1) + 1) % 2)*2))", "(floor((dec2_conv3x3_s1_r_18_x_1/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_3->add_store("dec2_conv3x3_stencil", "0", "(max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");
  //auto dec2_conv3x3_s1_r_18_x_2 = dec2_conv3x3_s1_r_18_y_1->add_loop("dec2_conv3x3_s1_r_18_x_2", 80, 192);

////store is: dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0) = dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0)
  //auto hcompute_dec2_conv3x3_stencil_4 = dec2_conv3x3_s1_r_18_x_2->add_op("op_hcompute_dec2_conv3x3_stencil_4");
  //hcompute_dec2_conv3x3_stencil_4->add_function("hcompute_dec2_conv3x3_stencil_4");
  //hcompute_dec2_conv3x3_stencil_4->add_load("dec2_conv3x3_stencil", "0", "(max(((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");
  //hcompute_dec2_conv3x3_stencil_4->add_store("dec2_conv3x3_stencil", "0", "(max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");

////consuming dec2_conv3x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x_1, 0, dec2_conv1x3_s1_r_19_z_1, dec2_conv1x3_s1_r_19_x_2)*dec2_conv3x3.stencil(0, (max(((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46), 0)))
  //auto hcompute_dec2_conv1x3_stencil_3 = dec2_conv1x3_s1_r_19_x_2->add_op("op_hcompute_dec2_conv1x3_stencil_3");
  //hcompute_dec2_conv1x3_stencil_3->add_function("hcompute_dec2_conv1x3_stencil_3");
  //hcompute_dec2_conv1x3_stencil_3->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_3->add_load("dec2_conv3x3_stencil", "0", "(max(((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) + dec2_conv3x1_s1_r_20_y_1), 46) + -46)", "0");
  //hcompute_dec2_conv1x3_stencil_3->add_load("dec2_weights_1_im_global_wrapper_global_wrapper_stencil", "dec2_conv1x3_s1_r_19_x_2", "dec2_conv1x3_s1_r_19_z_1", "0", "dec2_conv3x1_s1_r_20_x_1");
  //hcompute_dec2_conv1x3_stencil_3->add_store("dec2_conv1x3_stencil", "0", "0", "0");

////consuming dec2_conv1x3.stencil

////store is: dec2_conv3x1.stencil(dec2_conv3x1_s1_c_1, ((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) - (dec2_up_s0_y_1/2)), 0) = (dec2_conv3x1.stencil(dec2_conv3x1_s1_c_1, ((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) - (dec2_up_s0_y_1/2)), 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_1), dec2_conv3x1_s1_r_20_y_1, 0, dec2_conv3x1_s1_r_20_x_1)*dec2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec2_conv3x1_stencil_2 = dec2_conv3x1_s1_r_20_x_1->add_op("op_hcompute_dec2_conv3x1_stencil_2");
  //hcompute_dec2_conv3x1_stencil_2->add_function("hcompute_dec2_conv3x1_stencil_2");
  //hcompute_dec2_conv3x1_stencil_2->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv3x1_stencil_2->add_load("dec2_conv3x1_stencil", "0", "((min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)) + dec2_conv3x1_s1_i_1) - floor((dec2_up_s0_y_1/2)))", "dec2_conv3x1_s1_c_1");
  //hcompute_dec2_conv3x1_stencil_2->add_load("dec2_weights_2_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x1_s1_r_20_x_1", "0", "dec2_conv3x1_s1_r_20_y_1", "(floor((dec2_up_s0_x_1/2)) + dec2_conv3x1_s1_c_1)");
  //hcompute_dec2_conv3x1_stencil_2->add_store("dec2_conv3x1_stencil", "0", "((min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)) + dec2_conv3x1_s1_i_1) - (dec2_up_s0_y_1/2))", "dec2_conv3x1_s1_c_1");
  //auto dec2_conv3x1_s1_i_2 = dec2_up_s0_x_1->add_loop("dec2_conv3x1_s1_i_2", 0, _10811);
  //auto dec2_conv3x1_s1_c_2 = dec2_conv3x1_s1_i_2->add_loop("dec2_conv3x1_s1_c_2", 0, 3);
  //auto dec2_conv3x1_s1_r_20_y_2 = dec2_conv3x1_s1_c_2->add_loop("dec2_conv3x1_s1_r_20_y_2", 0, 3);
  //auto dec2_conv3x1_s1_r_20_x_2 = dec2_conv3x1_s1_r_20_y_2->add_loop("dec2_conv3x1_s1_r_20_x_2", 0, 64);
//////producing dec2_conv1x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec2_conv1x3_stencil_4 = dec2_conv3x1_s1_r_20_x_2->add_op("op_hcompute_dec2_conv1x3_stencil_4");
  //hcompute_dec2_conv1x3_stencil_4->add_function("hcompute_dec2_conv1x3_stencil_4");
  //hcompute_dec2_conv1x3_stencil_4->add_store("dec2_conv1x3_stencil", "0", "0", "0");
  //auto dec2_conv1x3_s1_r_19_z_2 = dec2_conv3x1_s1_r_20_x_2->add_loop("dec2_conv1x3_s1_r_19_z_2", 0, 3);
  //auto dec2_conv1x3_s1_r_19_x_3 = dec2_conv1x3_s1_r_19_z_2->add_loop("dec2_conv1x3_s1_r_19_x_3", 0, 64);
//////producing dec2_conv3x3.stencil

////store is: dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) = 0.000000f
  //auto hcompute_dec2_conv3x3_stencil_5 = dec2_conv1x3_s1_r_19_x_3->add_op("op_hcompute_dec2_conv3x3_stencil_5");
  //hcompute_dec2_conv3x3_stencil_5->add_function("hcompute_dec2_conv3x3_stencil_5");
  //hcompute_dec2_conv3x3_stencil_5->add_store("dec2_conv3x3_stencil", "0", "(max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46)", "0");
  //auto dec2_conv3x3_s1_r_18_z_2 = dec2_conv1x3_s1_r_19_x_3->add_loop("dec2_conv3x3_s1_r_18_z_2", 0, 3);
  //auto dec2_conv3x3_s1_r_18_y_2 = dec2_conv3x3_s1_r_18_z_2->add_loop("dec2_conv3x3_s1_r_18_y_2", 0, 3);
  //auto dec2_conv3x3_s1_r_18_x_3 = dec2_conv3x3_s1_r_18_y_2->add_loop("dec2_conv3x3_s1_r_18_x_3", 0, 192);

////store is: dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) = (dec2_conv3x3.stencil(0, (max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46), 0) + (dec2_weights_0_im_global_wrapper_global_wrapper.stencil(dec2_conv1x3_s1_r_19_x_3, dec2_conv3x3_s1_r_18_y_2, dec2_conv3x3_s1_r_18_z_2, dec2_conv3x3_s1_r_18_x_3)*select(((80 <= dec2_conv3x3_s1_r_18_x_3) || (48 <= (((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2))), 0.000000f, ((((dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2)), ((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1)/2), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + 1), ((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1)/2), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4))*3.000000f))*3.000000f) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2)), (((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + -1)/2) + (((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)) + (dec3_sum.stencil(((min(dec2_conv3x3_s1_r_18_x_3, 79)/2) + 1), (((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + -1)/2) + (((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1) % 2)*2)), (((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4))*3.000000f)))*0.062500f))))
  //auto hcompute_dec2_conv3x3_stencil_6 = dec2_conv3x3_s1_r_18_x_3->add_op("op_hcompute_dec2_conv3x3_stencil_6");
  //hcompute_dec2_conv3x3_stencil_6->add_function("hcompute_dec2_conv3x3_stencil_6");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec2_conv3x3_stencil", "0", "(max(((max(min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)), (min(floor((dec2_up_s0_y_1/2)), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46)", "0");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec2_weights_0_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x3_s1_r_18_x_3", "dec2_conv3x3_s1_r_18_z_2", "dec2_conv3x3_s1_r_18_y_2", "dec2_conv1x3_s1_r_19_x_3");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)", "floor(((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1)/2))", "(floor((min(dec2_conv3x3_s1_r_18_x_3, 79)/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)", "(floor(((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + -1)/2)) + (((min((((max(min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)), (min(floor((dec2_up_s0_y_1/2)), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1) % 2)*2))", "(floor((min(dec2_conv3x3_s1_r_18_x_3, 79)/2)) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)", "(floor(((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + -1)/2)) + (((min((((max(min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)), (min(floor((dec2_up_s0_y_1/2)), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1) % 2)*2))", "(floor((min(dec2_conv3x3_s1_r_18_x_3, 79)/2)) + 1)");
  //hcompute_dec2_conv3x3_stencil_6->add_load("dec3_sum_stencil", "(((dec2_conv1x3_s1_r_19_z_2 + dec2_up_s0__0) + dec2_conv3x3_s1_r_18_z_2) + 4)", "floor(((min((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) + dec2_conv3x3_s1_r_18_y_2), 47) + 1)/2))", "(floor((min(dec2_conv3x3_s1_r_18_x_3, 79)/2)) + ((min(dec2_conv3x3_s1_r_18_x_3, 79) % 2)*2))");
  //hcompute_dec2_conv3x3_stencil_6->add_store("dec2_conv3x3_stencil", "0", "(max(((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2), 46) + -46)", "0");
  //hcompute_dec2_conv3x3_stencil_6->compute_unit_needs_index_variable("dec2_conv3x1_s1_i_2");
  //hcompute_dec2_conv3x3_stencil_6->compute_unit_needs_index_variable("dec2_conv3x1_s1_r_20_y_2");
  //hcompute_dec2_conv3x3_stencil_6->compute_unit_needs_index_variable("dec2_conv3x3_s1_r_18_x_3");
  //hcompute_dec2_conv3x3_stencil_6->compute_unit_needs_index_variable("dec2_conv3x3_s1_r_18_y_2");
  //hcompute_dec2_conv3x3_stencil_6->compute_unit_needs_index_variable("dec2_up_s0_y_1");

////consuming dec2_conv3x3.stencil

////store is: dec2_conv1x3.stencil(0, 0, 0) = (dec2_conv1x3.stencil(0, 0, 0) + (dec2_weights_1_im_global_wrapper_global_wrapper.stencil(dec2_conv3x1_s1_r_20_x_2, 0, dec2_conv1x3_s1_r_19_z_2, dec2_conv1x3_s1_r_19_x_3)*select((((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) + dec2_conv3x1_s1_r_20_y_2) < 47), dec2_conv3x3.stencil(0, 0, 0), 0.000000f)))
  //auto hcompute_dec2_conv1x3_stencil_5 = dec2_conv1x3_s1_r_19_x_3->add_op("op_hcompute_dec2_conv1x3_stencil_5");
  //hcompute_dec2_conv1x3_stencil_5->add_function("hcompute_dec2_conv1x3_stencil_5");
  //hcompute_dec2_conv1x3_stencil_5->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_5->add_load("dec2_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_5->add_load("dec2_weights_1_im_global_wrapper_global_wrapper_stencil", "dec2_conv1x3_s1_r_19_x_3", "dec2_conv1x3_s1_r_19_z_2", "0", "dec2_conv3x1_s1_r_20_x_2");
  //hcompute_dec2_conv1x3_stencil_5->add_store("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv1x3_stencil_5->compute_unit_needs_index_variable("dec2_conv3x1_s1_i_2");
  //hcompute_dec2_conv1x3_stencil_5->compute_unit_needs_index_variable("dec2_conv3x1_s1_r_20_y_2");
  //hcompute_dec2_conv1x3_stencil_5->compute_unit_needs_index_variable("dec2_up_s0_y_1");

////consuming dec2_conv1x3.stencil

////store is: dec2_conv3x1.stencil(dec2_conv3x1_s1_c_2, ((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) - (dec2_up_s0_y_1/2)), 0) = (dec2_conv3x1.stencil(dec2_conv3x1_s1_c_2, ((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) - (dec2_up_s0_y_1/2)), 0) + (dec2_weights_2_im_global_wrapper_global_wrapper.stencil(((dec2_up_s0_x_1/2) + dec2_conv3x1_s1_c_2), dec2_conv3x1_s1_r_20_y_2, 0, dec2_conv3x1_s1_r_20_x_2)*dec2_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec2_conv3x1_stencil_3 = dec2_conv3x1_s1_r_20_x_2->add_op("op_hcompute_dec2_conv3x1_stencil_3");
  //hcompute_dec2_conv3x1_stencil_3->add_function("hcompute_dec2_conv3x1_stencil_3");
  //hcompute_dec2_conv3x1_stencil_3->add_load("dec2_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec2_conv3x1_stencil_3->add_load("dec2_conv3x1_stencil", "0", "((max(min(max(floor((dec2_up_s0_y_1/2)), 3), (floor((dec2_up_s0_y_1/2)) + 3)), (min(floor((dec2_up_s0_y_1/2)), 41) + 3)) + dec2_conv3x1_s1_i_2) - floor((dec2_up_s0_y_1/2)))", "dec2_conv3x1_s1_c_2");
  //hcompute_dec2_conv3x1_stencil_3->add_load("dec2_weights_2_im_global_wrapper_global_wrapper_stencil", "dec2_conv3x1_s1_r_20_x_2", "0", "dec2_conv3x1_s1_r_20_y_2", "(floor((dec2_up_s0_x_1/2)) + dec2_conv3x1_s1_c_2)");
  //hcompute_dec2_conv3x1_stencil_3->add_store("dec2_conv3x1_stencil", "0", "((max(min(max((dec2_up_s0_y_1/2), 3), ((dec2_up_s0_y_1/2) + 3)), (min((dec2_up_s0_y_1/2), 41) + 3)) + dec2_conv3x1_s1_i_2) - (dec2_up_s0_y_1/2))", "dec2_conv3x1_s1_c_2");

////consuming dec2_conv3x1.stencil
//////producing dec2_conv1x1.stencil
  //auto dec2_conv1x1_s0_i = dec2_up_s0_x_1->add_loop("dec2_conv1x1_s0_i", 0, 3);
  //auto dec2_conv1x1_s0_c = dec2_conv1x1_s0_i->add_loop("dec2_conv1x1_s0_c", 0, 3);

////store is: dec2_conv1x1.stencil(dec2_conv1x1_s0_c, dec2_conv1x1_s0_i, 0) = 0.000000f
  //auto hcompute_dec2_conv1x1_stencil = dec2_conv1x1_s0_c->add_op("op_hcompute_dec2_conv1x1_stencil");
  //hcompute_dec2_conv1x1_stencil->add_function("hcompute_dec2_conv1x1_stencil");
  //prg.buffer_port_widths["dec2_conv1x1_stencil"] = 32;
  //hcompute_dec2_conv1x1_stencil->add_store("dec2_conv1x1_stencil", "0", "dec2_conv1x1_s0_i", "dec2_conv1x1_s0_c");
  //auto dec2_conv1x1_s1_i_3 = dec2_up_s0_x_1->add_loop("dec2_conv1x1_s1_i_3", 0, 3);
  //auto dec2_conv1x1_s1_c = dec2_conv1x1_s1_i_3->add_loop("dec2_conv1x1_s1_c", 0, 3);
  //auto dec2_conv1x1_s1_r_21_x = dec2_conv1x1_s1_c->add_loop("dec2_conv1x1_s1_r_21_x", 0, 192);

////store is: dec2_conv1x1.stencil(dec2_conv1x1_s1_c, dec2_conv1x1_s1_i_3, 0) = (dec2_conv1x1.stencil(dec2_conv1x1_s1_c, dec2_conv1x1_s1_i_3, 0) + (dec2_weights_3_im_global_wrapper_global_wrapper.stencil(((dec2_up_s0_x_1/2) + dec2_conv1x1_s1_c), 0, 0, dec2_conv1x1_s1_r_21_x)*select((dec2_conv1x1_s1_r_21_x < 128), ((((dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + ((dec2_conv1x1_s1_r_21_x % 2)*2)), ((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 3)/2), (dec2_up_s0__0 + 6)) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + 1), ((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 3)/2), (dec2_up_s0__0 + 6))*3.000000f))*3.000000f) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + ((dec2_conv1x1_s1_r_21_x % 2)*2)), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1)/2) + (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1) % 2)*2)), (dec2_up_s0__0 + 6)) + (dec3_sum.stencil(((dec2_conv1x1_s1_r_21_x/2) + 1), (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1)/2) + (((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1) % 2)*2)), (dec2_up_s0__0 + 6))*3.000000f)))*0.062500f), enc2_sum.stencil(dec2_conv1x1_s1_r_21_x, (((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 3), (dec2_up_s0__0 + 19)))))
  //auto hcompute_dec2_conv1x1_stencil_1 = dec2_conv1x1_s1_r_21_x->add_op("op_hcompute_dec2_conv1x1_stencil_1");
  //hcompute_dec2_conv1x1_stencil_1->add_function("hcompute_dec2_conv1x1_stencil_1");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec2_conv1x1_stencil", "0", "dec2_conv1x1_s1_i_3", "dec2_conv1x1_s1_c");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec2_weights_3_im_global_wrapper_global_wrapper_stencil", "dec2_conv1x1_s1_r_21_x", "0", "0", "(floor((dec2_up_s0_x_1/2)) + dec2_conv1x1_s1_c)");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec3_sum_stencil", "(dec2_up_s0__0 + 6)", "floor(((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 3)/2))", "(floor((dec2_conv1x1_s1_r_21_x/2)) + ((dec2_conv1x1_s1_r_21_x % 2)*2))");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec3_sum_stencil", "(dec2_up_s0__0 + 6)", "floor(((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 3)/2))", "(floor((dec2_conv1x1_s1_r_21_x/2)) + 1)");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec3_sum_stencil", "(dec2_up_s0__0 + 6)", "(floor(((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1)/2)) + ((((floor((dec2_up_s0_y_1/2)) + dec2_conv1x1_s1_i_3) + 1) % 2)*2))", "(floor((dec2_conv1x1_s1_r_21_x/2)) + ((dec2_conv1x1_s1_r_21_x % 2)*2))");
  //hcompute_dec2_conv1x1_stencil_1->add_load("dec3_sum_stencil", "(dec2_up_s0__0 + 6)", "(floor(((((dec2_up_s0_y_1/2) + dec2_conv1x1_s1_i_3) + 1)/2)) + ((((floor((dec2_up_s0_y_1/2)) + dec2_conv1x1_s1_i_3) + 1) % 2)*2))", "(floor((dec2_conv1x1_s1_r_21_x/2)) + 1)");
  //hcompute_dec2_conv1x1_stencil_1->add_load("enc2_sum_stencil", "(dec2_up_s0__0 + 19)", "((floor((dec2_up_s0_y_1/2)) + dec2_conv1x1_s1_i_3) + 3)", "dec2_conv1x1_s1_r_21_x");
  //hcompute_dec2_conv1x1_stencil_1->add_store("dec2_conv1x1_stencil", "0", "dec2_conv1x1_s1_i_3", "dec2_conv1x1_s1_c");
  //hcompute_dec2_conv1x1_stencil_1->compute_unit_needs_index_variable("dec2_conv1x1_s1_r_21_x");

////consuming dec2_conv1x1.stencil

////store is: dec2_up.stencil(dec2_up_s0_x_1, (dec2_up_s0_y_1 + 2), (dec2_up_s0__0 + 4)) = ((((((dec2_conv3x1.stencil(1, 1, 0) + dec2_conv1x1.stencil(1, 1, 0))*3.000000f) + (dec2_conv3x1.stencil(((dec2_up_s0_x_1 % 2)*2), 1, 0) + dec2_conv1x1.stencil(((dec2_up_s0_x_1 % 2)*2), 1, 0)))*3.000000f) + (((dec2_conv3x1.stencil(1, ((dec2_up_s0_y_1 % 2)*2), 0) + dec2_conv1x1.stencil(1, ((dec2_up_s0_y_1 % 2)*2), 0))*3.000000f) + (dec2_conv3x1.stencil(((dec2_up_s0_x_1 % 2)*2), ((dec2_up_s0_y_1 % 2)*2), 0) + dec2_conv1x1.stencil(((dec2_up_s0_x_1 % 2)*2), ((dec2_up_s0_y_1 % 2)*2), 0))))*0.062500f)
  //auto hcompute_dec2_up_stencil = dec2_up_s0_x_1->add_op("op_hcompute_dec2_up_stencil");
  //hcompute_dec2_up_stencil->add_function("hcompute_dec2_up_stencil");
  //hcompute_dec2_up_stencil->add_load("dec2_conv1x1_stencil", "0", "1", "1");
  //hcompute_dec2_up_stencil->add_load("dec2_conv1x1_stencil", "0", "1", "((dec2_up_s0_x_1 % 2)*2)");
  //hcompute_dec2_up_stencil->add_load("dec2_conv1x1_stencil", "0", "((dec2_up_s0_y_1 % 2)*2)", "1");
  //hcompute_dec2_up_stencil->add_load("dec2_conv1x1_stencil", "0", "((dec2_up_s0_y_1 % 2)*2)", "((dec2_up_s0_x_1 % 2)*2)");
  //hcompute_dec2_up_stencil->add_load("dec2_conv3x1_stencil", "0", "1", "1");
  //hcompute_dec2_up_stencil->add_load("dec2_conv3x1_stencil", "0", "1", "((dec2_up_s0_x_1 % 2)*2)");
  //hcompute_dec2_up_stencil->add_load("dec2_conv3x1_stencil", "0", "((dec2_up_s0_y_1 % 2)*2)", "1");
  //hcompute_dec2_up_stencil->add_load("dec2_conv3x1_stencil", "0", "((dec2_up_s0_y_1 % 2)*2)", "((dec2_up_s0_x_1 % 2)*2)");
  //prg.buffer_port_widths["dec2_up_stencil"] = 32;
  //hcompute_dec2_up_stencil->add_store("dec2_up_stencil", "(dec2_up_s0__0 + 4)", "(dec2_up_s0_y_1 + 2)", "dec2_up_s0_x_1");

////consuming dec2_up.stencil
//////producing dec1_weights_0_im_global_wrapper_global_wrapper.stencil
  //auto dec1_weights_0_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec1_weights_0_im_global_wrapper_global_wrapper_s0__3", 0, 128);
  //auto dec1_weights_0_im_global_wrapper_global_wrapper_s0__2 = dec1_weights_0_im_global_wrapper_global_wrapper_s0__3->add_loop("dec1_weights_0_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec1_weights_0_im_global_wrapper_global_wrapper_s0__1 = dec1_weights_0_im_global_wrapper_global_wrapper_s0__2->add_loop("dec1_weights_0_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec1_weights_0_im_global_wrapper_global_wrapper_s0__0 = dec1_weights_0_im_global_wrapper_global_wrapper_s0__1->add_loop("dec1_weights_0_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_weights_0_im_global_wrapper_global_wrapper_s0__0, dec1_weights_0_im_global_wrapper_global_wrapper_s0__1, dec1_weights_0_im_global_wrapper_global_wrapper_s0__2, dec1_weights_0_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_0_im_global_wrapper.stencil(dec1_weights_0_im_global_wrapper_global_wrapper_s0__0, dec1_weights_0_im_global_wrapper_global_wrapper_s0__1, dec1_weights_0_im_global_wrapper_global_wrapper_s0__2, dec1_weights_0_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil = dec1_weights_0_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil->add_load("dec1_weights_0_im_global_wrapper_stencil", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec1_weights_0_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec1_weights_0_im_global_wrapper_global_wrapper_stencil->add_store("dec1_weights_0_im_global_wrapper_global_wrapper_stencil", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__3", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__2", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__1", "dec1_weights_0_im_global_wrapper_global_wrapper_s0__0");

////consuming dec1_weights_0_im_global_wrapper_global_wrapper.stencil
//////producing dec1_weights_1_im_global_wrapper_global_wrapper.stencil
  //auto dec1_weights_1_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec1_weights_1_im_global_wrapper_global_wrapper_s0__3", 0, 32);
  //auto dec1_weights_1_im_global_wrapper_global_wrapper_s0__2 = dec1_weights_1_im_global_wrapper_global_wrapper_s0__3->add_loop("dec1_weights_1_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto dec1_weights_1_im_global_wrapper_global_wrapper_s0__0 = dec1_weights_1_im_global_wrapper_global_wrapper_s0__2->add_loop("dec1_weights_1_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec1_weights_1_im_global_wrapper_global_wrapper_s0__2, dec1_weights_1_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_1_im_global_wrapper.stencil(dec1_weights_1_im_global_wrapper_global_wrapper_s0__0, 0, dec1_weights_1_im_global_wrapper_global_wrapper_s0__2, dec1_weights_1_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil = dec1_weights_1_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil->add_load("dec1_weights_1_im_global_wrapper_stencil", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec1_weights_1_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec1_weights_1_im_global_wrapper_global_wrapper_stencil->add_store("dec1_weights_1_im_global_wrapper_global_wrapper_stencil", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__3", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__2", "0", "dec1_weights_1_im_global_wrapper_global_wrapper_s0__0");

////consuming dec1_weights_1_im_global_wrapper_global_wrapper.stencil
//////producing dec1_weights_2_im_global_wrapper_global_wrapper.stencil
  //auto dec1_weights_2_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("dec1_weights_2_im_global_wrapper_global_wrapper_s0__3", 0, 32);
  //auto dec1_weights_2_im_global_wrapper_global_wrapper_s0__1 = dec1_weights_2_im_global_wrapper_global_wrapper_s0__3->add_loop("dec1_weights_2_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto dec1_weights_2_im_global_wrapper_global_wrapper_s0__0 = dec1_weights_2_im_global_wrapper_global_wrapper_s0__1->add_loop("dec1_weights_2_im_global_wrapper_global_wrapper_s0__0", -2, 10);

////store is: dec1_weights_2_im_global_wrapper_global_wrapper.stencil((dec1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 2), dec1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__3) = dec1_weights_2_im_global_wrapper.stencil(dec1_weights_2_im_global_wrapper_global_wrapper_s0__0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__1, 0, dec1_weights_2_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil = dec1_weights_2_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil");
  //hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil->add_load("dec1_weights_2_im_global_wrapper_stencil", "dec1_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec1_weights_2_im_global_wrapper_global_wrapper_s0__1", "dec1_weights_2_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["dec1_weights_2_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_dec1_weights_2_im_global_wrapper_global_wrapper_stencil->add_store("dec1_weights_2_im_global_wrapper_global_wrapper_stencil", "dec1_weights_2_im_global_wrapper_global_wrapper_s0__3", "0", "dec1_weights_2_im_global_wrapper_global_wrapper_s0__1", "(dec1_weights_2_im_global_wrapper_global_wrapper_s0__0 + 2)");

////consuming dec1_weights_2_im_global_wrapper_global_wrapper.stencil
//////producing dec1_up$1.stencil
  //auto dec1_up_1_s0__0 = prg.add_loop("dec1_up_1_s0__0", -2, 722);
  //auto dec1_up_1_s0_y_3 = dec1_up_1_s0__0->add_loop("dec1_up_1_s0_y_3", 0, 360);
  //auto dec1_up_1_s0_x_3 = dec1_up_1_s0_y_3->add_loop("dec1_up_1_s0_x_3", 0, 32);
//////producing dec1_conv3x1.stencil
  //auto dec1_conv3x1_s0_i = dec1_up_1_s0_x_3->add_loop("dec1_conv3x1_s0_i", 0, 4);
  //auto dec1_conv3x1_s0_c = dec1_conv3x1_s0_i->add_loop("dec1_conv3x1_s0_c", 0, 4);

////store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = 0.000000f
  //auto hcompute_dec1_conv3x1_stencil_2 = dec1_conv3x1_s0_c->add_op("op_hcompute_dec1_conv3x1_stencil_2");
  //hcompute_dec1_conv3x1_stencil_2->add_function("hcompute_dec1_conv3x1_stencil_2");
  //prg.buffer_port_widths["dec1_conv3x1_stencil"] = 32;
  //hcompute_dec1_conv3x1_stencil_2->add_store("dec1_conv3x1_stencil", "0", "((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");
  //auto dec1_conv3x1_s1_i = dec1_up_1_s0_x_3->add_loop("dec1_conv3x1_s1_i", 0, _11294);
  //auto dec1_conv3x1_s1_c = dec1_conv3x1_s1_i->add_loop("dec1_conv3x1_s1_c", 0, 4);
  //auto dec1_conv3x1_s1_r_24_y = dec1_conv3x1_s1_c->add_loop("dec1_conv3x1_s1_r_24_y", 0, 3);
  //auto dec1_conv3x1_s1_r_24_x = dec1_conv3x1_s1_r_24_y->add_loop("dec1_conv3x1_s1_r_24_x", 0, 32);
//////producing dec1_conv1x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec1_conv1x3_stencil = dec1_conv3x1_s1_r_24_x->add_op("op_hcompute_dec1_conv1x3_stencil");
  //hcompute_dec1_conv1x3_stencil->add_function("hcompute_dec1_conv1x3_stencil");
  //prg.buffer_port_widths["dec1_conv1x3_stencil"] = 32;
  //hcompute_dec1_conv1x3_stencil->add_store("dec1_conv1x3_stencil", "0", "0", "0");
  //auto dec1_conv1x3_s1_r_23_z = dec1_conv3x1_s1_r_24_x->add_loop("dec1_conv1x3_s1_r_23_z", 0, 3);
  //auto dec1_conv1x3_s1_r_23_x = dec1_conv1x3_s1_r_23_z->add_loop("dec1_conv1x3_s1_r_23_x", 0, 32);
//////producing dec1_conv3x3.stencil

////store is: dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) = 0.000000f
  //auto hcompute_dec1_conv3x3_stencil = dec1_conv1x3_s1_r_23_x->add_op("op_hcompute_dec1_conv3x3_stencil");
  //hcompute_dec1_conv3x3_stencil->add_function("hcompute_dec1_conv3x3_stencil");
  //prg.buffer_port_widths["dec1_conv3x3_stencil"] = 32;
  //hcompute_dec1_conv3x3_stencil->add_store("dec1_conv3x3_stencil", "0", "(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1))", "0");
  //auto dec1_conv3x3_s1_r_22_z = dec1_conv1x3_s1_r_23_x->add_loop("dec1_conv3x3_s1_r_22_z", 0, 3);
  //auto dec1_conv3x3_s1_r_22_y = dec1_conv3x3_s1_r_22_z->add_loop("dec1_conv3x3_s1_r_22_y", 0, 3);
  //auto dec1_conv3x3_s1_r_22_x = dec1_conv3x3_s1_r_22_y->add_loop("dec1_conv3x3_s1_r_22_x", 0, 128);

////store is: dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) = (dec1_conv3x3.stencil(0, (((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x, dec1_conv3x3_s1_r_22_y, dec1_conv3x3_s1_r_22_z, dec1_conv3x3_s1_r_22_x)*select(((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y) < 2), 0.000000f, select((dec1_conv3x3_s1_r_22_x < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x, max(min((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2), (((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x, (max(min((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2) + 6), (((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 39))))))
  //auto hcompute_dec1_conv3x3_stencil_1 = dec1_conv3x3_s1_r_22_x->add_op("op_hcompute_dec1_conv3x3_stencil_1");
  //hcompute_dec1_conv3x3_stencil_1->add_function("hcompute_dec1_conv3x3_stencil_1");
  //hcompute_dec1_conv3x3_stencil_1->add_load("dec1_conv3x3_stencil", "0", "(((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1))", "0");
  //hcompute_dec1_conv3x3_stencil_1->add_load("dec1_weights_0_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x3_s1_r_22_x", "dec1_conv3x3_s1_r_22_z", "dec1_conv3x3_s1_r_22_y", "dec1_conv1x3_s1_r_23_x");
  //hcompute_dec1_conv3x3_stencil_1->add_load("dec2_up_stencil", "(((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 2)", "max(min((((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2)", "dec1_conv3x3_s1_r_22_x");
  //hcompute_dec1_conv3x3_stencil_1->add_load("enc1_sum_stencil", "(((dec1_conv1x3_s1_r_23_z + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z) + 39)", "(max(min((((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) + dec1_conv3x3_s1_r_22_y), 91), 2) + 6)", "dec1_conv3x3_s1_r_22_x");
  //hcompute_dec1_conv3x3_stencil_1->add_store("dec1_conv3x3_stencil", "0", "(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1))", "0");
  //hcompute_dec1_conv3x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x1_s1_i");
  //hcompute_dec1_conv3x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x1_s1_r_24_y");
  //hcompute_dec1_conv3x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x3_s1_r_22_x");
  //hcompute_dec1_conv3x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x3_s1_r_22_y");
  //hcompute_dec1_conv3x3_stencil_1->compute_unit_needs_index_variable("dec1_up_1_s0_y_3");

////consuming dec1_conv3x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x, 0, dec1_conv1x3_s1_r_23_z, dec1_conv1x3_s1_r_23_x)*select((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) < 1), 0.000000f, dec1_conv3x3.stencil(0, max((((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0), 0))))
  //auto hcompute_dec1_conv1x3_stencil_1 = dec1_conv1x3_s1_r_23_x->add_op("op_hcompute_dec1_conv1x3_stencil_1");
  //hcompute_dec1_conv1x3_stencil_1->add_function("hcompute_dec1_conv1x3_stencil_1");
  //hcompute_dec1_conv1x3_stencil_1->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_1->add_load("dec1_conv3x3_stencil", "0", "max((((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y) - max(min(((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) + dec1_conv3x1_s1_r_24_y), 90), 1)), 0)", "0");
  //hcompute_dec1_conv1x3_stencil_1->add_load("dec1_weights_1_im_global_wrapper_global_wrapper_stencil", "dec1_conv1x3_s1_r_23_x", "dec1_conv1x3_s1_r_23_z", "0", "dec1_conv3x1_s1_r_24_x");
  //hcompute_dec1_conv1x3_stencil_1->add_store("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x1_s1_i");
  //hcompute_dec1_conv1x3_stencil_1->compute_unit_needs_index_variable("dec1_conv3x1_s1_r_24_y");
  //hcompute_dec1_conv1x3_stencil_1->compute_unit_needs_index_variable("dec1_up_1_s0_y_3");

////consuming dec1_conv1x3.stencil

////store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil((((dec1_up_1_s0_x_3 + 2)/4) + dec1_conv3x1_s1_c), dec1_conv3x1_s1_r_24_y, 0, dec1_conv3x1_s1_r_24_x)*dec1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec1_conv3x1_stencil_3 = dec1_conv3x1_s1_r_24_x->add_op("op_hcompute_dec1_conv3x1_stencil_3");
  //hcompute_dec1_conv3x1_stencil_3->add_function("hcompute_dec1_conv3x1_stencil_3");
  //hcompute_dec1_conv3x1_stencil_3->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv3x1_stencil_3->add_load("dec1_conv3x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv3x1_s1_i) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -6)/4)) + dec1_conv3x1_s1_c) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_conv3x1_stencil_3->add_load("dec1_weights_2_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x1_s1_r_24_x", "0", "dec1_conv3x1_s1_r_24_y", "(floor(((dec1_up_1_s0_x_3 + 2)/4)) + dec1_conv3x1_s1_c)");
  //hcompute_dec1_conv3x1_stencil_3->add_store("dec1_conv3x1_stencil", "0", "((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv3x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");
  //auto dec1_conv3x1_s1_i_1 = dec1_up_1_s0_x_3->add_loop("dec1_conv3x1_s1_i_1", 0, _11474);
  //auto dec1_conv3x1_s1_c_1 = dec1_conv3x1_s1_i_1->add_loop("dec1_conv3x1_s1_c_1", 0, 4);
  //auto dec1_conv3x1_s1_r_24_y_1 = dec1_conv3x1_s1_c_1->add_loop("dec1_conv3x1_s1_r_24_y_1", 0, 3);
  //auto dec1_conv3x1_s1_r_24_x_1 = dec1_conv3x1_s1_r_24_y_1->add_loop("dec1_conv3x1_s1_r_24_x_1", 0, 32);
//////producing dec1_conv1x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec1_conv1x3_stencil_2 = dec1_conv3x1_s1_r_24_x_1->add_op("op_hcompute_dec1_conv1x3_stencil_2");
  //hcompute_dec1_conv1x3_stencil_2->add_function("hcompute_dec1_conv1x3_stencil_2");
  //hcompute_dec1_conv1x3_stencil_2->add_store("dec1_conv1x3_stencil", "0", "0", "0");
  //auto dec1_conv1x3_s1_r_23_z_1 = dec1_conv3x1_s1_r_24_x_1->add_loop("dec1_conv1x3_s1_r_23_z_1", 0, 3);
  //auto dec1_conv1x3_s1_r_23_x_1 = dec1_conv1x3_s1_r_23_z_1->add_loop("dec1_conv1x3_s1_r_23_x_1", 0, 32);
//////producing dec1_conv3x3.stencil

////store is: dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) = 0.000000f
  //auto hcompute_dec1_conv3x3_stencil_2 = dec1_conv1x3_s1_r_23_x_1->add_op("op_hcompute_dec1_conv3x3_stencil_2");
  //hcompute_dec1_conv3x3_stencil_2->add_function("hcompute_dec1_conv3x3_stencil_2");
  //hcompute_dec1_conv3x3_stencil_2->add_store("dec1_conv3x3_stencil", "0", "(max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90)", "0");
  //auto dec1_conv3x3_s1_r_22_z_1 = dec1_conv1x3_s1_r_23_x_1->add_loop("dec1_conv3x3_s1_r_22_z_1", 0, 3);
  //auto dec1_conv3x3_s1_r_22_y_1 = dec1_conv3x3_s1_r_22_z_1->add_loop("dec1_conv3x3_s1_r_22_y_1", 0, 3);
  //auto dec1_conv3x3_s1_r_22_x_1 = dec1_conv3x3_s1_r_22_y_1->add_loop("dec1_conv3x3_s1_r_22_x_1", 0, 128);

////store is: dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) = (dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x_1, dec1_conv3x3_s1_r_22_y_1, dec1_conv3x3_s1_r_22_z_1, dec1_conv3x3_s1_r_22_x_1)*select((dec1_conv3x3_s1_r_22_x_1 < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x_1, min((((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91), (((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x_1, (min((((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91) + 6), (((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 39)))))
  //auto hcompute_dec1_conv3x3_stencil_3 = dec1_conv3x3_s1_r_22_x_1->add_op("op_hcompute_dec1_conv3x3_stencil_3");
  //hcompute_dec1_conv3x3_stencil_3->add_function("hcompute_dec1_conv3x3_stencil_3");
  //hcompute_dec1_conv3x3_stencil_3->add_load("dec1_conv3x3_stencil", "0", "(max(((min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90)", "0");
  //hcompute_dec1_conv3x3_stencil_3->add_load("dec1_weights_0_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x3_s1_r_22_x_1", "dec1_conv3x3_s1_r_22_z_1", "dec1_conv3x3_s1_r_22_y_1", "dec1_conv1x3_s1_r_23_x_1");
  //hcompute_dec1_conv3x3_stencil_3->add_load("dec2_up_stencil", "(((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 2)", "min((((min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91)", "dec1_conv3x3_s1_r_22_x_1");
  //hcompute_dec1_conv3x3_stencil_3->add_load("enc1_sum_stencil", "(((dec1_conv1x3_s1_r_23_z_1 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_1) + 39)", "(min((((min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1) + dec1_conv3x3_s1_r_22_y_1), 91) + 6)", "dec1_conv3x3_s1_r_22_x_1");
  //hcompute_dec1_conv3x3_stencil_3->add_store("dec1_conv3x3_stencil", "0", "(max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90)", "0");
  //hcompute_dec1_conv3x3_stencil_3->compute_unit_needs_index_variable("dec1_conv3x3_s1_r_22_x_1");

////consuming dec1_conv3x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x_1, 0, dec1_conv1x3_s1_r_23_z_1, dec1_conv1x3_s1_r_23_x_1)*dec1_conv3x3.stencil(0, (max(((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90), 0)))
  //auto hcompute_dec1_conv1x3_stencil_3 = dec1_conv1x3_s1_r_23_x_1->add_op("op_hcompute_dec1_conv1x3_stencil_3");
  //hcompute_dec1_conv1x3_stencil_3->add_function("hcompute_dec1_conv1x3_stencil_3");
  //hcompute_dec1_conv1x3_stencil_3->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_3->add_load("dec1_conv3x3_stencil", "0", "(max(((min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))) + dec1_conv3x1_s1_i_1) + dec1_conv3x1_s1_r_24_y_1), 90) + -90)", "0");
  //hcompute_dec1_conv1x3_stencil_3->add_load("dec1_weights_1_im_global_wrapper_global_wrapper_stencil", "dec1_conv1x3_s1_r_23_x_1", "dec1_conv1x3_s1_r_23_z_1", "0", "dec1_conv3x1_s1_r_24_x_1");
  //hcompute_dec1_conv1x3_stencil_3->add_store("dec1_conv1x3_stencil", "0", "0", "0");

////consuming dec1_conv1x3.stencil

////store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil((((dec1_up_1_s0_x_3 + 2)/4) + dec1_conv3x1_s1_c_1), dec1_conv3x1_s1_r_24_y_1, 0, dec1_conv3x1_s1_r_24_x_1)*dec1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec1_conv3x1_stencil_4 = dec1_conv3x1_s1_r_24_x_1->add_op("op_hcompute_dec1_conv3x1_stencil_4");
  //hcompute_dec1_conv3x1_stencil_4->add_function("hcompute_dec1_conv3x1_stencil_4");
  //hcompute_dec1_conv3x1_stencil_4->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv3x1_stencil_4->add_load("dec1_conv3x1_stencil", "0", "((min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))) + dec1_conv3x1_s1_i_1) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -6)/4)) + dec1_conv3x1_s1_c_1) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_conv3x1_stencil_4->add_load("dec1_weights_2_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x1_s1_r_24_x_1", "0", "dec1_conv3x1_s1_r_24_y_1", "(floor(((dec1_up_1_s0_x_3 + 2)/4)) + dec1_conv3x1_s1_c_1)");
  //hcompute_dec1_conv3x1_stencil_4->add_store("dec1_conv3x1_stencil", "0", "((min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)) + dec1_conv3x1_s1_i_1) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_1) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");
  //auto dec1_conv3x1_s1_i_2 = dec1_up_1_s0_x_3->add_loop("dec1_conv3x1_s1_i_2", 0, _11627);
  //auto dec1_conv3x1_s1_c_2 = dec1_conv3x1_s1_i_2->add_loop("dec1_conv3x1_s1_c_2", 0, 4);
  //auto dec1_conv3x1_s1_r_24_y_2 = dec1_conv3x1_s1_c_2->add_loop("dec1_conv3x1_s1_r_24_y_2", 0, 3);
  //auto dec1_conv3x1_s1_r_24_x_2 = dec1_conv3x1_s1_r_24_y_2->add_loop("dec1_conv3x1_s1_r_24_x_2", 0, 32);
//////producing dec1_conv1x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_dec1_conv1x3_stencil_4 = dec1_conv3x1_s1_r_24_x_2->add_op("op_hcompute_dec1_conv1x3_stencil_4");
  //hcompute_dec1_conv1x3_stencil_4->add_function("hcompute_dec1_conv1x3_stencil_4");
  //hcompute_dec1_conv1x3_stencil_4->add_store("dec1_conv1x3_stencil", "0", "0", "0");
  //auto dec1_conv1x3_s1_r_23_z_2 = dec1_conv3x1_s1_r_24_x_2->add_loop("dec1_conv1x3_s1_r_23_z_2", 0, 3);
  //auto dec1_conv1x3_s1_r_23_x_2 = dec1_conv1x3_s1_r_23_z_2->add_loop("dec1_conv1x3_s1_r_23_x_2", 0, 32);
//////producing dec1_conv3x3.stencil

////store is: dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) = 0.000000f
  //auto hcompute_dec1_conv3x3_stencil_4 = dec1_conv1x3_s1_r_23_x_2->add_op("op_hcompute_dec1_conv3x3_stencil_4");
  //hcompute_dec1_conv3x3_stencil_4->add_function("hcompute_dec1_conv3x3_stencil_4");
  //hcompute_dec1_conv3x3_stencil_4->add_store("dec1_conv3x3_stencil", "0", "(max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90)", "0");
  //auto dec1_conv3x3_s1_r_22_z_2 = dec1_conv1x3_s1_r_23_x_2->add_loop("dec1_conv3x3_s1_r_22_z_2", 0, 3);
  //auto dec1_conv3x3_s1_r_22_y_2 = dec1_conv3x3_s1_r_22_z_2->add_loop("dec1_conv3x3_s1_r_22_y_2", 0, 3);
  //auto dec1_conv3x3_s1_r_22_x_2 = dec1_conv3x3_s1_r_22_y_2->add_loop("dec1_conv3x3_s1_r_22_x_2", 0, 128);

////store is: dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) = (dec1_conv3x3.stencil(0, (max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90), 0) + (dec1_weights_0_im_global_wrapper_global_wrapper.stencil(dec1_conv1x3_s1_r_23_x_2, dec1_conv3x3_s1_r_22_y_2, dec1_conv3x3_s1_r_22_z_2, dec1_conv3x3_s1_r_22_x_2)*select(((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2) < 92), select((dec1_conv3x3_s1_r_22_x_2 < 64), dec2_up.stencil(dec1_conv3x3_s1_r_22_x_2, min((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91), (((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 2)), enc1_sum.stencil(dec1_conv3x3_s1_r_22_x_2, (min((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91) + 6), (((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 39))), 0.000000f)))
  //auto hcompute_dec1_conv3x3_stencil_5 = dec1_conv3x3_s1_r_22_x_2->add_op("op_hcompute_dec1_conv3x3_stencil_5");
  //hcompute_dec1_conv3x3_stencil_5->add_function("hcompute_dec1_conv3x3_stencil_5");
  //hcompute_dec1_conv3x3_stencil_5->add_load("dec1_conv3x3_stencil", "0", "(max(((max(min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))), (min(floor(((dec1_up_1_s0_y_3 + 6)/4)), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90)", "0");
  //hcompute_dec1_conv3x3_stencil_5->add_load("dec1_weights_0_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x3_s1_r_22_x_2", "dec1_conv3x3_s1_r_22_z_2", "dec1_conv3x3_s1_r_22_y_2", "dec1_conv1x3_s1_r_23_x_2");
  //hcompute_dec1_conv3x3_stencil_5->add_load("dec2_up_stencil", "(((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 2)", "min((((max(min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))), (min(floor(((dec1_up_1_s0_y_3 + 6)/4)), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91)", "dec1_conv3x3_s1_r_22_x_2");
  //hcompute_dec1_conv3x3_stencil_5->add_load("enc1_sum_stencil", "(((dec1_conv1x3_s1_r_23_z_2 + dec1_up_1_s0__0) + dec1_conv3x3_s1_r_22_z_2) + 39)", "(min((((max(min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))), (min(floor(((dec1_up_1_s0_y_3 + 6)/4)), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) + dec1_conv3x3_s1_r_22_y_2), 91) + 6)", "dec1_conv3x3_s1_r_22_x_2");
  //hcompute_dec1_conv3x3_stencil_5->add_store("dec1_conv3x3_stencil", "0", "(max(((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2), 90) + -90)", "0");
  //hcompute_dec1_conv3x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x1_s1_i_2");
  //hcompute_dec1_conv3x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x1_s1_r_24_y_2");
  //hcompute_dec1_conv3x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x3_s1_r_22_x_2");
  //hcompute_dec1_conv3x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x3_s1_r_22_y_2");
  //hcompute_dec1_conv3x3_stencil_5->compute_unit_needs_index_variable("dec1_up_1_s0_y_3");

////consuming dec1_conv3x3.stencil

////store is: dec1_conv1x3.stencil(0, 0, 0) = (dec1_conv1x3.stencil(0, 0, 0) + (dec1_weights_1_im_global_wrapper_global_wrapper.stencil(dec1_conv3x1_s1_r_24_x_2, 0, dec1_conv1x3_s1_r_23_z_2, dec1_conv1x3_s1_r_23_x_2)*select((((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) + dec1_conv3x1_s1_r_24_y_2) < 91), dec1_conv3x3.stencil(0, 0, 0), 0.000000f)))
  //auto hcompute_dec1_conv1x3_stencil_5 = dec1_conv1x3_s1_r_23_x_2->add_op("op_hcompute_dec1_conv1x3_stencil_5");
  //hcompute_dec1_conv1x3_stencil_5->add_function("hcompute_dec1_conv1x3_stencil_5");
  //hcompute_dec1_conv1x3_stencil_5->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_5->add_load("dec1_conv3x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_5->add_load("dec1_weights_1_im_global_wrapper_global_wrapper_stencil", "dec1_conv1x3_s1_r_23_x_2", "dec1_conv1x3_s1_r_23_z_2", "0", "dec1_conv3x1_s1_r_24_x_2");
  //hcompute_dec1_conv1x3_stencil_5->add_store("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv1x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x1_s1_i_2");
  //hcompute_dec1_conv1x3_stencil_5->compute_unit_needs_index_variable("dec1_conv3x1_s1_r_24_y_2");
  //hcompute_dec1_conv1x3_stencil_5->compute_unit_needs_index_variable("dec1_up_1_s0_y_3");

////consuming dec1_conv1x3.stencil

////store is: dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_2_im_global_wrapper_global_wrapper.stencil((((dec1_up_1_s0_x_3 + 2)/4) + dec1_conv3x1_s1_c_2), dec1_conv3x1_s1_r_24_y_2, 0, dec1_conv3x1_s1_r_24_x_2)*dec1_conv1x3.stencil(0, 0, 0)))
  //auto hcompute_dec1_conv3x1_stencil_5 = dec1_conv3x1_s1_r_24_x_2->add_op("op_hcompute_dec1_conv3x1_stencil_5");
  //hcompute_dec1_conv3x1_stencil_5->add_function("hcompute_dec1_conv3x1_stencil_5");
  //hcompute_dec1_conv3x1_stencil_5->add_load("dec1_conv1x3_stencil", "0", "0", "0");
  //hcompute_dec1_conv3x1_stencil_5->add_load("dec1_conv3x1_stencil", "0", "((max(min(max(floor(((dec1_up_1_s0_y_3 + -6)/4)), 2), floor(((dec1_up_1_s0_y_3 + 10)/4))), (min(floor(((dec1_up_1_s0_y_3 + 6)/4)), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -6)/4)) + dec1_conv3x1_s1_c_2) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_conv3x1_stencil_5->add_load("dec1_weights_2_im_global_wrapper_global_wrapper_stencil", "dec1_conv3x1_s1_r_24_x_2", "0", "dec1_conv3x1_s1_r_24_y_2", "(floor(((dec1_up_1_s0_x_3 + 2)/4)) + dec1_conv3x1_s1_c_2)");
  //hcompute_dec1_conv3x1_stencil_5->add_store("dec1_conv3x1_stencil", "0", "((max(min(max(((dec1_up_1_s0_y_3 + -6)/4), 2), ((dec1_up_1_s0_y_3 + 10)/4)), (min(((dec1_up_1_s0_y_3 + 6)/4), 87) + 1)) + dec1_conv3x1_s1_i_2) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv3x1_s1_c_2) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");

////consuming dec1_conv3x1.stencil
//////producing dec1_conv1x1.stencil
  //auto dec1_conv1x1_s0_i = dec1_up_1_s0_x_3->add_loop("dec1_conv1x1_s0_i", 0, 4);
  //auto dec1_conv1x1_s0_c = dec1_conv1x1_s0_i->add_loop("dec1_conv1x1_s0_c", 0, 4);

////store is: dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = 0.000000f
  //auto hcompute_dec1_conv1x1_stencil = dec1_conv1x1_s0_c->add_op("op_hcompute_dec1_conv1x1_stencil");
  //hcompute_dec1_conv1x1_stencil->add_function("hcompute_dec1_conv1x1_stencil");
  //prg.buffer_port_widths["dec1_conv1x1_stencil"] = 32;
  //hcompute_dec1_conv1x1_stencil->add_store("dec1_conv1x1_stencil", "0", "((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s0_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s0_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");
  //auto dec1_conv1x1_s1_i = dec1_up_1_s0_x_3->add_loop("dec1_conv1x1_s1_i", 0, 4);
  //auto dec1_conv1x1_s1_c = dec1_conv1x1_s1_i->add_loop("dec1_conv1x1_s1_c", 0, 4);
  //auto dec1_conv1x1_s1_r_25_x = dec1_conv1x1_s1_c->add_loop("dec1_conv1x1_s1_r_25_x", 0, 128);

////store is: dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) = (dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + (dec1_weights_3_im_global_wrapper_global_wrapper.stencil((((dec1_up_1_s0_x_3 + 2)/4) + dec1_conv1x1_s1_c), 0, 0, dec1_conv1x1_s1_r_25_x)*select((dec1_conv1x1_s1_r_25_x < 64), dec2_up.stencil(dec1_conv1x1_s1_r_25_x, (((dec1_up_1_s0_y_3 + 2)/4) + dec1_conv1x1_s1_i), (dec1_up_1_s0__0 + 4)), enc1_sum.stencil(dec1_conv1x1_s1_r_25_x, (((dec1_up_1_s0_y_3 + 26)/4) + dec1_conv1x1_s1_i), (dec1_up_1_s0__0 + 41)))))
  //auto hcompute_dec1_conv1x1_stencil_1 = dec1_conv1x1_s1_r_25_x->add_op("op_hcompute_dec1_conv1x1_stencil_1");
  //hcompute_dec1_conv1x1_stencil_1->add_function("hcompute_dec1_conv1x1_stencil_1");
  //hcompute_dec1_conv1x1_stencil_1->add_load("dec1_conv1x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -6)/4)) + dec1_conv1x1_s1_i) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -6)/4)) + dec1_conv1x1_s1_c) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_conv1x1_stencil_1->add_load("dec1_weights_3_im_global_wrapper_global_wrapper_stencil", "dec1_conv1x1_s1_r_25_x", "0", "0", "(floor(((dec1_up_1_s0_x_3 + 2)/4)) + dec1_conv1x1_s1_c)");
  //hcompute_dec1_conv1x1_stencil_1->add_load("dec2_up_stencil", "(dec1_up_1_s0__0 + 4)", "(floor(((dec1_up_1_s0_y_3 + 2)/4)) + dec1_conv1x1_s1_i)", "dec1_conv1x1_s1_r_25_x");
  //hcompute_dec1_conv1x1_stencil_1->add_load("enc1_sum_stencil", "(dec1_up_1_s0__0 + 41)", "(floor(((dec1_up_1_s0_y_3 + 26)/4)) + dec1_conv1x1_s1_i)", "dec1_conv1x1_s1_r_25_x");
  //hcompute_dec1_conv1x1_stencil_1->add_store("dec1_conv1x1_stencil", "0", "((((dec1_up_1_s0_y_3 + -6)/4) + dec1_conv1x1_s1_i) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4)))", "((((dec1_up_1_s0_x_3 + -6)/4) + dec1_conv1x1_s1_c) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4)))");
  //hcompute_dec1_conv1x1_stencil_1->compute_unit_needs_index_variable("dec1_conv1x1_s1_r_25_x");

////consuming dec1_conv1x1.stencil

////store is: dec1_up$1.stencil(dec1_up_1_s0_x_3, dec1_up_1_s0_y_3, (dec1_up_1_s0__0 + 2)) = ((((((((((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0)))*3.000000f) + (((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))))*3.000000f) + (((((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), max(((dec1_up_1_s0_y_3/4) - min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1))), 0), 0)))*3.000000f) + (((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))) + -1), 0)))))*3.000000f) + (((((((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0)))*3.000000f) + (((dec1_conv3x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(max(((dec1_up_1_s0_x_3/4) - min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1))), 0), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))) + -1), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))))*3.000000f) + (((((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), ((((dec1_up_1_s0_y_3 + -2)/4) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0)))*3.000000f) + (((dec1_conv3x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil(((((dec1_up_1_s0_x_3 + -2)/4) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))*3.000000f) + (dec1_conv3x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0) + dec1_conv1x1.stencil((((dec1_up_1_s0_x_3 % 2) + (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_x_3 + -6)/4), (min(((dec1_up_1_s0_x_3 + -2)/4), (((dec1_up_1_s0_x_3 + -6)/4) + (((((dec1_up_1_s0_x_3/2) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), (((dec1_up_1_s0_x_3/4) + (((dec1_up_1_s0_x_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_x_3/4))), (((dec1_up_1_s0_y_3 % 2) + (((dec1_up_1_s0_y_3 + -6)/4) + ((((dec1_up_1_s0_y_3/2) + 1) % 2)*2))) - min(min(min(((dec1_up_1_s0_y_3 + -6)/4), (min(((dec1_up_1_s0_y_3 + -2)/4), (((dec1_up_1_s0_y_3 + -6)/4) + (((((dec1_up_1_s0_y_3/2) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), (((dec1_up_1_s0_y_3/4) + (((dec1_up_1_s0_y_3/2) % 2)*2)) + -1)), (dec1_up_1_s0_y_3/4))), 0))))))*0.003906f)
  //auto hcompute_dec1_up_1_stencil = dec1_up_1_s0_x_3->add_op("op_hcompute_dec1_up_1_stencil");
  //hcompute_dec1_up_1_stencil->add_function("hcompute_dec1_up_1_stencil");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv1x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "((floor(((dec1_up_1_s0_y_3 + -2)/4)) + (dec1_up_1_s0_y_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((dec1_up_1_s0_y_3 % 2) + (floor(((dec1_up_1_s0_y_3 + -6)/4)) + (((floor((dec1_up_1_s0_y_3/2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4))))", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "max((floor((dec1_up_1_s0_x_3/4)) - min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1))), 0)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "(((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_y_3/4)))) + -1)", "(((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4)))) + -1)");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "((floor(((dec1_up_1_s0_x_3 + -2)/4)) + (dec1_up_1_s0_x_3 % 2)) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //hcompute_dec1_up_1_stencil->add_load("dec1_conv3x1_stencil", "0", "max((floor((dec1_up_1_s0_y_3/4)) - min(min(floor(((dec1_up_1_s0_y_3 + -6)/4)), (min(floor(((dec1_up_1_s0_y_3 + -2)/4)), (floor(((dec1_up_1_s0_y_3 + -6)/4)) + ((((floor((dec1_up_1_s0_y_3/2)) + ((dec1_up_1_s0_y_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_y_3 % 2))), ((floor((dec1_up_1_s0_y_3/4)) + ((floor((dec1_up_1_s0_y_3/2)) % 2)*2)) + -1))), 0)", "(((dec1_up_1_s0_x_3 % 2) + (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) - min(min(min(floor(((dec1_up_1_s0_x_3 + -6)/4)), (min(floor(((dec1_up_1_s0_x_3 + -2)/4)), (floor(((dec1_up_1_s0_x_3 + -6)/4)) + ((((floor((dec1_up_1_s0_x_3/2)) + ((dec1_up_1_s0_x_3 % 2)*2)) + 1) % 2)*2))) + (dec1_up_1_s0_x_3 % 2))), ((floor((dec1_up_1_s0_x_3/4)) + ((floor((dec1_up_1_s0_x_3/2)) % 2)*2)) + -1)), floor((dec1_up_1_s0_x_3/4))))");
  //prg.buffer_port_widths["dec1_up_1_stencil"] = 32;
  //hcompute_dec1_up_1_stencil->add_store("dec1_up_1_stencil", "(dec1_up_1_s0__0 + 2)", "dec1_up_1_s0_y_3", "dec1_up_1_s0_x_3");

////consuming dec1_up$1.stencil
//////producing conv3_weights_im_global_wrapper_global_wrapper.stencil
  //auto conv3_weights_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("conv3_weights_im_global_wrapper_global_wrapper_s0__3", 0, 32);
  //auto conv3_weights_im_global_wrapper_global_wrapper_s0__2 = conv3_weights_im_global_wrapper_global_wrapper_s0__3->add_loop("conv3_weights_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto conv3_weights_im_global_wrapper_global_wrapper_s0__1 = conv3_weights_im_global_wrapper_global_wrapper_s0__2->add_loop("conv3_weights_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto conv3_weights_im_global_wrapper_global_wrapper_s0__0_1 = conv3_weights_im_global_wrapper_global_wrapper_s0__1->add_loop("conv3_weights_im_global_wrapper_global_wrapper_s0__0_1", 0, 32);

////store is: conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_weights_im_global_wrapper_global_wrapper_s0__0_1, conv3_weights_im_global_wrapper_global_wrapper_s0__1, conv3_weights_im_global_wrapper_global_wrapper_s0__2, conv3_weights_im_global_wrapper_global_wrapper_s0__3) = conv3_weights_im_global_wrapper.stencil(conv3_weights_im_global_wrapper_global_wrapper_s0__0_1, conv3_weights_im_global_wrapper_global_wrapper_s0__1, conv3_weights_im_global_wrapper_global_wrapper_s0__2, conv3_weights_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil = conv3_weights_im_global_wrapper_global_wrapper_s0__0_1->add_op("op_hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil->add_load("conv3_weights_im_global_wrapper_stencil", "conv3_weights_im_global_wrapper_global_wrapper_s0__3", "conv3_weights_im_global_wrapper_global_wrapper_s0__2", "conv3_weights_im_global_wrapper_global_wrapper_s0__1", "conv3_weights_im_global_wrapper_global_wrapper_s0__0_1");
  //prg.buffer_port_widths["conv3_weights_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv3_weights_im_global_wrapper_global_wrapper_stencil->add_store("conv3_weights_im_global_wrapper_global_wrapper_stencil", "conv3_weights_im_global_wrapper_global_wrapper_s0__3", "conv3_weights_im_global_wrapper_global_wrapper_s0__2", "conv3_weights_im_global_wrapper_global_wrapper_s0__1", "conv3_weights_im_global_wrapper_global_wrapper_s0__0_1");

////consuming conv3_weights_im_global_wrapper_global_wrapper.stencil
//////producing conv_mu_8_im_global_wrapper_global_wrapper.stencil
  //auto conv_mu_8_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_mu_8_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv_mu_8_im_global_wrapper_global_wrapper_s0__0) = conv_mu_8_im_global_wrapper.stencil(conv_mu_8_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil = conv_mu_8_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil->add_load("conv_mu_8_im_global_wrapper_stencil", "conv_mu_8_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_mu_8_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_mu_8_im_global_wrapper_global_wrapper_stencil->add_store("conv_mu_8_im_global_wrapper_global_wrapper_stencil", "conv_mu_8_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_mu_8_im_global_wrapper_global_wrapper.stencil
//////producing conv_sigma_8_im_global_wrapper_global_wrapper.stencil
  //auto conv_sigma_8_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_sigma_8_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv_sigma_8_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_8_im_global_wrapper.stencil(conv_sigma_8_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil = conv_sigma_8_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil->add_load("conv_sigma_8_im_global_wrapper_stencil", "conv_sigma_8_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_sigma_8_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_sigma_8_im_global_wrapper_global_wrapper_stencil->add_store("conv_sigma_8_im_global_wrapper_global_wrapper_stencil", "conv_sigma_8_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_sigma_8_im_global_wrapper_global_wrapper.stencil
//////producing conv3_relu.stencil
  //auto conv3_relu_s0_j = prg.add_loop("conv3_relu_s0_j", -1, 721);
  //auto conv3_relu_s0_c = conv3_relu_s0_j->add_loop("conv3_relu_s0_c", 0, 32);
//////producing conv3.stencil

////store is: conv3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv3_stencil = conv3_relu_s0_c->add_op("op_hcompute_conv3_stencil");
  //hcompute_conv3_stencil->add_function("hcompute_conv3_stencil");
  //prg.buffer_port_widths["conv3_stencil"] = 32;
  //hcompute_conv3_stencil->add_store("conv3_stencil", "0", "0", "0");
  //auto conv3_s1_r_26_z = conv3_relu_s0_c->add_loop("conv3_s1_r_26_z", 0, 3);
  //auto conv3_s1_r_26_y = conv3_s1_r_26_z->add_loop("conv3_s1_r_26_y", 0, 3);
  //auto conv3_s1_r_26_x = conv3_s1_r_26_y->add_loop("conv3_s1_r_26_x", 0, 32);

////store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c, conv3_s1_r_26_y, conv3_s1_r_26_z, conv3_s1_r_26_x)*select((conv3_s1_r_26_y < 1), 0.000000f, dec1_up$1.stencil(conv3_s1_r_26_x, (max(conv3_s1_r_26_y, 1) + -1), ((conv3_relu_s0_j + conv3_s1_r_26_z) + 1)))))
  //auto hcompute_conv3_stencil_1 = conv3_s1_r_26_x->add_op("op_hcompute_conv3_stencil_1");
  //hcompute_conv3_stencil_1->add_function("hcompute_conv3_stencil_1");
  //hcompute_conv3_stencil_1->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_stencil_1->add_load("conv3_weights_im_global_wrapper_global_wrapper_stencil", "conv3_s1_r_26_x", "conv3_s1_r_26_z", "conv3_s1_r_26_y", "conv3_relu_s0_c");
  //hcompute_conv3_stencil_1->add_load("dec1_up_1_stencil", "((conv3_relu_s0_j + conv3_s1_r_26_z) + 1)", "(max(conv3_s1_r_26_y, 1) + -1)", "conv3_s1_r_26_x");
  //hcompute_conv3_stencil_1->add_store("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_stencil_1->compute_unit_needs_index_variable("conv3_s1_r_26_y");

////consuming conv3.stencil

////store is: conv3_relu.stencil(conv3_relu_s0_c, 0, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c) + 0.000010f))), 0.000000f)
  //auto hcompute_conv3_relu_stencil = conv3_relu_s0_c->add_op("op_hcompute_conv3_relu_stencil");
  //hcompute_conv3_relu_stencil->add_function("hcompute_conv3_relu_stencil");
  //hcompute_conv3_relu_stencil->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_relu_stencil->add_load("conv_mu_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c");
  //hcompute_conv3_relu_stencil->add_load("conv_sigma_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c");
  //prg.buffer_port_widths["conv3_relu_stencil"] = 32;
  //hcompute_conv3_relu_stencil->add_store("conv3_relu_stencil", "(conv3_relu_s0_j + 1)", "0", "conv3_relu_s0_c");
  //auto conv3_relu_s0_i = conv3_relu_s0_j->add_loop("conv3_relu_s0_i", 1, 359);
  //auto conv3_relu_s0_c_1 = conv3_relu_s0_i->add_loop("conv3_relu_s0_c_1", 0, 32);
//////producing conv3.stencil

////store is: conv3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv3_stencil_2 = conv3_relu_s0_c_1->add_op("op_hcompute_conv3_stencil_2");
  //hcompute_conv3_stencil_2->add_function("hcompute_conv3_stencil_2");
  //hcompute_conv3_stencil_2->add_store("conv3_stencil", "0", "0", "0");
  //auto conv3_s1_r_26_z_1 = conv3_relu_s0_c_1->add_loop("conv3_s1_r_26_z_1", 0, 3);
  //auto conv3_s1_r_26_y_1 = conv3_s1_r_26_z_1->add_loop("conv3_s1_r_26_y_1", 0, 3);
  //auto conv3_s1_r_26_x_1 = conv3_s1_r_26_y_1->add_loop("conv3_s1_r_26_x_1", 0, 32);

////store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1, conv3_s1_r_26_y_1, conv3_s1_r_26_z_1, conv3_s1_r_26_x_1)*dec1_up$1.stencil(conv3_s1_r_26_x_1, ((conv3_relu_s0_i + conv3_s1_r_26_y_1) + -1), ((conv3_relu_s0_j + conv3_s1_r_26_z_1) + 1))))
  //auto hcompute_conv3_stencil_3 = conv3_s1_r_26_x_1->add_op("op_hcompute_conv3_stencil_3");
  //hcompute_conv3_stencil_3->add_function("hcompute_conv3_stencil_3");
  //hcompute_conv3_stencil_3->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_stencil_3->add_load("conv3_weights_im_global_wrapper_global_wrapper_stencil", "conv3_s1_r_26_x_1", "conv3_s1_r_26_z_1", "conv3_s1_r_26_y_1", "conv3_relu_s0_c_1");
  //hcompute_conv3_stencil_3->add_load("dec1_up_1_stencil", "((conv3_relu_s0_j + conv3_s1_r_26_z_1) + 1)", "((conv3_relu_s0_i + conv3_s1_r_26_y_1) + -1)", "conv3_s1_r_26_x_1");
  //hcompute_conv3_stencil_3->add_store("conv3_stencil", "0", "0", "0");

////consuming conv3.stencil

////store is: conv3_relu.stencil(conv3_relu_s0_c_1, conv3_relu_s0_i, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_1) + 0.000010f))), 0.000000f)
  //auto hcompute_conv3_relu_stencil_1 = conv3_relu_s0_c_1->add_op("op_hcompute_conv3_relu_stencil_1");
  //hcompute_conv3_relu_stencil_1->add_function("hcompute_conv3_relu_stencil_1");
  //hcompute_conv3_relu_stencil_1->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_relu_stencil_1->add_load("conv_mu_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c_1");
  //hcompute_conv3_relu_stencil_1->add_load("conv_sigma_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c_1");
  //hcompute_conv3_relu_stencil_1->add_store("conv3_relu_stencil", "(conv3_relu_s0_j + 1)", "conv3_relu_s0_i", "conv3_relu_s0_c_1");
  //auto conv3_relu_s0_c_2 = conv3_relu_s0_j->add_loop("conv3_relu_s0_c_2", 0, 32);
//////producing conv3.stencil

////store is: conv3.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv3_stencil_4 = conv3_relu_s0_c_2->add_op("op_hcompute_conv3_stencil_4");
  //hcompute_conv3_stencil_4->add_function("hcompute_conv3_stencil_4");
  //hcompute_conv3_stencil_4->add_store("conv3_stencil", "0", "0", "0");
  //auto conv3_s1_r_26_z_2 = conv3_relu_s0_c_2->add_loop("conv3_s1_r_26_z_2", 0, 3);
  //auto conv3_s1_r_26_y_2 = conv3_s1_r_26_z_2->add_loop("conv3_s1_r_26_y_2", 0, 3);
  //auto conv3_s1_r_26_x_2 = conv3_s1_r_26_y_2->add_loop("conv3_s1_r_26_x_2", 0, 32);

////store is: conv3.stencil(0, 0, 0) = (conv3.stencil(0, 0, 0) + (conv3_weights_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2, conv3_s1_r_26_y_2, conv3_s1_r_26_z_2, conv3_s1_r_26_x_2)*select((conv3_s1_r_26_y_2 < 2), dec1_up$1.stencil(conv3_s1_r_26_x_2, (min(conv3_s1_r_26_y_2, 1) + 358), ((conv3_relu_s0_j + conv3_s1_r_26_z_2) + 1)), 0.000000f)))
  //auto hcompute_conv3_stencil_5 = conv3_s1_r_26_x_2->add_op("op_hcompute_conv3_stencil_5");
  //hcompute_conv3_stencil_5->add_function("hcompute_conv3_stencil_5");
  //hcompute_conv3_stencil_5->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_stencil_5->add_load("conv3_weights_im_global_wrapper_global_wrapper_stencil", "conv3_s1_r_26_x_2", "conv3_s1_r_26_z_2", "conv3_s1_r_26_y_2", "conv3_relu_s0_c_2");
  //hcompute_conv3_stencil_5->add_load("dec1_up_1_stencil", "((conv3_relu_s0_j + conv3_s1_r_26_z_2) + 1)", "(min(conv3_s1_r_26_y_2, 1) + 358)", "conv3_s1_r_26_x_2");
  //hcompute_conv3_stencil_5->add_store("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_stencil_5->compute_unit_needs_index_variable("conv3_s1_r_26_y_2");

////consuming conv3.stencil

////store is: conv3_relu.stencil(conv3_relu_s0_c_2, 359, (conv3_relu_s0_j + 1)) = max(((conv3.stencil(0, 0, 0) - conv_mu_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2))/sqrt_f32((conv_sigma_8_im_global_wrapper_global_wrapper.stencil(conv3_relu_s0_c_2) + 0.000010f))), 0.000000f)
  //auto hcompute_conv3_relu_stencil_2 = conv3_relu_s0_c_2->add_op("op_hcompute_conv3_relu_stencil_2");
  //hcompute_conv3_relu_stencil_2->add_function("hcompute_conv3_relu_stencil_2");
  //hcompute_conv3_relu_stencil_2->add_load("conv3_stencil", "0", "0", "0");
  //hcompute_conv3_relu_stencil_2->add_load("conv_mu_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c_2");
  //hcompute_conv3_relu_stencil_2->add_load("conv_sigma_8_im_global_wrapper_global_wrapper_stencil", "conv3_relu_s0_c_2");
  //hcompute_conv3_relu_stencil_2->add_store("conv3_relu_stencil", "(conv3_relu_s0_j + 1)", "359", "conv3_relu_s0_c_2");

////consuming conv3_relu.stencil
//////producing conv4_weights_im_global_wrapper_global_wrapper.stencil
  //auto conv4_weights_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("conv4_weights_im_global_wrapper_global_wrapper_s0__3", 0, 32);
  //auto conv4_weights_im_global_wrapper_global_wrapper_s0__2 = conv4_weights_im_global_wrapper_global_wrapper_s0__3->add_loop("conv4_weights_im_global_wrapper_global_wrapper_s0__2", 0, 3);
  //auto conv4_weights_im_global_wrapper_global_wrapper_s0__1 = conv4_weights_im_global_wrapper_global_wrapper_s0__2->add_loop("conv4_weights_im_global_wrapper_global_wrapper_s0__1", 0, 3);
  //auto conv4_weights_im_global_wrapper_global_wrapper_s0__0 = conv4_weights_im_global_wrapper_global_wrapper_s0__1->add_loop("conv4_weights_im_global_wrapper_global_wrapper_s0__0", -1, 17);

////store is: conv4_weights_im_global_wrapper_global_wrapper.stencil((conv4_weights_im_global_wrapper_global_wrapper_s0__0 + 1), conv4_weights_im_global_wrapper_global_wrapper_s0__1, conv4_weights_im_global_wrapper_global_wrapper_s0__2, conv4_weights_im_global_wrapper_global_wrapper_s0__3) = conv4_weights_im_global_wrapper.stencil(conv4_weights_im_global_wrapper_global_wrapper_s0__0, conv4_weights_im_global_wrapper_global_wrapper_s0__1, conv4_weights_im_global_wrapper_global_wrapper_s0__2, conv4_weights_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8 = conv4_weights_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8");
  //hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8->add_function("hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8");
  //hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8->add_load("conv4_weights_im_global_wrapper_stencil", "conv4_weights_im_global_wrapper_global_wrapper_s0__3", "conv4_weights_im_global_wrapper_global_wrapper_s0__2", "conv4_weights_im_global_wrapper_global_wrapper_s0__1", "conv4_weights_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv4_weights_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv4_weights_im_global_wrapper_global_wrapper_stencil_8->add_store("conv4_weights_im_global_wrapper_global_wrapper_stencil", "conv4_weights_im_global_wrapper_global_wrapper_s0__3", "conv4_weights_im_global_wrapper_global_wrapper_s0__2", "conv4_weights_im_global_wrapper_global_wrapper_s0__1", "(conv4_weights_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming conv4_weights_im_global_wrapper_global_wrapper.stencil
//////producing conv_mu_9_im_global_wrapper_global_wrapper.stencil
  //auto conv_mu_9_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_mu_9_im_global_wrapper_global_wrapper_s0__0", -1, 17);

////store is: conv_mu_9_im_global_wrapper_global_wrapper.stencil((conv_mu_9_im_global_wrapper_global_wrapper_s0__0 + 1)) = conv_mu_9_im_global_wrapper.stencil(conv_mu_9_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil = conv_mu_9_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil->add_load("conv_mu_9_im_global_wrapper_stencil", "conv_mu_9_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_mu_9_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_mu_9_im_global_wrapper_global_wrapper_stencil->add_store("conv_mu_9_im_global_wrapper_global_wrapper_stencil", "(conv_mu_9_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming conv_mu_9_im_global_wrapper_global_wrapper.stencil
//////producing conv_sigma_9_im_global_wrapper_global_wrapper.stencil
  //auto conv_sigma_9_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_sigma_9_im_global_wrapper_global_wrapper_s0__0", -1, 17);

////store is: conv_sigma_9_im_global_wrapper_global_wrapper.stencil((conv_sigma_9_im_global_wrapper_global_wrapper_s0__0 + 1)) = conv_sigma_9_im_global_wrapper.stencil(conv_sigma_9_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil = conv_sigma_9_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil->add_load("conv_sigma_9_im_global_wrapper_stencil", "conv_sigma_9_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_sigma_9_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_sigma_9_im_global_wrapper_global_wrapper_stencil->add_store("conv_sigma_9_im_global_wrapper_global_wrapper_stencil", "(conv_sigma_9_im_global_wrapper_global_wrapper_s0__0 + 1)");

////consuming conv_sigma_9_im_global_wrapper_global_wrapper.stencil
//////producing conv4_up.stencil
  //auto conv4_up_s0__0 = prg.add_loop("conv4_up_s0__0", 0, 720);
  //auto conv4_up_s0_y_4 = conv4_up_s0__0->add_loop("conv4_up_s0_y_4", 0, 1280);
  //auto conv4_up_s0_x_4 = conv4_up_s0_y_4->add_loop("conv4_up_s0_x_4", 0, 32);
//////producing conv4.stencil
  //auto conv4_s0_i = conv4_up_s0_x_4->add_loop("conv4_s0_i", 0, 3);
  //auto conv4_s0_c = conv4_s0_i->add_loop("conv4_s0_c", 0, 3);

////store is: conv4.stencil(conv4_s0_c, conv4_s0_i, 0) = 0.000000f
  //auto hcompute_conv4_stencil = conv4_s0_c->add_op("op_hcompute_conv4_stencil");
  //hcompute_conv4_stencil->add_function("hcompute_conv4_stencil");
  //prg.buffer_port_widths["conv4_stencil"] = 32;
  //hcompute_conv4_stencil->add_store("conv4_stencil", "0", "conv4_s0_i", "conv4_s0_c");
  //auto conv4_s1_i = conv4_up_s0_x_4->add_loop("conv4_s1_i", 0, _12471);
  //auto conv4_s1_c = conv4_s1_i->add_loop("conv4_s1_c", 0, 3);
  //auto conv4_s1_r_27_z = conv4_s1_c->add_loop("conv4_s1_r_27_z", 0, 3);
  //auto conv4_s1_r_27_y = conv4_s1_r_27_z->add_loop("conv4_s1_r_27_y", 0, 3);
  //auto conv4_s1_r_27_x = conv4_s1_r_27_y->add_loop("conv4_s1_r_27_x", 0, 32);

////store is: conv4.stencil(conv4_s1_c, conv4_s1_i, 0) = (conv4.stencil(conv4_s1_c, conv4_s1_i, 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + conv4_s1_c), conv4_s1_r_27_y, conv4_s1_r_27_z, conv4_s1_r_27_x)*select(((((conv4_up_s0_y_4/2) + conv4_s1_i) + conv4_s1_r_27_y) < 2), 0.000000f, conv3_relu.stencil(conv4_s1_r_27_x, (max((((conv4_up_s0_y_4/2) + conv4_s1_i) + conv4_s1_r_27_y), 2) + -2), (conv4_s1_r_27_z + conv4_up_s0__0)))))
  //auto hcompute_conv4_stencil_1 = conv4_s1_r_27_x->add_op("op_hcompute_conv4_stencil_1");
  //hcompute_conv4_stencil_1->add_function("hcompute_conv4_stencil_1");
  //hcompute_conv4_stencil_1->add_load("conv3_relu_stencil", "(conv4_s1_r_27_z + conv4_up_s0__0)", "(max(((floor((conv4_up_s0_y_4/2)) + conv4_s1_i) + conv4_s1_r_27_y), 2) + -2)", "conv4_s1_r_27_x");
  //hcompute_conv4_stencil_1->add_load("conv4_stencil", "0", "conv4_s1_i", "conv4_s1_c");
  //hcompute_conv4_stencil_1->add_load("conv4_weights_im_global_wrapper_global_wrapper_stencil", "conv4_s1_r_27_x", "conv4_s1_r_27_z", "conv4_s1_r_27_y", "(floor((conv4_up_s0_x_4/2)) + conv4_s1_c)");
  //hcompute_conv4_stencil_1->add_store("conv4_stencil", "0", "conv4_s1_i", "conv4_s1_c");
  //hcompute_conv4_stencil_1->compute_unit_needs_index_variable("conv4_s1_i");
  //hcompute_conv4_stencil_1->compute_unit_needs_index_variable("conv4_s1_r_27_y");
  //hcompute_conv4_stencil_1->compute_unit_needs_index_variable("conv4_up_s0_y_4");
  //auto conv4_s1_i_1 = conv4_up_s0_x_4->add_loop("conv4_s1_i_1", 0, _12524);
  //auto conv4_s1_c_1 = conv4_s1_i_1->add_loop("conv4_s1_c_1", 0, 3);
  //auto conv4_s1_r_27_z_1 = conv4_s1_c_1->add_loop("conv4_s1_r_27_z_1", 0, 3);
  //auto conv4_s1_r_27_y_1 = conv4_s1_r_27_z_1->add_loop("conv4_s1_r_27_y_1", 0, 3);
  //auto conv4_s1_r_27_x_1 = conv4_s1_r_27_y_1->add_loop("conv4_s1_r_27_x_1", 0, 32);

////store is: conv4.stencil(conv4_s1_c_1, ((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) - (conv4_up_s0_y_4/2)), 0) = (conv4.stencil(conv4_s1_c_1, ((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) - (conv4_up_s0_y_4/2)), 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + conv4_s1_c_1), conv4_s1_r_27_y_1, conv4_s1_r_27_z_1, conv4_s1_r_27_x_1)*conv3_relu.stencil(conv4_s1_r_27_x_1, (((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) + conv4_s1_r_27_y_1) + -2), (conv4_s1_r_27_z_1 + conv4_up_s0__0))))
  //auto hcompute_conv4_stencil_2 = conv4_s1_r_27_x_1->add_op("op_hcompute_conv4_stencil_2");
  //hcompute_conv4_stencil_2->add_function("hcompute_conv4_stencil_2");
  //hcompute_conv4_stencil_2->add_load("conv3_relu_stencil", "(conv4_s1_r_27_z_1 + conv4_up_s0__0)", "(((min(max(floor((conv4_up_s0_y_4/2)), 2), (floor((conv4_up_s0_y_4/2)) + 3)) + conv4_s1_i_1) + conv4_s1_r_27_y_1) + -2)", "conv4_s1_r_27_x_1");
  //hcompute_conv4_stencil_2->add_load("conv4_stencil", "0", "((min(max(floor((conv4_up_s0_y_4/2)), 2), (floor((conv4_up_s0_y_4/2)) + 3)) + conv4_s1_i_1) - floor((conv4_up_s0_y_4/2)))", "conv4_s1_c_1");
  //hcompute_conv4_stencil_2->add_load("conv4_weights_im_global_wrapper_global_wrapper_stencil", "conv4_s1_r_27_x_1", "conv4_s1_r_27_z_1", "conv4_s1_r_27_y_1", "(floor((conv4_up_s0_x_4/2)) + conv4_s1_c_1)");
  //hcompute_conv4_stencil_2->add_store("conv4_stencil", "0", "((min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)) + conv4_s1_i_1) - (conv4_up_s0_y_4/2))", "conv4_s1_c_1");
  //auto conv4_s1_i_2 = conv4_up_s0_x_4->add_loop("conv4_s1_i_2", 0, _12561);
  //auto conv4_s1_c_2 = conv4_s1_i_2->add_loop("conv4_s1_c_2", 0, 3);
  //auto conv4_s1_r_27_z_2 = conv4_s1_c_2->add_loop("conv4_s1_r_27_z_2", 0, 3);
  //auto conv4_s1_r_27_y_2 = conv4_s1_r_27_z_2->add_loop("conv4_s1_r_27_y_2", 0, 3);
  //auto conv4_s1_r_27_x_2 = conv4_s1_r_27_y_2->add_loop("conv4_s1_r_27_x_2", 0, 32);

////store is: conv4.stencil(conv4_s1_c_2, ((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) - (conv4_up_s0_y_4/2)), 0) = (conv4.stencil(conv4_s1_c_2, ((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) - (conv4_up_s0_y_4/2)), 0) + (conv4_weights_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + conv4_s1_c_2), conv4_s1_r_27_y_2, conv4_s1_r_27_z_2, conv4_s1_r_27_x_2)*select((((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + conv4_s1_r_27_y_2) < 362), conv3_relu.stencil(conv4_s1_r_27_x_2, (min(((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) + conv4_s1_r_27_y_2), 361) + -2), (conv4_s1_r_27_z_2 + conv4_up_s0__0)), 0.000000f)))
  //auto hcompute_conv4_stencil_3 = conv4_s1_r_27_x_2->add_op("op_hcompute_conv4_stencil_3");
  //hcompute_conv4_stencil_3->add_function("hcompute_conv4_stencil_3");
  //hcompute_conv4_stencil_3->add_load("conv3_relu_stencil", "(conv4_s1_r_27_z_2 + conv4_up_s0__0)", "(min(((max(min(max(floor((conv4_up_s0_y_4/2)), 2), (floor((conv4_up_s0_y_4/2)) + 3)), (min(floor((conv4_up_s0_y_4/2)), 357) + 3)) + conv4_s1_i_2) + conv4_s1_r_27_y_2), 361) + -2)", "conv4_s1_r_27_x_2");
  //hcompute_conv4_stencil_3->add_load("conv4_stencil", "0", "((max(min(max(floor((conv4_up_s0_y_4/2)), 2), (floor((conv4_up_s0_y_4/2)) + 3)), (min(floor((conv4_up_s0_y_4/2)), 357) + 3)) + conv4_s1_i_2) - floor((conv4_up_s0_y_4/2)))", "conv4_s1_c_2");
  //hcompute_conv4_stencil_3->add_load("conv4_weights_im_global_wrapper_global_wrapper_stencil", "conv4_s1_r_27_x_2", "conv4_s1_r_27_z_2", "conv4_s1_r_27_y_2", "(floor((conv4_up_s0_x_4/2)) + conv4_s1_c_2)");
  //hcompute_conv4_stencil_3->add_store("conv4_stencil", "0", "((max(min(max((conv4_up_s0_y_4/2), 2), ((conv4_up_s0_y_4/2) + 3)), (min((conv4_up_s0_y_4/2), 357) + 3)) + conv4_s1_i_2) - (conv4_up_s0_y_4/2))", "conv4_s1_c_2");
  //hcompute_conv4_stencil_3->compute_unit_needs_index_variable("conv4_s1_i_2");
  //hcompute_conv4_stencil_3->compute_unit_needs_index_variable("conv4_s1_r_27_y_2");
  //hcompute_conv4_stencil_3->compute_unit_needs_index_variable("conv4_up_s0_y_4");

////consuming conv4.stencil

////store is: conv4_up.stencil(conv4_up_s0_x_4, conv4_up_s0_y_4, conv4_up_s0__0) = ((((max(((conv4.stencil(((conv4_up_s0_x_4 % 2)*2), 1, 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))) + 0.000010f))), 0.000000f) + (max(((conv4.stencil(1, 1, 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)) + 0.000010f))), 0.000000f)*3.000000f))*3.000000f) + (max(((conv4.stencil(((conv4_up_s0_x_4 % 2)*2), ((conv4_up_s0_y_4 % 2)*2), 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + ((conv4_up_s0_x_4 % 2)*2))) + 0.000010f))), 0.000000f) + (max(((conv4.stencil(1, ((conv4_up_s0_y_4 % 2)*2), 0) - conv_mu_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)))/sqrt_f32((conv_sigma_9_im_global_wrapper_global_wrapper.stencil(((conv4_up_s0_x_4/2) + 1)) + 0.000010f))), 0.000000f)*3.000000f)))*0.062500f)
  //auto hcompute_conv4_up_stencil = conv4_up_s0_x_4->add_op("op_hcompute_conv4_up_stencil");
  //hcompute_conv4_up_stencil->add_function("hcompute_conv4_up_stencil");
  //hcompute_conv4_up_stencil->add_load("conv4_stencil", "0", "1", "((conv4_up_s0_x_4 % 2)*2)");
  //hcompute_conv4_up_stencil->add_load("conv4_stencil", "0", "1", "1");
  //hcompute_conv4_up_stencil->add_load("conv4_stencil", "0", "((conv4_up_s0_y_4 % 2)*2)", "((conv4_up_s0_x_4 % 2)*2)");
  //hcompute_conv4_up_stencil->add_load("conv4_stencil", "0", "((conv4_up_s0_y_4 % 2)*2)", "1");
  //hcompute_conv4_up_stencil->add_load("conv_mu_9_im_global_wrapper_global_wrapper_stencil", "(floor((conv4_up_s0_x_4/2)) + ((conv4_up_s0_x_4 % 2)*2))");
  //hcompute_conv4_up_stencil->add_load("conv_mu_9_im_global_wrapper_global_wrapper_stencil", "(floor((conv4_up_s0_x_4/2)) + 1)");
  //hcompute_conv4_up_stencil->add_load("conv_sigma_9_im_global_wrapper_global_wrapper_stencil", "(floor((conv4_up_s0_x_4/2)) + ((conv4_up_s0_x_4 % 2)*2))");
  //hcompute_conv4_up_stencil->add_load("conv_sigma_9_im_global_wrapper_global_wrapper_stencil", "(floor((conv4_up_s0_x_4/2)) + 1)");
  //prg.buffer_port_widths["conv4_up_stencil"] = 32;
  //hcompute_conv4_up_stencil->add_store("conv4_up_stencil", "conv4_up_s0__0", "conv4_up_s0_y_4", "conv4_up_s0_x_4");

////consuming conv4_up.stencil
//////producing conv5_weights_im_global_wrapper_global_wrapper.stencil
  //auto conv5_weights_im_global_wrapper_global_wrapper_s0__3 = prg.add_loop("conv5_weights_im_global_wrapper_global_wrapper_s0__3", 0, 32);
  //auto conv5_weights_im_global_wrapper_global_wrapper_s0__0 = conv5_weights_im_global_wrapper_global_wrapper_s0__3->add_loop("conv5_weights_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: conv5_weights_im_global_wrapper_global_wrapper.stencil(conv5_weights_im_global_wrapper_global_wrapper_s0__0, 0, 0, conv5_weights_im_global_wrapper_global_wrapper_s0__3) = conv5_weights_im_global_wrapper.stencil(conv5_weights_im_global_wrapper_global_wrapper_s0__0, 0, 0, conv5_weights_im_global_wrapper_global_wrapper_s0__3)
  //auto hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil = conv5_weights_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil->add_load("conv5_weights_im_global_wrapper_stencil", "conv5_weights_im_global_wrapper_global_wrapper_s0__3", "0", "0", "conv5_weights_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv5_weights_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv5_weights_im_global_wrapper_global_wrapper_stencil->add_store("conv5_weights_im_global_wrapper_global_wrapper_stencil", "conv5_weights_im_global_wrapper_global_wrapper_s0__3", "0", "0", "conv5_weights_im_global_wrapper_global_wrapper_s0__0");

////consuming conv5_weights_im_global_wrapper_global_wrapper.stencil
//////producing conv_mu_10_im_global_wrapper_global_wrapper.stencil
  //auto conv_mu_10_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_mu_10_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: conv_mu_10_im_global_wrapper_global_wrapper.stencil(conv_mu_10_im_global_wrapper_global_wrapper_s0__0) = conv_mu_10_im_global_wrapper.stencil(conv_mu_10_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil = conv_mu_10_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil->add_load("conv_mu_10_im_global_wrapper_stencil", "conv_mu_10_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_mu_10_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_mu_10_im_global_wrapper_global_wrapper_stencil->add_store("conv_mu_10_im_global_wrapper_global_wrapper_stencil", "conv_mu_10_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_mu_10_im_global_wrapper_global_wrapper.stencil
//////producing conv_sigma_10_im_global_wrapper_global_wrapper.stencil
  //auto conv_sigma_10_im_global_wrapper_global_wrapper_s0__0 = prg.add_loop("conv_sigma_10_im_global_wrapper_global_wrapper_s0__0", 0, 32);

////store is: conv_sigma_10_im_global_wrapper_global_wrapper.stencil(conv_sigma_10_im_global_wrapper_global_wrapper_s0__0) = conv_sigma_10_im_global_wrapper.stencil(conv_sigma_10_im_global_wrapper_global_wrapper_s0__0)
  //auto hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil = conv_sigma_10_im_global_wrapper_global_wrapper_s0__0->add_op("op_hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil->add_function("hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil");
  //hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil->add_load("conv_sigma_10_im_global_wrapper_stencil", "conv_sigma_10_im_global_wrapper_global_wrapper_s0__0");
  //prg.buffer_port_widths["conv_sigma_10_im_global_wrapper_global_wrapper_stencil"] = 32;
  //hcompute_conv_sigma_10_im_global_wrapper_global_wrapper_stencil->add_store("conv_sigma_10_im_global_wrapper_global_wrapper_stencil", "conv_sigma_10_im_global_wrapper_global_wrapper_s0__0");

////consuming conv_sigma_10_im_global_wrapper_global_wrapper.stencil
  //auto conv5_relu_s0_c = prg.add_loop("conv5_relu_s0_c", 0, 32);
  //auto conv5_relu_s0_j_yi = conv5_relu_s0_c->add_loop("conv5_relu_s0_j_yi", 0, 720);
  //auto conv5_relu_s0_i_xi = conv5_relu_s0_j_yi->add_loop("conv5_relu_s0_i_xi", 0, 1280);
//////producing conv5.stencil

////store is: conv5.stencil(0, 0, 0) = 0.000000f
  //auto hcompute_conv5_stencil = conv5_relu_s0_i_xi->add_op("op_hcompute_conv5_stencil");
  //hcompute_conv5_stencil->add_function("hcompute_conv5_stencil");
  //prg.buffer_port_widths["conv5_stencil"] = 32;
  //hcompute_conv5_stencil->add_store("conv5_stencil", "0", "0", "0");
  //auto conv5_s1_r_28_x = conv5_relu_s0_i_xi->add_loop("conv5_s1_r_28_x", 0, 32);

////store is: conv5.stencil(0, 0, 0) = (conv5.stencil(0, 0, 0) + (conv5_weights_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c, 0, 0, conv5_s1_r_28_x)*conv4_up.stencil(conv5_s1_r_28_x, conv5_relu_s0_i_xi, conv5_relu_s0_j_yi)))
  //auto hcompute_conv5_stencil_1 = conv5_s1_r_28_x->add_op("op_hcompute_conv5_stencil_1");
  //hcompute_conv5_stencil_1->add_function("hcompute_conv5_stencil_1");
  //hcompute_conv5_stencil_1->add_load("conv4_up_stencil", "conv5_relu_s0_j_yi", "conv5_relu_s0_i_xi", "conv5_s1_r_28_x");
  //hcompute_conv5_stencil_1->add_load("conv5_stencil", "0", "0", "0");
  //hcompute_conv5_stencil_1->add_load("conv5_weights_im_global_wrapper_global_wrapper_stencil", "conv5_s1_r_28_x", "0", "0", "conv5_relu_s0_c");
  //hcompute_conv5_stencil_1->add_store("conv5_stencil", "0", "0", "0");

////consuming conv5.stencil

////store is: conv5_relu.stencil(conv5_relu_s0_c, conv5_relu_s0_i_xi, conv5_relu_s0_j_yi) = max(((conv5.stencil(0, 0, 0) - conv_mu_10_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c))/sqrt_f32((conv_sigma_10_im_global_wrapper_global_wrapper.stencil(conv5_relu_s0_c) + 0.000010f))), 0.000000f)
  //auto hcompute_conv5_relu_stencil = conv5_relu_s0_i_xi->add_op("op_hcompute_conv5_relu_stencil");
  //hcompute_conv5_relu_stencil->add_function("hcompute_conv5_relu_stencil");
  //hcompute_conv5_relu_stencil->add_load("conv5_stencil", "0", "0", "0");
  //hcompute_conv5_relu_stencil->add_load("conv_mu_10_im_global_wrapper_global_wrapper_stencil", "conv5_relu_s0_c");
  //hcompute_conv5_relu_stencil->add_load("conv_sigma_10_im_global_wrapper_global_wrapper_stencil", "conv5_relu_s0_c");
  //hcompute_conv5_relu_stencil->add_store("conv5_relu_stencil", "conv5_relu_s0_j_yi", "conv5_relu_s0_i_xi", "conv5_relu_s0_c");

  //return prg;
//}

