open_project -reset pointwise_proj
set_top pointwise
add_files -cflags "-std=c++11 -D__VIVADO_SYNTH__" pointwise.cpp
# add_files -cflags "-std=c++11 -D__VIVADO_SYNTH__" -tb tb_pointwise.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
# cosim_design -rtl verilog
exit
