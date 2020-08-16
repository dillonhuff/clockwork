/*
 * An application for applying a Gaussian blur.
 * It uses a 3x3 stencil with constant weights.
 */

#include "Halide.h"

namespace {

using namespace Halide;

// Size of blur for gradients.
const int blockSize = 3;
int imgSize = 2048 / 2 - 1;

class GaussianBlur : public Halide::Generator<GaussianBlur> {
public:
    Input<Buffer<uint8_t>>  input{"input", 3};
    Output<Buffer<uint8_t>> output{"output", 3};

    void generate() {
        /* THE ALGORITHM */

        Var x("x"), y("y"), c("c");
        Var xo("xo"), yo("yo"), xi("xi"), yi("yi");

        Func hw_input, input_copy;
        input_copy(x, y, c) = cast<uint16_t>(input(x, y, c));
        hw_input(x, y, c) = input_copy(x, y, c);

        Func pooled;
        pooled(x, y, c) =
          max(max(hw_input(2*x, 2*y, c), hw_input(2*x + 1, 2*y, c)),
              max(hw_input(2*x + 1, 2*y, c), hw_input(2*x + 1, 2*y + 1, c)));

        Func hw_output;
        hw_output(x, y, c) = cast<uint8_t>( pooled(x, y, c) );
        output(x, y, c) = hw_output(x, y, c);

        /* THE SCHEDULE */
        if (get_target().has_feature(Target::CoreIR)) {

          //hw_output.bound(x, 0, imgSize);
          //hw_output.bound(y, 0, imgSize);
          //output.bound(x, 0, imgSize);
          //output.bound(y, 0, imgSize);
          ////blur_unnormalized.bound(x, 0, imgSize);
          ////blur_unnormalized.bound(y, 0, imgSize);

          ////hw_input.compute_root();
          ////kernel.compute_root();
          //hw_output.compute_root();

          //hw_output
            ////            .compute_at(output, xo)
            //.tile(x, y, xo, yo, xi, yi, imgSize, imgSize)
            //.hw_accelerate(xi, xo);

          ////blur_unnormalized.update()
            ////.unroll(win.x, blockSize)
            ////.unroll(win.y, blockSize);

          ////blur_unnormalized.linebuffer();

          ////hw_output.accelerate({hw_input}, xi, xo);
          //hw_input.compute_at(hw_output, xi).store_at(hw_output, xo);
          //hw_input.stream_to_accelerator();

        } else if (get_target().has_feature(Target::Clockwork)) {
          output.bound(x, 0, imgSize);
          output.bound(y, 0, imgSize);
          output.bound(c, 0, 3);

          //hw_input.compute_root();
          //kernel.compute_root();
          hw_output.compute_root();

          hw_output
            .tile(x, y, xo, yo, xi, yi, imgSize, imgSize)
            .hw_accelerate(xi, xo);

          pooled.compute_at(hw_output, xo);

          //blur_unnormalized.update()
            //.unroll(win.x, blockSize)
            //.unroll(win.y, blockSize);

          //blur_unnormalized.compute_at(hw_output, xo);
          //blur.compute_at(hw_output, xo);

          hw_input.compute_at(hw_output, xo);
          hw_input.stream_to_accelerator();
          input_copy.compute_root();
          
        } else {    // schedule to CPU

          /*output.tile(x, y, xo, yo, xi, yi, imgSize, imgSize)
            .vectorize(xi, 8)
            .fuse(xo, yo, xo)
            .parallel(xo);*/

        }
    }
};

}  // namespace

HALIDE_REGISTER_GENERATOR(GaussianBlur, maxpool)

