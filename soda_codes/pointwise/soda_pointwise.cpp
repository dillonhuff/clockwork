#include<float.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<string.h>
#include<ap_int.h>
#include<hls_stream.h>


#ifndef BURST_WIDTH
#define BURST_WIDTH 64
#endif//BURST_WIDTH

#ifdef UNROLL_FACTOR
#if UNROLL_FACTOR != 4
#error UNROLL_FACTOR != 4
#endif//UNROLL_FACTOR != 4
#endif//UNROLL_FACTOR
#ifdef TILE_SIZE_DIM_0
#if TILE_SIZE_DIM_0 != 32
#error TILE_SIZE_DIM_0 != 32
#endif//TILE_SIZE_DIM_0 != 32
#endif//TILE_SIZE_DIM_0
#ifdef BURST_WIDTH
#if BURST_WIDTH != 64
#error BURST_WIDTH != 64
#endif//BURST_WIDTH != 64
#endif//BURST_WIDTH

template<typename T> struct Data
{
  T data;
  bool ctrl;
};
template<typename To, typename From>
inline To Reinterpret(const From& val)
{
  return reinterpret_cast<const To&>(val);
}
template<typename T> inline bool ReadData(T* data, hls::stream<Data<T>>* from)
{
#pragma HLS inline
  const Data<T>& tmp = from->read();
  *data = tmp.data;
  return tmp.ctrl;
}
template<typename T> inline void WriteData(hls::stream<Data<T>>* to, const T& data, bool ctrl)
{
#pragma HLS inline
  Data<T> tmp;
  tmp.data = data;
  tmp.ctrl = ctrl;
  to->write(tmp);
}
void BurstRead(hls::stream<Data<ap_uint<BURST_WIDTH>>>* to, ap_uint<BURST_WIDTH>* from, uint64_t data_num)
{
load_epoch:
  for (uint64_t epoch = 0; epoch < data_num;)
  {
#pragma HLS pipeline II=1
    const uint64_t next_epoch = epoch + 1;
    WriteData(to, from[epoch], next_epoch < data_num);
    epoch = next_epoch;
  }
}
void BurstWrite(ap_uint<BURST_WIDTH>* to, hls::stream<Data<ap_uint<BURST_WIDTH>>>* from, uint64_t data_num)
{
store_epoch:
  for (uint64_t epoch = 0; epoch < data_num; ++epoch)
  {
#pragma HLS pipeline II=1
    ap_uint<BURST_WIDTH> buf;
    ReadData(&buf, from);
    to[epoch] = buf;
  }
}
void Module0Func(
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_0, 
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_1, 
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_2, 
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_3, 
  /* input*/ hls::stream<Data<ap_uint<64>>>* dram_input_bank_1_fifo)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_st_1
