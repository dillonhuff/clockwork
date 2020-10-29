#!/bin/bash -x

export BUILD_DIR=`pwd`
export TRAVIS_BUILD_DIR=$BUILD_DIR/Halide-to-Hardware
export LLVM_VERSION=6.0.0
export BUILD_SYSTEM=MAKE
export CXX_=g++-7
export CC_=gcc-7
export CXX=g++-7
export CC=gcc-7

./Halide-to-Hardware/test/scripts/before_install_travis.sh

export LLVM_CONFIG="/usr/bin/llvm-config-6.0"
export LLVM_DIR="/usr/lib/llvm-6.0/cmake"
export CLANG="/usr/bin/clang-6.0"
alias clang='clang-6.0'
alias clang++='clang++-6.0'
alias llvm-config='llvm-config-6.0'

export BARVINOK_PATH=$TRAVIS_BUILD_DIR/clockwork/barvinok-0.41/isl
export ISL_PATH=$TRAVIS_BUILD_DIR/clockwork/barvinok-0.41/isl
export OPT_PATH=$TRAVIS_BUILD_DIR/clockwork/include
export OPT_LIB_PATH=$TRAVIS_BUILD_DIR/clockwork/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$BUILD_DIR/clockwork/lib