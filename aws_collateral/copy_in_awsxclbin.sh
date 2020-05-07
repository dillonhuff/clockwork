target=$1
aws s3 cp s3://iccad-2020-bucket/misc/${target}.xclbin .
aws s3 cp s3://iccad-2020-bucket/misc/${target}.awsxclbin .
