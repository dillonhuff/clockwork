platform=/home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1/xilinx_aws-vu9p-f1_shell-v04261818_201920_1.xpfm

v++ -t hw --platform ${platform} --save-temps --report_level 2 --report_dir ./${app}.rpt --log_dir ./${app}.log -g --temp_dir ./_x.hw.${app} -c -k ${app}_kernel -o ${app}_kernel.xo ${app}_kernel.cpp || { echo 'xo compilation failed'; exit 1; }

v++ -t hw --platform ${platform} --save-temps --report_level 2 --report_dir ./${app}_pnr.rpt --log_dir ./${app}_pnr.log -g --temp_dir ./${app}_pnr.tmp -k ${app}_kernel -o ${app}_kernel.xclbin -l ${app}_kernel.xo 



