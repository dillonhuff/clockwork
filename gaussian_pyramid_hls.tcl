open_project -reset gaussian_pyramid_proj
set_top gaussian_pyramid
add_files -cflags "-D__VIVADO_SYNTH__" gaussian_pyramid.cpp
add_files -cflags "-D__VIVADO_SYNTH__" -tb tb_gaussian_pyramid.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 10
csynth_design
export_design -rtl verilog
cosim_design -rtl verilog
exit
