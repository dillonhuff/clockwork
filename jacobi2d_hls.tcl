open_project -reset jacobi2d_proj
set_top jacobi2d
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" jacobi2d.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
