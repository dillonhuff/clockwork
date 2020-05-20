source set_app.sh

cd soda_code
echo $(pwd)
../../../aws_collateral/run_soda_image.sh >& soda_image_res.txt
cd ..


cd our_code 
echo $(pwd)
../../../aws_collateral/run_our_image.sh >& our_image_res.txt
cd ..
