verilator -Wall --cc hcompute_lgxx_stencil_1.v --exe --build hcompute_lgxx_stencil_1_compute_tb.cpp --top-module hcompute_lgxx_stencil_1 -Wno-UNUSED -Wno-WIDTH -Wno-PINMISSING -Wno-DECLFILENAME
./obj_dir/Vhcompute_lgxx_stencil_1
