open_project -reset linebuffer_3x3_proj
set_top linebuffer_3x3
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" linebuffer_3x3.cpp
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" linebuffer_3x3.cpp
add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb tb_soda_linebuffer_3x3.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
cosim_design -rtl verilog
exit
