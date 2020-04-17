cd soda_code
./run_tb.sh
cd ..

cd our_code
./run_tb.sh
cd ..

cd ../../
./run_aligner.sh ./soda_codes/sobel_unrolled_1/our_code/regression_result_sobel_unrolled_1_opt.txt ./soda_codes/sobel_unrolled_1/soda_code/soda_sobel_regression_result.csv
