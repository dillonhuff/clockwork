app=$1
g++ -std=c++11 tb_soda_$app.cpp $app.cpp soda_$app.cpp -I../../ -I /cad/xilinx/vivado/2018.2/Vivado/2018.2/include/ || { echo 'compilation failed' ; exit 1; }
valgrind ./a.out
