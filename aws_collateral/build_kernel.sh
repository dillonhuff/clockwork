~/soda-compiler/src/sodac bxy_ur_1_opt.soda --xocl-kernel bxy_ur_1_opt_kernel.cpp --xocl-platform /home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1

v++ -D__VIVADO_SYNTH__ -I ../../../ -t sw_emu --platform /home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1/xilinx_aws-vu9p-f1_shell-v04261818_201920_1.xpfm --save-temps  -g --temp_dir ./_x.sw_emu.xilinx_aws-vu9p-f1_shell-v04261818_201920_1 -c -k bxy_ur_1_opt_kernel -I'.' -o'_x.sw_emu.xilinx_aws-vu9p-f1_shell-v04261818_201920_1/bxy_ur_1_opt_kernel.xo' 'bxy_ur_1_opt_kernel.cpp'
~/soda-compiler/src/sodac bxy_ur_1_opt.soda --xocl-hw-xo bxy_ur_1_opt.hw.xo --xocl-platform /home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1
