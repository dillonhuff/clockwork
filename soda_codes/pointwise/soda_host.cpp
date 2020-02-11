#include <cassert>
#include <cfloat>
#include <cmath>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>

#include <ap_int.h>
#include <fcntl.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <CL/opencl.h>

using std::array;
using std::count;
using std::fill;
using std::string;
using std::unordered_map;

#include "pointwise.h"

#ifndef BURST_WIDTH
#define BURST_WIDTH 16
#endif//BURST_WIDTH
#ifndef STENCIL_DIM_0
#define STENCIL_DIM_0 1
#endif//STENCIL_DIM_0
#ifndef STENCIL_DIM_1
#define STENCIL_DIM_1 1
#endif//STENCIL_DIM_1
#ifndef STENCIL_DISTANCE
#define STENCIL_DISTANCE 0
#endif//STENCIL_DISTANCE

FILE* const* error_report = &stderr;

int64_t load_xclbin2_to_memory(const char *filename, char **kernel_binary, char** device)
{
  uint64_t size = 0;
  FILE *f = fopen(filename, "rb");
  if(nullptr == f)
  {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: cannot open %s\n", filename);
    return -1;
  }
  char magic[8];
  unsigned char cipher[32];
  unsigned char key_block[256];
  uint64_t unique_id;
  if (fread(magic, sizeof(magic), 1, f) != 1) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  if (strcmp(magic, "xclbin2") != 0) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  if (fread(cipher, sizeof(cipher), 1, f) != 1) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  if (fread(key_block, sizeof(key_block), 1, f) != 1) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  if (fread(&unique_id, sizeof(unique_id), 1, f) != 1) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  if (fread(&size, sizeof(size), 1, f) != 1) {
    *kernel_binary = nullptr;
    fprintf(*error_report, "ERROR: %s is not a valid xclbin2 file\n", filename);
    return -2;
  }
  char* p = new char[size+1]();
  *kernel_binary = p;
  memcpy(p, magic, sizeof(magic));
  p += sizeof(magic);
  memcpy(p, cipher, sizeof(cipher));
  p += sizeof(cipher);
  memcpy(p, key_block, sizeof(key_block));
  p += sizeof(key_block);
  memcpy(p, &unique_id, sizeof(unique_id));
  p += sizeof(unique_id);
  memcpy(p, &size, sizeof(size));
  p += sizeof(size);
  uint64_t size_left = size - sizeof(magic) - sizeof(cipher) - sizeof(key_block) - sizeof(unique_id) - sizeof(size);
  if(size_left != fread(p, sizeof(char), size_left, f))
  {
    delete[] p;
    fprintf(*error_report, "ERROR: %s is corrupted\n", filename);
    return -3;
  }
  *device = p + 5*8;
  fclose(f);
  return size;
}

static bool halide_rewrite_buffer(buffer_t *b, int32_t elem_size,
                  int32_t min0, int32_t extent0, int32_t stride0,
                  int32_t min1, int32_t extent1, int32_t stride1,
                  int32_t min2, int32_t extent2, int32_t stride2,
                  int32_t min3, int32_t extent3, int32_t stride3)
{
  b->min[0] = min0;
  b->min[1] = min1;
  b->min[2] = min2;
  b->min[3] = min3;
  b->extent[0] = extent0;
  b->extent[1] = extent1;
  b->extent[2] = extent2;
  b->extent[3] = extent3;
  b->stride[0] = stride0;
  b->stride[1] = stride1;
  b->stride[2] = stride2;
  b->stride[3] = stride3;
  return true;
}

int halide_error_code_success = 0;
int halide_error_code_generic_error = -1;
int halide_error_code_explicit_bounds_too_small = -2;
int halide_error_code_bad_elem_size = -3;
int halide_error_code_access_out_of_bounds = -4;
int halide_error_code_buffer_allocation_too_large = -5;
int halide_error_code_buffer_extents_too_large = -6;
int halide_error_code_constraints_make_required_region_smaller = -7;
int halide_error_code_constraint_violated = -8;
int halide_error_code_param_too_small = -9;
int halide_error_code_param_too_large = -10;
int halide_error_code_out_of_memory = -11;
int halide_error_code_buffer_argument_is_null = -12;
int halide_error_code_debug_to_file_failed = -13;
int halide_error_code_copy_to_host_failed = -14;
int halide_error_code_copy_to_device_failed = -15;
int halide_error_code_device_malloc_failed = -16;
int halide_error_code_device_sync_failed = -17;
int halide_error_code_device_free_failed = -18;
int halide_error_code_no_device_interface = -19;
int halide_error_code_matlab_init_failed = -20;
int halide_error_code_matlab_bad_param_type = -21;
int halide_error_code_internal_error = -22;
int halide_error_code_device_run_failed = -23;
int halide_error_code_unaligned_host_ptr = -24;
int halide_error_code_bad_fold = -25;
int halide_error_code_fold_factor_too_small = -26;

