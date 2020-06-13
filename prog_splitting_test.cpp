#include "prog_splitting_test.h"

#include "prog.h"

#include <cassert>

prog brighten_blur() {
  prog prg;
  prg.compute_unit_file = "clockwork_standard_compute_units.h";
  prg.name = "brighten_blur";
  prg.add_input("off_chip_input");
  prg.add_output("off_chip_output");
  prg.buffer_port_widths["off_chip_input"] = 16;
  prg.buffer_port_widths["in"] = 16;
  prg.buffer_port_widths["brightened"] = 16;
  prg.buffer_port_widths["blurred"] = 16;
  prg.buffer_port_widths["off_chip_output"] = 16;

  int input_image_rows = 32;
  int input_image_cols = 32;

  auto p = prg.add_nest("po", 0, input_image_rows,
      "pi", 0, input_image_cols);
  auto write = p->add_op("load_image_from_off_chip");
  write->add_load("off_chip_input", "pi, po");
  write->add_store("in", "pi, po");

  auto br = prg.add_nest("bo", 0, input_image_rows,
      "bi", 0, input_image_cols);
  auto scale = br->add_op("brighten_image");
  scale->add_function("multiply_by_two");
  scale->add_load("in", "bi, bo");
  scale->add_store("brightened", "bi, bo");

  auto blr = prg.add_nest("y", 0 , input_image_rows - 2,
      "x", 0, input_image_cols - 2);
  auto blur = blr->add_op("blur_image");
  blur->add_function("blur_3_3");
  for (size_t wy = 0; wy < 3; wy ++) {
    for (size_t wx = 0; wx < 3; wx ++) {
      blur->add_load("brightened", "x + " + to_string(wy) + ", y + " + to_string(wx));
    }
  }
  blur->add_store("blurred", "x, y");

  auto write_out = prg.add_nest("m", 0, input_image_rows - 2,
      "n", 0, input_image_cols - 2);
  auto write_op = write_out->add_op("write_blurred_off_chip");
  write_op->add_load("blurred", "n, m");
  write_op->add_store("off_chip_output", "n, m");

  return prg;

}

void prog_splitting_tests() {
  prog prg = brighten_blur();

  generate_optimized_code(prg);
  generate_regression_testbench(prg);
  vector<string> unoptimized_res = run_regression_tb(prg);
  assert(false);
}
