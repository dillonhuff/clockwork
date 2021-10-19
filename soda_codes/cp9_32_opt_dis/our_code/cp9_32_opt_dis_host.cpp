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
  const int cp9_32_1_merged2309_write_pipe0_DATA_SIZE = num_epochs*2073600;
  const int cp9_32_1_merged2309_write_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t cp9_32_1_merged2309_write_pipe0_size_bytes = cp9_32_1_merged2309_write_pipe0_BYTES_PER_PIXEL * cp9_32_1_merged2309_write_pipe0_DATA_SIZE;

  total_size_bytes += cp9_32_1_merged2309_write_pipe0_size_bytes;
  const int raw_1_merged2279_read_pipe0_DATA_SIZE = num_epochs*2193408;
  const int raw_1_merged2279_read_pipe0_BYTES_PER_PIXEL = 16 / 8;
  size_t raw_1_merged2279_read_pipe0_size_bytes = raw_1_merged2279_read_pipe0_BYTES_PER_PIXEL * raw_1_merged2279_read_pipe0_DATA_SIZE;

  total_size_bytes += raw_1_merged2279_read_pipe0_size_bytes;

  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > cp9_32_1_merged2309_write_pipe0(cp9_32_1_merged2309_write_pipe0_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > raw_1_merged2279_read_pipe0(raw_1_merged2279_read_pipe0_size_bytes);

  // TODO: POPULATE BUFFERS FOR EACH PIPELINE
#ifdef __POPULATE_HOST_INPUTS__
  std::ofstream input_raw_1_merged2279_read("raw_1_merged2279_read.csv");
  for (int i = 0; i < raw_1_merged2279_read_pipe0_DATA_SIZE; i++) {
#ifdef __FLOAT_OUTPUT__
    float  val = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
#else // __FLOAT_OUTPUT__
    uint16_t val = (rand() % 256);
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    input_raw_1_merged2279_read << val << std::endl;
#else // __FLOAT_OUTPUT__
    input_raw_1_merged2279_read << val << std::endl;
#endif // __FLOAT_OUTPUT__

#ifdef __FLOAT_OUTPUT__
    ((uint16_t*) (raw_1_merged2279_read_pipe0.data()))[i] = bitcast<uint16_t, float>(val);
#else // __FLOAT_OUTPUT__
    ((uint16_t*) (raw_1_merged2279_read_pipe0.data()))[i] = val;
#endif // __FLOAT_OUTPUT__
  }

  input_raw_1_merged2279_read.close();
  for (int i = 0; i < cp9_32_1_merged2309_write_pipe0_DATA_SIZE; i++) {
    ((uint16_t*) (cp9_32_1_merged2309_write_pipe0.data()))[i] = 0;
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
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "cp9_32_opt_dis_accel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer raw_1_merged2279_read_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, raw_1_merged2279_read_pipe0_size_bytes, raw_1_merged2279_read_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, raw_1_merged2279_read_pipe0_ocl_buf));

  OCL_CHECK(err, cl::Buffer cp9_32_1_merged2309_write_pipe0_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, cp9_32_1_merged2309_write_pipe0_size_bytes, cp9_32_1_merged2309_write_pipe0.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, cp9_32_1_merged2309_write_pipe0_ocl_buf));


  OCL_CHECK(err, err = krnl_vector_add.setArg(2, num_epochs));

  std::cout << "Migrating memory" << std::endl;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({raw_1_merged2279_read_pipe0_ocl_buf}, 0));

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
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({cp9_32_1_merged2309_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

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
    std::ofstream regression_result("cp9_32_1_merged2309_write_pipe0_accel_result.csv");
    for (int i = 0; i < cp9_32_1_merged2309_write_pipe0_DATA_SIZE; i++) {
      regression_result << ((uint16_t*) (cp9_32_1_merged2309_write_pipe0.data()))[i] << std::endl;
    }
}

  return 0;
}
