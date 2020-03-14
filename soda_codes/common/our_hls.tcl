set KernelName [lindex $argv 2]

set Device "xc7k160tfbg484-2"
set ClockPeriod 5.0

open_project -reset ${KernelName}_proj
set_top ${KernelName}
add_files -cflags "-std=c++11" ${KernelName}.cpp
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" ${KernelName}.cpp

add_files -cflags "-I ../.. -std=c++11 -D__VIVADO_SYNTH__" -tb regression_tb_${KernelName}.cpp

open_solution -reset "solution1"
set_part $Device
list_core
create_clock -period $ClockPeriod
csynth_design
export_design -rtl verilog

cosim_design -rtl verilog

exit



