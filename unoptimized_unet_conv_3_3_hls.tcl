open_project -reset unoptimized_unet_conv_3_3_proj
set_top unoptimized_unet_conv_3_3
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" unoptimized_unet_conv_3_3.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
