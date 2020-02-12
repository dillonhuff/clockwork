open_project -reset blur_x_proj
set_top blur_x
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" blur_x.cpp
# add_files -cflags "-std=c++11 -D__VIVADO_SYNTH__" -tb tb_blur_x.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
# cosim_design -rtl verilog
exit