int halide_error_bad_elem_size(void *user_context, const char *func_name,
                 const char *type_name, int elem_size_given, int correct_elem_size) {
  fprintf(*error_report, "%s has type %s but elem_size of the buffer passed in is %d instead of %d",
      func_name, type_name, elem_size_given, correct_elem_size);
  return halide_error_code_bad_elem_size;
}
int halide_error_constraint_violated(void *user_context, const char *var, int val,
                   const char *constrained_var, int constrained_val) {
  fprintf(*error_report, "Constraint violated: %s (%d) == %s (%d)",
      var, val, constrained_var, constrained_val);
  return halide_error_code_constraint_violated;
}
int halide_error_buffer_allocation_too_large(void *user_context, const char *buffer_name, uint64_t allocation_size, uint64_t max_size) {
  fprintf(*error_report, "Total allocation for buffer %s is %lu, which exceeds the maximum size of %lu",
      buffer_name, allocation_size, max_size);
  return halide_error_code_buffer_allocation_too_large;
}
int halide_error_buffer_extents_too_large(void *user_context, const char *buffer_name, int64_t actual_size, int64_t max_size) {
  fprintf(*error_report, "Product of extents for buffer %s is %ld, which exceeds the maximum size of %ld",
      buffer_name, actual_size, max_size);
  return halide_error_code_buffer_extents_too_large;
}
int halide_error_access_out_of_bounds(void *user_context, const char *func_name, int dimension, int min_touched, int max_touched, int min_valid, int max_valid) {
  if(min_touched < min_valid) {
    fprintf(*error_report, "%s is accessed at %d, which is before the min (%d) in dimension %d", func_name, min_touched, min_valid, dimension);
  } else if(max_touched > max_valid) {
    fprintf(*error_report, "%s is acccessed at %d, which is beyond the max (%d) in dimension %d", func_name, max_touched, max_valid, dimension);
  }
  return halide_error_code_access_out_of_bounds;
}

