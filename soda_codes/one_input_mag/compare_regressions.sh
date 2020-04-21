app_name=one_input_mag
cd soda_code
./run_tb.sh || { echo 'soda compilation failed'; exit 1; }
cd ..
cd our_code
./run_tb_${app_name}_opt.sh || { echo 'our compilation failed'; exit 1; }
cd ..
cd ../../
./run_aligner.sh ./soda_codes/${app_name}/our_code/regression_result_${app_name}_opt.txt ./soda_codes/${app_name}/soda_code/soda_${app_name}_regression_result.csv
