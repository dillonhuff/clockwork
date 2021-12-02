#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "clockwork_standard_compute_units.h"

#define __POPULATE_HOST_INPUTS__

int main(int argc, char **argv) {
  srand(234);
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <XCLBIN File>" << std::endl;
    return EXIT_FAILURE;
  }

  std::string binaryFile = argv[1];

  int num_epochs = 1;

  std::cout << "num_epochs = " << num_epochs << std::endl;

  size_t total_size_bytes = 0;
  const int C_update_0_read_pipe0_DATA_SIZE = num_epochs*18;
  const int C_update_0_read_pipe0_BYTES_PER_PIXEL = 32 / 8;
  size_t C_update_0_read_pipe0_size_bytes = C_update_0_read_pipe0_BYTES_PER_PIXEL * C_update_0_read_pipe0_DATA_SIZE;

  total_size_bytes += C_update_0_read_pipe0_size_bytes;
  const int D_update_0_write_pipe0_DATA_SIZE = num_epochs*10;
  const int D_update_0_write_pipe0_BYTES_PER_PIXEL = 32 / 8;
  size_t D_update_0_write_pipe0_size_bytes = D_update_0_write_pipe0_BYTES_PER_PIXEL * D_update_0_write_pipe0_DATA_SIZE;

  total_size_bytes += D_update_0_write_pipe0_size_bytes;

  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > C_update_0_read_pipe0(C_update_0_read_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > D_update_0_write_pipe0(D_update_0_write_pipe0_size_bytes);

  // TODO: POPULATE BUFFERS FOR EACH PIPELINE
#ifdef __POPULATE_HOST_INPUTS__
  std::ofstream input_C_update_0_read("C_update_0_read.csv");
  for (int i = 0; i < C_update_0_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint32_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_C_update_0_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_C_update_0_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint32_t*) (C_update_0_read_pipe0.data()))[i] = bitcast<uint32_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint32_t*) (C_update_0_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_C_update_0_read.close();
  for (int i = 0; i < D_update_0_write_pipe0_DATA_SIZE; i++) {
    ((uint32_t*) (D_update_0_write_pipe0.data()))[i] = 0;
  }

#endif // __POPULATE_HOST_INPUTS__
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
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "D_naive_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer C_update_0_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, C_update_0_read_pipe0_size_bytes, C_update_0_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, C_update_0_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer D_update_0_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, D_update_0_write_pipe0_size_bytes, D_update_0_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, D_update_0_write_pipe0_ocl_buf));


  OCL_CHECK(err, err = krnl_vector_add.setArg(2, num_epochs));

  std::cout << "Migrating memory" << std::endl;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({C_update_0_read_pipe0_ocl_buf}, 0));

  unsigned long start, end, nsduration;
  cl::Event event;

  std::cout << "Starting kernel" << std::endl;
  OCL_CHECK(err, err = q.enqueueTask(krnl_vector_add, NULL, &event));
  OCL_CHECK(err, err = event.wait());
  end =
  OCL_CHECK(err, event.getProfilingInfo<CL_PROFILING_COMMAND_END>(&err));
  start = OCL_CHECK(err,
  event.getProfilingInfo<CL_PROFILING_COMMAND_START>(&err));
  nsduration = end - start;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({D_update_0_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

  q.finish();

  double dnsduration = ((double)nsduration);
  double dsduration = dnsduration / ((double)1000000000);
  double dbytes = total_size_bytes;
  double bpersec = (dbytes / dsduration);
  double gbpersec = bpersec / ((double)1024 * 1024 * 1024);
  std::cout << "bytes       = " << dbytes << std::endl;
  std::cout << "bytes / sec = " << bpersec << std::endl;
  std::cout << "GB / sec    = " << gbpersec << std::endl;
  printf("Execution time = %f (sec) \n", dsduration);
{
    std::ofstream regression_result("D_update_0_write_pipe0_accel_result.csv");
    for (int i = 0; i < D_update_0_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint32_t*) (D_update_0_write_pipe0.data()))[i] << std::endl;
    }
}

  return 0;
}
