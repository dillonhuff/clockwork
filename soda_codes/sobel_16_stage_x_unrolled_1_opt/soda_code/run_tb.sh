../../common/gen_app.sh
g++ -std=c++0x tb_soda_${app}.cpp ${app}_kernel.cpp -I ../../../ -I /cad/xilinx/vivado/2017.2/Vivado_HLS/2017.2/include/ || { echo 'compilation failed'; exit 1; }
./a.out
