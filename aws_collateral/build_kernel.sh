~/soda-compiler/src/sodac ${app}.soda --xocl-kernel ${app}_kernel.cpp --xocl-platform /home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1

v++ -D__VIVADO_SYNTH__ -I ../../../ -t sw_emu --platform /home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1/xilinx_aws-vu9p-f1_shell-v04261818_201920_1.xpfm --save-temps  -g --temp_dir ./_x.sw_emu.xilinx_aws-vu9p-f1_shell-v04261818_201920_1 -c -k ${app}_kernel -I'.' -o'_x.sw_emu.xilinx_aws-vu9p-f1_shell-v04261818_201920_1/${app}_kernel.xo' '${app}_kernel.cpp'
