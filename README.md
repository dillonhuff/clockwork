# Clockwork: Polyhedral Analysis for Hardware Accelerators

Clockwork is a tool for compiling naive descriptions of hardware accelerators written as loop nests into high performance, staticall scheduled hardware.

![](./pictures/polyhedral_scheduling_figure_2.jpg)

## Important Files
* `build_set_test.cpp` - The main driver program
* `ubuffer.h` - The header file which stores the `UBuffer` class, which represents re-use buffers that store data between compute operations.
* `prog.h` - The header file which stores the `prog` class, which is the clockwork input representation.

## Dependencies

Please install the specific versions of the listed dependencies. Do
not just take the latest release on NTL or barvinok. For an example of how to download and build dependencies see [install\_deps\_rice.sh](./install_deps_rice.sh).

* ntl-11.4.1 - [download here](https://shoup.net/ntl/download.html) 
    * https://www.shoup.net/ntl/doc/tour-unix.html (needs GMP to be installed already)
* barvinok-0.41 - [download here](http://barvinok.gforge.inria.fr/)
   * https://repo.or.cz/w/barvinok.git/blob/HEAD:/README - instructions for installing barvinok with ntl and GMP
   * note that linux users may need to manually add -lpthread to the LIBS field (change "LIBS = -lntl -lgmp", to "LIBS = -lpthread -lntl -lgmp")
* *optional codegen backend* **CoreIR** - [github link](https://github.com/rdaly525/coreir.git)

Alternatively, you can follow these steps:
1. Download ntl-11.4.1 from the link above.
2. cd ntl-11.4.1/src
3. ./configure NTL_GMP_LIP=on PREFIX=/opt GMP_PREFIX=/path/to/gmp
   * if you have sudo access, you do not need PREFIX and ntl will be installed in /usr/local
   * if you do not have sudo access or would like to specify where ntl is installed, replace /opt above with a directory path for PREFIX
4. make
5. (optionally) make check
6. make install
7. Download barvniok-0.41 from the link above.
8. cd barvinok-0.41
9. ./configure --prefix=/opt_b --with-gmp-prefix=/path/to/gmp --with-ntl-prefix=/path/to/ntl
   * if you have sudo access, you do not need PREFIX and barvinok will be installed in /usr/local
   * if you do not have sudo access or would like to specify where barvinok is installed, replace /opt_b above with a directory path for PREFIX
10. make
      * you may need to add -lpthread to LIBS in the generated Makefile
11. (optionally) make check
12. make install
13. if Linux: export LD_LIBRARY_PATH=/path/to/these/installations 

## Build instructions

* Default rebuild and execute script

    `./rebuild_and_run.sh`

* Optional build with CoreIR backend

    `export COREIR_PATH=/path/to/coreir`
    
    `make -j COREIR`

The file `build_set_test.cpp` is the main driver for all tests.
Most files in this repository are automatically generated collateral
that can be ignored.

