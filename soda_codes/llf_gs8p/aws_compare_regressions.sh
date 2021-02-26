source set_app.sh
cd soda_code
./run_tb.sh || { echo 'soda compilation failed'; exit 1; }
cd ..
cd our_code
./aws_run_tb_${app}.sh || { echo 'our compilation failed'; exit 1; }
cd ..
../../aligner ./our_code/pw_math_gray_out_float506508_merged6670_write_accel_result.csv ./soda_code/soda_${app}_regression_result.csv
