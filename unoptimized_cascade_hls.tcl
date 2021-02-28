open_project -reset unoptimized_cascade_proj
set_top unoptimized_cascade
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_cascade.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
