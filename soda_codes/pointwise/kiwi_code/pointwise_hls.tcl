set libdir [lindex $argv 2]
open_project -reset pointwise_proj
set_top pointwise_accel
add_files -cflags "-I $libdir -std=c++11 -D__VIVADO_SYNTH__" pointwise.cpp
open_solution -reset "solution1"
#set_part {xc7k160tfbg484-2}
set_part {xc7z020clg484-1}
list_core
create_clock -period 5
csynth_design
export_design -rtl verilog -format ip_catalog
exit
