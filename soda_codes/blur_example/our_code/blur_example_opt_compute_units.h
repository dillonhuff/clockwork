#pragma once

#include "conv_3x3.h"

// Generated compute units...


// Compute unit banks...
  // in1_update_0 unroll factor: 64
hw_uint<2048>  id_unrolled_64(hw_uint<2048>& in1_oc) {
  hw_uint<2048> whole_result;

  hw_uint<32> lane_0_in1_oc;
  set_at<0, 32, 32>(lane_0_in1_oc, in1_oc.extract<0, 31>());
  auto result_0 = id(lane_0_in1_oc);
  set_at<0, 2048, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in1_oc;
  set_at<0, 32, 32>(lane_1_in1_oc, in1_oc.extract<32, 63>());
  auto result_1 = id(lane_1_in1_oc);
  set_at<32, 2048, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in1_oc;
  set_at<0, 32, 32>(lane_2_in1_oc, in1_oc.extract<64, 95>());
  auto result_2 = id(lane_2_in1_oc);
  set_at<64, 2048, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in1_oc;
  set_at<0, 32, 32>(lane_3_in1_oc, in1_oc.extract<96, 127>());
  auto result_3 = id(lane_3_in1_oc);
  set_at<96, 2048, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in1_oc;
  set_at<0, 32, 32>(lane_4_in1_oc, in1_oc.extract<128, 159>());
  auto result_4 = id(lane_4_in1_oc);
  set_at<128, 2048, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in1_oc;
  set_at<0, 32, 32>(lane_5_in1_oc, in1_oc.extract<160, 191>());
  auto result_5 = id(lane_5_in1_oc);
  set_at<160, 2048, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in1_oc;
  set_at<0, 32, 32>(lane_6_in1_oc, in1_oc.extract<192, 223>());
  auto result_6 = id(lane_6_in1_oc);
  set_at<192, 2048, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in1_oc;
  set_at<0, 32, 32>(lane_7_in1_oc, in1_oc.extract<224, 255>());
  auto result_7 = id(lane_7_in1_oc);
  set_at<224, 2048, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in1_oc;
  set_at<0, 32, 32>(lane_8_in1_oc, in1_oc.extract<256, 287>());
  auto result_8 = id(lane_8_in1_oc);
  set_at<256, 2048, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in1_oc;
  set_at<0, 32, 32>(lane_9_in1_oc, in1_oc.extract<288, 319>());
  auto result_9 = id(lane_9_in1_oc);
  set_at<288, 2048, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in1_oc;
  set_at<0, 32, 32>(lane_10_in1_oc, in1_oc.extract<320, 351>());
  auto result_10 = id(lane_10_in1_oc);
  set_at<320, 2048, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in1_oc;
  set_at<0, 32, 32>(lane_11_in1_oc, in1_oc.extract<352, 383>());
  auto result_11 = id(lane_11_in1_oc);
  set_at<352, 2048, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in1_oc;
  set_at<0, 32, 32>(lane_12_in1_oc, in1_oc.extract<384, 415>());
  auto result_12 = id(lane_12_in1_oc);
  set_at<384, 2048, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in1_oc;
  set_at<0, 32, 32>(lane_13_in1_oc, in1_oc.extract<416, 447>());
  auto result_13 = id(lane_13_in1_oc);
  set_at<416, 2048, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in1_oc;
  set_at<0, 32, 32>(lane_14_in1_oc, in1_oc.extract<448, 479>());
  auto result_14 = id(lane_14_in1_oc);
  set_at<448, 2048, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in1_oc;
  set_at<0, 32, 32>(lane_15_in1_oc, in1_oc.extract<480, 511>());
  auto result_15 = id(lane_15_in1_oc);
  set_at<480, 2048, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in1_oc;
  set_at<0, 32, 32>(lane_16_in1_oc, in1_oc.extract<512, 543>());
  auto result_16 = id(lane_16_in1_oc);
  set_at<512, 2048, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in1_oc;
  set_at<0, 32, 32>(lane_17_in1_oc, in1_oc.extract<544, 575>());
  auto result_17 = id(lane_17_in1_oc);
  set_at<544, 2048, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in1_oc;
  set_at<0, 32, 32>(lane_18_in1_oc, in1_oc.extract<576, 607>());
  auto result_18 = id(lane_18_in1_oc);
  set_at<576, 2048, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in1_oc;
  set_at<0, 32, 32>(lane_19_in1_oc, in1_oc.extract<608, 639>());
  auto result_19 = id(lane_19_in1_oc);
  set_at<608, 2048, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in1_oc;
  set_at<0, 32, 32>(lane_20_in1_oc, in1_oc.extract<640, 671>());
  auto result_20 = id(lane_20_in1_oc);
  set_at<640, 2048, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in1_oc;
  set_at<0, 32, 32>(lane_21_in1_oc, in1_oc.extract<672, 703>());
  auto result_21 = id(lane_21_in1_oc);
  set_at<672, 2048, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in1_oc;
  set_at<0, 32, 32>(lane_22_in1_oc, in1_oc.extract<704, 735>());
  auto result_22 = id(lane_22_in1_oc);
  set_at<704, 2048, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in1_oc;
  set_at<0, 32, 32>(lane_23_in1_oc, in1_oc.extract<736, 767>());
  auto result_23 = id(lane_23_in1_oc);
  set_at<736, 2048, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in1_oc;
  set_at<0, 32, 32>(lane_24_in1_oc, in1_oc.extract<768, 799>());
  auto result_24 = id(lane_24_in1_oc);
  set_at<768, 2048, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in1_oc;
  set_at<0, 32, 32>(lane_25_in1_oc, in1_oc.extract<800, 831>());
  auto result_25 = id(lane_25_in1_oc);
  set_at<800, 2048, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in1_oc;
  set_at<0, 32, 32>(lane_26_in1_oc, in1_oc.extract<832, 863>());
  auto result_26 = id(lane_26_in1_oc);
  set_at<832, 2048, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in1_oc;
  set_at<0, 32, 32>(lane_27_in1_oc, in1_oc.extract<864, 895>());
  auto result_27 = id(lane_27_in1_oc);
  set_at<864, 2048, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in1_oc;
  set_at<0, 32, 32>(lane_28_in1_oc, in1_oc.extract<896, 927>());
  auto result_28 = id(lane_28_in1_oc);
  set_at<896, 2048, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in1_oc;
  set_at<0, 32, 32>(lane_29_in1_oc, in1_oc.extract<928, 959>());
  auto result_29 = id(lane_29_in1_oc);
  set_at<928, 2048, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in1_oc;
  set_at<0, 32, 32>(lane_30_in1_oc, in1_oc.extract<960, 991>());
  auto result_30 = id(lane_30_in1_oc);
  set_at<960, 2048, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in1_oc;
  set_at<0, 32, 32>(lane_31_in1_oc, in1_oc.extract<992, 1023>());
  auto result_31 = id(lane_31_in1_oc);
  set_at<992, 2048, 32>(whole_result, result_31);

  hw_uint<32> lane_32_in1_oc;
  set_at<0, 32, 32>(lane_32_in1_oc, in1_oc.extract<1024, 1055>());
  auto result_32 = id(lane_32_in1_oc);
  set_at<1024, 2048, 32>(whole_result, result_32);

  hw_uint<32> lane_33_in1_oc;
  set_at<0, 32, 32>(lane_33_in1_oc, in1_oc.extract<1056, 1087>());
  auto result_33 = id(lane_33_in1_oc);
  set_at<1056, 2048, 32>(whole_result, result_33);

  hw_uint<32> lane_34_in1_oc;
  set_at<0, 32, 32>(lane_34_in1_oc, in1_oc.extract<1088, 1119>());
  auto result_34 = id(lane_34_in1_oc);
  set_at<1088, 2048, 32>(whole_result, result_34);

  hw_uint<32> lane_35_in1_oc;
  set_at<0, 32, 32>(lane_35_in1_oc, in1_oc.extract<1120, 1151>());
  auto result_35 = id(lane_35_in1_oc);
  set_at<1120, 2048, 32>(whole_result, result_35);

  hw_uint<32> lane_36_in1_oc;
  set_at<0, 32, 32>(lane_36_in1_oc, in1_oc.extract<1152, 1183>());
  auto result_36 = id(lane_36_in1_oc);
  set_at<1152, 2048, 32>(whole_result, result_36);

  hw_uint<32> lane_37_in1_oc;
  set_at<0, 32, 32>(lane_37_in1_oc, in1_oc.extract<1184, 1215>());
  auto result_37 = id(lane_37_in1_oc);
  set_at<1184, 2048, 32>(whole_result, result_37);

  hw_uint<32> lane_38_in1_oc;
  set_at<0, 32, 32>(lane_38_in1_oc, in1_oc.extract<1216, 1247>());
  auto result_38 = id(lane_38_in1_oc);
  set_at<1216, 2048, 32>(whole_result, result_38);

  hw_uint<32> lane_39_in1_oc;
  set_at<0, 32, 32>(lane_39_in1_oc, in1_oc.extract<1248, 1279>());
  auto result_39 = id(lane_39_in1_oc);
  set_at<1248, 2048, 32>(whole_result, result_39);

  hw_uint<32> lane_40_in1_oc;
  set_at<0, 32, 32>(lane_40_in1_oc, in1_oc.extract<1280, 1311>());
  auto result_40 = id(lane_40_in1_oc);
  set_at<1280, 2048, 32>(whole_result, result_40);

  hw_uint<32> lane_41_in1_oc;
  set_at<0, 32, 32>(lane_41_in1_oc, in1_oc.extract<1312, 1343>());
  auto result_41 = id(lane_41_in1_oc);
  set_at<1312, 2048, 32>(whole_result, result_41);

  hw_uint<32> lane_42_in1_oc;
  set_at<0, 32, 32>(lane_42_in1_oc, in1_oc.extract<1344, 1375>());
  auto result_42 = id(lane_42_in1_oc);
  set_at<1344, 2048, 32>(whole_result, result_42);

  hw_uint<32> lane_43_in1_oc;
  set_at<0, 32, 32>(lane_43_in1_oc, in1_oc.extract<1376, 1407>());
  auto result_43 = id(lane_43_in1_oc);
  set_at<1376, 2048, 32>(whole_result, result_43);

  hw_uint<32> lane_44_in1_oc;
  set_at<0, 32, 32>(lane_44_in1_oc, in1_oc.extract<1408, 1439>());
  auto result_44 = id(lane_44_in1_oc);
  set_at<1408, 2048, 32>(whole_result, result_44);

  hw_uint<32> lane_45_in1_oc;
  set_at<0, 32, 32>(lane_45_in1_oc, in1_oc.extract<1440, 1471>());
  auto result_45 = id(lane_45_in1_oc);
  set_at<1440, 2048, 32>(whole_result, result_45);

  hw_uint<32> lane_46_in1_oc;
  set_at<0, 32, 32>(lane_46_in1_oc, in1_oc.extract<1472, 1503>());
  auto result_46 = id(lane_46_in1_oc);
  set_at<1472, 2048, 32>(whole_result, result_46);

  hw_uint<32> lane_47_in1_oc;
  set_at<0, 32, 32>(lane_47_in1_oc, in1_oc.extract<1504, 1535>());
  auto result_47 = id(lane_47_in1_oc);
  set_at<1504, 2048, 32>(whole_result, result_47);

  hw_uint<32> lane_48_in1_oc;
  set_at<0, 32, 32>(lane_48_in1_oc, in1_oc.extract<1536, 1567>());
  auto result_48 = id(lane_48_in1_oc);
  set_at<1536, 2048, 32>(whole_result, result_48);

  hw_uint<32> lane_49_in1_oc;
  set_at<0, 32, 32>(lane_49_in1_oc, in1_oc.extract<1568, 1599>());
  auto result_49 = id(lane_49_in1_oc);
  set_at<1568, 2048, 32>(whole_result, result_49);

  hw_uint<32> lane_50_in1_oc;
  set_at<0, 32, 32>(lane_50_in1_oc, in1_oc.extract<1600, 1631>());
  auto result_50 = id(lane_50_in1_oc);
  set_at<1600, 2048, 32>(whole_result, result_50);

  hw_uint<32> lane_51_in1_oc;
  set_at<0, 32, 32>(lane_51_in1_oc, in1_oc.extract<1632, 1663>());
  auto result_51 = id(lane_51_in1_oc);
  set_at<1632, 2048, 32>(whole_result, result_51);

  hw_uint<32> lane_52_in1_oc;
  set_at<0, 32, 32>(lane_52_in1_oc, in1_oc.extract<1664, 1695>());
  auto result_52 = id(lane_52_in1_oc);
  set_at<1664, 2048, 32>(whole_result, result_52);

  hw_uint<32> lane_53_in1_oc;
  set_at<0, 32, 32>(lane_53_in1_oc, in1_oc.extract<1696, 1727>());
  auto result_53 = id(lane_53_in1_oc);
  set_at<1696, 2048, 32>(whole_result, result_53);

  hw_uint<32> lane_54_in1_oc;
  set_at<0, 32, 32>(lane_54_in1_oc, in1_oc.extract<1728, 1759>());
  auto result_54 = id(lane_54_in1_oc);
  set_at<1728, 2048, 32>(whole_result, result_54);

  hw_uint<32> lane_55_in1_oc;
  set_at<0, 32, 32>(lane_55_in1_oc, in1_oc.extract<1760, 1791>());
  auto result_55 = id(lane_55_in1_oc);
  set_at<1760, 2048, 32>(whole_result, result_55);

  hw_uint<32> lane_56_in1_oc;
  set_at<0, 32, 32>(lane_56_in1_oc, in1_oc.extract<1792, 1823>());
  auto result_56 = id(lane_56_in1_oc);
  set_at<1792, 2048, 32>(whole_result, result_56);

  hw_uint<32> lane_57_in1_oc;
  set_at<0, 32, 32>(lane_57_in1_oc, in1_oc.extract<1824, 1855>());
  auto result_57 = id(lane_57_in1_oc);
  set_at<1824, 2048, 32>(whole_result, result_57);

  hw_uint<32> lane_58_in1_oc;
  set_at<0, 32, 32>(lane_58_in1_oc, in1_oc.extract<1856, 1887>());
  auto result_58 = id(lane_58_in1_oc);
  set_at<1856, 2048, 32>(whole_result, result_58);

  hw_uint<32> lane_59_in1_oc;
  set_at<0, 32, 32>(lane_59_in1_oc, in1_oc.extract<1888, 1919>());
  auto result_59 = id(lane_59_in1_oc);
  set_at<1888, 2048, 32>(whole_result, result_59);

  hw_uint<32> lane_60_in1_oc;
  set_at<0, 32, 32>(lane_60_in1_oc, in1_oc.extract<1920, 1951>());
  auto result_60 = id(lane_60_in1_oc);
  set_at<1920, 2048, 32>(whole_result, result_60);

  hw_uint<32> lane_61_in1_oc;
  set_at<0, 32, 32>(lane_61_in1_oc, in1_oc.extract<1952, 1983>());
  auto result_61 = id(lane_61_in1_oc);
  set_at<1952, 2048, 32>(whole_result, result_61);

  hw_uint<32> lane_62_in1_oc;
  set_at<0, 32, 32>(lane_62_in1_oc, in1_oc.extract<1984, 2015>());
  auto result_62 = id(lane_62_in1_oc);
  set_at<1984, 2048, 32>(whole_result, result_62);

  hw_uint<32> lane_63_in1_oc;
  set_at<0, 32, 32>(lane_63_in1_oc, in1_oc.extract<2016, 2047>());
  auto result_63 = id(lane_63_in1_oc);
  set_at<2016, 2048, 32>(whole_result, result_63);
  return whole_result;
}

  // average_update_0 unroll factor: 64
