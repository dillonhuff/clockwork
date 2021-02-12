open_project -reset resnet88_proj
set_top resnet88
add_files -cflags "-I ../../../ -std=c++11 -D__VIVADO_SYNTH__" resnet88.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
