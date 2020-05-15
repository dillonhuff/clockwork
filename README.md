# Clockwork: Polyhedral Analysis for Hardware Accelerators

Clockwork is a tool for compiling naive descriptions of hardware accelerates written as loop nests into high performance, staticall scheduled hardware.

![](./pictures/polyhedral_scheduling_figure_2.jpg)

## Important Files
* `build_set_test.cpp` - The main driver program
* `ubuffer.h` - The header file which stores the `UBuffer` class, which represents re-use buffers that store data between compute operations.
* `prog.h` - The header file which stores the `prog` class, which is the clockwork input representation.

## Dependencies

Please install the specific versions of the listed dependencies. Do
not just take the latest release on NTL or barvinok.

* ntl-11.4.1 - [download here](https://shoup.net/ntl/download.html) 
    * https://www.shoup.net/ntl/doc/tour-unix.html (needs GMP to be installed already)
* barvinok-0.41 - [download here](http://barvinok.gforge.inria.fr/)

## Build instructions

    ./rebuild_and_run.sh

The file `build_set_test.cpp` is the main driver for all tests.
Most files in this repository are automatically generated collateral
that can be ignored.

