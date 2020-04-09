catch {::common::set_param -quiet hls.xocc.mode csynth};
# 
# Hls run script generated by the compiler
# 

set vpp_optimize_level 0
open_project jacobi2d_unrolled_1_opt
set_top jacobi2d_unrolled_1_opt
add_files "/home/centos/aws-fpga/Vitis/examples/xilinx_2019.2/jacobi2d_unrolled_1_opt/src/jacobi2d_unrolled_1_opt.cpp" -cflags " -g -D __VIVADO_SYNTH__ -I /home/centos/aws-fpga/Vitis/examples/xilinx_2019.2/jacobi2d_unrolled_1_opt/src "
open_solution solution
set_part xcvu9p-flgb2104-2-i
create_clock -period 250.000000MHz -name default
config_sdx -target xocc
config_rtl -kernel_profile
config_export -vivado_optimization_level $vpp_optimize_level
config_dataflow -strict_mode warning
config_debug -enable
set_clock_uncertainty 27.000000%
config_rtl -enable_maxiConservative=1
config_interface -m_axi_addr64
config_compile -skip_transform
config_export -format ip_catalog -ipname jacobi2d_unrolled_1_opt
csynth_design
close_project
puts "HLS completed successfully"
exit
