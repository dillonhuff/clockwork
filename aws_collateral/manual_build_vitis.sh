#~/soda-compiler/src/sodac ${app}.soda --xocl-kernel ${app}_kernel.cpp --xocl-platform "$VITIS_DIR/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1"

platform=/home/centos/aws-fpga/Vitis/aws_platform/xilinx_aws-vu9p-f1_shell-v04261818_201920_1/xilinx_aws-vu9p-f1_shell-v04261818_201920_1.xpfm

#v++ -t hw --platform ${platform} --save-temps --report_level 2 --report_dir ./bxy_ur_1_opt.rpt --log_dir ./bxy_ur_opt.log -g --temp_dir ./_x.hw.xilinx_aws-vu9p-f1_shell-v04261818_201920_1 -c -k ${app}_kernel -o'bxy_ur_1_opt_kernel.xo' 'bxy_ur_1_opt_kernel.cpp'

v++ -t hw --platform ${platform} --save-temps --report_level 2 --report_dir ./bxy_ur_1_opt_pnr.rpt --log_dir ./bxy_ur_opt_pnr.log -g --temp_dir ./bxy_ur_1_opt_pnr -k ${app}_kernel -o'bxy_ur_1_opt_kernel.xclbin' -l 'bxy_ur_1_opt_kernel.xo'