static int pointwise_wrapped(buffer_t *var_input_buffer, buffer_t *var_pointwise_buffer, const char* xclbin) HALIDE_FUNCTION_ATTRS
{
  uint16_t *var_input = (uint16_t *)(var_input_buffer->host);
  (void)var_input;
  const bool var_input_host_and_dev_are_null = (var_input_buffer->host == nullptr) && (var_input_buffer->dev == 0);
  (void)var_input_host_and_dev_are_null;
  int32_t var_input_min_0 = var_input_buffer->min[0];
  (void)var_input_min_0;
  int32_t var_input_min_1 = var_input_buffer->min[1];
  (void)var_input_min_1;
  int32_t var_input_min_2 = var_input_buffer->min[2];
  (void)var_input_min_2;
  int32_t var_input_min_3 = var_input_buffer->min[3];
  (void)var_input_min_3;
  int32_t input_size_dim_0 = var_input_buffer->extent[0];
  (void)input_size_dim_0;
  int32_t input_size_dim_1 = var_input_buffer->extent[1];
  (void)input_size_dim_1;
  int32_t input_size_dim_2 = var_input_buffer->extent[2];
  (void)input_size_dim_2;
  int32_t input_size_dim_3 = var_input_buffer->extent[3];
  (void)input_size_dim_3;
  int32_t var_input_stride_0 = var_input_buffer->stride[0];
  (void)var_input_stride_0;
  int32_t var_input_stride_1 = var_input_buffer->stride[1];
  (void)var_input_stride_1;
  int32_t var_input_stride_2 = var_input_buffer->stride[2];
  (void)var_input_stride_2;
  int32_t var_input_stride_3 = var_input_buffer->stride[3];
  (void)var_input_stride_3;
  int32_t var_input_elem_size = var_input_buffer->elem_size;
  (void)var_input_elem_size;
  uint16_t *var_pointwise = (uint16_t *)(var_pointwise_buffer->host);
  (void)var_pointwise;
  const bool var_pointwise_host_and_dev_are_null = (var_pointwise_buffer->host == nullptr) && (var_pointwise_buffer->dev == 0);
  (void)var_pointwise_host_and_dev_are_null;
  int32_t var_pointwise_min_0 = var_pointwise_buffer->min[0];
  (void)var_pointwise_min_0;
  int32_t var_pointwise_min_1 = var_pointwise_buffer->min[1];
  (void)var_pointwise_min_1;
  int32_t var_pointwise_min_2 = var_pointwise_buffer->min[2];
  (void)var_pointwise_min_2;
  int32_t var_pointwise_min_3 = var_pointwise_buffer->min[3];
  (void)var_pointwise_min_3;
  int32_t pointwise_size_dim_0 = var_pointwise_buffer->extent[0];
  (void)pointwise_size_dim_0;
  int32_t pointwise_size_dim_1 = var_pointwise_buffer->extent[1];
  (void)pointwise_size_dim_1;
  int32_t pointwise_size_dim_2 = var_pointwise_buffer->extent[2];
  (void)pointwise_size_dim_2;
  int32_t pointwise_size_dim_3 = var_pointwise_buffer->extent[3];
  (void)pointwise_size_dim_3;
  int32_t var_pointwise_stride_0 = var_pointwise_buffer->stride[0];
  (void)var_pointwise_stride_0;
  int32_t var_pointwise_stride_1 = var_pointwise_buffer->stride[1];
  (void)var_pointwise_stride_1;
  int32_t var_pointwise_stride_2 = var_pointwise_buffer->stride[2];
  (void)var_pointwise_stride_2;
  int32_t var_pointwise_stride_3 = var_pointwise_buffer->stride[3];
  (void)var_pointwise_stride_3;
  int32_t var_pointwise_elem_size = var_pointwise_buffer->elem_size;
  (void)var_pointwise_elem_size;
  if(var_pointwise_host_and_dev_are_null)
  {
    bool assign_0 = halide_rewrite_buffer(var_pointwise_buffer, 2, var_pointwise_min_0, pointwise_size_dim_0, 1, var_pointwise_min_1, pointwise_size_dim_1, pointwise_size_dim_0, 0, 0, 0, 0, 0, 0);
    (void)assign_0;
  } // var_pointwise_host_and_dev_are_null
  if(var_input_host_and_dev_are_null)
  {
    int32_t assign_1 = pointwise_size_dim_0 + 0;
    int32_t assign_2 = pointwise_size_dim_1 + 0;
    bool assign_3 = halide_rewrite_buffer(var_input_buffer, 2, var_pointwise_min_0, assign_1, 1, var_pointwise_min_1, assign_2, assign_1, 0, 0, 0, 0, 0, 0);
    (void)assign_3;
  } // var_input_host_and_dev_are_null
  bool assign_4 = var_pointwise_host_and_dev_are_null || var_input_host_and_dev_are_null;
  bool assign_5 = !(assign_4);
  if(assign_5)
  {
    bool assign_6 = var_pointwise_elem_size == 2;
    if(!assign_6)
    {
      int32_t assign_7 = halide_error_bad_elem_size(nullptr, "Buffer pointwise", "uint16", var_pointwise_elem_size, 2);
      return assign_7;
    }
    bool assign_8 = var_input_elem_size == 2;
    if(!assign_8)
    {
      int32_t assign_9 = halide_error_bad_elem_size(nullptr, "Buffer input", "uint16", var_input_elem_size, 2);
      return assign_9;
    }

    // allocate buffer for tiled input/output
    int32_t tile_num_dim_0 = (input_size_dim_0-STENCIL_DIM_0+1+TILE_SIZE_DIM_0-STENCIL_DIM_0)/(TILE_SIZE_DIM_0-STENCIL_DIM_0+1);

    // change #bank if there is a env var defined
    unordered_map<string, array<bool, 4>> use_bank;
    unordered_map<string, int> num_bank;
    unordered_map<string, array<int, 4>> bank_vec;
    use_bank["pointwise"] = {false, true, false, false};
    num_bank["pointwise"] = {1};
    bank_vec["pointwise"] = {1};
    use_bank["input"] = {false, true, false, false};
    num_bank["input"] = {1};
    bank_vec["input"] = {1};
    if (const char* env_var_char = getenv("DRAM_IN")) {
      const string env_var(env_var_char);
      if (env_var.find(':') != string::npos) {
        size_t pos = 0;
        size_t next_pos;
        do {
          next_pos = env_var.find(',', pos);
          const size_t colon_pos = env_var.find(':', pos);
          const string name = env_var.substr(pos, colon_pos - pos);
          pos = colon_pos + 1;
          if (use_bank.count(name)) {
            fill(use_bank[name].begin(), use_bank[name].end(), false);
            num_bank[name] = 0;
            int idx = 0;
            size_t dot_pos;
            do {
              dot_pos = env_var.find('.', pos);
              int bank = stoi(env_var.substr(pos, dot_pos - pos));
              use_bank[name][bank] = true;
              ++num_bank[name];
              bank_vec[name][idx++] = bank;
              pos = dot_pos + 1;
            } while (dot_pos != string::npos && dot_pos < next_pos);
          } else {
            fprintf(*error_report, "WARNING: unknown name %s\n", name.c_str());
          }
          pos = next_pos + 1;
        } while (next_pos != string::npos);
      } else {
        for (const string name : {"input"}) {
          fill(use_bank[name].begin(), use_bank[name].end(), false);
          num_bank[name] = 0;
          int idx = 0;
          size_t pos = 0;
          size_t dot_pos;
          do {
            dot_pos = env_var.find('.', pos);
            int bank = stoi(env_var.substr(pos, dot_pos - pos));
            use_bank[name][bank] = true;
            ++num_bank[name];
            bank_vec[name][idx++] = bank;
            pos = dot_pos + 1;
          } while (dot_pos != string::npos);
        }
      }
    }

    if (const char* env_var_char = getenv("DRAM_OUT")) {
      const string env_var(env_var_char);
      if (env_var.find(':') != string::npos) {
        size_t pos = 0;
        size_t next_pos;
        do {
          next_pos = env_var.find(',', pos);
          const size_t colon_pos = env_var.find(':', pos);
          const string name = env_var.substr(pos, colon_pos - pos);
          pos = colon_pos + 1;
          if (use_bank.count(name)) {
            fill(use_bank[name].begin(), use_bank[name].end(), false);
            num_bank[name] = 0;
            int idx = 0;
            size_t dot_pos;
            do {
              dot_pos = env_var.find('.', pos);
              int bank = stoi(env_var.substr(pos, dot_pos - pos));
              use_bank[name][bank] = true;
              ++num_bank[name];
              bank_vec[name][idx++] = bank;
              pos = dot_pos + 1;
            } while (dot_pos != string::npos && dot_pos < next_pos);
          } else {
            fprintf(*error_report, "WARNING: unknown name %s\n", name.c_str());
          }
          pos = next_pos + 1;
        } while (next_pos != string::npos);
      } else {
        for (const string name : {"pointwise"}) {
          fill(use_bank[name].begin(), use_bank[name].end(), false);
          num_bank[name] = 0;
          int idx = 0;
          size_t pos = 0;
          size_t dot_pos;
          do {
            dot_pos = env_var.find('.', pos);
            int bank = stoi(env_var.substr(pos, dot_pos - pos));
            use_bank[name][bank] = true;
            ++num_bank[name];
            bank_vec[name][idx++] = bank;
            pos = dot_pos + 1;
          } while (dot_pos != string::npos);
        }
      }
    }

    // align each linearized tile to multiples of BURST_WIDTH
    int64_t tile_pixel_num = TILE_SIZE_DIM_0*input_size_dim_1;
    int64_t tile_burst_num = (tile_pixel_num-1)/(BURST_WIDTH/16*num_bank["input"])+1;
    int64_t tile_size_linearized_i = tile_burst_num*(BURST_WIDTH/16*num_bank["input"]);
    int64_t tile_size_linearized_o = tile_burst_num*(BURST_WIDTH/16*num_bank["pointwise"]);

    // prepare for opencl
    int err;

    cl_platform_id platforms[16];
    cl_platform_id platform_id = 0;
    cl_uint platform_count;
    cl_device_id device_id;
    cl_context context;
    cl_command_queue commands;
    cl_program program;
    cl_kernel kernel;

    char cl_platform_vendor[1001];

    cl_mem var_input_cl_bank[4] = {};
    cl_mem var_pointwise_cl_bank[4] = {};


    uint64_t var_input_buf_size = sizeof(uint16_t)*(tile_num_dim_0*tile_size_linearized_i/num_bank["input"]+((STENCIL_DISTANCE-1)/(BURST_WIDTH/16*num_bank["input"])+1)*(BURST_WIDTH/16));
    uint64_t var_pointwise_buf_size = sizeof(uint16_t)*(tile_num_dim_0*tile_size_linearized_o/num_bank["pointwise"]+((STENCIL_DISTANCE-1)/(BURST_WIDTH/16*num_bank["pointwise"])+1)*(BURST_WIDTH/16));

    unsigned char *kernel_binary;
    const char *device_name;
    char target_device_name[64];
    fprintf(*error_report, "INFO: Loading %s\n", xclbin);
    int64_t kernel_binary_size = load_xclbin2_to_memory(xclbin, (char **) &kernel_binary, (char**)&device_name);
    if (strlen(device_name) == 0)
    {
      device_name = getenv("XDEVICE");
    }
    if(kernel_binary_size < 0)
    {
      fprintf(*error_report, "ERROR: Failed to load kernel from xclbin: %s\n", xclbin);
      exit(EXIT_FAILURE);
    }
    for(int i = 0; i<64; ++i)
    {
      target_device_name[i] = (device_name[i]==':'||device_name[i]=='.') ? '_' : device_name[i];
    }

    err = clGetPlatformIDs(16, platforms, &platform_count);
    if(err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to find an OpenCL platform\n");
      exit(EXIT_FAILURE);
    }
    fprintf(*error_report, "INFO: Found %d platforms\n", platform_count);

    int platform_found = 0;
    for (unsigned iplat = 0; iplat<platform_count; iplat++)
    {
      err = clGetPlatformInfo(platforms[iplat], CL_PLATFORM_VENDOR, 1000, (void *)cl_platform_vendor,nullptr);
      if(err != CL_SUCCESS)
      {
        fprintf(*error_report, "ERROR: clGetPlatformInfo(CL_PLATFORM_VENDOR) failed\n");
        exit(EXIT_FAILURE);
      }
      if(strcmp(cl_platform_vendor, "Xilinx") == 0)
      {
        fprintf(*error_report, "INFO: Selected platform %d from %s\n", iplat, cl_platform_vendor);
        platform_id = platforms[iplat];
        platform_found = 1;
      }
    }
    if(!platform_found)
    {
      fprintf(*error_report, "ERROR: Platform Xilinx not found\n");
      exit(EXIT_FAILURE);
    }

    cl_device_id devices[16];
    cl_uint device_count;
    unsigned int device_found = 0;
    char cl_device_name[1001];
    err = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_ACCELERATOR,
               16, devices, &device_count);
    if(err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to create a device group\n");
      exit(EXIT_FAILURE);
    }

    for (unsigned int i=0; i<device_count; ++i)
    {
      err = clGetDeviceInfo(devices[i], CL_DEVICE_NAME, 1024, cl_device_name, 0);
      if(err != CL_SUCCESS)
      {
        fprintf(*error_report, "ERROR: Failed to get device name for device %d\n", i);
        exit(EXIT_FAILURE);
      }
      printf("INFO: Find device %s\n", cl_device_name);
      if(strcmp(cl_device_name, target_device_name) == 0 || strcmp(cl_device_name, device_name) == 0)
      {
        device_id = devices[i];
        device_found = 1;
        fprintf(*error_report, "INFO: Selected %s as the target device\n", device_name);
      }
    }

    if(!device_found)
    {
      fprintf(*error_report, "ERROR: Target device %s not found\n", target_device_name);
      exit(EXIT_FAILURE);
    }

    err = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_ACCELERATOR,
               1, &device_id, nullptr);
    if(err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to create a device group\n");
      exit(EXIT_FAILURE);
    }

    context = clCreateContext(nullptr, 1, &device_id, nullptr, nullptr, &err);
    if(!context)
    {
      fprintf(*error_report, "ERROR: Failed to create a compute context\n");
      exit(EXIT_FAILURE);
    }

    commands = clCreateCommandQueue(context, device_id, 0, &err);
    if(!commands)
    {
      fprintf(*error_report, "ERROR: Failed to create a command commands %i\n",err);
      exit(EXIT_FAILURE);
    }

    int status;
    size_t kernel_binary_sizes[1] = {static_cast<size_t>(kernel_binary_size)};
    program = clCreateProgramWithBinary(context, 1, &device_id, kernel_binary_sizes,
                       (const unsigned char **) &kernel_binary, &status, &err);
    if((!program) || (err!=CL_SUCCESS))
    {
      fprintf(*error_report, "ERROR: Failed to create compute program from binary %d\n", err);
      exit(EXIT_FAILURE);
    }
    delete[] kernel_binary;

    err = clBuildProgram(program, 0, nullptr, nullptr, nullptr, nullptr);
    if(err != CL_SUCCESS)
    {
      size_t len;
      char buffer[2048];
      fprintf(*error_report, "ERROR: Failed to build program executable\n");
      clGetProgramBuildInfo(program, device_id, CL_PROGRAM_BUILD_LOG, sizeof(buffer), buffer, &len);
      fprintf(*error_report, "%s\n", buffer);
      exit(EXIT_FAILURE);
    }

    kernel = clCreateKernel(program, "pointwise_kernel", &err);
    if(!kernel || err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to create compute kernel %d\n", err);
      exit(EXIT_FAILURE);
    }

    const unsigned XCL_MEM_DDR_BANK[4] = {XCL_MEM_DDR_BANK0, XCL_MEM_DDR_BANK1, XCL_MEM_DDR_BANK2, XCL_MEM_DDR_BANK3};
    unordered_map<string, array<cl_mem_ext_ptr_t, 4>> mem_ext_bank;
    for (const auto& use_bank_pair : use_bank) {
      for (auto bank : {0, 1, 2, 3}) {
        if (use_bank_pair.second[bank]) {
          mem_ext_bank[use_bank_pair.first][bank].flags = XCL_MEM_DDR_BANK[bank];
        }
      }
    }
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        var_input_cl_bank[bank] = clCreateBuffer(context, CL_MEM_READ_ONLY|CL_MEM_EXT_PTR_XILINX, var_input_buf_size, &mem_ext_bank["input"][bank], nullptr);
        if (var_input_cl_bank[bank] == nullptr) {
          fprintf(*error_report, "ERROR: Failed to allocate device memory\n");
          exit(EXIT_FAILURE);
        }
      }
      if (use_bank["pointwise"][bank]) {
        var_pointwise_cl_bank[bank] = clCreateBuffer(context, CL_MEM_WRITE_ONLY|CL_MEM_EXT_PTR_XILINX, var_pointwise_buf_size, &mem_ext_bank["pointwise"][bank], nullptr);
        if (var_pointwise_cl_bank[bank] == nullptr) {
          fprintf(*error_report, "ERROR: Failed to allocate device memory\n");
          exit(EXIT_FAILURE);
        }
      }
    }

    cl_event write_events[4];
    cl_event* write_event_ptr = write_events;
    uint16_t* var_input_buf_bank[4] = {};
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        var_input_buf_bank[bank] = reinterpret_cast<uint16_t*>(clEnqueueMapBuffer(commands, var_input_cl_bank[bank], CL_FALSE, CL_MAP_WRITE, 0, var_input_buf_size, 0, nullptr, write_event_ptr++, &err));
      }
    }
    clWaitForEvents(write_event_ptr - write_events, write_events);

    // tiling
    for(int32_t tile_index_dim_0 = 0; tile_index_dim_0 < tile_num_dim_0; ++tile_index_dim_0)
    {
      int32_t actual_tile_size_dim_0 = (tile_index_dim_0==tile_num_dim_0-1) ? input_size_dim_0-(TILE_SIZE_DIM_0-STENCIL_DIM_0+1)*tile_index_dim_0 : TILE_SIZE_DIM_0;
#pragma omp parallel for
      for(int32_t j = 0; j < input_size_dim_1; ++j)
      {
        for(int32_t i = 0; i < actual_tile_size_dim_0; ++i)
        {
          // (x, y, z, w) is coordinates in tiled image
          // (p, q, r, s) is coordinates in original image
          // (i, j, k, l) is coordinates in a tile
          int32_t burst_index = (i+j*TILE_SIZE_DIM_0) / (BURST_WIDTH / 16 * num_bank["input"]);
          int32_t burst_residue = (i+j*TILE_SIZE_DIM_0) % (BURST_WIDTH / 16 * num_bank["input"]);
          int32_t p = tile_index_dim_0*(TILE_SIZE_DIM_0-STENCIL_DIM_0+1)+i;
          int32_t q = j;
          int64_t tiled_offset = (tile_index_dim_0) * tile_size_linearized_i + burst_index * (BURST_WIDTH / 16 * num_bank["input"]) + burst_residue;
          int64_t original_offset = p*var_input_stride_0+q*var_input_stride_1;
          var_input_buf_bank[bank_vec["input"][tiled_offset % num_bank["input"]]][tiled_offset / num_bank["input"]] = var_input[original_offset];
        }
      }
    }

    err = 0;
    write_event_ptr = write_events;
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        err |= clEnqueueUnmapMemObject(commands, var_input_cl_bank[bank], var_input_buf_bank[bank], 0, nullptr, write_event_ptr++);
      }
    }

    if(err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to write to input !\n");
      exit(EXIT_FAILURE);
    }

    err = 0;
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        fprintf(*error_report, "INFO: Using DRAM bank %d for input\n", bank);
      }
    }
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["pointwise"][bank]) {
        fprintf(*error_report, "INFO: Using DRAM bank %d for pointwise\n", bank);
      }
    }
    fprintf(*error_report, "INFO: tile_num_dim_0 = %d, TILE_SIZE_DIM_0 = %d\n", tile_num_dim_0, TILE_SIZE_DIM_0);
    fprintf(*error_report, "INFO: input_extent_0 = %d, input_extent_1 = %d\n", input_size_dim_0, input_size_dim_1);
    fprintf(*error_report, "INFO: input_min_0 = %d, input_min_1 = %d\n", var_input_min_0, var_input_min_1);
    fprintf(*error_report, "INFO: pointwise_extent_0 = %d, pointwise_extent_1 = %d\n", pointwise_size_dim_0, pointwise_size_dim_1);
    fprintf(*error_report, "INFO: pointwise_min_0 = %d, pointwise_min_1 = %d\n", var_pointwise_min_0, var_pointwise_min_1);

    int kernel_arg = 0;
    int64_t tile_data_num = ((int64_t(input_size_dim_1) * TILE_SIZE_DIM_0 - 1) / (BURST_WIDTH / 16 * num_bank["input"]) + 1) * BURST_WIDTH / 16 * num_bank["input"] / UNROLL_FACTOR;
    int64_t coalesced_data_num = ((int64_t(input_size_dim_1)*TILE_SIZE_DIM_0 * tile_num_dim_0 + STENCIL_DISTANCE - 1) / (BURST_WIDTH / 16 * num_bank["input"]) + 1);
    fprintf(*error_report, "INFO: tile_data_num = %ld, coalesced_data_num = %ld\n", tile_data_num, coalesced_data_num);

    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["pointwise"][bank]) {
        err |= clSetKernelArg(kernel, kernel_arg++, sizeof(cl_mem), &var_pointwise_cl_bank[bank]);
      }
    }
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        err |= clSetKernelArg(kernel, kernel_arg++, sizeof(cl_mem), &var_input_cl_bank[bank]);
      }
    }
    err |= clSetKernelArg(kernel, kernel_arg++, sizeof(coalesced_data_num), &coalesced_data_num);
    if(err != CL_SUCCESS)
    {
      fprintf(*error_report, "ERROR: Failed to set kernel arguments %d\n", err);
      exit(EXIT_FAILURE);
    }

    timespec execute_begin, execute_end;
    cl_event execute_event;
    err = clEnqueueTask(commands, kernel, write_event_ptr - write_events, write_events, &execute_event);
    if (getenv("XCL_EMULATION_MODE") == nullptr) {
      fprintf(*error_report, "INFO: FPGA warm up\n");
      clWaitForEvents(1, &execute_event);

      clock_gettime(CLOCK_MONOTONIC_RAW, &execute_begin);
      err = clEnqueueTask(commands, kernel, 0, nullptr, &execute_event);
      if (err) {
        fprintf(*error_report, "ERROR: Failed to execute kernel %d\n", err);
          exit(EXIT_FAILURE);
      }
      clWaitForEvents(1, &execute_event);
      clock_gettime(CLOCK_MONOTONIC_RAW, &execute_end);

      double elapsed_time = 0.;
      elapsed_time = (double(execute_end.tv_sec-execute_begin.tv_sec)+(execute_end.tv_nsec-execute_begin.tv_nsec)/1e9)*1e6;
      printf("Kernel execution time: %lf us\n", elapsed_time);
      printf("Kernel throughput:   %lf pixel/ns\n", input_size_dim_0*input_size_dim_1 / elapsed_time / 1e3);
    } else {
      clWaitForEvents(1, &execute_event);
      fprintf(*error_report, "INFO: Emulation mode\n");
    }

    cl_event read_events[4];
    cl_event* read_event_ptr = read_events;
    uint16_t* var_pointwise_buf_bank[4] = {};
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["pointwise"][bank]) {
        var_pointwise_buf_bank[bank] = reinterpret_cast<uint16_t*>(clEnqueueMapBuffer(commands, var_pointwise_cl_bank[bank], CL_FALSE, CL_MAP_READ, 0, var_pointwise_buf_size, 0, nullptr, read_event_ptr++, &err));
      }
    }
    clWaitForEvents(read_event_ptr - read_events, read_events);

    for(int32_t tile_index_dim_0 = 0; tile_index_dim_0 < tile_num_dim_0; ++tile_index_dim_0)
    {
      int32_t actual_tile_size_dim_0 = (tile_index_dim_0==tile_num_dim_0-1) ? input_size_dim_0-(TILE_SIZE_DIM_0-STENCIL_DIM_0+1)*tile_index_dim_0 : TILE_SIZE_DIM_0;
#pragma omp parallel for
      for(int32_t j = 0; j < pointwise_size_dim_1-0; ++j)
      {
        for(int32_t i = 0; i < actual_tile_size_dim_0-0; ++i)
        {
          // (x, y, z, w) is coordinates in tiled image
          // (p, q, r, s) is coordinates in original image
          // (i, j, k, l) is coordinates in a tile
          int32_t p = tile_index_dim_0*(TILE_SIZE_DIM_0-STENCIL_DIM_0+1)+i;
          int32_t q = j;
          int64_t original_offset = p*var_pointwise_stride_0+q*var_pointwise_stride_1;
          int32_t burst_index_pointwise = (i+j*TILE_SIZE_DIM_0 + 0) / (BURST_WIDTH / 16 * num_bank["pointwise"]);
          int32_t burst_residue_pointwise = (i+j*TILE_SIZE_DIM_0 + 0) % (BURST_WIDTH / 16 * num_bank["pointwise"]);
          int64_t tiled_offset_pointwise = (tile_index_dim_0) * tile_size_linearized_o + burst_index_pointwise * (BURST_WIDTH / 16 * num_bank["pointwise"]) + burst_residue_pointwise;
          var_pointwise[original_offset] = var_pointwise_buf_bank[bank_vec["pointwise"][tiled_offset_pointwise % num_bank["pointwise"]]][tiled_offset_pointwise / num_bank["pointwise"]];
        }
      }
    }
    read_event_ptr = read_events;
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["pointwise"][bank]) {
        clEnqueueUnmapMemObject(commands, var_pointwise_cl_bank[bank], var_pointwise_buf_bank[bank], 0, nullptr, read_event_ptr++);
      }
    }
    clWaitForEvents(read_event_ptr - read_events, read_events);

    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["input"][bank]) {
        clReleaseMemObject(var_input_cl_bank[bank]);
      }
    }
    for (auto bank : {0, 1, 2, 3}) {
      if (use_bank["pointwise"][bank]) {
        clReleaseMemObject(var_pointwise_cl_bank[bank]);
      }
    }

    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(commands);
    clReleaseContext(context);
  } // if(assign_5)
  return 0;
}

