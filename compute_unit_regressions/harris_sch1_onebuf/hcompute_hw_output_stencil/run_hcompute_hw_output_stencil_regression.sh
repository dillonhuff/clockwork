verilator -Wall --cc hcompute_hw_output_stencil.v --exe --build hcompute_hw_output_stencil_compute_tb.cpp --top-module hcompute_hw_output_stencil -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME
./obj_dir/Vhcompute_hw_output_stencil
