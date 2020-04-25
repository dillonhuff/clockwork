#../../common/gen_app.sh
g++ -std=c++0x tb_soda_${app}.cpp ${app}_kernel.cpp -I ../../../ -I ${XILINX_VIVADO}/include || { echo 'compilation failed'; exit 1; }
./a.out
