set KernelName [lindex $argv 2]

set Device "xc7k160tfbg484-2"
set ClockPeriod 5.0

open_project -reset soda_${KernelName}_proj
set_top ${KernelName}_kernel 
add_files -cflags "-std=c++11" soda_${KernelName}.cpp

open_solution -reset "solution1"
set_part $Device
list_core
create_clock -period $ClockPeriod
csynth_design
export_design -rtl verilog

exit
