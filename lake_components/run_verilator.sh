verilator -Wall --cc affine_controller.sv addr_gen.sv --exe --build affine_controller_tb.cpp --top-module affine_controller -Wno-lint -Wno-unoptflat
./obj_dir/Vaffine_controller
