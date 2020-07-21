export BUILD_DIR=`pwd`

git clone https://github.com/StanfordAHA/Halide-to-Hardware -b clockwork


export TRAVIS_BUILD_DIR=$BUILD_DIR/Halide-to-Hardware
cd $TRAVIS_BUILD_DIR

export LLVM_VERSION=6.0.0
export BUILD_SYSTEM=MAKE
export CXX_=g++-7
export CC_=gcc-7
export CXX=g++-7
export CC=gcc-7

source ./test/scripts/before_install_travis.sh

export LLVM_CONFIG="/usr/bin/llvm-config-6.0"
export LLVM_DIR="/usr/lib/llvm-6.0/cmake"
export CLANG="/usr/bin/clang-6.0"
alias clang='clang-6.0'
alias clang++='clang++-6.0'
alias llvm-config='llvm-config-6.0'

git clone -b master https://github.com/rdaly525/coreir.git
cd coreir/build && cmake .. && make -j2 && cd ../..

git clone -b new_config https://github.com/joyliu37/BufferMapping
cd BufferMapping/cfunc && make lib -j2 && cd ../../..

git clone https://github.com/dillonhuff/clockwork.git
cd clockwork/
source ./misc/kiwi_setup.sh
./rebuild_and_run.sh

export BARVINOK_PATH=$TRAVIS_BUILD_DIR/clockwork/barvinok-0.41/isl
export ISL_PATH=$TRAVIS_BUILD_DIR/clockwork/barvinok-0.41/isl
export OPT_PATH=$TRAVIS_BUILD_DIR/clockwork/include
export OPT_LIB_PATH=$TRAVIS_BUILD_DIR/clockwork/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$TRAVIS_BUILD_DIR/clockwork/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$TRAVIS_BUILD_DIR/Halide-to-Hardware/coreir/lib

cd ../Halide-to-Hardware

sed -i 's/ExtractHWAccelerator.h/ExtractHWAccelerators.h/g' src/ExtractHWAccelerators.cpp

make -j2 distrib
