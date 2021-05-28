open_project -reset float_cpy_resource_s_proj
set_top float_cpy_resource_s
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" float_cpy_resource_s.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
