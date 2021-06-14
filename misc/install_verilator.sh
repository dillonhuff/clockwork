apt update
apt install autoconf
apt install flex
apt install bison
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
