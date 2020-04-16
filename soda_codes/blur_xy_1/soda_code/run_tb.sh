./gen_app.sh
g++ -std=c++0x tb_blur.cpp blur_kernel.cpp -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'compilation failed'; exit 1; }
./a.out
