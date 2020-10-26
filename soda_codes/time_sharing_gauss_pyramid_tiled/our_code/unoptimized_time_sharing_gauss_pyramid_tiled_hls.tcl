open_project -reset unoptimized_time_sharing_gauss_pyramid_tiled_proj
set_top unoptimized_time_sharing_gauss_pyramid_tiled
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_time_sharing_gauss_pyramid_tiled.cpp
open_solution -reset "solution1"
set_part {xc7k160tfbg484-2}
list_core
create_clock -period 5
csynth_design
exit
