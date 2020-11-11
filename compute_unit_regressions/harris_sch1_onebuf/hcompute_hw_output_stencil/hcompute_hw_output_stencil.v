module commonlib_smin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) <= ($signed(in1)) ? in0 : in1;
endmodule

module commonlib_smax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) >= ($signed(in1)) ? in0 : in1;
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [48:0]
);
wire [15:0] add_1247_1343_1374_out;
wire [15:0] add_1436_1493_1516_out;
wire [15:0] add_1539_1558_1573_out;
wire [15:0] add_1617_1654_1673_out;
wire [15:0] add_1697_1716_1731_out;
wire [15:0] add_1755_1774_1789_out;
wire [15:0] add_1831_1870_1889_out;
wire [15:0] add_1912_1931_1946_out;
wire [15:0] add_1970_1989_2004_out;
wire [15:0] ashr_1150_1151_1152_out;
wire [15:0] ashr_1172_1151_1173_out;
wire [15:0] ashr_1183_1151_1184_out;
wire [15:0] ashr_1194_1151_1195_out;
wire [15:0] ashr_1204_1151_1205_out;
wire [15:0] ashr_1215_1151_1216_out;
wire [15:0] ashr_1225_1151_1226_out;
wire [15:0] ashr_1236_1151_1237_out;
wire [15:0] ashr_1245_1246_1247_out;
wire [15:0] ashr_1256_1151_1257_out;
wire [15:0] ashr_1276_1151_1277_out;
wire [15:0] ashr_1285_1151_1286_out;
wire [15:0] ashr_1294_1151_1295_out;
wire [15:0] ashr_1303_1151_1304_out;
wire [15:0] ashr_1313_1151_1314_out;
wire [15:0] ashr_1323_1151_1324_out;
wire [15:0] ashr_1333_1151_1334_out;
wire [15:0] ashr_1342_1246_1343_out;
wire [15:0] ashr_1345_1151_1346_out;
wire [15:0] ashr_1349_1151_1350_out;
wire [15:0] ashr_1351_1151_1352_out;
wire [15:0] ashr_1353_1151_1354_out;
wire [15:0] ashr_1355_1151_1356_out;
wire [15:0] ashr_1357_1151_1358_out;
wire [15:0] ashr_1359_1151_1360_out;
wire [15:0] ashr_1361_1151_1362_out;
wire [15:0] ashr_1370_1246_1371_out;
wire [15:0] ashr_1387_1151_1388_out;
wire [15:0] ashr_1397_1151_1398_out;
wire [15:0] ashr_1406_1151_1407_out;
wire [15:0] ashr_1416_1151_1417_out;
wire [15:0] ashr_1426_1151_1427_out;
wire [15:0] ashr_1435_1246_1436_out;
wire [15:0] ashr_1444_1151_1445_out;
wire [15:0] ashr_1453_1151_1454_out;
wire [15:0] ashr_1463_1151_1464_out;
wire [15:0] ashr_1473_1151_1474_out;
wire [15:0] ashr_1483_1151_1484_out;
wire [15:0] ashr_1492_1246_1493_out;
wire [15:0] ashr_1495_1151_1496_out;
wire [15:0] ashr_1497_1151_1498_out;
wire [15:0] ashr_1499_1151_1500_out;
wire [15:0] ashr_1501_1151_1502_out;
wire [15:0] ashr_1503_1151_1504_out;
wire [15:0] ashr_1512_1246_1513_out;
wire [15:0] ashr_1529_1151_1530_out;
wire [15:0] ashr_1538_1246_1539_out;
wire [15:0] ashr_1548_1151_1549_out;
wire [15:0] ashr_1557_1246_1558_out;
wire [15:0] ashr_1560_1151_1561_out;
wire [15:0] ashr_1569_1246_1570_out;
wire [15:0] ashr_1597_1151_1598_out;
wire [15:0] ashr_1607_1151_1608_out;
wire [15:0] ashr_1616_1246_1617_out;
wire [15:0] ashr_1635_1151_1636_out;
wire [15:0] ashr_1644_1151_1645_out;
wire [15:0] ashr_1653_1246_1654_out;
wire [15:0] ashr_1658_1151_1659_out;
wire [15:0] ashr_1660_1151_1661_out;
wire [15:0] ashr_1669_1246_1670_out;
wire [15:0] ashr_1687_1151_1688_out;
wire [15:0] ashr_1696_1246_1697_out;
wire [15:0] ashr_1706_1151_1707_out;
wire [15:0] ashr_1715_1246_1716_out;
wire [15:0] ashr_1718_1151_1719_out;
wire [15:0] ashr_1727_1246_1728_out;
wire [15:0] ashr_1745_1151_1746_out;
wire [15:0] ashr_1754_1246_1755_out;
wire [15:0] ashr_1764_1151_1765_out;
wire [15:0] ashr_1773_1246_1774_out;
wire [15:0] ashr_1776_1151_1777_out;
wire [15:0] ashr_1785_1246_1786_out;
wire [15:0] ashr_1812_1151_1813_out;
wire [15:0] ashr_1821_1151_1822_out;
wire [15:0] ashr_1830_1246_1831_out;
wire [15:0] ashr_1850_1151_1851_out;
wire [15:0] ashr_1860_1151_1861_out;
wire [15:0] ashr_1869_1246_1870_out;
wire [15:0] ashr_1874_1151_1875_out;
wire [15:0] ashr_1876_1151_1877_out;
wire [15:0] ashr_1885_1246_1886_out;
wire [15:0] ashr_1902_1151_1903_out;
wire [15:0] ashr_1911_1246_1912_out;
wire [15:0] ashr_1921_1151_1922_out;
wire [15:0] ashr_1930_1246_1931_out;
wire [15:0] ashr_1933_1151_1934_out;
wire [15:0] ashr_1942_1246_1943_out;
wire [15:0] ashr_1969_1246_1970_out;
wire [15:0] ashr_1988_1246_1989_out;
wire [15:0] ashr_2000_1246_2001_out;
wire [15:0] mul_padded16_global_wrapper_stencil_14_1138_1196_out;
wire [15:0] mul_padded16_global_wrapper_stencil_15_1138_1164_out;
wire [15:0] mul_padded16_global_wrapper_stencil_16_1138_1206_out;
wire [15:0] mul_padded16_global_wrapper_stencil_18_1138_1227_out;
wire [15:0] mul_padded16_global_wrapper_stencil_19_1138_1231_out;
wire [15:0] mul_padded16_global_wrapper_stencil_20_1138_1217_out;
wire [15:0] mul_padded16_global_wrapper_stencil_21_1138_1325_out;
wire [15:0] mul_padded16_global_wrapper_stencil_23_1138_1418_out;
wire [15:0] mul_padded16_global_wrapper_stencil_24_1138_1315_out;
wire [15:0] mul_padded16_global_wrapper_stencil_25_1138_1305_out;
wire [15:0] mul_padded16_global_wrapper_stencil_26_1138_1521_out;
wire [15:0] mul_padded16_global_wrapper_stencil_27_1138_1389_out;
wire [15:0] mul_padded16_global_wrapper_stencil_28_1138_1379_out;
wire [15:0] mul_padded16_global_wrapper_stencil_29_1138_1408_out;
wire [15:0] mul_padded16_global_wrapper_stencil_2_1138_1185_out;
wire [15:0] mul_padded16_global_wrapper_stencil_30_1138_1475_out;
wire [15:0] mul_padded16_global_wrapper_stencil_31_1138_1698_out;
wire [15:0] mul_padded16_global_wrapper_stencil_32_1138_1756_out;
wire [15:0] mul_padded16_global_wrapper_stencil_33_1138_1465_out;
wire [15:0] mul_padded16_global_wrapper_stencil_34_1138_1455_out;
wire [15:0] mul_padded16_global_wrapper_stencil_3_1138_1139_out;
wire [15:0] mul_padded16_global_wrapper_stencil_5_1138_1143_out;
wire [15:0] mul_padded16_global_wrapper_stencil_6_1138_1189_out;
wire [15:0] mul_padded16_global_wrapper_stencil_8_1138_1174_out;
wire [15:0] mul_padded16_global_wrapper_stencil_9_1138_1153_out;
wire [15:0] smax_1147_1148_1149_in0;
wire [15:0] smax_1147_1148_1149_in1;
wire [15:0] smax_1147_1148_1149_out;
wire [15:0] smax_1160_1148_1161_in0;
wire [15:0] smax_1160_1148_1161_in1;
wire [15:0] smax_1160_1148_1161_out;
wire [15:0] smax_1170_1148_1171_in0;
wire [15:0] smax_1170_1148_1171_in1;
wire [15:0] smax_1170_1148_1171_out;
wire [15:0] smax_1181_1148_1182_in0;
wire [15:0] smax_1181_1148_1182_in1;
wire [15:0] smax_1181_1148_1182_out;
wire [15:0] smax_1192_1148_1193_in0;
wire [15:0] smax_1192_1148_1193_in1;
wire [15:0] smax_1192_1148_1193_out;
wire [15:0] smax_1202_1148_1203_in0;
wire [15:0] smax_1202_1148_1203_in1;
wire [15:0] smax_1202_1148_1203_out;
wire [15:0] smax_1213_1148_1214_in0;
wire [15:0] smax_1213_1148_1214_in1;
wire [15:0] smax_1213_1148_1214_out;
wire [15:0] smax_1223_1148_1224_in0;
wire [15:0] smax_1223_1148_1224_in1;
wire [15:0] smax_1223_1148_1224_out;
wire [15:0] smax_1234_1148_1235_in0;
wire [15:0] smax_1234_1148_1235_in1;
wire [15:0] smax_1234_1148_1235_out;
wire [15:0] smax_1254_1148_1255_in0;
wire [15:0] smax_1254_1148_1255_in1;
wire [15:0] smax_1254_1148_1255_out;
wire [15:0] smax_1264_1148_1265_in0;
wire [15:0] smax_1264_1148_1265_in1;
wire [15:0] smax_1264_1148_1265_out;
wire [15:0] smax_1274_1148_1275_in0;
wire [15:0] smax_1274_1148_1275_in1;
wire [15:0] smax_1274_1148_1275_out;
wire [15:0] smax_1283_1148_1284_in0;
wire [15:0] smax_1283_1148_1284_in1;
wire [15:0] smax_1283_1148_1284_out;
wire [15:0] smax_1292_1148_1293_in0;
wire [15:0] smax_1292_1148_1293_in1;
wire [15:0] smax_1292_1148_1293_out;
wire [15:0] smax_1301_1148_1302_in0;
wire [15:0] smax_1301_1148_1302_in1;
wire [15:0] smax_1301_1148_1302_out;
wire [15:0] smax_1311_1148_1312_in0;
wire [15:0] smax_1311_1148_1312_in1;
wire [15:0] smax_1311_1148_1312_out;
wire [15:0] smax_1321_1148_1322_in0;
wire [15:0] smax_1321_1148_1322_in1;
wire [15:0] smax_1321_1148_1322_out;
wire [15:0] smax_1331_1148_1332_in0;
wire [15:0] smax_1331_1148_1332_in1;
wire [15:0] smax_1331_1148_1332_out;
wire [15:0] smax_1385_1148_1386_in0;
wire [15:0] smax_1385_1148_1386_in1;
wire [15:0] smax_1385_1148_1386_out;
wire [15:0] smax_1395_1148_1396_in0;
wire [15:0] smax_1395_1148_1396_in1;
wire [15:0] smax_1395_1148_1396_out;
wire [15:0] smax_1404_1148_1405_in0;
wire [15:0] smax_1404_1148_1405_in1;
wire [15:0] smax_1404_1148_1405_out;
wire [15:0] smax_1414_1148_1415_in0;
wire [15:0] smax_1414_1148_1415_in1;
wire [15:0] smax_1414_1148_1415_out;
wire [15:0] smax_1424_1148_1425_in0;
wire [15:0] smax_1424_1148_1425_in1;
wire [15:0] smax_1424_1148_1425_out;
wire [15:0] smax_1442_1148_1443_in0;
wire [15:0] smax_1442_1148_1443_in1;
wire [15:0] smax_1442_1148_1443_out;
wire [15:0] smax_1451_1148_1452_in0;
wire [15:0] smax_1451_1148_1452_in1;
wire [15:0] smax_1451_1148_1452_out;
wire [15:0] smax_1461_1148_1462_in0;
wire [15:0] smax_1461_1148_1462_in1;
wire [15:0] smax_1461_1148_1462_out;
wire [15:0] smax_1471_1148_1472_in0;
wire [15:0] smax_1471_1148_1472_in1;
wire [15:0] smax_1471_1148_1472_out;
wire [15:0] smax_1481_1148_1482_in0;
wire [15:0] smax_1481_1148_1482_in1;
wire [15:0] smax_1481_1148_1482_out;
wire [15:0] smax_1527_1148_1528_in0;
wire [15:0] smax_1527_1148_1528_in1;
wire [15:0] smax_1527_1148_1528_out;
wire [15:0] smax_1546_1148_1547_in0;
wire [15:0] smax_1546_1148_1547_in1;
wire [15:0] smax_1546_1148_1547_out;
wire [15:0] smax_1585_1148_1586_in0;
wire [15:0] smax_1585_1148_1586_in1;
wire [15:0] smax_1585_1148_1586_out;
wire [15:0] smax_1595_1148_1596_in0;
wire [15:0] smax_1595_1148_1596_in1;
wire [15:0] smax_1595_1148_1596_out;
wire [15:0] smax_1605_1148_1606_in0;
wire [15:0] smax_1605_1148_1606_in1;
wire [15:0] smax_1605_1148_1606_out;
wire [15:0] smax_1624_1148_1625_in0;
wire [15:0] smax_1624_1148_1625_in1;
wire [15:0] smax_1624_1148_1625_out;
wire [15:0] smax_1633_1148_1634_in0;
wire [15:0] smax_1633_1148_1634_in1;
wire [15:0] smax_1633_1148_1634_out;
wire [15:0] smax_1642_1148_1643_in0;
wire [15:0] smax_1642_1148_1643_in1;
wire [15:0] smax_1642_1148_1643_out;
wire [15:0] smax_1685_1148_1686_in0;
wire [15:0] smax_1685_1148_1686_in1;
wire [15:0] smax_1685_1148_1686_out;
wire [15:0] smax_1704_1148_1705_in0;
wire [15:0] smax_1704_1148_1705_in1;
wire [15:0] smax_1704_1148_1705_out;
wire [15:0] smax_1743_1148_1744_in0;
wire [15:0] smax_1743_1148_1744_in1;
wire [15:0] smax_1743_1148_1744_out;
wire [15:0] smax_1762_1148_1763_in0;
wire [15:0] smax_1762_1148_1763_in1;
wire [15:0] smax_1762_1148_1763_out;
wire [15:0] smax_1801_1148_1802_in0;
wire [15:0] smax_1801_1148_1802_in1;
wire [15:0] smax_1801_1148_1802_out;
wire [15:0] smax_1810_1148_1811_in0;
wire [15:0] smax_1810_1148_1811_in1;
wire [15:0] smax_1810_1148_1811_out;
wire [15:0] smax_1819_1148_1820_in0;
wire [15:0] smax_1819_1148_1820_in1;
wire [15:0] smax_1819_1148_1820_out;
wire [15:0] smax_1838_1148_1839_in0;
wire [15:0] smax_1838_1148_1839_in1;
wire [15:0] smax_1838_1148_1839_out;
wire [15:0] smax_1848_1148_1849_in0;
wire [15:0] smax_1848_1148_1849_in1;
wire [15:0] smax_1848_1148_1849_out;
wire [15:0] smax_1858_1148_1859_in0;
wire [15:0] smax_1858_1148_1859_in1;
wire [15:0] smax_1858_1148_1859_out;
wire [15:0] smax_1900_1148_1901_in0;
wire [15:0] smax_1900_1148_1901_in1;
wire [15:0] smax_1900_1148_1901_out;
wire [15:0] smax_1919_1148_1920_in0;
wire [15:0] smax_1919_1148_1920_in1;
wire [15:0] smax_1919_1148_1920_out;
wire [15:0] smax_1958_1148_1959_in0;
wire [15:0] smax_1958_1148_1959_in1;
wire [15:0] smax_1958_1148_1959_out;
wire [15:0] smax_1977_1148_1978_in0;
wire [15:0] smax_1977_1148_1978_in1;
wire [15:0] smax_1977_1148_1978_out;
wire [15:0] smin_1145_1146_1147_in0;
wire [15:0] smin_1145_1146_1147_in1;
wire [15:0] smin_1145_1146_1147_out;
wire [15:0] smin_1159_1146_1160_in0;
wire [15:0] smin_1159_1146_1160_in1;
wire [15:0] smin_1159_1146_1160_out;
wire [15:0] smin_1169_1146_1170_in0;
wire [15:0] smin_1169_1146_1170_in1;
wire [15:0] smin_1169_1146_1170_out;
wire [15:0] smin_1180_1146_1181_in0;
wire [15:0] smin_1180_1146_1181_in1;
wire [15:0] smin_1180_1146_1181_out;
wire [15:0] smin_1191_1146_1192_in0;
wire [15:0] smin_1191_1146_1192_in1;
wire [15:0] smin_1191_1146_1192_out;
wire [15:0] smin_1201_1146_1202_in0;
wire [15:0] smin_1201_1146_1202_in1;
wire [15:0] smin_1201_1146_1202_out;
wire [15:0] smin_1212_1146_1213_in0;
wire [15:0] smin_1212_1146_1213_in1;
wire [15:0] smin_1212_1146_1213_out;
wire [15:0] smin_1222_1146_1223_in0;
wire [15:0] smin_1222_1146_1223_in1;
wire [15:0] smin_1222_1146_1223_out;
wire [15:0] smin_1233_1146_1234_in0;
wire [15:0] smin_1233_1146_1234_in1;
wire [15:0] smin_1233_1146_1234_out;
wire [15:0] smin_1253_1146_1254_in0;
wire [15:0] smin_1253_1146_1254_in1;
wire [15:0] smin_1253_1146_1254_out;
wire [15:0] smin_1263_1146_1264_in0;
wire [15:0] smin_1263_1146_1264_in1;
wire [15:0] smin_1263_1146_1264_out;
wire [15:0] smin_1273_1146_1274_in0;
wire [15:0] smin_1273_1146_1274_in1;
wire [15:0] smin_1273_1146_1274_out;
wire [15:0] smin_1282_1146_1283_in0;
wire [15:0] smin_1282_1146_1283_in1;
wire [15:0] smin_1282_1146_1283_out;
wire [15:0] smin_1291_1146_1292_in0;
wire [15:0] smin_1291_1146_1292_in1;
wire [15:0] smin_1291_1146_1292_out;
wire [15:0] smin_1300_1146_1301_in0;
wire [15:0] smin_1300_1146_1301_in1;
wire [15:0] smin_1300_1146_1301_out;
wire [15:0] smin_1310_1146_1311_in0;
wire [15:0] smin_1310_1146_1311_in1;
wire [15:0] smin_1310_1146_1311_out;
wire [15:0] smin_1320_1146_1321_in0;
wire [15:0] smin_1320_1146_1321_in1;
wire [15:0] smin_1320_1146_1321_out;
wire [15:0] smin_1330_1146_1331_in0;
wire [15:0] smin_1330_1146_1331_in1;
wire [15:0] smin_1330_1146_1331_out;
wire [15:0] smin_1384_1146_1385_in0;
wire [15:0] smin_1384_1146_1385_in1;
wire [15:0] smin_1384_1146_1385_out;
wire [15:0] smin_1394_1146_1395_in0;
wire [15:0] smin_1394_1146_1395_in1;
wire [15:0] smin_1394_1146_1395_out;
wire [15:0] smin_1403_1146_1404_in0;
wire [15:0] smin_1403_1146_1404_in1;
wire [15:0] smin_1403_1146_1404_out;
wire [15:0] smin_1413_1146_1414_in0;
wire [15:0] smin_1413_1146_1414_in1;
wire [15:0] smin_1413_1146_1414_out;
wire [15:0] smin_1423_1146_1424_in0;
wire [15:0] smin_1423_1146_1424_in1;
wire [15:0] smin_1423_1146_1424_out;
wire [15:0] smin_1441_1146_1442_in0;
wire [15:0] smin_1441_1146_1442_in1;
wire [15:0] smin_1441_1146_1442_out;
wire [15:0] smin_1450_1146_1451_in0;
wire [15:0] smin_1450_1146_1451_in1;
wire [15:0] smin_1450_1146_1451_out;
wire [15:0] smin_1460_1146_1461_in0;
wire [15:0] smin_1460_1146_1461_in1;
wire [15:0] smin_1460_1146_1461_out;
wire [15:0] smin_1470_1146_1471_in0;
wire [15:0] smin_1470_1146_1471_in1;
wire [15:0] smin_1470_1146_1471_out;
wire [15:0] smin_1480_1146_1481_in0;
wire [15:0] smin_1480_1146_1481_in1;
wire [15:0] smin_1480_1146_1481_out;
wire [15:0] smin_1526_1146_1527_in0;
wire [15:0] smin_1526_1146_1527_in1;
wire [15:0] smin_1526_1146_1527_out;
wire [15:0] smin_1545_1146_1546_in0;
wire [15:0] smin_1545_1146_1546_in1;
wire [15:0] smin_1545_1146_1546_out;
wire [15:0] smin_1584_1146_1585_in0;
wire [15:0] smin_1584_1146_1585_in1;
wire [15:0] smin_1584_1146_1585_out;
wire [15:0] smin_1594_1146_1595_in0;
wire [15:0] smin_1594_1146_1595_in1;
wire [15:0] smin_1594_1146_1595_out;
wire [15:0] smin_1604_1146_1605_in0;
wire [15:0] smin_1604_1146_1605_in1;
wire [15:0] smin_1604_1146_1605_out;
wire [15:0] smin_1623_1146_1624_in0;
wire [15:0] smin_1623_1146_1624_in1;
wire [15:0] smin_1623_1146_1624_out;
wire [15:0] smin_1632_1146_1633_in0;
wire [15:0] smin_1632_1146_1633_in1;
wire [15:0] smin_1632_1146_1633_out;
wire [15:0] smin_1641_1146_1642_in0;
wire [15:0] smin_1641_1146_1642_in1;
wire [15:0] smin_1641_1146_1642_out;
wire [15:0] smin_1684_1146_1685_in0;
wire [15:0] smin_1684_1146_1685_in1;
wire [15:0] smin_1684_1146_1685_out;
wire [15:0] smin_1703_1146_1704_in0;
wire [15:0] smin_1703_1146_1704_in1;
wire [15:0] smin_1703_1146_1704_out;
wire [15:0] smin_1742_1146_1743_in0;
wire [15:0] smin_1742_1146_1743_in1;
wire [15:0] smin_1742_1146_1743_out;
wire [15:0] smin_1761_1146_1762_in0;
wire [15:0] smin_1761_1146_1762_in1;
wire [15:0] smin_1761_1146_1762_out;
wire [15:0] smin_1800_1146_1801_in0;
wire [15:0] smin_1800_1146_1801_in1;
wire [15:0] smin_1800_1146_1801_out;
wire [15:0] smin_1809_1146_1810_in0;
wire [15:0] smin_1809_1146_1810_in1;
wire [15:0] smin_1809_1146_1810_out;
wire [15:0] smin_1818_1146_1819_in0;
wire [15:0] smin_1818_1146_1819_in1;
wire [15:0] smin_1818_1146_1819_out;
wire [15:0] smin_1837_1146_1838_in0;
wire [15:0] smin_1837_1146_1838_in1;
wire [15:0] smin_1837_1146_1838_out;
wire [15:0] smin_1847_1146_1848_in0;
wire [15:0] smin_1847_1146_1848_in1;
wire [15:0] smin_1847_1146_1848_out;
wire [15:0] smin_1857_1146_1858_in0;
wire [15:0] smin_1857_1146_1858_in1;
wire [15:0] smin_1857_1146_1858_out;
wire [15:0] smin_1899_1146_1900_in0;
wire [15:0] smin_1899_1146_1900_in1;
wire [15:0] smin_1899_1146_1900_out;
wire [15:0] smin_1918_1146_1919_in0;
wire [15:0] smin_1918_1146_1919_in1;
wire [15:0] smin_1918_1146_1919_out;
wire [15:0] smin_1957_1146_1958_in0;
wire [15:0] smin_1957_1146_1958_in1;
wire [15:0] smin_1957_1146_1958_out;
wire [15:0] smin_1976_1146_1977_in0;
wire [15:0] smin_1976_1146_1977_in1;
wire [15:0] smin_1976_1146_1977_out;
wire [15:0] sub_1515_1518_1519_out;
assign add_1247_1343_1374_out = 16'(ashr_1245_1246_1247_out + ashr_1342_1246_1343_out);
assign add_1436_1493_1516_out = 16'(ashr_1435_1246_1436_out + ashr_1492_1246_1493_out);
assign add_1539_1558_1573_out = 16'(ashr_1538_1246_1539_out + ashr_1557_1246_1558_out);
assign add_1617_1654_1673_out = 16'(ashr_1616_1246_1617_out + ashr_1653_1246_1654_out);
assign add_1697_1716_1731_out = 16'(ashr_1696_1246_1697_out + ashr_1715_1246_1716_out);
assign add_1755_1774_1789_out = 16'(ashr_1754_1246_1755_out + ashr_1773_1246_1774_out);
assign add_1831_1870_1889_out = 16'(ashr_1830_1246_1831_out + ashr_1869_1246_1870_out);
assign add_1912_1931_1946_out = 16'(ashr_1911_1246_1912_out + ashr_1930_1246_1931_out);
assign add_1970_1989_2004_out = 16'(ashr_1969_1246_1970_out + ashr_1988_1246_1989_out);
assign ashr_1150_1151_1152_out = ($signed(16'(smax_1147_1148_1149_out * smax_1147_1148_1149_out))) >>> 16'h0007;
assign ashr_1172_1151_1173_out = ($signed(16'(smax_1170_1148_1171_out * smax_1170_1148_1171_out))) >>> 16'h0007;
assign ashr_1183_1151_1184_out = ($signed(16'(smax_1181_1148_1182_out * smax_1181_1148_1182_out))) >>> 16'h0007;
assign ashr_1194_1151_1195_out = ($signed(16'(smax_1192_1148_1193_out * smax_1192_1148_1193_out))) >>> 16'h0007;
assign ashr_1204_1151_1205_out = ($signed(16'(smax_1202_1148_1203_out * smax_1202_1148_1203_out))) >>> 16'h0007;
assign ashr_1215_1151_1216_out = ($signed(16'(smax_1213_1148_1214_out * smax_1213_1148_1214_out))) >>> 16'h0007;
assign ashr_1225_1151_1226_out = ($signed(16'(smax_1223_1148_1224_out * smax_1223_1148_1224_out))) >>> 16'h0007;
assign ashr_1236_1151_1237_out = ($signed(16'(smax_1234_1148_1235_out * smax_1234_1148_1235_out))) >>> 16'h0007;
assign ashr_1245_1246_1247_out = ($signed(16'(ashr_1150_1151_1152_out + (16'((($signed(16'(smax_1160_1148_1161_out * smax_1160_1148_1161_out))) >>> 16'h0007) + (16'(ashr_1172_1151_1173_out + (16'(ashr_1183_1151_1184_out + (16'(ashr_1194_1151_1195_out + (16'(ashr_1204_1151_1205_out + (16'(ashr_1215_1151_1216_out + (16'(ashr_1225_1151_1226_out + ashr_1236_1151_1237_out))))))))))))))))) >>> 16'h0006;
assign ashr_1256_1151_1257_out = ($signed(16'(smax_1254_1148_1255_out * smax_1254_1148_1255_out))) >>> 16'h0007;
assign ashr_1276_1151_1277_out = ($signed(16'(smax_1274_1148_1275_out * smax_1274_1148_1275_out))) >>> 16'h0007;
assign ashr_1285_1151_1286_out = ($signed(16'(smax_1283_1148_1284_out * smax_1283_1148_1284_out))) >>> 16'h0007;
assign ashr_1294_1151_1295_out = ($signed(16'(smax_1292_1148_1293_out * smax_1292_1148_1293_out))) >>> 16'h0007;
assign ashr_1303_1151_1304_out = ($signed(16'(smax_1301_1148_1302_out * smax_1301_1148_1302_out))) >>> 16'h0007;
assign ashr_1313_1151_1314_out = ($signed(16'(smax_1311_1148_1312_out * smax_1311_1148_1312_out))) >>> 16'h0007;
assign ashr_1323_1151_1324_out = ($signed(16'(smax_1321_1148_1322_out * smax_1321_1148_1322_out))) >>> 16'h0007;
assign ashr_1333_1151_1334_out = ($signed(16'(smax_1331_1148_1332_out * smax_1331_1148_1332_out))) >>> 16'h0007;
assign ashr_1342_1246_1343_out = ($signed(16'(ashr_1256_1151_1257_out + (16'((($signed(16'(smax_1264_1148_1265_out * smax_1264_1148_1265_out))) >>> 16'h0007) + (16'(ashr_1276_1151_1277_out + (16'(ashr_1285_1151_1286_out + (16'(ashr_1294_1151_1295_out + (16'(ashr_1303_1151_1304_out + (16'(ashr_1313_1151_1314_out + (16'(ashr_1323_1151_1324_out + ashr_1333_1151_1334_out))))))))))))))))) >>> 16'h0006;
assign ashr_1345_1151_1346_out = ($signed(16'(smax_1147_1148_1149_out * smax_1254_1148_1255_out))) >>> 16'h0007;
assign ashr_1349_1151_1350_out = ($signed(16'(smax_1170_1148_1171_out * smax_1274_1148_1275_out))) >>> 16'h0007;
assign ashr_1351_1151_1352_out = ($signed(16'(smax_1181_1148_1182_out * smax_1283_1148_1284_out))) >>> 16'h0007;
assign ashr_1353_1151_1354_out = ($signed(16'(smax_1192_1148_1193_out * smax_1292_1148_1293_out))) >>> 16'h0007;
assign ashr_1355_1151_1356_out = ($signed(16'(smax_1202_1148_1203_out * smax_1301_1148_1302_out))) >>> 16'h0007;
assign ashr_1357_1151_1358_out = ($signed(16'(smax_1213_1148_1214_out * smax_1311_1148_1312_out))) >>> 16'h0007;
assign ashr_1359_1151_1360_out = ($signed(16'(smax_1223_1148_1224_out * smax_1321_1148_1322_out))) >>> 16'h0007;
assign ashr_1361_1151_1362_out = ($signed(16'(smax_1234_1148_1235_out * smax_1331_1148_1332_out))) >>> 16'h0007;
assign ashr_1370_1246_1371_out = ($signed(16'(ashr_1345_1151_1346_out + (16'((($signed(16'(smax_1160_1148_1161_out * smax_1264_1148_1265_out))) >>> 16'h0007) + (16'(ashr_1349_1151_1350_out + (16'(ashr_1351_1151_1352_out + (16'(ashr_1353_1151_1354_out + (16'(ashr_1355_1151_1356_out + (16'(ashr_1357_1151_1358_out + (16'(ashr_1359_1151_1360_out + ashr_1361_1151_1362_out))))))))))))))))) >>> 16'h0006;
assign ashr_1387_1151_1388_out = ($signed(16'(smax_1385_1148_1386_out * smax_1385_1148_1386_out))) >>> 16'h0007;
assign ashr_1397_1151_1398_out = ($signed(16'(smax_1395_1148_1396_out * smax_1395_1148_1396_out))) >>> 16'h0007;
assign ashr_1406_1151_1407_out = ($signed(16'(smax_1404_1148_1405_out * smax_1404_1148_1405_out))) >>> 16'h0007;
assign ashr_1416_1151_1417_out = ($signed(16'(smax_1414_1148_1415_out * smax_1414_1148_1415_out))) >>> 16'h0007;
assign ashr_1426_1151_1427_out = ($signed(16'(smax_1424_1148_1425_out * smax_1424_1148_1425_out))) >>> 16'h0007;
assign ashr_1435_1246_1436_out = ($signed(16'(ashr_1204_1151_1205_out + (16'(ashr_1194_1151_1195_out + (16'(ashr_1387_1151_1388_out + (16'(ashr_1236_1151_1237_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1397_1151_1398_out + (16'(ashr_1406_1151_1407_out + (16'(ashr_1416_1151_1417_out + ashr_1426_1151_1427_out))))))))))))))))) >>> 16'h0006;
assign ashr_1444_1151_1445_out = ($signed(16'(smax_1442_1148_1443_out * smax_1442_1148_1443_out))) >>> 16'h0007;
assign ashr_1453_1151_1454_out = ($signed(16'(smax_1451_1148_1452_out * smax_1451_1148_1452_out))) >>> 16'h0007;
assign ashr_1463_1151_1464_out = ($signed(16'(smax_1461_1148_1462_out * smax_1461_1148_1462_out))) >>> 16'h0007;
assign ashr_1473_1151_1474_out = ($signed(16'(smax_1471_1148_1472_out * smax_1471_1148_1472_out))) >>> 16'h0007;
assign ashr_1483_1151_1484_out = ($signed(16'(smax_1481_1148_1482_out * smax_1481_1148_1482_out))) >>> 16'h0007;
assign ashr_1492_1246_1493_out = ($signed(16'(ashr_1303_1151_1304_out + (16'(ashr_1294_1151_1295_out + (16'(ashr_1444_1151_1445_out + (16'(ashr_1333_1151_1334_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1453_1151_1454_out + (16'(ashr_1463_1151_1464_out + (16'(ashr_1473_1151_1474_out + ashr_1483_1151_1484_out))))))))))))))))) >>> 16'h0006;
assign ashr_1495_1151_1496_out = ($signed(16'(smax_1385_1148_1386_out * smax_1442_1148_1443_out))) >>> 16'h0007;
assign ashr_1497_1151_1498_out = ($signed(16'(smax_1395_1148_1396_out * smax_1451_1148_1452_out))) >>> 16'h0007;
assign ashr_1499_1151_1500_out = ($signed(16'(smax_1404_1148_1405_out * smax_1461_1148_1462_out))) >>> 16'h0007;
assign ashr_1501_1151_1502_out = ($signed(16'(smax_1414_1148_1415_out * smax_1471_1148_1472_out))) >>> 16'h0007;
assign ashr_1503_1151_1504_out = ($signed(16'(smax_1424_1148_1425_out * smax_1481_1148_1482_out))) >>> 16'h0007;
assign ashr_1512_1246_1513_out = ($signed(16'(ashr_1355_1151_1356_out + (16'(ashr_1353_1151_1354_out + (16'(ashr_1495_1151_1496_out + (16'(ashr_1361_1151_1362_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1497_1151_1498_out + (16'(ashr_1499_1151_1500_out + (16'(ashr_1501_1151_1502_out + ashr_1503_1151_1504_out))))))))))))))))) >>> 16'h0006;
assign ashr_1529_1151_1530_out = ($signed(16'(smax_1527_1148_1528_out * smax_1527_1148_1528_out))) >>> 16'h0007;
assign ashr_1538_1246_1539_out = ($signed(16'(ashr_1172_1151_1173_out + (16'(ashr_1150_1151_1152_out + (16'(ashr_1529_1151_1530_out + (16'(ashr_1194_1151_1195_out + (16'(ashr_1204_1151_1205_out + (16'(ashr_1387_1151_1388_out + (16'(ashr_1236_1151_1237_out + (16'(ashr_1397_1151_1398_out + ashr_1225_1151_1226_out))))))))))))))))) >>> 16'h0006;
assign ashr_1548_1151_1549_out = ($signed(16'(smax_1546_1148_1547_out * smax_1546_1148_1547_out))) >>> 16'h0007;
assign ashr_1557_1246_1558_out = ($signed(16'(ashr_1276_1151_1277_out + (16'(ashr_1256_1151_1257_out + (16'(ashr_1548_1151_1549_out + (16'(ashr_1294_1151_1295_out + (16'(ashr_1303_1151_1304_out + (16'(ashr_1444_1151_1445_out + (16'(ashr_1333_1151_1334_out + (16'(ashr_1453_1151_1454_out + ashr_1323_1151_1324_out))))))))))))))))) >>> 16'h0006;
assign ashr_1560_1151_1561_out = ($signed(16'(smax_1527_1148_1528_out * smax_1546_1148_1547_out))) >>> 16'h0007;
assign ashr_1569_1246_1570_out = ($signed(16'(ashr_1349_1151_1350_out + (16'(ashr_1345_1151_1346_out + (16'(ashr_1560_1151_1561_out + (16'(ashr_1353_1151_1354_out + (16'(ashr_1355_1151_1356_out + (16'(ashr_1495_1151_1496_out + (16'(ashr_1361_1151_1362_out + (16'(ashr_1497_1151_1498_out + ashr_1359_1151_1360_out))))))))))))))))) >>> 16'h0006;
assign ashr_1597_1151_1598_out = ($signed(16'(smax_1595_1148_1596_out * smax_1595_1148_1596_out))) >>> 16'h0007;
assign ashr_1607_1151_1608_out = ($signed(16'(smax_1605_1148_1606_out * smax_1605_1148_1606_out))) >>> 16'h0007;
assign ashr_1616_1246_1617_out = ($signed(16'(ashr_1529_1151_1530_out + (16'(ashr_1172_1151_1173_out + (16'((($signed(16'(smax_1585_1148_1586_out * smax_1585_1148_1586_out))) >>> 16'h0007) + (16'(ashr_1204_1151_1205_out + (16'(ashr_1387_1151_1388_out + (16'(ashr_1597_1151_1598_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1607_1151_1608_out + ashr_1397_1151_1398_out))))))))))))))))) >>> 16'h0006;
assign ashr_1635_1151_1636_out = ($signed(16'(smax_1633_1148_1634_out * smax_1633_1148_1634_out))) >>> 16'h0007;
assign ashr_1644_1151_1645_out = ($signed(16'(smax_1642_1148_1643_out * smax_1642_1148_1643_out))) >>> 16'h0007;
assign ashr_1653_1246_1654_out = ($signed(16'(ashr_1548_1151_1549_out + (16'(ashr_1276_1151_1277_out + (16'((($signed(16'(smax_1624_1148_1625_out * smax_1624_1148_1625_out))) >>> 16'h0007) + (16'(ashr_1303_1151_1304_out + (16'(ashr_1444_1151_1445_out + (16'(ashr_1635_1151_1636_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1644_1151_1645_out + ashr_1453_1151_1454_out))))))))))))))))) >>> 16'h0006;
assign ashr_1658_1151_1659_out = ($signed(16'(smax_1595_1148_1596_out * smax_1633_1148_1634_out))) >>> 16'h0007;
assign ashr_1660_1151_1661_out = ($signed(16'(smax_1605_1148_1606_out * smax_1642_1148_1643_out))) >>> 16'h0007;
assign ashr_1669_1246_1670_out = ($signed(16'(ashr_1560_1151_1561_out + (16'(ashr_1349_1151_1350_out + (16'((($signed(16'(smax_1585_1148_1586_out * smax_1624_1148_1625_out))) >>> 16'h0007) + (16'(ashr_1355_1151_1356_out + (16'(ashr_1495_1151_1496_out + (16'(ashr_1658_1151_1659_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1660_1151_1661_out + ashr_1497_1151_1498_out))))))))))))))))) >>> 16'h0006;
assign ashr_1687_1151_1688_out = ($signed(16'(smax_1685_1148_1686_out * smax_1685_1148_1686_out))) >>> 16'h0007;
assign ashr_1696_1246_1697_out = ($signed(16'(ashr_1194_1151_1195_out + (16'(ashr_1183_1151_1184_out + (16'(ashr_1204_1151_1205_out + (16'(ashr_1215_1151_1216_out + (16'(ashr_1236_1151_1237_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1687_1151_1688_out + (16'(ashr_1426_1151_1427_out + ashr_1406_1151_1407_out))))))))))))))))) >>> 16'h0006;
assign ashr_1706_1151_1707_out = ($signed(16'(smax_1704_1148_1705_out * smax_1704_1148_1705_out))) >>> 16'h0007;
assign ashr_1715_1246_1716_out = ($signed(16'(ashr_1294_1151_1295_out + (16'(ashr_1285_1151_1286_out + (16'(ashr_1303_1151_1304_out + (16'(ashr_1313_1151_1314_out + (16'(ashr_1333_1151_1334_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1706_1151_1707_out + (16'(ashr_1483_1151_1484_out + ashr_1463_1151_1464_out))))))))))))))))) >>> 16'h0006;
assign ashr_1718_1151_1719_out = ($signed(16'(smax_1685_1148_1686_out * smax_1704_1148_1705_out))) >>> 16'h0007;
assign ashr_1727_1246_1728_out = ($signed(16'(ashr_1353_1151_1354_out + (16'(ashr_1351_1151_1352_out + (16'(ashr_1355_1151_1356_out + (16'(ashr_1357_1151_1358_out + (16'(ashr_1361_1151_1362_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1718_1151_1719_out + (16'(ashr_1503_1151_1504_out + ashr_1499_1151_1500_out))))))))))))))))) >>> 16'h0006;
assign ashr_1745_1151_1746_out = ($signed(16'(smax_1743_1148_1744_out * smax_1743_1148_1744_out))) >>> 16'h0007;
assign ashr_1754_1246_1755_out = ($signed(16'(ashr_1387_1151_1388_out + (16'(ashr_1204_1151_1205_out + (16'(ashr_1597_1151_1598_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1397_1151_1398_out + (16'(ashr_1607_1151_1608_out + (16'(ashr_1426_1151_1427_out + (16'(ashr_1745_1151_1746_out + ashr_1416_1151_1417_out))))))))))))))))) >>> 16'h0006;
assign ashr_1764_1151_1765_out = ($signed(16'(smax_1762_1148_1763_out * smax_1762_1148_1763_out))) >>> 16'h0007;
assign ashr_1773_1246_1774_out = ($signed(16'(ashr_1444_1151_1445_out + (16'(ashr_1303_1151_1304_out + (16'(ashr_1635_1151_1636_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1453_1151_1454_out + (16'(ashr_1644_1151_1645_out + (16'(ashr_1483_1151_1484_out + (16'(ashr_1764_1151_1765_out + ashr_1473_1151_1474_out))))))))))))))))) >>> 16'h0006;
assign ashr_1776_1151_1777_out = ($signed(16'(smax_1743_1148_1744_out * smax_1762_1148_1763_out))) >>> 16'h0007;
assign ashr_1785_1246_1786_out = ($signed(16'(ashr_1495_1151_1496_out + (16'(ashr_1355_1151_1356_out + (16'(ashr_1658_1151_1659_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1497_1151_1498_out + (16'(ashr_1660_1151_1661_out + (16'(ashr_1503_1151_1504_out + (16'(ashr_1776_1151_1777_out + ashr_1501_1151_1502_out))))))))))))))))) >>> 16'h0006;
assign ashr_1812_1151_1813_out = ($signed(16'(smax_1810_1148_1811_out * smax_1810_1148_1811_out))) >>> 16'h0007;
assign ashr_1821_1151_1822_out = ($signed(16'(smax_1819_1148_1820_out * smax_1819_1148_1820_out))) >>> 16'h0007;
assign ashr_1830_1246_1831_out = ($signed(16'(ashr_1236_1151_1237_out + (16'(ashr_1215_1151_1216_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1687_1151_1688_out + (16'(ashr_1406_1151_1407_out + (16'(ashr_1426_1151_1427_out + (16'((($signed(16'(smax_1801_1148_1802_out * smax_1801_1148_1802_out))) >>> 16'h0007) + (16'(ashr_1812_1151_1813_out + ashr_1821_1151_1822_out))))))))))))))))) >>> 16'h0006;
assign ashr_1850_1151_1851_out = ($signed(16'(smax_1848_1148_1849_out * smax_1848_1148_1849_out))) >>> 16'h0007;
assign ashr_1860_1151_1861_out = ($signed(16'(smax_1858_1148_1859_out * smax_1858_1148_1859_out))) >>> 16'h0007;
assign ashr_1869_1246_1870_out = ($signed(16'(ashr_1333_1151_1334_out + (16'(ashr_1313_1151_1314_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1706_1151_1707_out + (16'(ashr_1463_1151_1464_out + (16'(ashr_1483_1151_1484_out + (16'((($signed(16'(smax_1838_1148_1839_out * smax_1838_1148_1839_out))) >>> 16'h0007) + (16'(ashr_1850_1151_1851_out + ashr_1860_1151_1861_out))))))))))))))))) >>> 16'h0006;
assign ashr_1874_1151_1875_out = ($signed(16'(smax_1810_1148_1811_out * smax_1848_1148_1849_out))) >>> 16'h0007;
assign ashr_1876_1151_1877_out = ($signed(16'(smax_1819_1148_1820_out * smax_1858_1148_1859_out))) >>> 16'h0007;
assign ashr_1885_1246_1886_out = ($signed(16'(ashr_1361_1151_1362_out + (16'(ashr_1357_1151_1358_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1718_1151_1719_out + (16'(ashr_1499_1151_1500_out + (16'(ashr_1503_1151_1504_out + (16'((($signed(16'(smax_1801_1148_1802_out * smax_1838_1148_1839_out))) >>> 16'h0007) + (16'(ashr_1874_1151_1875_out + ashr_1876_1151_1877_out))))))))))))))))) >>> 16'h0006;
assign ashr_1902_1151_1903_out = ($signed(16'(smax_1900_1148_1901_out * smax_1900_1148_1901_out))) >>> 16'h0007;
assign ashr_1911_1246_1912_out = ($signed(16'(ashr_1225_1151_1226_out + (16'(ashr_1236_1151_1237_out + (16'(ashr_1397_1151_1398_out + (16'(ashr_1406_1151_1407_out + (16'(ashr_1426_1151_1427_out + (16'(ashr_1416_1151_1417_out + (16'(ashr_1821_1151_1822_out + (16'(ashr_1902_1151_1903_out + ashr_1812_1151_1813_out))))))))))))))))) >>> 16'h0006;
assign ashr_1921_1151_1922_out = ($signed(16'(smax_1919_1148_1920_out * smax_1919_1148_1920_out))) >>> 16'h0007;
assign ashr_1930_1246_1931_out = ($signed(16'(ashr_1323_1151_1324_out + (16'(ashr_1333_1151_1334_out + (16'(ashr_1453_1151_1454_out + (16'(ashr_1463_1151_1464_out + (16'(ashr_1483_1151_1484_out + (16'(ashr_1473_1151_1474_out + (16'(ashr_1860_1151_1861_out + (16'(ashr_1921_1151_1922_out + ashr_1850_1151_1851_out))))))))))))))))) >>> 16'h0006;
assign ashr_1933_1151_1934_out = ($signed(16'(smax_1900_1148_1901_out * smax_1919_1148_1920_out))) >>> 16'h0007;
assign ashr_1942_1246_1943_out = ($signed(16'(ashr_1359_1151_1360_out + (16'(ashr_1361_1151_1362_out + (16'(ashr_1497_1151_1498_out + (16'(ashr_1499_1151_1500_out + (16'(ashr_1503_1151_1504_out + (16'(ashr_1501_1151_1502_out + (16'(ashr_1876_1151_1877_out + (16'(ashr_1933_1151_1934_out + ashr_1874_1151_1875_out))))))))))))))))) >>> 16'h0006;
assign ashr_1969_1246_1970_out = ($signed(16'(ashr_1397_1151_1398_out + (16'(ashr_1225_1151_1226_out + (16'(ashr_1607_1151_1608_out + (16'(ashr_1426_1151_1427_out + (16'(ashr_1416_1151_1417_out + (16'(ashr_1745_1151_1746_out + (16'(ashr_1812_1151_1813_out + (16'((($signed(16'(smax_1958_1148_1959_out * smax_1958_1148_1959_out))) >>> 16'h0007) + ashr_1902_1151_1903_out))))))))))))))))) >>> 16'h0006;
assign ashr_1988_1246_1989_out = ($signed(16'(ashr_1453_1151_1454_out + (16'(ashr_1323_1151_1324_out + (16'(ashr_1644_1151_1645_out + (16'(ashr_1483_1151_1484_out + (16'(ashr_1473_1151_1474_out + (16'(ashr_1764_1151_1765_out + (16'(ashr_1850_1151_1851_out + (16'((($signed(16'(smax_1977_1148_1978_out * smax_1977_1148_1978_out))) >>> 16'h0007) + ashr_1921_1151_1922_out))))))))))))))))) >>> 16'h0006;
assign ashr_2000_1246_2001_out = ($signed(16'(ashr_1497_1151_1498_out + (16'(ashr_1359_1151_1360_out + (16'(ashr_1660_1151_1661_out + (16'(ashr_1503_1151_1504_out + (16'(ashr_1501_1151_1502_out + (16'(ashr_1776_1151_1777_out + (16'(ashr_1874_1151_1875_out + (16'((($signed(16'(smax_1958_1148_1959_out * smax_1977_1148_1978_out))) >>> 16'h0007) + ashr_1933_1151_1934_out))))))))))))))))) >>> 16'h0006;
assign mul_padded16_global_wrapper_stencil_14_1138_1196_out = 16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_15_1138_1164_out = 16'(in0_padded16_global_wrapper_stencil[6] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_16_1138_1206_out = 16'(in0_padded16_global_wrapper_stencil[7] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_18_1138_1227_out = 16'(in0_padded16_global_wrapper_stencil[9] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_19_1138_1231_out = 16'(in0_padded16_global_wrapper_stencil[10] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_20_1138_1217_out = 16'(in0_padded16_global_wrapper_stencil[12] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_21_1138_1325_out = 16'(in0_padded16_global_wrapper_stencil[13] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_23_1138_1418_out = 16'(in0_padded16_global_wrapper_stencil[15] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_24_1138_1315_out = 16'(in0_padded16_global_wrapper_stencil[16] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_25_1138_1305_out = 16'(in0_padded16_global_wrapper_stencil[17] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_26_1138_1521_out = 16'(in0_padded16_global_wrapper_stencil[18] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_27_1138_1389_out = 16'(in0_padded16_global_wrapper_stencil[19] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_28_1138_1379_out = 16'(in0_padded16_global_wrapper_stencil[20] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_29_1138_1408_out = 16'(in0_padded16_global_wrapper_stencil[21] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_2_1138_1185_out = 16'(in0_padded16_global_wrapper_stencil[11] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_30_1138_1475_out = 16'(in0_padded16_global_wrapper_stencil[23] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_31_1138_1698_out = 16'(in0_padded16_global_wrapper_stencil[24] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_32_1138_1756_out = 16'(in0_padded16_global_wrapper_stencil[25] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_33_1138_1465_out = 16'(in0_padded16_global_wrapper_stencil[26] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_34_1138_1455_out = 16'(in0_padded16_global_wrapper_stencil[27] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_3_1138_1139_out = 16'(in0_padded16_global_wrapper_stencil[22] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_5_1138_1143_out = 16'(in0_padded16_global_wrapper_stencil[44] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_6_1138_1189_out = 16'(in0_padded16_global_wrapper_stencil[45] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_8_1138_1174_out = 16'(in0_padded16_global_wrapper_stencil[47] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_9_1138_1153_out = 16'(in0_padded16_global_wrapper_stencil[48] * 16'h0002);
assign smax_1147_1148_1149_in0 = smin_1145_1146_1147_out;
assign smax_1147_1148_1149_in1 = 16'hff01;
commonlib_smax__width16 smax_1147_1148_1149 (
    .in0(smax_1147_1148_1149_in0),
    .in1(smax_1147_1148_1149_in1),
    .out(smax_1147_1148_1149_out)
);
assign smax_1160_1148_1161_in0 = smin_1159_1146_1160_out;
assign smax_1160_1148_1161_in1 = 16'hff01;
commonlib_smax__width16 smax_1160_1148_1161 (
    .in0(smax_1160_1148_1161_in0),
    .in1(smax_1160_1148_1161_in1),
    .out(smax_1160_1148_1161_out)
);
assign smax_1170_1148_1171_in0 = smin_1169_1146_1170_out;
assign smax_1170_1148_1171_in1 = 16'hff01;
commonlib_smax__width16 smax_1170_1148_1171 (
    .in0(smax_1170_1148_1171_in0),
    .in1(smax_1170_1148_1171_in1),
    .out(smax_1170_1148_1171_out)
);
assign smax_1181_1148_1182_in0 = smin_1180_1146_1181_out;
assign smax_1181_1148_1182_in1 = 16'hff01;
commonlib_smax__width16 smax_1181_1148_1182 (
    .in0(smax_1181_1148_1182_in0),
    .in1(smax_1181_1148_1182_in1),
    .out(smax_1181_1148_1182_out)
);
assign smax_1192_1148_1193_in0 = smin_1191_1146_1192_out;
assign smax_1192_1148_1193_in1 = 16'hff01;
commonlib_smax__width16 smax_1192_1148_1193 (
    .in0(smax_1192_1148_1193_in0),
    .in1(smax_1192_1148_1193_in1),
    .out(smax_1192_1148_1193_out)
);
assign smax_1202_1148_1203_in0 = smin_1201_1146_1202_out;
assign smax_1202_1148_1203_in1 = 16'hff01;
commonlib_smax__width16 smax_1202_1148_1203 (
    .in0(smax_1202_1148_1203_in0),
    .in1(smax_1202_1148_1203_in1),
    .out(smax_1202_1148_1203_out)
);
assign smax_1213_1148_1214_in0 = smin_1212_1146_1213_out;
assign smax_1213_1148_1214_in1 = 16'hff01;
commonlib_smax__width16 smax_1213_1148_1214 (
    .in0(smax_1213_1148_1214_in0),
    .in1(smax_1213_1148_1214_in1),
    .out(smax_1213_1148_1214_out)
);
assign smax_1223_1148_1224_in0 = smin_1222_1146_1223_out;
assign smax_1223_1148_1224_in1 = 16'hff01;
commonlib_smax__width16 smax_1223_1148_1224 (
    .in0(smax_1223_1148_1224_in0),
    .in1(smax_1223_1148_1224_in1),
    .out(smax_1223_1148_1224_out)
);
assign smax_1234_1148_1235_in0 = smin_1233_1146_1234_out;
assign smax_1234_1148_1235_in1 = 16'hff01;
commonlib_smax__width16 smax_1234_1148_1235 (
    .in0(smax_1234_1148_1235_in0),
    .in1(smax_1234_1148_1235_in1),
    .out(smax_1234_1148_1235_out)
);
assign smax_1254_1148_1255_in0 = smin_1253_1146_1254_out;
assign smax_1254_1148_1255_in1 = 16'hff01;
commonlib_smax__width16 smax_1254_1148_1255 (
    .in0(smax_1254_1148_1255_in0),
    .in1(smax_1254_1148_1255_in1),
    .out(smax_1254_1148_1255_out)
);
assign smax_1264_1148_1265_in0 = smin_1263_1146_1264_out;
assign smax_1264_1148_1265_in1 = 16'hff01;
commonlib_smax__width16 smax_1264_1148_1265 (
    .in0(smax_1264_1148_1265_in0),
    .in1(smax_1264_1148_1265_in1),
    .out(smax_1264_1148_1265_out)
);
assign smax_1274_1148_1275_in0 = smin_1273_1146_1274_out;
assign smax_1274_1148_1275_in1 = 16'hff01;
commonlib_smax__width16 smax_1274_1148_1275 (
    .in0(smax_1274_1148_1275_in0),
    .in1(smax_1274_1148_1275_in1),
    .out(smax_1274_1148_1275_out)
);
assign smax_1283_1148_1284_in0 = smin_1282_1146_1283_out;
assign smax_1283_1148_1284_in1 = 16'hff01;
commonlib_smax__width16 smax_1283_1148_1284 (
    .in0(smax_1283_1148_1284_in0),
    .in1(smax_1283_1148_1284_in1),
    .out(smax_1283_1148_1284_out)
);
assign smax_1292_1148_1293_in0 = smin_1291_1146_1292_out;
assign smax_1292_1148_1293_in1 = 16'hff01;
commonlib_smax__width16 smax_1292_1148_1293 (
    .in0(smax_1292_1148_1293_in0),
    .in1(smax_1292_1148_1293_in1),
    .out(smax_1292_1148_1293_out)
);
assign smax_1301_1148_1302_in0 = smin_1300_1146_1301_out;
assign smax_1301_1148_1302_in1 = 16'hff01;
commonlib_smax__width16 smax_1301_1148_1302 (
    .in0(smax_1301_1148_1302_in0),
    .in1(smax_1301_1148_1302_in1),
    .out(smax_1301_1148_1302_out)
);
assign smax_1311_1148_1312_in0 = smin_1310_1146_1311_out;
assign smax_1311_1148_1312_in1 = 16'hff01;
commonlib_smax__width16 smax_1311_1148_1312 (
    .in0(smax_1311_1148_1312_in0),
    .in1(smax_1311_1148_1312_in1),
    .out(smax_1311_1148_1312_out)
);
assign smax_1321_1148_1322_in0 = smin_1320_1146_1321_out;
assign smax_1321_1148_1322_in1 = 16'hff01;
commonlib_smax__width16 smax_1321_1148_1322 (
    .in0(smax_1321_1148_1322_in0),
    .in1(smax_1321_1148_1322_in1),
    .out(smax_1321_1148_1322_out)
);
assign smax_1331_1148_1332_in0 = smin_1330_1146_1331_out;
assign smax_1331_1148_1332_in1 = 16'hff01;
commonlib_smax__width16 smax_1331_1148_1332 (
    .in0(smax_1331_1148_1332_in0),
    .in1(smax_1331_1148_1332_in1),
    .out(smax_1331_1148_1332_out)
);
assign smax_1385_1148_1386_in0 = smin_1384_1146_1385_out;
assign smax_1385_1148_1386_in1 = 16'hff01;
commonlib_smax__width16 smax_1385_1148_1386 (
    .in0(smax_1385_1148_1386_in0),
    .in1(smax_1385_1148_1386_in1),
    .out(smax_1385_1148_1386_out)
);
assign smax_1395_1148_1396_in0 = smin_1394_1146_1395_out;
assign smax_1395_1148_1396_in1 = 16'hff01;
commonlib_smax__width16 smax_1395_1148_1396 (
    .in0(smax_1395_1148_1396_in0),
    .in1(smax_1395_1148_1396_in1),
    .out(smax_1395_1148_1396_out)
);
assign smax_1404_1148_1405_in0 = smin_1403_1146_1404_out;
assign smax_1404_1148_1405_in1 = 16'hff01;
commonlib_smax__width16 smax_1404_1148_1405 (
    .in0(smax_1404_1148_1405_in0),
    .in1(smax_1404_1148_1405_in1),
    .out(smax_1404_1148_1405_out)
);
assign smax_1414_1148_1415_in0 = smin_1413_1146_1414_out;
assign smax_1414_1148_1415_in1 = 16'hff01;
commonlib_smax__width16 smax_1414_1148_1415 (
    .in0(smax_1414_1148_1415_in0),
    .in1(smax_1414_1148_1415_in1),
    .out(smax_1414_1148_1415_out)
);
assign smax_1424_1148_1425_in0 = smin_1423_1146_1424_out;
assign smax_1424_1148_1425_in1 = 16'hff01;
commonlib_smax__width16 smax_1424_1148_1425 (
    .in0(smax_1424_1148_1425_in0),
    .in1(smax_1424_1148_1425_in1),
    .out(smax_1424_1148_1425_out)
);
assign smax_1442_1148_1443_in0 = smin_1441_1146_1442_out;
assign smax_1442_1148_1443_in1 = 16'hff01;
commonlib_smax__width16 smax_1442_1148_1443 (
    .in0(smax_1442_1148_1443_in0),
    .in1(smax_1442_1148_1443_in1),
    .out(smax_1442_1148_1443_out)
);
assign smax_1451_1148_1452_in0 = smin_1450_1146_1451_out;
assign smax_1451_1148_1452_in1 = 16'hff01;
commonlib_smax__width16 smax_1451_1148_1452 (
    .in0(smax_1451_1148_1452_in0),
    .in1(smax_1451_1148_1452_in1),
    .out(smax_1451_1148_1452_out)
);
assign smax_1461_1148_1462_in0 = smin_1460_1146_1461_out;
assign smax_1461_1148_1462_in1 = 16'hff01;
commonlib_smax__width16 smax_1461_1148_1462 (
    .in0(smax_1461_1148_1462_in0),
    .in1(smax_1461_1148_1462_in1),
    .out(smax_1461_1148_1462_out)
);
assign smax_1471_1148_1472_in0 = smin_1470_1146_1471_out;
assign smax_1471_1148_1472_in1 = 16'hff01;
commonlib_smax__width16 smax_1471_1148_1472 (
    .in0(smax_1471_1148_1472_in0),
    .in1(smax_1471_1148_1472_in1),
    .out(smax_1471_1148_1472_out)
);
assign smax_1481_1148_1482_in0 = smin_1480_1146_1481_out;
assign smax_1481_1148_1482_in1 = 16'hff01;
commonlib_smax__width16 smax_1481_1148_1482 (
    .in0(smax_1481_1148_1482_in0),
    .in1(smax_1481_1148_1482_in1),
    .out(smax_1481_1148_1482_out)
);
assign smax_1527_1148_1528_in0 = smin_1526_1146_1527_out;
assign smax_1527_1148_1528_in1 = 16'hff01;
commonlib_smax__width16 smax_1527_1148_1528 (
    .in0(smax_1527_1148_1528_in0),
    .in1(smax_1527_1148_1528_in1),
    .out(smax_1527_1148_1528_out)
);
assign smax_1546_1148_1547_in0 = smin_1545_1146_1546_out;
assign smax_1546_1148_1547_in1 = 16'hff01;
commonlib_smax__width16 smax_1546_1148_1547 (
    .in0(smax_1546_1148_1547_in0),
    .in1(smax_1546_1148_1547_in1),
    .out(smax_1546_1148_1547_out)
);
assign smax_1585_1148_1586_in0 = smin_1584_1146_1585_out;
assign smax_1585_1148_1586_in1 = 16'hff01;
commonlib_smax__width16 smax_1585_1148_1586 (
    .in0(smax_1585_1148_1586_in0),
    .in1(smax_1585_1148_1586_in1),
    .out(smax_1585_1148_1586_out)
);
assign smax_1595_1148_1596_in0 = smin_1594_1146_1595_out;
assign smax_1595_1148_1596_in1 = 16'hff01;
commonlib_smax__width16 smax_1595_1148_1596 (
    .in0(smax_1595_1148_1596_in0),
    .in1(smax_1595_1148_1596_in1),
    .out(smax_1595_1148_1596_out)
);
assign smax_1605_1148_1606_in0 = smin_1604_1146_1605_out;
assign smax_1605_1148_1606_in1 = 16'hff01;
commonlib_smax__width16 smax_1605_1148_1606 (
    .in0(smax_1605_1148_1606_in0),
    .in1(smax_1605_1148_1606_in1),
    .out(smax_1605_1148_1606_out)
);
assign smax_1624_1148_1625_in0 = smin_1623_1146_1624_out;
assign smax_1624_1148_1625_in1 = 16'hff01;
commonlib_smax__width16 smax_1624_1148_1625 (
    .in0(smax_1624_1148_1625_in0),
    .in1(smax_1624_1148_1625_in1),
    .out(smax_1624_1148_1625_out)
);
assign smax_1633_1148_1634_in0 = smin_1632_1146_1633_out;
assign smax_1633_1148_1634_in1 = 16'hff01;
commonlib_smax__width16 smax_1633_1148_1634 (
    .in0(smax_1633_1148_1634_in0),
    .in1(smax_1633_1148_1634_in1),
    .out(smax_1633_1148_1634_out)
);
assign smax_1642_1148_1643_in0 = smin_1641_1146_1642_out;
assign smax_1642_1148_1643_in1 = 16'hff01;
commonlib_smax__width16 smax_1642_1148_1643 (
    .in0(smax_1642_1148_1643_in0),
    .in1(smax_1642_1148_1643_in1),
    .out(smax_1642_1148_1643_out)
);
assign smax_1685_1148_1686_in0 = smin_1684_1146_1685_out;
assign smax_1685_1148_1686_in1 = 16'hff01;
commonlib_smax__width16 smax_1685_1148_1686 (
    .in0(smax_1685_1148_1686_in0),
    .in1(smax_1685_1148_1686_in1),
    .out(smax_1685_1148_1686_out)
);
assign smax_1704_1148_1705_in0 = smin_1703_1146_1704_out;
assign smax_1704_1148_1705_in1 = 16'hff01;
commonlib_smax__width16 smax_1704_1148_1705 (
    .in0(smax_1704_1148_1705_in0),
    .in1(smax_1704_1148_1705_in1),
    .out(smax_1704_1148_1705_out)
);
assign smax_1743_1148_1744_in0 = smin_1742_1146_1743_out;
assign smax_1743_1148_1744_in1 = 16'hff01;
commonlib_smax__width16 smax_1743_1148_1744 (
    .in0(smax_1743_1148_1744_in0),
    .in1(smax_1743_1148_1744_in1),
    .out(smax_1743_1148_1744_out)
);
assign smax_1762_1148_1763_in0 = smin_1761_1146_1762_out;
assign smax_1762_1148_1763_in1 = 16'hff01;
commonlib_smax__width16 smax_1762_1148_1763 (
    .in0(smax_1762_1148_1763_in0),
    .in1(smax_1762_1148_1763_in1),
    .out(smax_1762_1148_1763_out)
);
assign smax_1801_1148_1802_in0 = smin_1800_1146_1801_out;
assign smax_1801_1148_1802_in1 = 16'hff01;
commonlib_smax__width16 smax_1801_1148_1802 (
    .in0(smax_1801_1148_1802_in0),
    .in1(smax_1801_1148_1802_in1),
    .out(smax_1801_1148_1802_out)
);
assign smax_1810_1148_1811_in0 = smin_1809_1146_1810_out;
assign smax_1810_1148_1811_in1 = 16'hff01;
commonlib_smax__width16 smax_1810_1148_1811 (
    .in0(smax_1810_1148_1811_in0),
    .in1(smax_1810_1148_1811_in1),
    .out(smax_1810_1148_1811_out)
);
assign smax_1819_1148_1820_in0 = smin_1818_1146_1819_out;
assign smax_1819_1148_1820_in1 = 16'hff01;
commonlib_smax__width16 smax_1819_1148_1820 (
    .in0(smax_1819_1148_1820_in0),
    .in1(smax_1819_1148_1820_in1),
    .out(smax_1819_1148_1820_out)
);
assign smax_1838_1148_1839_in0 = smin_1837_1146_1838_out;
assign smax_1838_1148_1839_in1 = 16'hff01;
commonlib_smax__width16 smax_1838_1148_1839 (
    .in0(smax_1838_1148_1839_in0),
    .in1(smax_1838_1148_1839_in1),
    .out(smax_1838_1148_1839_out)
);
assign smax_1848_1148_1849_in0 = smin_1847_1146_1848_out;
assign smax_1848_1148_1849_in1 = 16'hff01;
commonlib_smax__width16 smax_1848_1148_1849 (
    .in0(smax_1848_1148_1849_in0),
    .in1(smax_1848_1148_1849_in1),
    .out(smax_1848_1148_1849_out)
);
assign smax_1858_1148_1859_in0 = smin_1857_1146_1858_out;
assign smax_1858_1148_1859_in1 = 16'hff01;
commonlib_smax__width16 smax_1858_1148_1859 (
    .in0(smax_1858_1148_1859_in0),
    .in1(smax_1858_1148_1859_in1),
    .out(smax_1858_1148_1859_out)
);
assign smax_1900_1148_1901_in0 = smin_1899_1146_1900_out;
assign smax_1900_1148_1901_in1 = 16'hff01;
commonlib_smax__width16 smax_1900_1148_1901 (
    .in0(smax_1900_1148_1901_in0),
    .in1(smax_1900_1148_1901_in1),
    .out(smax_1900_1148_1901_out)
);
assign smax_1919_1148_1920_in0 = smin_1918_1146_1919_out;
assign smax_1919_1148_1920_in1 = 16'hff01;
commonlib_smax__width16 smax_1919_1148_1920 (
    .in0(smax_1919_1148_1920_in0),
    .in1(smax_1919_1148_1920_in1),
    .out(smax_1919_1148_1920_out)
);
assign smax_1958_1148_1959_in0 = smin_1957_1146_1958_out;
assign smax_1958_1148_1959_in1 = 16'hff01;
commonlib_smax__width16 smax_1958_1148_1959 (
    .in0(smax_1958_1148_1959_in0),
    .in1(smax_1958_1148_1959_in1),
    .out(smax_1958_1148_1959_out)
);
assign smax_1977_1148_1978_in0 = smin_1976_1146_1977_out;
assign smax_1977_1148_1978_in1 = 16'hff01;
commonlib_smax__width16 smax_1977_1148_1978 (
    .in0(smax_1977_1148_1978_in0),
    .in1(smax_1977_1148_1978_in1),
    .out(smax_1977_1148_1978_out)
);
assign smin_1145_1146_1147_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[11] + mul_padded16_global_wrapper_stencil_3_1138_1139_out)))) - in0_padded16_global_wrapper_stencil[33])) - mul_padded16_global_wrapper_stencil_5_1138_1143_out)) - in0_padded16_global_wrapper_stencil[45]);
assign smin_1145_1146_1147_in1 = 16'h00ff;
commonlib_smin__width16 smin_1145_1146_1147 (
    .in0(smin_1145_1146_1147_in0),
    .in1(smin_1145_1146_1147_in1),
    .out(smin_1145_1146_1147_out)
);
assign smin_1159_1146_1160_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[46] + (16'(in0_padded16_global_wrapper_stencil[47] + mul_padded16_global_wrapper_stencil_9_1138_1153_out)))) - in0_padded16_global_wrapper_stencil[1])) - (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[3]);
assign smin_1159_1146_1160_in1 = 16'h00ff;
commonlib_smin__width16 smin_1159_1146_1160 (
    .in0(smin_1159_1146_1160_in0),
    .in1(smin_1159_1146_1160_in1),
    .out(smin_1159_1146_1160_out)
);
assign smin_1169_1146_1170_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] + mul_padded16_global_wrapper_stencil_15_1138_1164_out)))) - in0_padded16_global_wrapper_stencil[46])) - mul_padded16_global_wrapper_stencil_9_1138_1153_out)) - in0_padded16_global_wrapper_stencil[47]);
assign smin_1169_1146_1170_in1 = 16'h00ff;
commonlib_smin__width16 smin_1169_1146_1170 (
    .in0(smin_1169_1146_1170_in0),
    .in1(smin_1169_1146_1170_in1),
    .out(smin_1169_1146_1170_out)
);
assign smin_1180_1146_1181_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[48] + (16'(in0_padded16_global_wrapper_stencil[7] + mul_padded16_global_wrapper_stencil_8_1138_1174_out)))) - in0_padded16_global_wrapper_stencil[2])) - (16'(in0_padded16_global_wrapper_stencil[3] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[8]);
assign smin_1180_1146_1181_in1 = 16'h00ff;
commonlib_smin__width16 smin_1180_1146_1181 (
    .in0(smin_1180_1146_1181_in0),
    .in1(smin_1180_1146_1181_in1),
    .out(smin_1180_1146_1181_out)
);
assign smin_1191_1146_1192_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[22] + (16'(in0_padded16_global_wrapper_stencil[9] + mul_padded16_global_wrapper_stencil_2_1138_1185_out)))) - in0_padded16_global_wrapper_stencil[44])) - mul_padded16_global_wrapper_stencil_6_1138_1189_out)) - in0_padded16_global_wrapper_stencil[10]);
assign smin_1191_1146_1192_in1 = 16'h00ff;
commonlib_smin__width16 smin_1191_1146_1192 (
    .in0(smin_1191_1146_1192_in0),
    .in1(smin_1191_1146_1192_in1),
    .out(smin_1191_1146_1192_out)
);
assign smin_1201_1146_1202_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[6] + (16'(in0_padded16_global_wrapper_stencil[12] + mul_padded16_global_wrapper_stencil_14_1138_1196_out)))) - in0_padded16_global_wrapper_stencil[48])) - mul_padded16_global_wrapper_stencil_8_1138_1174_out)) - in0_padded16_global_wrapper_stencil[7]);
assign smin_1201_1146_1202_in1 = 16'h00ff;
commonlib_smin__width16 smin_1201_1146_1202 (
    .in0(smin_1201_1146_1202_in0),
    .in1(smin_1201_1146_1202_in1),
    .out(smin_1201_1146_1202_out)
);
assign smin_1212_1146_1213_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[47] + (16'(in0_padded16_global_wrapper_stencil[13] + mul_padded16_global_wrapper_stencil_16_1138_1206_out)))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[8] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[14]);
assign smin_1212_1146_1213_in1 = 16'h00ff;
commonlib_smin__width16 smin_1212_1146_1213 (
    .in0(smin_1212_1146_1213_in0),
    .in1(smin_1212_1146_1213_in1),
    .out(smin_1212_1146_1213_out)
);
assign smin_1222_1146_1223_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[5] + (16'(in0_padded16_global_wrapper_stencil[15] + mul_padded16_global_wrapper_stencil_20_1138_1217_out)))) - in0_padded16_global_wrapper_stencil[47])) - mul_padded16_global_wrapper_stencil_16_1138_1206_out)) - in0_padded16_global_wrapper_stencil[13]);
assign smin_1222_1146_1223_in1 = 16'h00ff;
commonlib_smin__width16 smin_1222_1146_1223 (
    .in0(smin_1222_1146_1223_in0),
    .in1(smin_1222_1146_1223_in1),
    .out(smin_1222_1146_1223_out)
);
assign smin_1233_1146_1234_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[11] + (16'(in0_padded16_global_wrapper_stencil[16] + mul_padded16_global_wrapper_stencil_18_1138_1227_out)))) - in0_padded16_global_wrapper_stencil[45])) - mul_padded16_global_wrapper_stencil_19_1138_1231_out)) - in0_padded16_global_wrapper_stencil[17]);
assign smin_1233_1146_1234_in1 = 16'h00ff;
commonlib_smin__width16 smin_1233_1146_1234 (
    .in0(smin_1233_1146_1234_in0),
    .in1(smin_1233_1146_1234_in1),
    .out(smin_1233_1146_1234_out)
);
assign smin_1253_1146_1254_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[45] + (16'(in0_padded16_global_wrapper_stencil[11] + mul_padded16_global_wrapper_stencil_8_1138_1174_out)))) - in0_padded16_global_wrapper_stencil[33])) - (16'(in0_padded16_global_wrapper_stencil[46] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[0]);
assign smin_1253_1146_1254_in1 = 16'h00ff;
commonlib_smin__width16 smin_1253_1146_1254 (
    .in0(smin_1253_1146_1254_in0),
    .in1(smin_1253_1146_1254_in1),
    .out(smin_1253_1146_1254_out)
);
assign smin_1263_1146_1264_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[47] + mul_padded16_global_wrapper_stencil_6_1138_1189_out)))) - in0_padded16_global_wrapper_stencil[1])) - (16'(in0_padded16_global_wrapper_stencil[33] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[46]);
assign smin_1263_1146_1264_in1 = 16'h00ff;
commonlib_smin__width16 smin_1263_1146_1264 (
    .in0(smin_1263_1146_1264_in0),
    .in1(smin_1263_1146_1264_in1),
    .out(smin_1263_1146_1264_out)
);
assign smin_1273_1146_1274_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[47] + (16'(in0_padded16_global_wrapper_stencil[5] + mul_padded16_global_wrapper_stencil_2_1138_1185_out)))) - in0_padded16_global_wrapper_stencil[46])) - (16'(in0_padded16_global_wrapper_stencil[0] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[4]);
assign smin_1273_1146_1274_in1 = 16'h00ff;
commonlib_smin__width16 smin_1273_1146_1274 (
    .in0(smin_1273_1146_1274_in0),
    .in1(smin_1273_1146_1274_in1),
    .out(smin_1273_1146_1274_out)
);
assign smin_1282_1146_1283_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[8] + (16'(in0_padded16_global_wrapper_stencil[7] + mul_padded16_global_wrapper_stencil_19_1138_1231_out)))) - in0_padded16_global_wrapper_stencil[2])) - mul_padded16_global_wrapper_stencil_5_1138_1143_out)) - in0_padded16_global_wrapper_stencil[48]);
assign smin_1282_1146_1283_in1 = 16'h00ff;
commonlib_smin__width16 smin_1282_1146_1283 (
    .in0(smin_1282_1146_1283_in0),
    .in1(smin_1282_1146_1283_in1),
    .out(smin_1282_1146_1283_out)
);
assign smin_1291_1146_1292_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[10] + (16'(in0_padded16_global_wrapper_stencil[9] + mul_padded16_global_wrapper_stencil_16_1138_1206_out)))) - in0_padded16_global_wrapper_stencil[44])) - mul_padded16_global_wrapper_stencil_9_1138_1153_out)) - in0_padded16_global_wrapper_stencil[22]);
assign smin_1291_1146_1292_in1 = 16'h00ff;
commonlib_smin__width16 smin_1291_1146_1292 (
    .in0(smin_1291_1146_1292_in0),
    .in1(smin_1291_1146_1292_in1),
    .out(smin_1291_1146_1292_out)
);
assign smin_1300_1146_1301_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[7] + (16'(in0_padded16_global_wrapper_stencil[12] + mul_padded16_global_wrapper_stencil_18_1138_1227_out)))) - in0_padded16_global_wrapper_stencil[48])) - mul_padded16_global_wrapper_stencil_3_1138_1139_out)) - in0_padded16_global_wrapper_stencil[6]);
assign smin_1300_1146_1301_in1 = 16'h00ff;
commonlib_smin__width16 smin_1300_1146_1301 (
    .in0(smin_1300_1146_1301_in0),
    .in1(smin_1300_1146_1301_in1),
    .out(smin_1300_1146_1301_out)
);
assign smin_1310_1146_1311_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[14] + (16'(in0_padded16_global_wrapper_stencil[13] + mul_padded16_global_wrapper_stencil_25_1138_1305_out)))) - in0_padded16_global_wrapper_stencil[3])) - mul_padded16_global_wrapper_stencil_6_1138_1189_out)) - in0_padded16_global_wrapper_stencil[47]);
assign smin_1310_1146_1311_in1 = 16'h00ff;
commonlib_smin__width16 smin_1310_1146_1311 (
    .in0(smin_1310_1146_1311_in0),
    .in1(smin_1310_1146_1311_in1),
    .out(smin_1310_1146_1311_out)
);
assign smin_1320_1146_1321_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[13] + (16'(in0_padded16_global_wrapper_stencil[15] + mul_padded16_global_wrapper_stencil_24_1138_1315_out)))) - in0_padded16_global_wrapper_stencil[47])) - mul_padded16_global_wrapper_stencil_2_1138_1185_out)) - in0_padded16_global_wrapper_stencil[5]);
assign smin_1320_1146_1321_in1 = 16'h00ff;
commonlib_smin__width16 smin_1320_1146_1321 (
    .in0(smin_1320_1146_1321_in0),
    .in1(smin_1320_1146_1321_in1),
    .out(smin_1320_1146_1321_out)
);
assign smin_1330_1146_1331_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[17] + (16'(in0_padded16_global_wrapper_stencil[16] + mul_padded16_global_wrapper_stencil_21_1138_1325_out)))) - in0_padded16_global_wrapper_stencil[45])) - mul_padded16_global_wrapper_stencil_8_1138_1174_out)) - in0_padded16_global_wrapper_stencil[11]);
assign smin_1330_1146_1331_in1 = 16'h00ff;
commonlib_smin__width16 smin_1330_1146_1331 (
    .in0(smin_1330_1146_1331_in0),
    .in1(smin_1330_1146_1331_in1),
    .out(smin_1330_1146_1331_out)
);
assign smin_1384_1146_1385_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[18] + (16'(in0_padded16_global_wrapper_stencil[19] + mul_padded16_global_wrapper_stencil_28_1138_1379_out)))) - in0_padded16_global_wrapper_stencil[22])) - mul_padded16_global_wrapper_stencil_2_1138_1185_out)) - in0_padded16_global_wrapper_stencil[9]);
assign smin_1384_1146_1385_in1 = 16'h00ff;
commonlib_smin__width16 smin_1384_1146_1385 (
    .in0(smin_1384_1146_1385_in0),
    .in1(smin_1384_1146_1385_in1),
    .out(smin_1384_1146_1385_out)
);
assign smin_1394_1146_1395_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[20] + (16'(in0_padded16_global_wrapper_stencil[21] + mul_padded16_global_wrapper_stencil_27_1138_1389_out)))) - in0_padded16_global_wrapper_stencil[11])) - mul_padded16_global_wrapper_stencil_18_1138_1227_out)) - in0_padded16_global_wrapper_stencil[16]);
assign smin_1394_1146_1395_in1 = 16'h00ff;
commonlib_smin__width16 smin_1394_1146_1395 (
    .in0(smin_1394_1146_1395_in0),
    .in1(smin_1394_1146_1395_in1),
    .out(smin_1394_1146_1395_out)
);
assign smin_1403_1146_1404_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[9] + (16'(in0_padded16_global_wrapper_stencil[23] + mul_padded16_global_wrapper_stencil_24_1138_1315_out)))) - in0_padded16_global_wrapper_stencil[10])) - mul_padded16_global_wrapper_stencil_25_1138_1305_out)) - in0_padded16_global_wrapper_stencil[24]);
assign smin_1403_1146_1404_in1 = 16'h00ff;
commonlib_smin__width16 smin_1403_1146_1404 (
    .in0(smin_1403_1146_1404_in0),
    .in1(smin_1403_1146_1404_in1),
    .out(smin_1403_1146_1404_out)
);
assign smin_1413_1146_1414_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[19] + (16'(in0_padded16_global_wrapper_stencil[25] + mul_padded16_global_wrapper_stencil_29_1138_1408_out)))) - in0_padded16_global_wrapper_stencil[9])) - mul_padded16_global_wrapper_stencil_24_1138_1315_out)) - in0_padded16_global_wrapper_stencil[23]);
assign smin_1413_1146_1414_in1 = 16'h00ff;
commonlib_smin__width16 smin_1413_1146_1414 (
    .in0(smin_1413_1146_1414_in0),
    .in1(smin_1413_1146_1414_in1),
    .out(smin_1413_1146_1414_out)
);
assign smin_1423_1146_1424_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[12] + (16'(in0_padded16_global_wrapper_stencil[26] + mul_padded16_global_wrapper_stencil_23_1138_1418_out)))) - in0_padded16_global_wrapper_stencil[7])) - mul_padded16_global_wrapper_stencil_21_1138_1325_out)) - in0_padded16_global_wrapper_stencil[27]);
assign smin_1423_1146_1424_in1 = 16'h00ff;
commonlib_smin__width16 smin_1423_1146_1424 (
    .in0(smin_1423_1146_1424_in0),
    .in1(smin_1423_1146_1424_in1),
    .out(smin_1423_1146_1424_out)
);
assign smin_1441_1146_1442_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[9] + (16'(in0_padded16_global_wrapper_stencil[19] + mul_padded16_global_wrapper_stencil_20_1138_1217_out)))) - in0_padded16_global_wrapper_stencil[22])) - mul_padded16_global_wrapper_stencil_15_1138_1164_out)) - in0_padded16_global_wrapper_stencil[18]);
assign smin_1441_1146_1442_in1 = 16'h00ff;
commonlib_smin__width16 smin_1441_1146_1442 (
    .in0(smin_1441_1146_1442_in0),
    .in1(smin_1441_1146_1442_in1),
    .out(smin_1441_1146_1442_out)
);
assign smin_1450_1146_1451_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[16] + (16'(in0_padded16_global_wrapper_stencil[21] + mul_padded16_global_wrapper_stencil_23_1138_1418_out)))) - in0_padded16_global_wrapper_stencil[11])) - mul_padded16_global_wrapper_stencil_14_1138_1196_out)) - in0_padded16_global_wrapper_stencil[20]);
assign smin_1450_1146_1451_in1 = 16'h00ff;
commonlib_smin__width16 smin_1450_1146_1451 (
    .in0(smin_1450_1146_1451_in0),
    .in1(smin_1450_1146_1451_in1),
    .out(smin_1450_1146_1451_out)
);
assign smin_1460_1146_1461_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[24] + (16'(in0_padded16_global_wrapper_stencil[23] + mul_padded16_global_wrapper_stencil_34_1138_1455_out)))) - in0_padded16_global_wrapper_stencil[10])) - mul_padded16_global_wrapper_stencil_16_1138_1206_out)) - in0_padded16_global_wrapper_stencil[9]);
assign smin_1460_1146_1461_in1 = 16'h00ff;
commonlib_smin__width16 smin_1460_1146_1461 (
    .in0(smin_1460_1146_1461_in0),
    .in1(smin_1460_1146_1461_in1),
    .out(smin_1460_1146_1461_out)
);
assign smin_1470_1146_1471_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[23] + (16'(in0_padded16_global_wrapper_stencil[25] + mul_padded16_global_wrapper_stencil_33_1138_1465_out)))) - in0_padded16_global_wrapper_stencil[9])) - mul_padded16_global_wrapper_stencil_20_1138_1217_out)) - in0_padded16_global_wrapper_stencil[19]);
assign smin_1470_1146_1471_in1 = 16'h00ff;
commonlib_smin__width16 smin_1470_1146_1471 (
    .in0(smin_1470_1146_1471_in0),
    .in1(smin_1470_1146_1471_in1),
    .out(smin_1470_1146_1471_out)
);
assign smin_1480_1146_1481_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[27] + (16'(in0_padded16_global_wrapper_stencil[26] + mul_padded16_global_wrapper_stencil_30_1138_1475_out)))) - in0_padded16_global_wrapper_stencil[7])) - mul_padded16_global_wrapper_stencil_18_1138_1227_out)) - in0_padded16_global_wrapper_stencil[12]);
assign smin_1480_1146_1481_in1 = 16'h00ff;
commonlib_smin__width16 smin_1480_1146_1481 (
    .in0(smin_1480_1146_1481_in0),
    .in1(smin_1480_1146_1481_in1),
    .out(smin_1480_1146_1481_out)
);
assign smin_1526_1146_1527_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[28] + (16'(in0_padded16_global_wrapper_stencil[20] + mul_padded16_global_wrapper_stencil_26_1138_1521_out)))) - in0_padded16_global_wrapper_stencil[0])) - mul_padded16_global_wrapper_stencil_3_1138_1139_out)) - in0_padded16_global_wrapper_stencil[11]);
assign smin_1526_1146_1527_in1 = 16'h00ff;
commonlib_smin__width16 smin_1526_1146_1527 (
    .in0(smin_1526_1146_1527_in0),
    .in1(smin_1526_1146_1527_in1),
    .out(smin_1526_1146_1527_out)
);
assign smin_1545_1146_1546_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[11] + (16'(in0_padded16_global_wrapper_stencil[20] + mul_padded16_global_wrapper_stencil_14_1138_1196_out)))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[28]);
assign smin_1545_1146_1546_in1 = 16'h00ff;
commonlib_smin__width16 smin_1545_1146_1546 (
    .in0(smin_1545_1146_1546_in0),
    .in1(smin_1545_1146_1546_in1),
    .out(smin_1545_1146_1546_out)
);
assign smin_1584_1146_1585_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[29] + (16'(in0_padded16_global_wrapper_stencil[30] + (16'(in0_padded16_global_wrapper_stencil[31] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[4])) - mul_padded16_global_wrapper_stencil_15_1138_1164_out)) - in0_padded16_global_wrapper_stencil[5]);
assign smin_1584_1146_1585_in1 = 16'h00ff;
commonlib_smin__width16 smin_1584_1146_1585 (
    .in0(smin_1584_1146_1585_in0),
    .in1(smin_1584_1146_1585_in1),
    .out(smin_1584_1146_1585_out)
);
assign smin_1594_1146_1595_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[31] + (16'(in0_padded16_global_wrapper_stencil[32] + (16'(in0_padded16_global_wrapper_stencil[30] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[6])) - mul_padded16_global_wrapper_stencil_14_1138_1196_out)) - in0_padded16_global_wrapper_stencil[12]);
assign smin_1594_1146_1595_in1 = 16'h00ff;
commonlib_smin__width16 smin_1594_1146_1595 (
    .in0(smin_1594_1146_1595_in0),
    .in1(smin_1594_1146_1595_in1),
    .out(smin_1594_1146_1595_out)
);
assign smin_1604_1146_1605_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[30] + (16'(in0_padded16_global_wrapper_stencil[34] + (16'(in0_padded16_global_wrapper_stencil[32] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[5])) - mul_padded16_global_wrapper_stencil_20_1138_1217_out)) - in0_padded16_global_wrapper_stencil[15]);
assign smin_1604_1146_1605_in1 = 16'h00ff;
commonlib_smin__width16 smin_1604_1146_1605 (
    .in0(smin_1604_1146_1605_in0),
    .in1(smin_1604_1146_1605_in1),
    .out(smin_1604_1146_1605_out)
);
assign smin_1623_1146_1624_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[5] + (16'(in0_padded16_global_wrapper_stencil[30] + mul_padded16_global_wrapper_stencil_28_1138_1379_out)))) - in0_padded16_global_wrapper_stencil[4])) - (16'(in0_padded16_global_wrapper_stencil[28] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[29]);
assign smin_1623_1146_1624_in1 = 16'h00ff;
commonlib_smin__width16 smin_1623_1146_1624 (
    .in0(smin_1623_1146_1624_in0),
    .in1(smin_1623_1146_1624_in1),
    .out(smin_1623_1146_1624_out)
);
assign smin_1632_1146_1633_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[12] + (16'(in0_padded16_global_wrapper_stencil[32] + mul_padded16_global_wrapper_stencil_27_1138_1389_out)))) - in0_padded16_global_wrapper_stencil[6])) - mul_padded16_global_wrapper_stencil_26_1138_1521_out)) - in0_padded16_global_wrapper_stencil[31]);
assign smin_1632_1146_1633_in1 = 16'h00ff;
commonlib_smin__width16 smin_1632_1146_1633 (
    .in0(smin_1632_1146_1633_in0),
    .in1(smin_1632_1146_1633_in1),
    .out(smin_1632_1146_1633_out)
);
assign smin_1641_1146_1642_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[15] + (16'(in0_padded16_global_wrapper_stencil[34] + mul_padded16_global_wrapper_stencil_29_1138_1408_out)))) - in0_padded16_global_wrapper_stencil[5])) - mul_padded16_global_wrapper_stencil_28_1138_1379_out)) - in0_padded16_global_wrapper_stencil[30]);
assign smin_1641_1146_1642_in1 = 16'h00ff;
commonlib_smin__width16 smin_1641_1146_1642 (
    .in0(smin_1641_1146_1642_in0),
    .in1(smin_1641_1146_1642_in1),
    .out(smin_1641_1146_1642_out)
);
assign smin_1684_1146_1685_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[7] + (16'(in0_padded16_global_wrapper_stencil[27] + mul_padded16_global_wrapper_stencil_21_1138_1325_out)))) - in0_padded16_global_wrapper_stencil[8])) - (16'(in0_padded16_global_wrapper_stencil[14] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[35]);
assign smin_1684_1146_1685_in1 = 16'h00ff;
commonlib_smin__width16 smin_1684_1146_1685 (
    .in0(smin_1684_1146_1685_in0),
    .in1(smin_1684_1146_1685_in1),
    .out(smin_1684_1146_1685_out)
);
assign smin_1703_1146_1704_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[35] + (16'(in0_padded16_global_wrapper_stencil[27] + mul_padded16_global_wrapper_stencil_31_1138_1698_out)))) - in0_padded16_global_wrapper_stencil[8])) - mul_padded16_global_wrapper_stencil_19_1138_1231_out)) - in0_padded16_global_wrapper_stencil[7]);
assign smin_1703_1146_1704_in1 = 16'h00ff;
commonlib_smin__width16 smin_1703_1146_1704 (
    .in0(smin_1703_1146_1704_in0),
    .in1(smin_1703_1146_1704_in1),
    .out(smin_1703_1146_1704_out)
);
assign smin_1742_1146_1743_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[32] + (16'(in0_padded16_global_wrapper_stencil[36] + (16'(in0_padded16_global_wrapper_stencil[34] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[12])) - mul_padded16_global_wrapper_stencil_23_1138_1418_out)) - in0_padded16_global_wrapper_stencil[26]);
assign smin_1742_1146_1743_in1 = 16'h00ff;
commonlib_smin__width16 smin_1742_1146_1743 (
    .in0(smin_1742_1146_1743_in0),
    .in1(smin_1742_1146_1743_in1),
    .out(smin_1742_1146_1743_out)
);
assign smin_1761_1146_1762_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[26] + (16'(in0_padded16_global_wrapper_stencil[36] + mul_padded16_global_wrapper_stencil_32_1138_1756_out)))) - in0_padded16_global_wrapper_stencil[12])) - mul_padded16_global_wrapper_stencil_27_1138_1389_out)) - in0_padded16_global_wrapper_stencil[32]);
assign smin_1761_1146_1762_in1 = 16'h00ff;
commonlib_smin__width16 smin_1761_1146_1762 (
    .in0(smin_1761_1146_1762_in0),
    .in1(smin_1761_1146_1762_in1),
    .out(smin_1761_1146_1762_out)
);
assign smin_1800_1146_1801_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[13] + (16'(in0_padded16_global_wrapper_stencil[37] + mul_padded16_global_wrapper_stencil_34_1138_1455_out)))) - in0_padded16_global_wrapper_stencil[14])) - (16'(in0_padded16_global_wrapper_stencil[35] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[38]);
assign smin_1800_1146_1801_in1 = 16'h00ff;
commonlib_smin__width16 smin_1800_1146_1801 (
    .in0(smin_1800_1146_1801_in0),
    .in1(smin_1800_1146_1801_in1),
    .out(smin_1800_1146_1801_out)
);
assign smin_1809_1146_1810_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[15] + (16'(in0_padded16_global_wrapper_stencil[39] + mul_padded16_global_wrapper_stencil_33_1138_1465_out)))) - in0_padded16_global_wrapper_stencil[13])) - mul_padded16_global_wrapper_stencil_34_1138_1455_out)) - in0_padded16_global_wrapper_stencil[37]);
assign smin_1809_1146_1810_in1 = 16'h00ff;
commonlib_smin__width16 smin_1809_1146_1810 (
    .in0(smin_1809_1146_1810_in0),
    .in1(smin_1809_1146_1810_in1),
    .out(smin_1809_1146_1810_out)
);
assign smin_1818_1146_1819_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[16] + (16'(in0_padded16_global_wrapper_stencil[40] + mul_padded16_global_wrapper_stencil_30_1138_1475_out)))) - in0_padded16_global_wrapper_stencil[17])) - mul_padded16_global_wrapper_stencil_31_1138_1698_out)) - in0_padded16_global_wrapper_stencil[41]);
assign smin_1818_1146_1819_in1 = 16'h00ff;
commonlib_smin__width16 smin_1818_1146_1819 (
    .in0(smin_1818_1146_1819_in0),
    .in1(smin_1818_1146_1819_in1),
    .out(smin_1818_1146_1819_out)
);
assign smin_1837_1146_1838_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[38] + (16'(in0_padded16_global_wrapper_stencil[37] + (16'(in0_padded16_global_wrapper_stencil[41] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[14])) - mul_padded16_global_wrapper_stencil_25_1138_1305_out)) - in0_padded16_global_wrapper_stencil[13]);
assign smin_1837_1146_1838_in1 = 16'h00ff;
commonlib_smin__width16 smin_1837_1146_1838 (
    .in0(smin_1837_1146_1838_in0),
    .in1(smin_1837_1146_1838_in1),
    .out(smin_1837_1146_1838_out)
);
assign smin_1847_1146_1848_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[37] + (16'(in0_padded16_global_wrapper_stencil[39] + (16'(in0_padded16_global_wrapper_stencil[40] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[13])) - mul_padded16_global_wrapper_stencil_24_1138_1315_out)) - in0_padded16_global_wrapper_stencil[15]);
assign smin_1847_1146_1848_in1 = 16'h00ff;
commonlib_smin__width16 smin_1847_1146_1848 (
    .in0(smin_1847_1146_1848_in0),
    .in1(smin_1847_1146_1848_in1),
    .out(smin_1847_1146_1848_out)
);
assign smin_1857_1146_1858_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[41] + (16'(in0_padded16_global_wrapper_stencil[40] + (16'(in0_padded16_global_wrapper_stencil[37] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[17])) - mul_padded16_global_wrapper_stencil_21_1138_1325_out)) - in0_padded16_global_wrapper_stencil[16]);
assign smin_1857_1146_1858_in1 = 16'h00ff;
commonlib_smin__width16 smin_1857_1146_1858 (
    .in0(smin_1857_1146_1858_in0),
    .in1(smin_1857_1146_1858_in1),
    .out(smin_1857_1146_1858_out)
);
assign smin_1899_1146_1900_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[21] + (16'(in0_padded16_global_wrapper_stencil[42] + mul_padded16_global_wrapper_stencil_32_1138_1756_out)))) - in0_padded16_global_wrapper_stencil[16])) - mul_padded16_global_wrapper_stencil_30_1138_1475_out)) - in0_padded16_global_wrapper_stencil[40]);
assign smin_1899_1146_1900_in1 = 16'h00ff;
commonlib_smin__width16 smin_1899_1146_1900 (
    .in0(smin_1899_1146_1900_in0),
    .in1(smin_1899_1146_1900_in1),
    .out(smin_1899_1146_1900_out)
);
assign smin_1918_1146_1919_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[40] + (16'(in0_padded16_global_wrapper_stencil[42] + (16'(in0_padded16_global_wrapper_stencil[39] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[16])) - mul_padded16_global_wrapper_stencil_23_1138_1418_out)) - in0_padded16_global_wrapper_stencil[21]);
assign smin_1918_1146_1919_in1 = 16'h00ff;
commonlib_smin__width16 smin_1918_1146_1919 (
    .in0(smin_1918_1146_1919_in0),
    .in1(smin_1918_1146_1919_in1),
    .out(smin_1918_1146_1919_out)
);
assign smin_1957_1146_1958_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[34] + (16'(in0_padded16_global_wrapper_stencil[43] + (16'(in0_padded16_global_wrapper_stencil[36] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[15])) - mul_padded16_global_wrapper_stencil_33_1138_1465_out)) - in0_padded16_global_wrapper_stencil[39]);
assign smin_1957_1146_1958_in1 = 16'h00ff;
commonlib_smin__width16 smin_1957_1146_1958 (
    .in0(smin_1957_1146_1958_in0),
    .in1(smin_1957_1146_1958_in1),
    .out(smin_1957_1146_1958_out)
);
assign smin_1976_1146_1977_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[39] + (16'(in0_padded16_global_wrapper_stencil[43] + (16'(in0_padded16_global_wrapper_stencil[42] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[15])) - mul_padded16_global_wrapper_stencil_29_1138_1408_out)) - in0_padded16_global_wrapper_stencil[34]);
assign smin_1976_1146_1977_in1 = 16'h00ff;
commonlib_smin__width16 smin_1976_1146_1977 (
    .in0(smin_1976_1146_1977_in0),
    .in1(smin_1976_1146_1977_in1),
    .out(smin_1976_1146_1977_out)
);
assign sub_1515_1518_1519_out = 16'((16'((16'(ashr_1435_1246_1436_out * ashr_1492_1246_1493_out)) - (16'(ashr_1512_1246_1513_out * ashr_1512_1246_1513_out)))) - (($signed(16'(add_1436_1493_1516_out * add_1436_1493_1516_out))) >>> 16'h0004));
assign out_hw_output_stencil = ((((((((($signed(16'((16'((16'(ashr_1245_1246_1247_out * ashr_1342_1246_1343_out)) - (16'(ashr_1370_1246_1371_out * ashr_1370_1246_1371_out)))) - (($signed(16'(add_1247_1343_1374_out * add_1247_1343_1374_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out))) & (($signed(16'((16'((16'(ashr_1538_1246_1539_out * ashr_1557_1246_1558_out)) - (16'(ashr_1569_1246_1570_out * ashr_1569_1246_1570_out)))) - (($signed(16'(add_1539_1558_1573_out * add_1539_1558_1573_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1616_1246_1617_out * ashr_1653_1246_1654_out)) - (16'(ashr_1669_1246_1670_out * ashr_1669_1246_1670_out)))) - (($signed(16'(add_1617_1654_1673_out * add_1617_1654_1673_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1696_1246_1697_out * ashr_1715_1246_1716_out)) - (16'(ashr_1727_1246_1728_out * ashr_1727_1246_1728_out)))) - (($signed(16'(add_1697_1716_1731_out * add_1697_1716_1731_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1754_1246_1755_out * ashr_1773_1246_1774_out)) - (16'(ashr_1785_1246_1786_out * ashr_1785_1246_1786_out)))) - (($signed(16'(add_1755_1774_1789_out * add_1755_1774_1789_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1830_1246_1831_out * ashr_1869_1246_1870_out)) - (16'(ashr_1885_1246_1886_out * ashr_1885_1246_1886_out)))) - (($signed(16'(add_1831_1870_1889_out * add_1831_1870_1889_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1911_1246_1912_out * ashr_1930_1246_1931_out)) - (16'(ashr_1942_1246_1943_out * ashr_1942_1246_1943_out)))) - (($signed(16'(add_1912_1931_1946_out * add_1912_1931_1946_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'((16'((16'(ashr_1969_1246_1970_out * ashr_1988_1246_1989_out)) - (16'(ashr_2000_1246_2001_out * ashr_2000_1246_2001_out)))) - (($signed(16'(add_1970_1989_2004_out * add_1970_1989_2004_out))) >>> 16'h0004)))) < ($signed(sub_1515_1518_1519_out)))) & (($signed(16'h0001)) <= ($signed(sub_1515_1518_1519_out))) ? 16'h00ff : 16'h0000;
endmodule

