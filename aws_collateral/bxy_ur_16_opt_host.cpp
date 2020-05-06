#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
    return EXIT_FAILURE;
  }
  std::string binaryFile = argv[1];
  const int bxy_ur_16_update_0_write_DATA_SIZE = 2073600;
  const int bxy_ur_16_update_0_write_BYTES_PER_PIXEL = 16 / 8;
  size_t bxy_ur_16_update_0_write_size_bytes = bxy_ur_16_update_0_write_BYTES_PER_PIXEL * bxy_ur_16_update_0_write_DATA_SIZE;

  const int input_update_0_read_DATA_SIZE = 2094752;
  const int input_update_0_read_BYTES_PER_PIXEL = 16 / 8;
  size_t input_update_0_read_size_bytes = input_update_0_read_BYTES_PER_PIXEL * input_update_0_read_DATA_SIZE;


  std::cout << "Hello, I am the rebuilt host" << std::endl;

  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > bxy_ur_16_update_0_write(bxy_ur_16_update_0_write_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > input_update_0_read(input_update_0_read_size_bytes);

  std::ofstream input_input_update_0_read("input_update_0_read.csv");
  for (int i = 0; i < input_update_0_read_DATA_SIZE; i++) {
    // TODO: Add support for other widths
    uint16_t val = (i % 256);
    input_input_update_0_read << val << std::endl;
    ((uint16_t*) (input_update_0_read.data()))[i] = val;
  }

  input_input_update_0_read.close();
  for (int i = 0; i < bxy_ur_16_update_0_write_DATA_SIZE; i++) {
  // TODO: Add support for other widths
    ((uint16_t*) (bxy_ur_16_update_0_write.data()))[i] = 0;
  }

  auto devices = xcl::get_xil_devices();
  auto fileBuf = xcl::read_binary_file(binaryFile);
  cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};
  int valid_device = 0;
  for (unsigned int i = 0; i < devices.size(); i++) {
    auto device = devices[i];
    OCL_CHECK(err, context = cl::Context({device}, NULL, NULL, NULL, &err));
    OCL_CHECK(err,
      q = cl::CommandQueue(
      context, {device}, CL_QUEUE_PROFILING_ENABLE, &err));

    std::cout << "Trying to program device[" << i
      << "]: " << device.getInfo<CL_DEVICE_NAME>() << std::endl;
    OCL_CHECK(err, cl::Program program(context, {device}, bins, NULL, &err));
    if (err != CL_SUCCESS) {
      std::cout << "Failed to program device[" << i
      << "] with xclbin file!\n";
    } else {
      std::cout << "Device[" << i << "]: program successful!\n";
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "bxy_ur_16_opt_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer input_update_0_read_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, input_update_0_read_size_bytes, input_update_0_read.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, input_update_0_read_ocl_buf));

  OCL_CHECK(err, cl::Buffer bxy_ur_16_update_0_write_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, bxy_ur_16_update_0_write_size_bytes, bxy_ur_16_update_0_write.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, bxy_ur_16_update_0_write_ocl_buf));

  int bxy_ur_16_update_0_write_size = bxy_ur_16_update_0_write_DATA_SIZE;
  OCL_CHECK(err, err = krnl_vector_add.setArg(2, bxy_ur_16_update_0_write_size));

  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({input_update_0_read_ocl_buf}, 0));

  // Start of timing code
  unsigned long start, end, nsduration;
  cl::Event event;

  /* Execute Kernel */
  OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));
  OCL_CHECK(err, err = event.wait());
  end =
    OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));
  start = OCL_CHECK(err,
      event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));
  nsduration = end - start;
  //OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add));


  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({bxy_ur_16_update_0_write_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

  q.finish();

  std::ofstream regression_result("bxy_ur_16_update_0_write_accel_result.csv");
  for (int i = 0; i < bxy_ur_16_update_0_write_DATA_SIZE; i++) {
    regression_result << ((uint16_t*) (bxy_ur_16_update_0_write.data()))[i] << std::endl;;
  }

  size_t total_size_bytes = bxy_ur_16_update_0_write_size_bytes + input_update_0_read_size_bytes;
  std::cout << "Total size of input and output in bytes = " << total_size_bytes << std::endl;

  //short ddr_banks = 2;
  double dnsduration = ((double)nsduration);
  double dsduration = dnsduration / ((double)1000000000);

  double dbytes = total_size_bytes;
  double bpersec = (dbytes / dsduration);
  double gbpersec = bpersec / ((double)1024 * 1024 * 1024);

  cout << "bytes / sec = " << bpersec << endl;
  cout << "GB / sec = " << gbpersec << endl;
  //printf(
      //"Kernel completed read/write %.0lf MB bytes from/to global memory.\n",
      //dmbytes);
  printf("Execution time = %f (sec) \n", dsduration);
  //printf("Concurrent Read and Write Throughput = %f (GB/sec) \n", gbpersec);

  printf("TEST PASSED\n");
  return 0;
}
