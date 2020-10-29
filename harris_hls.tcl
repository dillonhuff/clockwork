open_project -reset unoptimized_harris_proj
set_top unoptimized_harris
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_harris.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
