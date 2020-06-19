home_dir=$PWD
cd coreir/build
cmake -DCMAKE_INSTALL_PREFIX=${home_dir} ..
make -j
make install
cd ../../
