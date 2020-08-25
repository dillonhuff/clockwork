#include "simple_example_progs.h"

#include "utils.h"

void upsample_2d() {
  prog prg("upsample_2d");
  prg.compute_unit_file = "simple_upsample_example_compute.h";
  prg.add_input("in");
  prg.add_output("out");

  // Load all data in from off the chip
  auto load_loop = prg.add_nest("ly", 0, 1, "lx", 0, 1);
  // load_op: A[lx, ly] = in[lx, ly]
  auto load_op = load_loop->add_op(prg.un("ld"));
  load_op->add_load("in", "lx, ly"); // in[lx, ly]
  load_op->add_store("A", "lx, ly");

  // Do the upsample, incrementing each upsampled pixel
  auto upsample_loop = prg.add_nest("uy", 0, 1, "ux", 0, 1);
  auto upsample_op = upsample_loop->add_op(prg.un("us"));
  // Use floor(ux / 2), floor(uy / 2) not just "ux / 2" and "uy / 2"
  // because division is not a total function over integers
  upsample_op->add_load("A", "floor(ux / 2), floor(uy / 2)");
  upsample_op->add_store("out", "ux, uy");
  // Call the C++ function "simple_upsample_plus_one" on "A[floor(ux / 2), floor(uy / 2)]
  upsample_op->add_function("simple_upsample_plus_one");

  cout << "Before bounds inference..." << endl;
  prg.pretty_print();

  cout << endl << endl;

  // Set output image to be 20 by 20
  infer_bounds("out", {20, 20}, prg);

  cout << "After bounds inference..." << endl;
  prg.pretty_print();
  prg.sanity_check();

  generate_optimized_code(prg);
  compile_compute(prg.name + ".cpp");

  // Moves this code and collateral to the
  // benchmarks directory, which is called "soda_codes"
  move_to_benchmarks_folder(prg.name);
  // To run on aws:
  // cd ./soda_codes/upsample_2d/
  // source set_app.sh
  // cd our_code
  // make check TARGET=sw_emu DEVICE=$AWS_PLATFORM all
}

void generate_simple_example_progs() {
  upsample_2d();
}
