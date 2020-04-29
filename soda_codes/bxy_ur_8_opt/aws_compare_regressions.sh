source set_app.sh
cd soda_code
./run_tb.sh || { echo 'soda compilation failed'; exit 1; }
cd ..
cd our_code
./aws_run_tb_${app}.sh || { echo 'our compilation failed'; exit 1; }
cd ..
cd ../../
../../../aligner ./soda_codes/${app}/our_code/regression_result_${app}.txt ./soda_codes/${app}/soda_code/soda_${app}_regression_result.csv
