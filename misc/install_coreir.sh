home_dir=$PWD
git clone https://github.com/rdaly525/coreir.git
cd coreir/build
cmake -DCMAKE_INSTALL_PREFIX=${home_dir} ..
make -j4
make install
cd ../../
