BARVINOK_PATH=/Users/dillon/Downloads/barvinok-0.41/isl/
ISL_PATH=/Users/dillon/Downloads/barvinok-0.41/isl/
OPT_PATH=/opt/include
OPT_LIB_PATH=/opt/lib

CXX=clang++

$CXX -std=c++11 build_set_test.cpp -I $BARVINOK_PATH -L $ISL_PATH -lbarvinok -lisl -I $OPT_PATH -L -lbarvinok -lgmp -L $OPT_LIB_PATH -lntl -lpolylibgmp


