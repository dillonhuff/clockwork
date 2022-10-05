apt update
apt install -y autoconf
apt install -y flex
apt install -y bison
git clone https://github.com/verilator/verilator
cd verilator/
unset VERILATOR_ROOT
git pull
git tag
git checkout stable
autoconf
./configure
make -j 4
make install
