open_project -reset soda_blur_proj
set_top soda_blur
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" soda_blur.cpp
add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb tb_soda_soda_blur.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog
cosim_design -rtl verilog
exit
