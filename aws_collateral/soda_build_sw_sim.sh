platform=/home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_2/xilinx_aws-vu9p-f1_shell-v04261818_201920_2.xpfm

v++ -t sw_emu --platform ${platform} --save-temps --report_level 2 --report_dir ./${app}.report --log_dir ./${app}.log -g --temp_dir ./_x.sw_emu${app} -c -k ${app}_kernel -o ${app}_kernel.xo ${app}_kernel.cpp || { echo 'xo compilation failed'; exit 1; }

v++ -t sw_emu --platform ${platform} --save-temps --report_level 2 --report_dir ./${app}_pnr.report --log_dir ./${app}_pnr.log -g --temp_dir ./${app}_pnr.tmp -k ${app}_kernel -o ${app}_kernel.xclbin -l ${app}_kernel.xo 



