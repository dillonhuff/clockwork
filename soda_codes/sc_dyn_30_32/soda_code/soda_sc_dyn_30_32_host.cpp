#include "xcl2.hpp"
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstdlib>

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
  size_t total_size_bytes_read = 0;
  size_t total_size_bytes_written = 0;
  const int pw_math_in_oc02_merged3510_read_DATA_SIZE = num_epochs*2736000;
  const int pw_math_in_oc02_merged3510_read_BYTES_PER_PIXEL = 32 / 8;
  size_t pw_math_in_oc02_merged3510_read_size_bytes = pw_math_in_oc02_merged3510_read_BYTES_PER_PIXEL * pw_math_in_oc02_merged3510_read_DATA_SIZE;

  total_size_bytes += pw_math_in_oc02_merged3510_read_size_bytes;
  total_size_bytes_read += pw_math_in_oc02_merged3510_read_size_bytes;
  const int pw_math_stencil_29154156_merged3605_write_DATA_SIZE = num_epochs*2736000;
  const int pw_math_stencil_29154156_merged3605_write_BYTES_PER_PIXEL = 32 / 8;
  size_t pw_math_stencil_29154156_merged3605_write_size_bytes = pw_math_stencil_29154156_merged3605_write_BYTES_PER_PIXEL * pw_math_stencil_29154156_merged3605_write_DATA_SIZE;

  total_size_bytes += pw_math_stencil_29154156_merged3605_write_size_bytes;
  total_size_bytes_written += pw_math_stencil_29154156_merged3605_write_size_bytes;

  cl_int err;
  cl::Context context;
  cl::Kernel krnl_vector_add;
  cl::CommandQueue q;

  std::vector<uint8_t, aligned_allocator<uint8_t> > pw_math_in_oc02_merged3510_read(pw_math_in_oc02_merged3510_read_size_bytes);
  std::vector<uint8_t, aligned_allocator<uint8_t> > pw_math_stencil_29154156_merged3605_write(pw_math_stencil_29154156_merged3605_write_size_bytes);

  std::ofstream input_pw_math_in_oc02_merged3510_read("pw_math_in_oc02_merged3510_read.csv");
  for (int i = 0; i < pw_math_in_oc02_merged3510_read_DATA_SIZE; i++) {
    uint32_t val = (rand() % 256);
    input_pw_math_in_oc02_merged3510_read << val << std::endl;
    ((uint32_t*) (pw_math_in_oc02_merged3510_read.data()))[i] = val;
  }

  input_pw_math_in_oc02_merged3510_read.close();
  for (int i = 0; i < pw_math_stencil_29154156_merged3605_write_DATA_SIZE; i++) {
    ((uint32_t*) (pw_math_stencil_29154156_merged3605_write.data()))[i] = 0;
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
      OCL_CHECK(err, krnl_vector_add = cl::Kernel(program, "sc_dyn_30_32_kernel", &err));
      valid_device++;
      break;
    }
  }
  if (valid_device == 0) {
    std::cout << "Failed to program any device found, exit!\n";
    exit(EXIT_FAILURE);
  }

  OCL_CHECK(err, cl::Buffer pw_math_stencil_29154156_merged3605_write_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, pw_math_stencil_29154156_merged3605_write_size_bytes, pw_math_stencil_29154156_merged3605_write.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(0, pw_math_stencil_29154156_merged3605_write_ocl_buf));

  OCL_CHECK(err, cl::Buffer pw_math_in_oc02_merged3510_read_ocl_buf(context, CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, pw_math_in_oc02_merged3510_read_size_bytes, pw_math_in_oc02_merged3510_read.data(), &err));
  OCL_CHECK(err, err = krnl_vector_add.setArg(1, pw_math_in_oc02_merged3510_read_ocl_buf));

  uint64_t transfer_size = num_epochs*(2736000 / 16);
  OCL_CHECK(err, err = krnl_vector_add.setArg(2, transfer_size));

  std::cout << "Migrating memory" << std::endl;
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({pw_math_in_oc02_merged3510_read_pipe0_ocl_buf}, 0));

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
  OCL_CHECK(err, err = q.enqueueMigrateMemObjects({pw_math_stencil_29154156_merged3605_write_pipe0_ocl_buf}, CL_MIGRATE_MEM_OBJECT_HOST));

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
  std::ofstream regression_result("pw_math_stencil_29154156_merged3605_write_accel_result.csv");
  for (int i = 0; i < pw_math_stencil_29154156_merged3605_write_DATA_SIZE; i++) {
    regression_result << ((uint32_t*) (pw_math_stencil_29154156_merged3605_write.data()))[i] << std::endl;
  }

  return 0;
}
