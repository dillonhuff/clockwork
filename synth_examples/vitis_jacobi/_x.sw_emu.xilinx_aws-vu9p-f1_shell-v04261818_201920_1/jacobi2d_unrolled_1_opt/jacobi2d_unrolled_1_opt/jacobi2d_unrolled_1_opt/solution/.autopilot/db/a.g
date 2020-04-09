#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/centos/aws-fpga/Vitis/examples/xilinx_2019.2/jacobi2d_unrolled_1_opt/_x.sw_emu.xilinx_aws-vu9p-f1_shell-v04261818_201920_1/jacobi2d_unrolled_1_opt/jacobi2d_unrolled_1_opt/jacobi2d_unrolled_1_opt/solution/.autopilot/db/a.g.bc ${1+"$@"}
