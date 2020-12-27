APP=$1
cd ./soda_codes/${APP}/
source ./set_app.sh
cd ../../

cd ./soda_codes/${APP}/soda_code/
../../../aws_collateral/run_soda_sw_image.sh

cd ../
cd our_code

g++ regression_tb_${APP}.cpp -I ../../../ -std=c++11 ${APP}.cpp -D__INT_OUTPUT__
./a.out || { echo 'Error: No SW testbench executable for our implementation'; exit 1; }

cd ../../../

./run_aligner.sh ./soda_codes/${APP}/our_code/regression_result_${APP}.txt ./soda_codes/${APP}/soda_code/${APP}_update_0_write_accel_result.csv
