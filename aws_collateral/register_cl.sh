aws ec2 create-fpga-image  --region us-east-1 --name dhuffclhello --description "Dillon Huff hello world" --input-storage-location Bucket=cl-hello-world,Key=tars/20_07_05-170828.Developer_CL.tar --logs-storage-location Bucket=cl-hello-world,logs
aws ec2 create-fpga-image  --region us-east-1 --name dhuffclhello --description Dillon Huff hello world --input-storage-location Bucket=cl-hello-world,Key=tars/20_07_05-170828.Developer_CL.tar --logs-storage-location Bucket=cl-hello-world,Key=logs