hw_uint<2048>  add_unrolled_64(hw_uint<2048>& in0, hw_uint<2048>& in1) {
  hw_uint<2048> whole_result;

  hw_uint<32> lane_0_in0;
  set_at<0, 32, 32>(lane_0_in0, in0.extract<0, 31>());
  hw_uint<32> lane_0_in1;
  set_at<0, 32, 32>(lane_0_in1, in1.extract<0, 31>());
  auto result_0 = add(lane_0_in0, lane_0_in1);
  set_at<0, 2048, 32>(whole_result, result_0);

  hw_uint<32> lane_1_in0;
  set_at<0, 32, 32>(lane_1_in0, in0.extract<32, 63>());
  hw_uint<32> lane_1_in1;
  set_at<0, 32, 32>(lane_1_in1, in1.extract<32, 63>());
  auto result_1 = add(lane_1_in0, lane_1_in1);
  set_at<32, 2048, 32>(whole_result, result_1);

  hw_uint<32> lane_2_in0;
  set_at<0, 32, 32>(lane_2_in0, in0.extract<64, 95>());
  hw_uint<32> lane_2_in1;
  set_at<0, 32, 32>(lane_2_in1, in1.extract<64, 95>());
  auto result_2 = add(lane_2_in0, lane_2_in1);
  set_at<64, 2048, 32>(whole_result, result_2);

  hw_uint<32> lane_3_in0;
  set_at<0, 32, 32>(lane_3_in0, in0.extract<96, 127>());
  hw_uint<32> lane_3_in1;
  set_at<0, 32, 32>(lane_3_in1, in1.extract<96, 127>());
  auto result_3 = add(lane_3_in0, lane_3_in1);
  set_at<96, 2048, 32>(whole_result, result_3);

  hw_uint<32> lane_4_in0;
  set_at<0, 32, 32>(lane_4_in0, in0.extract<128, 159>());
  hw_uint<32> lane_4_in1;
  set_at<0, 32, 32>(lane_4_in1, in1.extract<128, 159>());
  auto result_4 = add(lane_4_in0, lane_4_in1);
  set_at<128, 2048, 32>(whole_result, result_4);

  hw_uint<32> lane_5_in0;
  set_at<0, 32, 32>(lane_5_in0, in0.extract<160, 191>());
  hw_uint<32> lane_5_in1;
  set_at<0, 32, 32>(lane_5_in1, in1.extract<160, 191>());
  auto result_5 = add(lane_5_in0, lane_5_in1);
  set_at<160, 2048, 32>(whole_result, result_5);

  hw_uint<32> lane_6_in0;
  set_at<0, 32, 32>(lane_6_in0, in0.extract<192, 223>());
  hw_uint<32> lane_6_in1;
  set_at<0, 32, 32>(lane_6_in1, in1.extract<192, 223>());
  auto result_6 = add(lane_6_in0, lane_6_in1);
  set_at<192, 2048, 32>(whole_result, result_6);

  hw_uint<32> lane_7_in0;
  set_at<0, 32, 32>(lane_7_in0, in0.extract<224, 255>());
  hw_uint<32> lane_7_in1;
  set_at<0, 32, 32>(lane_7_in1, in1.extract<224, 255>());
  auto result_7 = add(lane_7_in0, lane_7_in1);
  set_at<224, 2048, 32>(whole_result, result_7);

  hw_uint<32> lane_8_in0;
  set_at<0, 32, 32>(lane_8_in0, in0.extract<256, 287>());
  hw_uint<32> lane_8_in1;
  set_at<0, 32, 32>(lane_8_in1, in1.extract<256, 287>());
  auto result_8 = add(lane_8_in0, lane_8_in1);
  set_at<256, 2048, 32>(whole_result, result_8);

  hw_uint<32> lane_9_in0;
  set_at<0, 32, 32>(lane_9_in0, in0.extract<288, 319>());
  hw_uint<32> lane_9_in1;
  set_at<0, 32, 32>(lane_9_in1, in1.extract<288, 319>());
  auto result_9 = add(lane_9_in0, lane_9_in1);
  set_at<288, 2048, 32>(whole_result, result_9);

  hw_uint<32> lane_10_in0;
  set_at<0, 32, 32>(lane_10_in0, in0.extract<320, 351>());
  hw_uint<32> lane_10_in1;
  set_at<0, 32, 32>(lane_10_in1, in1.extract<320, 351>());
  auto result_10 = add(lane_10_in0, lane_10_in1);
  set_at<320, 2048, 32>(whole_result, result_10);

  hw_uint<32> lane_11_in0;
  set_at<0, 32, 32>(lane_11_in0, in0.extract<352, 383>());
  hw_uint<32> lane_11_in1;
  set_at<0, 32, 32>(lane_11_in1, in1.extract<352, 383>());
  auto result_11 = add(lane_11_in0, lane_11_in1);
  set_at<352, 2048, 32>(whole_result, result_11);

  hw_uint<32> lane_12_in0;
  set_at<0, 32, 32>(lane_12_in0, in0.extract<384, 415>());
  hw_uint<32> lane_12_in1;
  set_at<0, 32, 32>(lane_12_in1, in1.extract<384, 415>());
  auto result_12 = add(lane_12_in0, lane_12_in1);
  set_at<384, 2048, 32>(whole_result, result_12);

  hw_uint<32> lane_13_in0;
  set_at<0, 32, 32>(lane_13_in0, in0.extract<416, 447>());
  hw_uint<32> lane_13_in1;
  set_at<0, 32, 32>(lane_13_in1, in1.extract<416, 447>());
  auto result_13 = add(lane_13_in0, lane_13_in1);
  set_at<416, 2048, 32>(whole_result, result_13);

  hw_uint<32> lane_14_in0;
  set_at<0, 32, 32>(lane_14_in0, in0.extract<448, 479>());
  hw_uint<32> lane_14_in1;
  set_at<0, 32, 32>(lane_14_in1, in1.extract<448, 479>());
  auto result_14 = add(lane_14_in0, lane_14_in1);
  set_at<448, 2048, 32>(whole_result, result_14);

  hw_uint<32> lane_15_in0;
  set_at<0, 32, 32>(lane_15_in0, in0.extract<480, 511>());
  hw_uint<32> lane_15_in1;
  set_at<0, 32, 32>(lane_15_in1, in1.extract<480, 511>());
  auto result_15 = add(lane_15_in0, lane_15_in1);
  set_at<480, 2048, 32>(whole_result, result_15);

  hw_uint<32> lane_16_in0;
  set_at<0, 32, 32>(lane_16_in0, in0.extract<512, 543>());
  hw_uint<32> lane_16_in1;
  set_at<0, 32, 32>(lane_16_in1, in1.extract<512, 543>());
  auto result_16 = add(lane_16_in0, lane_16_in1);
  set_at<512, 2048, 32>(whole_result, result_16);

  hw_uint<32> lane_17_in0;
  set_at<0, 32, 32>(lane_17_in0, in0.extract<544, 575>());
  hw_uint<32> lane_17_in1;
  set_at<0, 32, 32>(lane_17_in1, in1.extract<544, 575>());
  auto result_17 = add(lane_17_in0, lane_17_in1);
  set_at<544, 2048, 32>(whole_result, result_17);

  hw_uint<32> lane_18_in0;
  set_at<0, 32, 32>(lane_18_in0, in0.extract<576, 607>());
  hw_uint<32> lane_18_in1;
  set_at<0, 32, 32>(lane_18_in1, in1.extract<576, 607>());
  auto result_18 = add(lane_18_in0, lane_18_in1);
  set_at<576, 2048, 32>(whole_result, result_18);

  hw_uint<32> lane_19_in0;
  set_at<0, 32, 32>(lane_19_in0, in0.extract<608, 639>());
  hw_uint<32> lane_19_in1;
  set_at<0, 32, 32>(lane_19_in1, in1.extract<608, 639>());
  auto result_19 = add(lane_19_in0, lane_19_in1);
  set_at<608, 2048, 32>(whole_result, result_19);

  hw_uint<32> lane_20_in0;
  set_at<0, 32, 32>(lane_20_in0, in0.extract<640, 671>());
  hw_uint<32> lane_20_in1;
  set_at<0, 32, 32>(lane_20_in1, in1.extract<640, 671>());
  auto result_20 = add(lane_20_in0, lane_20_in1);
  set_at<640, 2048, 32>(whole_result, result_20);

  hw_uint<32> lane_21_in0;
  set_at<0, 32, 32>(lane_21_in0, in0.extract<672, 703>());
  hw_uint<32> lane_21_in1;
  set_at<0, 32, 32>(lane_21_in1, in1.extract<672, 703>());
  auto result_21 = add(lane_21_in0, lane_21_in1);
  set_at<672, 2048, 32>(whole_result, result_21);

  hw_uint<32> lane_22_in0;
  set_at<0, 32, 32>(lane_22_in0, in0.extract<704, 735>());
  hw_uint<32> lane_22_in1;
  set_at<0, 32, 32>(lane_22_in1, in1.extract<704, 735>());
  auto result_22 = add(lane_22_in0, lane_22_in1);
  set_at<704, 2048, 32>(whole_result, result_22);

  hw_uint<32> lane_23_in0;
  set_at<0, 32, 32>(lane_23_in0, in0.extract<736, 767>());
  hw_uint<32> lane_23_in1;
  set_at<0, 32, 32>(lane_23_in1, in1.extract<736, 767>());
  auto result_23 = add(lane_23_in0, lane_23_in1);
  set_at<736, 2048, 32>(whole_result, result_23);

  hw_uint<32> lane_24_in0;
  set_at<0, 32, 32>(lane_24_in0, in0.extract<768, 799>());
  hw_uint<32> lane_24_in1;
  set_at<0, 32, 32>(lane_24_in1, in1.extract<768, 799>());
  auto result_24 = add(lane_24_in0, lane_24_in1);
  set_at<768, 2048, 32>(whole_result, result_24);

  hw_uint<32> lane_25_in0;
  set_at<0, 32, 32>(lane_25_in0, in0.extract<800, 831>());
  hw_uint<32> lane_25_in1;
  set_at<0, 32, 32>(lane_25_in1, in1.extract<800, 831>());
  auto result_25 = add(lane_25_in0, lane_25_in1);
  set_at<800, 2048, 32>(whole_result, result_25);

  hw_uint<32> lane_26_in0;
  set_at<0, 32, 32>(lane_26_in0, in0.extract<832, 863>());
  hw_uint<32> lane_26_in1;
  set_at<0, 32, 32>(lane_26_in1, in1.extract<832, 863>());
  auto result_26 = add(lane_26_in0, lane_26_in1);
  set_at<832, 2048, 32>(whole_result, result_26);

  hw_uint<32> lane_27_in0;
  set_at<0, 32, 32>(lane_27_in0, in0.extract<864, 895>());
  hw_uint<32> lane_27_in1;
  set_at<0, 32, 32>(lane_27_in1, in1.extract<864, 895>());
  auto result_27 = add(lane_27_in0, lane_27_in1);
  set_at<864, 2048, 32>(whole_result, result_27);

  hw_uint<32> lane_28_in0;
  set_at<0, 32, 32>(lane_28_in0, in0.extract<896, 927>());
  hw_uint<32> lane_28_in1;
  set_at<0, 32, 32>(lane_28_in1, in1.extract<896, 927>());
  auto result_28 = add(lane_28_in0, lane_28_in1);
  set_at<896, 2048, 32>(whole_result, result_28);

  hw_uint<32> lane_29_in0;
  set_at<0, 32, 32>(lane_29_in0, in0.extract<928, 959>());
  hw_uint<32> lane_29_in1;
  set_at<0, 32, 32>(lane_29_in1, in1.extract<928, 959>());
  auto result_29 = add(lane_29_in0, lane_29_in1);
  set_at<928, 2048, 32>(whole_result, result_29);

  hw_uint<32> lane_30_in0;
  set_at<0, 32, 32>(lane_30_in0, in0.extract<960, 991>());
  hw_uint<32> lane_30_in1;
  set_at<0, 32, 32>(lane_30_in1, in1.extract<960, 991>());
  auto result_30 = add(lane_30_in0, lane_30_in1);
  set_at<960, 2048, 32>(whole_result, result_30);

  hw_uint<32> lane_31_in0;
  set_at<0, 32, 32>(lane_31_in0, in0.extract<992, 1023>());
  hw_uint<32> lane_31_in1;
  set_at<0, 32, 32>(lane_31_in1, in1.extract<992, 1023>());
  auto result_31 = add(lane_31_in0, lane_31_in1);
  set_at<992, 2048, 32>(whole_result, result_31);

  hw_uint<32> lane_32_in0;
  set_at<0, 32, 32>(lane_32_in0, in0.extract<1024, 1055>());
  hw_uint<32> lane_32_in1;
  set_at<0, 32, 32>(lane_32_in1, in1.extract<1024, 1055>());
  auto result_32 = add(lane_32_in0, lane_32_in1);
  set_at<1024, 2048, 32>(whole_result, result_32);

  hw_uint<32> lane_33_in0;
  set_at<0, 32, 32>(lane_33_in0, in0.extract<1056, 1087>());
  hw_uint<32> lane_33_in1;
  set_at<0, 32, 32>(lane_33_in1, in1.extract<1056, 1087>());
  auto result_33 = add(lane_33_in0, lane_33_in1);
  set_at<1056, 2048, 32>(whole_result, result_33);

  hw_uint<32> lane_34_in0;
  set_at<0, 32, 32>(lane_34_in0, in0.extract<1088, 1119>());
  hw_uint<32> lane_34_in1;
  set_at<0, 32, 32>(lane_34_in1, in1.extract<1088, 1119>());
  auto result_34 = add(lane_34_in0, lane_34_in1);
  set_at<1088, 2048, 32>(whole_result, result_34);

  hw_uint<32> lane_35_in0;
  set_at<0, 32, 32>(lane_35_in0, in0.extract<1120, 1151>());
  hw_uint<32> lane_35_in1;
  set_at<0, 32, 32>(lane_35_in1, in1.extract<1120, 1151>());
  auto result_35 = add(lane_35_in0, lane_35_in1);
  set_at<1120, 2048, 32>(whole_result, result_35);

  hw_uint<32> lane_36_in0;
  set_at<0, 32, 32>(lane_36_in0, in0.extract<1152, 1183>());
  hw_uint<32> lane_36_in1;
  set_at<0, 32, 32>(lane_36_in1, in1.extract<1152, 1183>());
  auto result_36 = add(lane_36_in0, lane_36_in1);
  set_at<1152, 2048, 32>(whole_result, result_36);

  hw_uint<32> lane_37_in0;
  set_at<0, 32, 32>(lane_37_in0, in0.extract<1184, 1215>());
  hw_uint<32> lane_37_in1;
  set_at<0, 32, 32>(lane_37_in1, in1.extract<1184, 1215>());
  auto result_37 = add(lane_37_in0, lane_37_in1);
  set_at<1184, 2048, 32>(whole_result, result_37);

  hw_uint<32> lane_38_in0;
  set_at<0, 32, 32>(lane_38_in0, in0.extract<1216, 1247>());
  hw_uint<32> lane_38_in1;
  set_at<0, 32, 32>(lane_38_in1, in1.extract<1216, 1247>());
  auto result_38 = add(lane_38_in0, lane_38_in1);
  set_at<1216, 2048, 32>(whole_result, result_38);

  hw_uint<32> lane_39_in0;
  set_at<0, 32, 32>(lane_39_in0, in0.extract<1248, 1279>());
  hw_uint<32> lane_39_in1;
  set_at<0, 32, 32>(lane_39_in1, in1.extract<1248, 1279>());
  auto result_39 = add(lane_39_in0, lane_39_in1);
  set_at<1248, 2048, 32>(whole_result, result_39);

  hw_uint<32> lane_40_in0;
  set_at<0, 32, 32>(lane_40_in0, in0.extract<1280, 1311>());
  hw_uint<32> lane_40_in1;
  set_at<0, 32, 32>(lane_40_in1, in1.extract<1280, 1311>());
  auto result_40 = add(lane_40_in0, lane_40_in1);
  set_at<1280, 2048, 32>(whole_result, result_40);

  hw_uint<32> lane_41_in0;
  set_at<0, 32, 32>(lane_41_in0, in0.extract<1312, 1343>());
  hw_uint<32> lane_41_in1;
  set_at<0, 32, 32>(lane_41_in1, in1.extract<1312, 1343>());
  auto result_41 = add(lane_41_in0, lane_41_in1);
  set_at<1312, 2048, 32>(whole_result, result_41);

  hw_uint<32> lane_42_in0;
  set_at<0, 32, 32>(lane_42_in0, in0.extract<1344, 1375>());
  hw_uint<32> lane_42_in1;
  set_at<0, 32, 32>(lane_42_in1, in1.extract<1344, 1375>());
  auto result_42 = add(lane_42_in0, lane_42_in1);
  set_at<1344, 2048, 32>(whole_result, result_42);

  hw_uint<32> lane_43_in0;
  set_at<0, 32, 32>(lane_43_in0, in0.extract<1376, 1407>());
  hw_uint<32> lane_43_in1;
  set_at<0, 32, 32>(lane_43_in1, in1.extract<1376, 1407>());
  auto result_43 = add(lane_43_in0, lane_43_in1);
  set_at<1376, 2048, 32>(whole_result, result_43);

  hw_uint<32> lane_44_in0;
  set_at<0, 32, 32>(lane_44_in0, in0.extract<1408, 1439>());
  hw_uint<32> lane_44_in1;
  set_at<0, 32, 32>(lane_44_in1, in1.extract<1408, 1439>());
  auto result_44 = add(lane_44_in0, lane_44_in1);
  set_at<1408, 2048, 32>(whole_result, result_44);

  hw_uint<32> lane_45_in0;
  set_at<0, 32, 32>(lane_45_in0, in0.extract<1440, 1471>());
  hw_uint<32> lane_45_in1;
  set_at<0, 32, 32>(lane_45_in1, in1.extract<1440, 1471>());
  auto result_45 = add(lane_45_in0, lane_45_in1);
  set_at<1440, 2048, 32>(whole_result, result_45);

  hw_uint<32> lane_46_in0;
  set_at<0, 32, 32>(lane_46_in0, in0.extract<1472, 1503>());
  hw_uint<32> lane_46_in1;
  set_at<0, 32, 32>(lane_46_in1, in1.extract<1472, 1503>());
  auto result_46 = add(lane_46_in0, lane_46_in1);
  set_at<1472, 2048, 32>(whole_result, result_46);

  hw_uint<32> lane_47_in0;
  set_at<0, 32, 32>(lane_47_in0, in0.extract<1504, 1535>());
  hw_uint<32> lane_47_in1;
  set_at<0, 32, 32>(lane_47_in1, in1.extract<1504, 1535>());
  auto result_47 = add(lane_47_in0, lane_47_in1);
  set_at<1504, 2048, 32>(whole_result, result_47);

  hw_uint<32> lane_48_in0;
  set_at<0, 32, 32>(lane_48_in0, in0.extract<1536, 1567>());
  hw_uint<32> lane_48_in1;
  set_at<0, 32, 32>(lane_48_in1, in1.extract<1536, 1567>());
  auto result_48 = add(lane_48_in0, lane_48_in1);
  set_at<1536, 2048, 32>(whole_result, result_48);

  hw_uint<32> lane_49_in0;
  set_at<0, 32, 32>(lane_49_in0, in0.extract<1568, 1599>());
  hw_uint<32> lane_49_in1;
  set_at<0, 32, 32>(lane_49_in1, in1.extract<1568, 1599>());
  auto result_49 = add(lane_49_in0, lane_49_in1);
  set_at<1568, 2048, 32>(whole_result, result_49);

  hw_uint<32> lane_50_in0;
  set_at<0, 32, 32>(lane_50_in0, in0.extract<1600, 1631>());
  hw_uint<32> lane_50_in1;
  set_at<0, 32, 32>(lane_50_in1, in1.extract<1600, 1631>());
  auto result_50 = add(lane_50_in0, lane_50_in1);
  set_at<1600, 2048, 32>(whole_result, result_50);

  hw_uint<32> lane_51_in0;
  set_at<0, 32, 32>(lane_51_in0, in0.extract<1632, 1663>());
  hw_uint<32> lane_51_in1;
  set_at<0, 32, 32>(lane_51_in1, in1.extract<1632, 1663>());
  auto result_51 = add(lane_51_in0, lane_51_in1);
  set_at<1632, 2048, 32>(whole_result, result_51);

  hw_uint<32> lane_52_in0;
  set_at<0, 32, 32>(lane_52_in0, in0.extract<1664, 1695>());
  hw_uint<32> lane_52_in1;
  set_at<0, 32, 32>(lane_52_in1, in1.extract<1664, 1695>());
  auto result_52 = add(lane_52_in0, lane_52_in1);
  set_at<1664, 2048, 32>(whole_result, result_52);

  hw_uint<32> lane_53_in0;
  set_at<0, 32, 32>(lane_53_in0, in0.extract<1696, 1727>());
  hw_uint<32> lane_53_in1;
  set_at<0, 32, 32>(lane_53_in1, in1.extract<1696, 1727>());
  auto result_53 = add(lane_53_in0, lane_53_in1);
  set_at<1696, 2048, 32>(whole_result, result_53);

  hw_uint<32> lane_54_in0;
  set_at<0, 32, 32>(lane_54_in0, in0.extract<1728, 1759>());
  hw_uint<32> lane_54_in1;
  set_at<0, 32, 32>(lane_54_in1, in1.extract<1728, 1759>());
  auto result_54 = add(lane_54_in0, lane_54_in1);
  set_at<1728, 2048, 32>(whole_result, result_54);

  hw_uint<32> lane_55_in0;
  set_at<0, 32, 32>(lane_55_in0, in0.extract<1760, 1791>());
  hw_uint<32> lane_55_in1;
  set_at<0, 32, 32>(lane_55_in1, in1.extract<1760, 1791>());
  auto result_55 = add(lane_55_in0, lane_55_in1);
  set_at<1760, 2048, 32>(whole_result, result_55);

  hw_uint<32> lane_56_in0;
  set_at<0, 32, 32>(lane_56_in0, in0.extract<1792, 1823>());
  hw_uint<32> lane_56_in1;
  set_at<0, 32, 32>(lane_56_in1, in1.extract<1792, 1823>());
  auto result_56 = add(lane_56_in0, lane_56_in1);
  set_at<1792, 2048, 32>(whole_result, result_56);

  hw_uint<32> lane_57_in0;
  set_at<0, 32, 32>(lane_57_in0, in0.extract<1824, 1855>());
  hw_uint<32> lane_57_in1;
  set_at<0, 32, 32>(lane_57_in1, in1.extract<1824, 1855>());
  auto result_57 = add(lane_57_in0, lane_57_in1);
  set_at<1824, 2048, 32>(whole_result, result_57);

  hw_uint<32> lane_58_in0;
  set_at<0, 32, 32>(lane_58_in0, in0.extract<1856, 1887>());
  hw_uint<32> lane_58_in1;
  set_at<0, 32, 32>(lane_58_in1, in1.extract<1856, 1887>());
  auto result_58 = add(lane_58_in0, lane_58_in1);
  set_at<1856, 2048, 32>(whole_result, result_58);

  hw_uint<32> lane_59_in0;
  set_at<0, 32, 32>(lane_59_in0, in0.extract<1888, 1919>());
  hw_uint<32> lane_59_in1;
  set_at<0, 32, 32>(lane_59_in1, in1.extract<1888, 1919>());
  auto result_59 = add(lane_59_in0, lane_59_in1);
  set_at<1888, 2048, 32>(whole_result, result_59);

  hw_uint<32> lane_60_in0;
  set_at<0, 32, 32>(lane_60_in0, in0.extract<1920, 1951>());
  hw_uint<32> lane_60_in1;
  set_at<0, 32, 32>(lane_60_in1, in1.extract<1920, 1951>());
  auto result_60 = add(lane_60_in0, lane_60_in1);
  set_at<1920, 2048, 32>(whole_result, result_60);

  hw_uint<32> lane_61_in0;
  set_at<0, 32, 32>(lane_61_in0, in0.extract<1952, 1983>());
  hw_uint<32> lane_61_in1;
  set_at<0, 32, 32>(lane_61_in1, in1.extract<1952, 1983>());
  auto result_61 = add(lane_61_in0, lane_61_in1);
  set_at<1952, 2048, 32>(whole_result, result_61);

  hw_uint<32> lane_62_in0;
  set_at<0, 32, 32>(lane_62_in0, in0.extract<1984, 2015>());
  hw_uint<32> lane_62_in1;
  set_at<0, 32, 32>(lane_62_in1, in1.extract<1984, 2015>());
  auto result_62 = add(lane_62_in0, lane_62_in1);
  set_at<1984, 2048, 32>(whole_result, result_62);

  hw_uint<32> lane_63_in0;
  set_at<0, 32, 32>(lane_63_in0, in0.extract<2016, 2047>());
  hw_uint<32> lane_63_in1;
  set_at<0, 32, 32>(lane_63_in1, in1.extract<2016, 2047>());
  auto result_63 = add(lane_63_in0, lane_63_in1);
  set_at<2016, 2048, 32>(whole_result, result_63);
  return whole_result;
}

