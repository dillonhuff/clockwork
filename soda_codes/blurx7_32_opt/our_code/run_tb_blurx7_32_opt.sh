g++ -std=c++0x regression_tb_blurx7_32_opt.cpp blurx7_32_opt.cpp -I ../../.. -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'testbench compilation failed'; exit 1; }
./a.out
