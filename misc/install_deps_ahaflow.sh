top_dir=$PWD

wget https://shoup.net/ntl/ntl-11.4.1.tar.gz
tar -xvzf ntl-11.4.1.tar.gz
cd ntl-11.4.1/src
./configure NTL_GMP_LIP=on PREFIX=$top_dir NATIVE=off
make
make install
cd ../../

curl -OL barvinok.gforge.inria.fr/barvinok-0.41.tar.gz
tar -xvzf barvinok-0.41.tar.gz
cd barvinok-0.41/
./configure --prefix=$top_dir --with-ntl-prefix=$top_dir
../misc/fix_barvinok_makefile.py
make
make install
cd ..

