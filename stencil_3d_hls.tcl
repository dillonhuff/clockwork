open_project -reset stencil_3d_proj
set_top stencil_3d
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" stencil_3d.cpp
add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb tb_soda_stencil_3d.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
cosim_design -rtl verilog
exit