int pointwise(buffer_t *var_input_buffer, buffer_t *var_pointwise_buffer, const char* xclbin) HALIDE_FUNCTION_ATTRS
{
  uint16_t *var_input = (uint16_t *)(var_input_buffer->host);
  (void)var_input;
  const bool var_input_host_and_dev_are_null = (var_input_buffer->host == nullptr) && (var_input_buffer->dev == 0);
  (void)var_input_host_and_dev_are_null;
  int32_t var_input_min_0 = var_input_buffer->min[0];
  (void)var_input_min_0;
  int32_t var_input_min_1 = var_input_buffer->min[1];
  (void)var_input_min_1;
  int32_t var_input_min_2 = var_input_buffer->min[2];
  (void)var_input_min_2;
  int32_t var_input_min_3 = var_input_buffer->min[3];
  (void)var_input_min_3;
  int32_t input_size_dim_0 = var_input_buffer->extent[0];
  (void)input_size_dim_0;
  int32_t input_size_dim_1 = var_input_buffer->extent[1];
  (void)input_size_dim_1;
  int32_t input_size_dim_2 = var_input_buffer->extent[2];
  (void)input_size_dim_2;
  int32_t input_size_dim_3 = var_input_buffer->extent[3];
  (void)input_size_dim_3;
  int32_t var_input_stride_0 = var_input_buffer->stride[0];
  (void)var_input_stride_0;
  int32_t var_input_stride_1 = var_input_buffer->stride[1];
  (void)var_input_stride_1;
  int32_t var_input_stride_2 = var_input_buffer->stride[2];
  (void)var_input_stride_2;
  int32_t var_input_stride_3 = var_input_buffer->stride[3];
  (void)var_input_stride_3;
  int32_t var_input_elem_size = var_input_buffer->elem_size;
  (void)var_input_elem_size;
  uint16_t *var_pointwise = (uint16_t *)(var_pointwise_buffer->host);
  (void)var_pointwise;
  const bool var_pointwise_host_and_dev_are_null = (var_pointwise_buffer->host == nullptr) && (var_pointwise_buffer->dev == 0);
  (void)var_pointwise_host_and_dev_are_null;
  int32_t var_pointwise_min_0 = var_pointwise_buffer->min[0];
  (void)var_pointwise_min_0;
  int32_t var_pointwise_min_1 = var_pointwise_buffer->min[1];
  (void)var_pointwise_min_1;
  int32_t var_pointwise_min_2 = var_pointwise_buffer->min[2];
  (void)var_pointwise_min_2;
  int32_t var_pointwise_min_3 = var_pointwise_buffer->min[3];
  (void)var_pointwise_min_3;
  int32_t pointwise_size_dim_0 = var_pointwise_buffer->extent[0];
  (void)pointwise_size_dim_0;
  int32_t pointwise_size_dim_1 = var_pointwise_buffer->extent[1];
  (void)pointwise_size_dim_1;
  int32_t pointwise_size_dim_2 = var_pointwise_buffer->extent[2];
  (void)pointwise_size_dim_2;
  int32_t pointwise_size_dim_3 = var_pointwise_buffer->extent[3];
  (void)pointwise_size_dim_3;
  int32_t var_pointwise_stride_0 = var_pointwise_buffer->stride[0];
  (void)var_pointwise_stride_0;
  int32_t var_pointwise_stride_1 = var_pointwise_buffer->stride[1];
  (void)var_pointwise_stride_1;
  int32_t var_pointwise_stride_2 = var_pointwise_buffer->stride[2];
  (void)var_pointwise_stride_2;
  int32_t var_pointwise_stride_3 = var_pointwise_buffer->stride[3];
  (void)var_pointwise_stride_3;
  int32_t var_pointwise_elem_size = var_pointwise_buffer->elem_size;
  (void)var_pointwise_elem_size;
  return pointwise_wrapped(var_input_buffer, var_pointwise_buffer, xclbin);
}

