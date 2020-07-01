open_project -reset conv_3_3_halide_proj
set_top conv_3_3_halide
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" conv_3_3_halide.cpp
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" conv_3_3_halide.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
