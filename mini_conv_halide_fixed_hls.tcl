open_project -reset mini_conv_halide_fixed_proj
set_top mini_conv_halide_fixed
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" mini_conv_halide_fixed.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
