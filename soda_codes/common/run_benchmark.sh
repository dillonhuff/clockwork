cd soda_code
../../common/build_soda.sh $1
cd ..

cd our_code
vivado_hls -f ../../common/our_hls.tcl -tclargs $2

cd ..
echo "Checking regression results..."
diff soda_code/regression_result.txt our_code/regression_result.txt


