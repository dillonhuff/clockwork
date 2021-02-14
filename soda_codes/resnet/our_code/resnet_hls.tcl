open_project -reset resnet_proj
set_top resnet
add_files -cflags "-I ../../../ -std=c++11 -D__VIVADO_SYNTH__" resnet.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
