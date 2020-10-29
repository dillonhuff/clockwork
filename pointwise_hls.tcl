open_project -reset pointwise_proj
set_top pointwise
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" pointwise.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