int pointwise_test(const char* xclbin, const int dims[4])
{
  buffer_t input;
  buffer_t pointwise;
  memset(&input, 0, sizeof(buffer_t));
  memset(&pointwise, 0, sizeof(buffer_t));

  uint16_t* input_img = new uint16_t[dims[0]*dims[1]]();
  uint16_t* pointwise_img = new uint16_t[dims[0]*dims[1]]();

  input.extent[0] = dims[0];
  input.extent[1] = dims[1];
  input.stride[0] = 1;
  input.stride[1] = dims[0];
  input.elem_size = sizeof(uint16_t);
  input.host = (uint8_t*)input_img;

  pointwise.extent[0] = dims[0];
  pointwise.extent[1] = dims[1];
  pointwise.stride[0] = 1;
  pointwise.stride[1] = dims[0];
  pointwise.elem_size = sizeof(uint16_t);
  pointwise.host = (uint8_t*)pointwise_img;

  // initialization can be parallelized with -fopenmp
#pragma omp parallel for
  for(int32_t q = 0; q<dims[1]; ++q)
  {
    for(int32_t p = 0; p<dims[0]; ++p)
    {
      input_img[p*input.stride[0]+q*input.stride[1]] = p+q;
    }
  }

  pointwise(&input, &pointwise, xclbin);

  int error_count = 0;

  // produce pointwise, can be parallelized with -fopenmp
#pragma omp parallel for
  for(int32_t q = 0; q<dims[1]-0; ++q)
  {
    for(int32_t p = 0; p<dims[0]-0; ++p)
    {
      // pointwise(0, 0) = (input(0, 0) + 1)
      uint16_t result_pointwise = (input_img[(p+0)*input.stride[0]+(q+0)*input.stride[1]] + 1);
      uint16_t val_fpga = pointwise_img[p*pointwise.stride[0]+q*pointwise.stride[1]];
      uint16_t val_cpu = result_pointwise;
      if(val_fpga!=val_cpu)
      {
        fprintf(*error_report, "%ld != %ld @(%d, %d)\n", int64_t(val_fpga), int64_t(val_cpu), p, q);
        ++error_count;
      }
    }
  }

  if(error_count==0)
  {
    fprintf(*error_report, "INFO: PASS!\n");
  }
  else
  {
    fprintf(*error_report, "INFO: FAIL!\n");
  }

  delete[] input_img;
  delete[] pointwise_img;

  return error_count;
}
