target=$1

cd ./soda_codes/${target}/
source set_app.sh

cd our_code
../../../aws_collateral/run_our_image.sh
# return to app top-level
cd ..

cd soda_code 
../../../aws_collateral/run_soda_image.sh
# return to app top-level
cd ..

# return to original directory
cd ../..

cd ./soda_codes/${target}_d32/
source set_app.sh

cd our_code
../../../aws_collateral/run_our_image.sh
# return to app top-level
cd ..

# return to original directory
cd ../..


cd ./soda_codes/${target}_dis/
source set_app.sh

cd our_code
../../../aws_collateral/run_our_image.sh
# return to app top-level
cd ..

# return to original directory
cd ../..
