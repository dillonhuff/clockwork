# Clockwork: Polyhedral Analysis for Hardware Accelerators

Clockwork is a tool for compiling naive descriptions of hardware accelerators written as loop nests into high performance, staticall scheduled hardware.

![](./pictures/polyhedral_scheduling_figure_2.jpg)

## Important Files
* `build_set_test.cpp` - The main driver program
* `ubuffer.h` - The header file which stores the `UBuffer` class, which represents re-use buffers that store data between compute operations.
* `prog.h` - The header file which stores the `prog` class, which is the clockwork input representation.

## Dependencies

Examples of how to install the dependencies can be found in [./misc/install\_deps\_mac.sh](./misc/install_deps_mac.sh) and [./misc/install\_deps\_linux.sh](./misc/install\_deps\_linux.sh).

Please install the specific versions of the listed dependencies. Do
not just take the latest release on NTL or barvinok. For an example of how to download and build dependencies see [install\_deps\_rice.sh](./install_deps_rice.sh).

* ntl-11.4.1 - [download here](https://shoup.net/ntl/download.html) 
    * https://www.shoup.net/ntl/doc/tour-unix.html (needs GMP to be installed already)
* barvinok-0.41 - [download here](http://barvinok.gforge.inria.fr/)
   * https://repo.or.cz/w/barvinok.git/blob/HEAD:/README - instructions for installing barvinok with ntl and GMP
   * note that linux users may need to manually add -lpthread to the LIBS field (change "LIBS = -lntl -lgmp", to "LIBS = -lpthread -lntl -lgmp")
* *optional codegen backend* **CoreIR** - [github link](https://github.com/rdaly525/coreir.git)

## Build instructions

* Default rebuild and execute script

    `./rebuild_and_run.sh`

* Optional build with CoreIR backend

    `export COREIR_PATH=/path/to/coreir`
    
    `make -j COREIR`

The file `build_set_test.cpp` is the main driver for all tests.
Most files in this repository are automatically generated collateral
that can be ignored.

