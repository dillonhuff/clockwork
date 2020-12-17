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
#define BURST_WIDTH 16
#endif//BURST_WIDTH

#ifdef UNROLL_FACTOR
#if UNROLL_FACTOR != 1
#error UNROLL_FACTOR != 1
#endif//UNROLL_FACTOR != 1
#endif//UNROLL_FACTOR
#ifdef TILE_SIZE_DIM_0
#if TILE_SIZE_DIM_0 != 1922
#error TILE_SIZE_DIM_0 != 1922
#endif//TILE_SIZE_DIM_0 != 1922
#endif//TILE_SIZE_DIM_0
#ifdef BURST_WIDTH
#if BURST_WIDTH != 16
#error BURST_WIDTH != 16
#endif//BURST_WIDTH != 16
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
template<typename T> inline bool ReadData(T* data, hls::stream<Data<T > >* from)
{
#pragma HLS inline
  const Data<T>& tmp = from->read();
  *data = tmp.data;
  return tmp.ctrl;
}
template<typename T> inline void WriteData(hls::stream<Data<T > >* to, const T& data, bool ctrl)
{
#pragma HLS inline
  Data<T> tmp;
  tmp.data = data;
  tmp.ctrl = ctrl;
  to->write(tmp);
}
void BurstRead(hls::stream<Data<ap_uint<BURST_WIDTH> > >* to, ap_uint<BURST_WIDTH>* from, uint64_t data_num)
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
void BurstWrite(ap_uint<BURST_WIDTH>* to, hls::stream<Data<ap_uint<BURST_WIDTH> > >* from, uint64_t data_num)
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
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /* input*/ hls::stream<Data<ap_uint<16 > > >* dram_in_off_chip_bank_0_fifo)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = dram_in_off_chip_bank_0_fifo
module_0_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!dram_in_off_chip_bank_0_fifo->empty())
    {
      ap_uint<16> dram_in_off_chip_bank_0_buf;
      const bool dram_in_off_chip_bank_0_buf_enable = ReadData(&dram_in_off_chip_bank_0_buf, dram_in_off_chip_bank_0_fifo);
      const bool enabled = dram_in_off_chip_bank_0_buf_enable;
      enable = enabled;
      WriteData(fifo_st_0, Reinterpret<uint16_t>(static_cast<ap_uint<16 > >(dram_in_off_chip_bank_0_buf(15, 0))), enabled);
    } // if not empty
  } // for module_0_epoch
} // Module0Func
void Module1Func(
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
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
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_1, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_st_1
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
      WriteData(fifo_st_0, uint16_t(fifo_ref_0), enabled);
      WriteData(fifo_st_1, uint16_t(fifo_ref_0), enabled);
    } // if not empty
  } // for module_2_epoch
} // Module2Func
void Module3Func(
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_1, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_st_1
#pragma HLS data_pack variable = fifo_ld_0
  uint16_t fifo_ref_0_delayed_1921_buf[1921];
  ap_uint<11> fifo_ref_0_delayed_1921_ptr = 0;
module_3_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
#pragma HLS dependence variable=fifo_ref_0_delayed_1921_buf inter false
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      const uint16_t fifo_ref_0_delayed_1921 = fifo_ref_0_delayed_1921_buf[fifo_ref_0_delayed_1921_ptr];;
      const uint16_t let_0 = fifo_ref_0_delayed_1921;
      WriteData(fifo_st_0, uint16_t(let_0), enabled);
      WriteData(fifo_st_1, uint16_t(let_0), enabled);
      fifo_ref_0_delayed_1921_buf[fifo_ref_0_delayed_1921_ptr] = fifo_ref_0;
      fifo_ref_0_delayed_1921_ptr = fifo_ref_0_delayed_1921_ptr < 1920 ? ap_uint<11>(fifo_ref_0_delayed_1921_ptr+1) : ap_uint<11>(0);
    } // if not empty
  } // for module_3_epoch
} // Module3Func
void Module4Func(
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_1, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_st_1
#pragma HLS data_pack variable = fifo_ld_0
  uint16_t fifo_ref_0_delayed_1_buf[1];
  ap_uint<1> fifo_ref_0_delayed_1_ptr = 0;
module_4_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
#pragma HLS dependence variable=fifo_ref_0_delayed_1_buf inter false
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      const uint16_t fifo_ref_0_delayed_1 = fifo_ref_0_delayed_1_buf[fifo_ref_0_delayed_1_ptr];;
      const uint16_t let_0 = fifo_ref_0_delayed_1;
      WriteData(fifo_st_0, uint16_t(let_0), enabled);
      WriteData(fifo_st_1, uint16_t(let_0), enabled);
      fifo_ref_0_delayed_1_buf[fifo_ref_0_delayed_1_ptr] = fifo_ref_0;
      fifo_ref_0_delayed_1_ptr = fifo_ref_0_delayed_1_ptr < 0 ? ap_uint<1>(fifo_ref_0_delayed_1_ptr+1) : ap_uint<1>(0);
    } // if not empty
  } // for module_4_epoch
} // Module4Func
void Module5Func(
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_ld_0
  uint16_t fifo_ref_0_delayed_1_buf[1];
  ap_uint<1> fifo_ref_0_delayed_1_ptr = 0;
module_5_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
#pragma HLS dependence variable=fifo_ref_0_delayed_1_buf inter false
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      const uint16_t fifo_ref_0_delayed_1 = fifo_ref_0_delayed_1_buf[fifo_ref_0_delayed_1_ptr];;
      const uint16_t let_0 = fifo_ref_0_delayed_1;
      WriteData(fifo_st_0, uint16_t(let_0), enabled);
      fifo_ref_0_delayed_1_buf[fifo_ref_0_delayed_1_ptr] = fifo_ref_0;
      fifo_ref_0_delayed_1_ptr = fifo_ref_0_delayed_1_ptr < 0 ? ap_uint<1>(fifo_ref_0_delayed_1_ptr+1) : ap_uint<1>(0);
    } // if not empty
  } // for module_5_epoch
} // Module5Func
void Module6Func(
  /*output*/ hls::stream<Data<uint16_t > >* fifo_st_0, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_1, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_2, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_3)
{
#pragma HLS data_pack variable = fifo_st_0
#pragma HLS data_pack variable = fifo_ld_0
#pragma HLS data_pack variable = fifo_ld_1
#pragma HLS data_pack variable = fifo_ld_2
#pragma HLS data_pack variable = fifo_ld_3
module_6_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!fifo_ld_0->empty() && !fifo_ld_1->empty() && !fifo_ld_2->empty() && !fifo_ld_3->empty())
    {
      uint16_t fifo_ref_0;
      uint16_t fifo_ref_1;
      uint16_t fifo_ref_2;
      uint16_t fifo_ref_3;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool fifo_ref_1_enable = ReadData(&fifo_ref_1, fifo_ld_1);
      const bool fifo_ref_2_enable = ReadData(&fifo_ref_2, fifo_ld_2);
      const bool fifo_ref_3_enable = ReadData(&fifo_ref_3, fifo_ld_3);
      const bool enabled = fifo_ref_0_enable && fifo_ref_1_enable && fifo_ref_2_enable && fifo_ref_3_enable;
      enable = enabled;
      WriteData(fifo_st_0, uint16_t(((fifo_ref_0 + fifo_ref_1) + (fifo_ref_2 + (fifo_ref_3 + fifo_ref_0)) * 5)), enabled);
    } // if not empty
  } // for module_6_epoch
} // Module6Func
void Module7Func(
  /*output*/ hls::stream<Data<ap_uint<16 > > >* dram_icsc_1s_1_bank_0_fifo, 
  /* input*/ hls::stream<Data<uint16_t > >* fifo_ld_0)
{
#pragma HLS data_pack variable = dram_icsc_1s_1_bank_0_fifo
#pragma HLS data_pack variable = fifo_ld_0
module_7_epoch:
  for (bool enable = true; enable;)
  {
#pragma HLS pipeline II=1
    if (!fifo_ld_0->empty())
    {
      uint16_t fifo_ref_0;
      ap_uint<16> dram_icsc_1s_1_bank_0_buf;
      const bool fifo_ref_0_enable = ReadData(&fifo_ref_0, fifo_ld_0);
      const bool enabled = fifo_ref_0_enable;
      enable = enabled;
      dram_icsc_1s_1_bank_0_buf(15, 0) = Reinterpret<ap_uint<16 > >(fifo_ref_0);
      WriteData(dram_icsc_1s_1_bank_0_fifo, dram_icsc_1s_1_bank_0_buf, enabled);
    } // if not empty
  } // for module_7_epoch
} // Module7Func
extern "C"
{

void icsc_1s_1_opt_kernel(
  ap_uint<16>* bank_0_icsc_1s_1,
  ap_uint<16>* bank_0_in_off_chip,
  uint64_t coalesced_data_num)
{
#pragma HLS interface m_axi port=bank_0_icsc_1s_1 offset=slave depth=65536 bundle=icsc_1s_1_bank_0
#pragma HLS interface m_axi port=bank_0_in_off_chip offset=slave depth=65536 bundle=in_off_chip_bank_0

#pragma HLS interface s_axilite port=bank_0_icsc_1s_1 bundle=control
#pragma HLS interface s_axilite port=bank_0_in_off_chip bundle=control
#pragma HLS interface s_axilite port=coalesced_data_num bundle=control
#pragma HLS interface s_axilite port=return bundle=control

  hls::stream<Data<ap_uint<16> > > bank_0_in_off_chip_buf("bank_0_in_off_chip_buf");
#pragma HLS stream variable=bank_0_in_off_chip_buf depth=32
#pragma HLS data_pack variable=bank_0_in_off_chip_buf
  hls::stream<Data<ap_uint<16> > > bank_0_icsc_1s_1_buf("bank_0_icsc_1s_1_buf");
#pragma HLS stream variable=bank_0_icsc_1s_1_buf depth=32
#pragma HLS data_pack variable=bank_0_icsc_1s_1_buf

  hls::stream<Data<uint16_t > > from_super_source_to_in_off_chip_offset_0("from_super_source_to_in_off_chip_offset_0");
#pragma HLS stream variable=from_super_source_to_in_off_chip_offset_0 depth=32
#pragma HLS data_pack variable=from_super_source_to_in_off_chip_offset_0
  hls::stream<Data<uint16_t > > from_in_off_chip_offset_0_to_in_pe_0("from_in_off_chip_offset_0_to_in_pe_0");
#pragma HLS stream variable=from_in_off_chip_offset_0_to_in_pe_0 depth=32
#pragma HLS data_pack variable=from_in_off_chip_offset_0_to_in_pe_0
  hls::stream<Data<uint16_t > > from_in_pe_0_to_in_offset_0("from_in_pe_0_to_in_offset_0");
#pragma HLS stream variable=from_in_pe_0_to_in_offset_0 depth=32
#pragma HLS data_pack variable=from_in_pe_0_to_in_offset_0
  hls::stream<Data<uint16_t > > from_in_offset_0_to_in_offset_1921("from_in_offset_0_to_in_offset_1921");
#pragma HLS stream variable=from_in_offset_0_to_in_offset_1921 depth=32
#pragma HLS data_pack variable=from_in_offset_0_to_in_offset_1921
  hls::stream<Data<uint16_t > > from_in_offset_0_to_stg0_pe_0("from_in_offset_0_to_stg0_pe_0");
#pragma HLS stream variable=from_in_offset_0_to_stg0_pe_0 depth=32
#pragma HLS data_pack variable=from_in_offset_0_to_stg0_pe_0
  hls::stream<Data<uint16_t > > from_in_offset_1921_to_in_offset_1922("from_in_offset_1921_to_in_offset_1922");
#pragma HLS stream variable=from_in_offset_1921_to_in_offset_1922 depth=32
#pragma HLS data_pack variable=from_in_offset_1921_to_in_offset_1922
  hls::stream<Data<uint16_t > > from_in_offset_1921_to_stg0_pe_0("from_in_offset_1921_to_stg0_pe_0");
#pragma HLS stream variable=from_in_offset_1921_to_stg0_pe_0 depth=32
#pragma HLS data_pack variable=from_in_offset_1921_to_stg0_pe_0
  hls::stream<Data<uint16_t > > from_in_offset_1922_to_in_offset_1923("from_in_offset_1922_to_in_offset_1923");
#pragma HLS stream variable=from_in_offset_1922_to_in_offset_1923 depth=32
#pragma HLS data_pack variable=from_in_offset_1922_to_in_offset_1923
  hls::stream<Data<uint16_t > > from_in_offset_1922_to_stg0_pe_0("from_in_offset_1922_to_stg0_pe_0");
#pragma HLS stream variable=from_in_offset_1922_to_stg0_pe_0 depth=32
#pragma HLS data_pack variable=from_in_offset_1922_to_stg0_pe_0
  hls::stream<Data<uint16_t > > from_in_offset_1923_to_stg0_pe_0("from_in_offset_1923_to_stg0_pe_0");
#pragma HLS stream variable=from_in_offset_1923_to_stg0_pe_0 depth=32
#pragma HLS data_pack variable=from_in_offset_1923_to_stg0_pe_0
  hls::stream<Data<uint16_t > > from_stg0_pe_0_to_stg0_offset_0("from_stg0_pe_0_to_stg0_offset_0");
#pragma HLS stream variable=from_stg0_pe_0_to_stg0_offset_0 depth=32
#pragma HLS data_pack variable=from_stg0_pe_0_to_stg0_offset_0
  hls::stream<Data<uint16_t > > from_stg0_offset_0_to_icsc_1s_1_pe_0("from_stg0_offset_0_to_icsc_1s_1_pe_0");
#pragma HLS stream variable=from_stg0_offset_0_to_icsc_1s_1_pe_0 depth=32
#pragma HLS data_pack variable=from_stg0_offset_0_to_icsc_1s_1_pe_0
  hls::stream<Data<uint16_t > > from_icsc_1s_1_pe_0_to_super_sink("from_icsc_1s_1_pe_0_to_super_sink");
#pragma HLS stream variable=from_icsc_1s_1_pe_0_to_super_sink depth=32
#pragma HLS data_pack variable=from_icsc_1s_1_pe_0_to_super_sink

#pragma HLS dataflow
  BurstRead(&bank_0_in_off_chip_buf, bank_0_in_off_chip, coalesced_data_num);
  Module0Func(
    /*output*/ &from_super_source_to_in_off_chip_offset_0, 
    /* input*/ &bank_0_in_off_chip_buf);
  Module1Func(
    /*output*/ &from_in_off_chip_offset_0_to_in_pe_0, 
    /* input*/ &from_super_source_to_in_off_chip_offset_0);
  Module1Func(
    /*output*/ &from_in_pe_0_to_in_offset_0, 
    /* input*/ &from_in_off_chip_offset_0_to_in_pe_0);
  Module2Func(
    /*output*/ &from_in_offset_0_to_in_offset_1921, 
    /*output*/ &from_in_offset_0_to_stg0_pe_0, 
    /* input*/ &from_in_pe_0_to_in_offset_0);
  Module3Func(
    /*output*/ &from_in_offset_1921_to_in_offset_1922, 
    /*output*/ &from_in_offset_1921_to_stg0_pe_0, 
    /* input*/ &from_in_offset_0_to_in_offset_1921);
  Module4Func(
    /*output*/ &from_in_offset_1922_to_in_offset_1923, 
    /*output*/ &from_in_offset_1922_to_stg0_pe_0, 
    /* input*/ &from_in_offset_1921_to_in_offset_1922);
  Module5Func(
    /*output*/ &from_in_offset_1923_to_stg0_pe_0, 
    /* input*/ &from_in_offset_1922_to_in_offset_1923);
  Module6Func(
    /*output*/ &from_stg0_pe_0_to_stg0_offset_0, 
    /* input*/ &from_in_offset_0_to_stg0_pe_0, 
    /* input*/ &from_in_offset_1921_to_stg0_pe_0, 
    /* input*/ &from_in_offset_1922_to_stg0_pe_0, 
    /* input*/ &from_in_offset_1923_to_stg0_pe_0);
  Module1Func(
    /*output*/ &from_stg0_offset_0_to_icsc_1s_1_pe_0, 
    /* input*/ &from_stg0_pe_0_to_stg0_offset_0);
  Module1Func(
    /*output*/ &from_icsc_1s_1_pe_0_to_super_sink, 
    /* input*/ &from_stg0_offset_0_to_icsc_1s_1_pe_0);
  Module7Func(
    /*output*/ &bank_0_icsc_1s_1_buf, 
    /* input*/ &from_icsc_1s_1_pe_0_to_super_sink);
  BurstWrite(bank_0_icsc_1s_1, &bank_0_icsc_1s_1_buf, coalesced_data_num);
}

}//extern "C"