#pragma HLS data_pack variable = fifo_st_2
#pragma HLS data_pack variable = fifo_st_3
#pragma HLS data_pack variable = dram_input_bank_1_fifo
module_0_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!dram_input_bank_1_fifo->empty())
    {
      ap_uint<64> dram_input_bank_1_buf;
      const bool dram_input_bank_1_buf_enable = ReadData(&dram_input_bank_1_buf, dram_input_bank_1_fifo);
      const bool enabled = dram_input_bank_1_buf_enable;
      enable = enabled;
      WriteData(fifo_st_0, Reinterpret<uint16_t>(static_cast<ap_uint<16>>(dram_input_bank_1_buf(63, 48))), enabled);
      WriteData(fifo_st_1, Reinterpret<uint16_t>(static_cast<ap_uint<16>>(dram_input_bank_1_buf(47, 32))), enabled);
      WriteData(fifo_st_2, Reinterpret<uint16_t>(static_cast<ap_uint<16>>(dram_input_bank_1_buf(31, 16))), enabled);
      WriteData(fifo_st_3, Reinterpret<uint16_t>(static_cast<ap_uint<16>>(dram_input_bank_1_buf(15, 0))), enabled);
    } // if not empty
  } // for module_0_epoch
} // Module0Func
void Module1Func(
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_0, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_ld_0
module_1_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      WriteData(fifo_st_0, uint16_t(fifo_ref_0), enabled);
    } // if not empty
  } // for module_1_epoch
} // Module1Func
void Module2Func(
  /*output*/ hls::stream<Data<uint16_t>>* fifo_st_0, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_ld_0
module_2_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      WriteData(fifo_st_0, uint16_t((fifo_ref_0 + 1)), enabled);
    } // if not empty
  } // for module_2_epoch
} // Module2Func
void Module3Func(
  /*output*/ hls::stream<Data<ap_uint<64>>>* dram_pointwise_bank_1_fifo, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_0, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_1, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_2, 
  /* input*/ hls::stream<Data<uint16_t>>* fifo_ld_3)
{
#pragma HLS data_pack variable = dram_pointwise_bank_1_fifo
#pragma HLS data_pack variable = fifo_ld_0
#pragma HLS data_pack variable = fifo_ld_1
#pragma HLS data_pack variable = fifo_ld_2
#pragma HLS data_pack variable = fifo_ld_3
module_3_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!fifo_ld_0->empty() && !fifo_ld_1->empty() && !fifo_ld_2->empty() && !fifo_ld_3->empty())
    {
      uint16_t fifo_ref_0;
      uint16_t fifo_ref_1;
      uint16_t fifo_ref_2;
      uint16_t fifo_ref_3;
      ap_uint<64> dram_pointwise_bank_1_buf;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool fifo_ref_1_enable = ReadData(&fifo_ref_1, fifo_ld_1);
      const bool fifo_ref_2_enable = ReadData(&fifo_ref_2, fifo_ld_2);
      const bool fifo_ref_3_enable = ReadData(&fifo_ref_3, fifo_ld_3);
      const bool enabled = fifo_ref_0_enable && fifo_ref_1_enable && fifo_ref_2_enable && fifo_ref_3_enable;
      enable = enabled;
      dram_pointwise_bank_1_buf(63, 48) = Reinterpret<ap_uint<16>>(fifo_ref_0);
      dram_pointwise_bank_1_buf(47, 32) = Reinterpret<ap_uint<16>>(fifo_ref_1);
      dram_pointwise_bank_1_buf(31, 16) = Reinterpret<ap_uint<16>>(fifo_ref_2);
      dram_pointwise_bank_1_buf(15, 0) = Reinterpret<ap_uint<16>>(fifo_ref_3);
      WriteData(dram_pointwise_bank_1_fifo, dram_pointwise_bank_1_buf, enabled);
    } // if not empty
  } // for module_3_epoch
} // Module3Func
extern "C"
{

void pointwise_kernel(
  ap_uint<64>* bank_1_pointwise,
  ap_uint<64>* bank_1_input,
  uint64_t coalesced_data_num)
{
#pragma HLS interface m_axi port=bank_1_pointwise offset=slave depth=65536 bundle=pointwise_bank_1
#pragma HLS interface m_axi port=bank_1_input offset=slave depth=65536 bundle=input_bank_1

#pragma HLS interface s_axilite port=bank_1_pointwise bundle=control
#pragma HLS interface s_axilite port=bank_1_input bundle=control
#pragma HLS interface s_axilite port=coalesced_data_num bundle=control
#pragma HLS interface s_axilite port=return bundle=control

  hls::stream<Data<ap_uint<64>>> bank_1_input_buf("bank_1_input_buf");
#pragma HLS stream variable=bank_1_input_buf depth=32
#pragma HLS data_pack variable=bank_1_input_buf
  hls::stream<Data<ap_uint<64>>> bank_1_pointwise_buf("bank_1_pointwise_buf");
#pragma HLS stream variable=bank_1_pointwise_buf depth=32
#pragma HLS data_pack variable=bank_1_pointwise_buf

  hls::stream<Data<uint16_t>> from_super_source_to_input_offset_0("from_super_source_to_input_offset_0");
#pragma HLS stream variable=from_super_source_to_input_offset_0 depth=32
#pragma HLS data_pack variable=from_super_source_to_input_offset_0
  hls::stream<Data<uint16_t>> from_super_source_to_input_offset_1("from_super_source_to_input_offset_1");
#pragma HLS stream variable=from_super_source_to_input_offset_1 depth=32
#pragma HLS data_pack variable=from_super_source_to_input_offset_1
  hls::stream<Data<uint16_t>> from_super_source_to_input_offset_2("from_super_source_to_input_offset_2");
#pragma HLS stream variable=from_super_source_to_input_offset_2 depth=32
#pragma HLS data_pack variable=from_super_source_to_input_offset_2
  hls::stream<Data<uint16_t>> from_super_source_to_input_offset_3("from_super_source_to_input_offset_3");
#pragma HLS stream variable=from_super_source_to_input_offset_3 depth=32
#pragma HLS data_pack variable=from_super_source_to_input_offset_3
  hls::stream<Data<uint16_t>> from_input_offset_0_to_pointwise_pe_3("from_input_offset_0_to_pointwise_pe_3");
#pragma HLS stream variable=from_input_offset_0_to_pointwise_pe_3 depth=32
#pragma HLS data_pack variable=from_input_offset_0_to_pointwise_pe_3
  hls::stream<Data<uint16_t>> from_input_offset_1_to_pointwise_pe_2("from_input_offset_1_to_pointwise_pe_2");
#pragma HLS stream variable=from_input_offset_1_to_pointwise_pe_2 depth=32
#pragma HLS data_pack variable=from_input_offset_1_to_pointwise_pe_2
  hls::stream<Data<uint16_t>> from_input_offset_2_to_pointwise_pe_1("from_input_offset_2_to_pointwise_pe_1");
#pragma HLS stream variable=from_input_offset_2_to_pointwise_pe_1 depth=32
#pragma HLS data_pack variable=from_input_offset_2_to_pointwise_pe_1
  hls::stream<Data<uint16_t>> from_input_offset_3_to_pointwise_pe_0("from_input_offset_3_to_pointwise_pe_0");
#pragma HLS stream variable=from_input_offset_3_to_pointwise_pe_0 depth=32
#pragma HLS data_pack variable=from_input_offset_3_to_pointwise_pe_0
  hls::stream<Data<uint16_t>> from_pointwise_pe_3_to_super_sink("from_pointwise_pe_3_to_super_sink");
#pragma HLS stream variable=from_pointwise_pe_3_to_super_sink depth=32
#pragma HLS data_pack variable=from_pointwise_pe_3_to_super_sink
  hls::stream<Data<uint16_t>> from_pointwise_pe_2_to_super_sink("from_pointwise_pe_2_to_super_sink");
#pragma HLS stream variable=from_pointwise_pe_2_to_super_sink depth=32
#pragma HLS data_pack variable=from_pointwise_pe_2_to_super_sink
  hls::stream<Data<uint16_t>> from_pointwise_pe_1_to_super_sink("from_pointwise_pe_1_to_super_sink");
#pragma HLS stream variable=from_pointwise_pe_1_to_super_sink depth=32
#pragma HLS data_pack variable=from_pointwise_pe_1_to_super_sink
  hls::stream<Data<uint16_t>> from_pointwise_pe_0_to_super_sink("from_pointwise_pe_0_to_super_sink");
#pragma HLS stream variable=from_pointwise_pe_0_to_super_sink depth=32
#pragma HLS data_pack variable=from_pointwise_pe_0_to_super_sink

#pragma HLS dataflow
  BurstRead(&bank_1_input_buf, bank_1_input, coalesced_data_num);
  Module0Func(
    /*output*/ &from_super_source_to_input_offset_0, 
    /*output*/ &from_super_source_to_input_offset_1, 
    /*output*/ &from_super_source_to_input_offset_2, 
    /*output*/ &from_super_source_to_input_offset_3, 
    /* input*/ &bank_1_input_buf);
  Module1Func(
    /*output*/ &from_input_offset_0_to_pointwise_pe_3, 
    /* input*/ &from_super_source_to_input_offset_0);
  Module1Func(
    /*output*/ &from_input_offset_1_to_pointwise_pe_2, 
    /* input*/ &from_super_source_to_input_offset_1);
  Module1Func(
    /*output*/ &from_input_offset_2_to_pointwise_pe_1, 
    /* input*/ &from_super_source_to_input_offset_2);
  Module1Func(
    /*output*/ &from_input_offset_3_to_pointwise_pe_0, 
    /* input*/ &from_super_source_to_input_offset_3);
  Module2Func(
    /*output*/ &from_pointwise_pe_3_to_super_sink, 
    /* input*/ &from_input_offset_0_to_pointwise_pe_3);
  Module2Func(
    /*output*/ &from_pointwise_pe_2_to_super_sink, 
    /* input*/ &from_input_offset_1_to_pointwise_pe_2);
  Module2Func(
    /*output*/ &from_pointwise_pe_1_to_super_sink, 
    /* input*/ &from_input_offset_2_to_pointwise_pe_1);
  Module2Func(
    /*output*/ &from_pointwise_pe_0_to_super_sink, 
    /* input*/ &from_input_offset_3_to_pointwise_pe_0);
  Module3Func(
    /*output*/ &bank_1_pointwise_buf, 
    /* input*/ &from_pointwise_pe_3_to_super_sink, 
    /* input*/ &from_pointwise_pe_2_to_super_sink, 
    /* input*/ &from_pointwise_pe_1_to_super_sink, 
    /* input*/ &from_pointwise_pe_0_to_super_sink);
  BurstWrite(bank_1_pointwise, &bank_1_pointwise_buf, coalesced_data_num);
}

}//extern "C"
