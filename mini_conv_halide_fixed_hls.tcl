open_project -reset unoptimized_mini_conv_halide_fixed_proj
set_top unoptimized_mini_conv_halide_fixed
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_mini_conv_halide_fixed.cpp
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_mini_conv_halide_fixed.cpp
add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb tb_soda_unoptimized_mini_conv_halide_fixed.cpp

open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
