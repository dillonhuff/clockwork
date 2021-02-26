open_project -reset local_laplacian_filters_proj
set_top local_laplacian_filters
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" local_laplacian_filters.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
