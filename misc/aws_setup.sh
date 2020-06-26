# Tested on AWS F1 with AWS FPGA Developer AMI 1.8.1
sudo yum -y install vim
sudo yum -y install gmp-devel
sudo yum -y install python3

git clone https://github.com/dillonhuff/VimSetup.git
cp ./VimSetup/.vimrc ~/.vimrc

git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
vim +PluginInstall +qall

git clone https://github.com/aws/aws-fpga.git
cd aws-fpga/
source vitis_setup.sh
cd ..

cp ./user_settings/aws_settings.sh ./user_settings/private_settings.sh
source ./user_settings/private_settings.sh

source ./misc/install_deps_linux.sh

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${PWD}/lib
