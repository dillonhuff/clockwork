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
wire [15:0] add_1245_1341_1372_out;
wire [15:0] add_1434_1491_1514_out;
wire [15:0] add_1537_1556_1571_out;
wire [15:0] add_1615_1652_1671_out;
wire [15:0] add_1695_1714_1729_out;
wire [15:0] add_1753_1772_1787_out;
wire [15:0] add_1829_1868_1887_out;
wire [15:0] add_1910_1929_1944_out;
wire [15:0] add_1968_1987_2002_out;
wire [15:0] ashr_1149_1150_1151_out;
wire [15:0] ashr_1171_1150_1172_out;
wire [15:0] ashr_1182_1150_1183_out;
wire [15:0] ashr_1193_1150_1194_out;
wire [15:0] ashr_1203_1150_1204_out;
wire [15:0] ashr_1214_1150_1215_out;
wire [15:0] ashr_1224_1150_1225_out;
wire [15:0] ashr_1235_1150_1236_out;
wire [15:0] ashr_1244_1150_1245_out;
wire [15:0] ashr_1254_1150_1255_out;
wire [15:0] ashr_1274_1150_1275_out;
wire [15:0] ashr_1283_1150_1284_out;
wire [15:0] ashr_1292_1150_1293_out;
wire [15:0] ashr_1301_1150_1302_out;
wire [15:0] ashr_1311_1150_1312_out;
wire [15:0] ashr_1321_1150_1322_out;
wire [15:0] ashr_1331_1150_1332_out;
wire [15:0] ashr_1340_1150_1341_out;
wire [15:0] ashr_1343_1150_1344_out;
wire [15:0] ashr_1347_1150_1348_out;
wire [15:0] ashr_1349_1150_1350_out;
wire [15:0] ashr_1351_1150_1352_out;
wire [15:0] ashr_1353_1150_1354_out;
wire [15:0] ashr_1355_1150_1356_out;
wire [15:0] ashr_1357_1150_1358_out;
wire [15:0] ashr_1359_1150_1360_out;
wire [15:0] ashr_1368_1150_1369_out;
wire [15:0] ashr_1385_1150_1386_out;
wire [15:0] ashr_1395_1150_1396_out;
wire [15:0] ashr_1404_1150_1405_out;
wire [15:0] ashr_1414_1150_1415_out;
wire [15:0] ashr_1424_1150_1425_out;
wire [15:0] ashr_1433_1150_1434_out;
wire [15:0] ashr_1442_1150_1443_out;
wire [15:0] ashr_1451_1150_1452_out;
wire [15:0] ashr_1461_1150_1462_out;
wire [15:0] ashr_1471_1150_1472_out;
wire [15:0] ashr_1481_1150_1482_out;
wire [15:0] ashr_1490_1150_1491_out;
wire [15:0] ashr_1493_1150_1494_out;
wire [15:0] ashr_1495_1150_1496_out;
wire [15:0] ashr_1497_1150_1498_out;
wire [15:0] ashr_1499_1150_1500_out;
wire [15:0] ashr_1501_1150_1502_out;
wire [15:0] ashr_1510_1150_1511_out;
wire [15:0] ashr_1527_1150_1528_out;
wire [15:0] ashr_1536_1150_1537_out;
wire [15:0] ashr_1546_1150_1547_out;
wire [15:0] ashr_1555_1150_1556_out;
wire [15:0] ashr_1558_1150_1559_out;
wire [15:0] ashr_1567_1150_1568_out;
wire [15:0] ashr_1595_1150_1596_out;
wire [15:0] ashr_1605_1150_1606_out;
wire [15:0] ashr_1614_1150_1615_out;
wire [15:0] ashr_1633_1150_1634_out;
wire [15:0] ashr_1642_1150_1643_out;
wire [15:0] ashr_1651_1150_1652_out;
wire [15:0] ashr_1656_1150_1657_out;
wire [15:0] ashr_1658_1150_1659_out;
wire [15:0] ashr_1667_1150_1668_out;
wire [15:0] ashr_1685_1150_1686_out;
wire [15:0] ashr_1694_1150_1695_out;
wire [15:0] ashr_1704_1150_1705_out;
wire [15:0] ashr_1713_1150_1714_out;
wire [15:0] ashr_1716_1150_1717_out;
wire [15:0] ashr_1725_1150_1726_out;
wire [15:0] ashr_1743_1150_1744_out;
wire [15:0] ashr_1752_1150_1753_out;
wire [15:0] ashr_1762_1150_1763_out;
wire [15:0] ashr_1771_1150_1772_out;
wire [15:0] ashr_1774_1150_1775_out;
wire [15:0] ashr_1783_1150_1784_out;
wire [15:0] ashr_1810_1150_1811_out;
wire [15:0] ashr_1819_1150_1820_out;
wire [15:0] ashr_1828_1150_1829_out;
wire [15:0] ashr_1848_1150_1849_out;
wire [15:0] ashr_1858_1150_1859_out;
wire [15:0] ashr_1867_1150_1868_out;
wire [15:0] ashr_1872_1150_1873_out;
wire [15:0] ashr_1874_1150_1875_out;
wire [15:0] ashr_1883_1150_1884_out;
wire [15:0] ashr_1900_1150_1901_out;
wire [15:0] ashr_1909_1150_1910_out;
wire [15:0] ashr_1919_1150_1920_out;
wire [15:0] ashr_1928_1150_1929_out;
wire [15:0] ashr_1931_1150_1932_out;
wire [15:0] ashr_1940_1150_1941_out;
wire [15:0] ashr_1967_1150_1968_out;
wire [15:0] ashr_1986_1150_1987_out;
wire [15:0] ashr_1998_1150_1999_out;
wire [15:0] mul_padded16_global_wrapper_stencil_14_1137_1195_out;
wire [15:0] mul_padded16_global_wrapper_stencil_15_1137_1163_out;
wire [15:0] mul_padded16_global_wrapper_stencil_16_1137_1205_out;
wire [15:0] mul_padded16_global_wrapper_stencil_18_1137_1226_out;
wire [15:0] mul_padded16_global_wrapper_stencil_19_1137_1230_out;
wire [15:0] mul_padded16_global_wrapper_stencil_20_1137_1216_out;
wire [15:0] mul_padded16_global_wrapper_stencil_21_1137_1323_out;
wire [15:0] mul_padded16_global_wrapper_stencil_23_1137_1416_out;
wire [15:0] mul_padded16_global_wrapper_stencil_24_1137_1313_out;
wire [15:0] mul_padded16_global_wrapper_stencil_25_1137_1303_out;
wire [15:0] mul_padded16_global_wrapper_stencil_26_1137_1519_out;
wire [15:0] mul_padded16_global_wrapper_stencil_27_1137_1387_out;
wire [15:0] mul_padded16_global_wrapper_stencil_28_1137_1377_out;
wire [15:0] mul_padded16_global_wrapper_stencil_29_1137_1406_out;
wire [15:0] mul_padded16_global_wrapper_stencil_2_1137_1184_out;
wire [15:0] mul_padded16_global_wrapper_stencil_30_1137_1473_out;
wire [15:0] mul_padded16_global_wrapper_stencil_31_1137_1696_out;
wire [15:0] mul_padded16_global_wrapper_stencil_32_1137_1754_out;
wire [15:0] mul_padded16_global_wrapper_stencil_33_1137_1463_out;
wire [15:0] mul_padded16_global_wrapper_stencil_34_1137_1453_out;
wire [15:0] mul_padded16_global_wrapper_stencil_3_1137_1138_out;
wire [15:0] mul_padded16_global_wrapper_stencil_5_1137_1142_out;
wire [15:0] mul_padded16_global_wrapper_stencil_6_1137_1188_out;
wire [15:0] mul_padded16_global_wrapper_stencil_8_1137_1173_out;
wire [15:0] mul_padded16_global_wrapper_stencil_9_1137_1152_out;
wire [15:0] smax_1146_1147_1148_out;
wire [15:0] smax_1159_1147_1160_out;
wire [15:0] smax_1169_1147_1170_out;
wire [15:0] smax_1180_1147_1181_out;
wire [15:0] smax_1191_1147_1192_out;
wire [15:0] smax_1201_1147_1202_out;
wire [15:0] smax_1212_1147_1213_out;
wire [15:0] smax_1222_1147_1223_out;
wire [15:0] smax_1233_1147_1234_out;
wire [15:0] smax_1252_1147_1253_out;
wire [15:0] smax_1262_1147_1263_out;
wire [15:0] smax_1272_1147_1273_out;
wire [15:0] smax_1281_1147_1282_out;
wire [15:0] smax_1290_1147_1291_out;
wire [15:0] smax_1299_1147_1300_out;
wire [15:0] smax_1309_1147_1310_out;
wire [15:0] smax_1319_1147_1320_out;
wire [15:0] smax_1329_1147_1330_out;
wire [15:0] smax_1383_1147_1384_out;
wire [15:0] smax_1393_1147_1394_out;
wire [15:0] smax_1402_1147_1403_out;
wire [15:0] smax_1412_1147_1413_out;
wire [15:0] smax_1422_1147_1423_out;
wire [15:0] smax_1440_1147_1441_out;
wire [15:0] smax_1449_1147_1450_out;
wire [15:0] smax_1459_1147_1460_out;
wire [15:0] smax_1469_1147_1470_out;
wire [15:0] smax_1479_1147_1480_out;
wire [15:0] smax_1525_1147_1526_out;
wire [15:0] smax_1544_1147_1545_out;
wire [15:0] smax_1583_1147_1584_out;
wire [15:0] smax_1593_1147_1594_out;
wire [15:0] smax_1603_1147_1604_out;
wire [15:0] smax_1622_1147_1623_out;
wire [15:0] smax_1631_1147_1632_out;
wire [15:0] smax_1640_1147_1641_out;
wire [15:0] smax_1683_1147_1684_out;
wire [15:0] smax_1702_1147_1703_out;
wire [15:0] smax_1741_1147_1742_out;
wire [15:0] smax_1760_1147_1761_out;
wire [15:0] smax_1799_1147_1800_out;
wire [15:0] smax_1808_1147_1809_out;
wire [15:0] smax_1817_1147_1818_out;
wire [15:0] smax_1836_1147_1837_out;
wire [15:0] smax_1846_1147_1847_out;
wire [15:0] smax_1856_1147_1857_out;
wire [15:0] smax_1898_1147_1899_out;
wire [15:0] smax_1917_1147_1918_out;
wire [15:0] smax_1956_1147_1957_out;
wire [15:0] smax_1975_1147_1976_out;
wire [15:0] smin_1144_1145_1146_out;
wire [15:0] smin_1158_1145_1159_out;
wire [15:0] smin_1168_1145_1169_out;
wire [15:0] smin_1179_1145_1180_out;
wire [15:0] smin_1190_1145_1191_out;
wire [15:0] smin_1200_1145_1201_out;
wire [15:0] smin_1211_1145_1212_out;
wire [15:0] smin_1221_1145_1222_out;
wire [15:0] smin_1232_1145_1233_out;
wire [15:0] smin_1251_1145_1252_out;
wire [15:0] smin_1261_1145_1262_out;
wire [15:0] smin_1271_1145_1272_out;
wire [15:0] smin_1280_1145_1281_out;
wire [15:0] smin_1289_1145_1290_out;
wire [15:0] smin_1298_1145_1299_out;
wire [15:0] smin_1308_1145_1309_out;
wire [15:0] smin_1318_1145_1319_out;
wire [15:0] smin_1328_1145_1329_out;
wire [15:0] smin_1382_1145_1383_out;
wire [15:0] smin_1392_1145_1393_out;
wire [15:0] smin_1401_1145_1402_out;
wire [15:0] smin_1411_1145_1412_out;
wire [15:0] smin_1421_1145_1422_out;
wire [15:0] smin_1439_1145_1440_out;
wire [15:0] smin_1448_1145_1449_out;
wire [15:0] smin_1458_1145_1459_out;
wire [15:0] smin_1468_1145_1469_out;
wire [15:0] smin_1478_1145_1479_out;
wire [15:0] smin_1524_1145_1525_out;
wire [15:0] smin_1543_1145_1544_out;
wire [15:0] smin_1582_1145_1583_out;
wire [15:0] smin_1592_1145_1593_out;
wire [15:0] smin_1602_1145_1603_out;
wire [15:0] smin_1621_1145_1622_out;
wire [15:0] smin_1630_1145_1631_out;
wire [15:0] smin_1639_1145_1640_out;
wire [15:0] smin_1682_1145_1683_out;
wire [15:0] smin_1701_1145_1702_out;
wire [15:0] smin_1740_1145_1741_out;
wire [15:0] smin_1759_1145_1760_out;
wire [15:0] smin_1798_1145_1799_out;
wire [15:0] smin_1807_1145_1808_out;
wire [15:0] smin_1816_1145_1817_out;
wire [15:0] smin_1835_1145_1836_out;
wire [15:0] smin_1845_1145_1846_out;
wire [15:0] smin_1855_1145_1856_out;
wire [15:0] smin_1897_1145_1898_out;
wire [15:0] smin_1916_1145_1917_out;
wire [15:0] smin_1955_1145_1956_out;
wire [15:0] smin_1974_1145_1975_out;
wire [15:0] sub_1143_padded16_global_wrapper_stencil_6_1144_out;
wire [15:0] sub_1157_padded16_global_wrapper_stencil_12_1158_out;
wire [15:0] sub_1167_padded16_global_wrapper_stencil_8_1168_out;
wire [15:0] sub_1178_padded16_global_wrapper_stencil_17_1179_out;
wire [15:0] sub_1189_padded16_global_wrapper_stencil_19_1190_out;
wire [15:0] sub_1199_padded16_global_wrapper_stencil_16_1200_out;
wire [15:0] sub_1210_padded16_global_wrapper_stencil_22_1211_out;
wire [15:0] sub_1220_padded16_global_wrapper_stencil_21_1221_out;
wire [15:0] sub_1231_padded16_global_wrapper_stencil_25_1232_out;
wire [15:0] sub_1250_padded16_global_wrapper_stencil_1_1251_out;
wire [15:0] sub_1260_padded16_global_wrapper_stencil_7_1261_out;
wire [15:0] sub_1270_padded16_global_wrapper_stencil_13_1271_out;
wire [15:0] sub_1279_padded16_global_wrapper_stencil_9_1280_out;
wire [15:0] sub_1288_padded16_global_wrapper_stencil_3_1289_out;
wire [15:0] sub_1297_padded16_global_wrapper_stencil_15_1298_out;
wire [15:0] sub_1307_padded16_global_wrapper_stencil_8_1308_out;
wire [15:0] sub_1317_padded16_global_wrapper_stencil_14_1318_out;
wire [15:0] sub_1327_padded16_global_wrapper_stencil_2_1328_out;
wire [15:0] sub_1381_padded16_global_wrapper_stencil_18_1382_out;
wire [15:0] sub_1391_padded16_global_wrapper_stencil_24_1392_out;
wire [15:0] sub_1400_padded16_global_wrapper_stencil_31_1401_out;
wire [15:0] sub_1410_padded16_global_wrapper_stencil_30_1411_out;
wire [15:0] sub_1420_padded16_global_wrapper_stencil_34_1421_out;
wire [15:0] sub_1438_padded16_global_wrapper_stencil_26_1439_out;
wire [15:0] sub_1447_padded16_global_wrapper_stencil_28_1448_out;
wire [15:0] sub_1457_padded16_global_wrapper_stencil_18_1458_out;
wire [15:0] sub_1467_padded16_global_wrapper_stencil_27_1468_out;
wire [15:0] sub_1477_padded16_global_wrapper_stencil_20_1478_out;
wire [15:0] sub_1513_1516_1517_out;
wire [15:0] sub_1523_padded16_global_wrapper_stencil_2_1524_out;
wire [15:0] sub_1542_padded16_global_wrapper_stencil_35_1543_out;
wire [15:0] sub_1581_padded16_global_wrapper_stencil_14_1582_out;
wire [15:0] sub_1591_padded16_global_wrapper_stencil_20_1592_out;
wire [15:0] sub_1601_padded16_global_wrapper_stencil_23_1602_out;
wire [15:0] sub_1620_padded16_global_wrapper_stencil_36_1621_out;
wire [15:0] sub_1629_padded16_global_wrapper_stencil_38_1630_out;
wire [15:0] sub_1638_padded16_global_wrapper_stencil_37_1639_out;
wire [15:0] sub_1681_padded16_global_wrapper_stencil_41_1682_out;
wire [15:0] sub_1700_padded16_global_wrapper_stencil_16_1701_out;
wire [15:0] sub_1739_padded16_global_wrapper_stencil_33_1740_out;
wire [15:0] sub_1758_padded16_global_wrapper_stencil_39_1759_out;
wire [15:0] sub_1797_padded16_global_wrapper_stencil_44_1798_out;
wire [15:0] sub_1806_padded16_global_wrapper_stencil_43_1807_out;
wire [15:0] sub_1815_padded16_global_wrapper_stencil_47_1816_out;
wire [15:0] sub_1834_padded16_global_wrapper_stencil_21_1835_out;
wire [15:0] sub_1844_padded16_global_wrapper_stencil_23_1845_out;
wire [15:0] sub_1854_padded16_global_wrapper_stencil_24_1855_out;
wire [15:0] sub_1896_padded16_global_wrapper_stencil_46_1897_out;
wire [15:0] sub_1915_padded16_global_wrapper_stencil_29_1916_out;
wire [15:0] sub_1954_padded16_global_wrapper_stencil_45_1955_out;
wire [15:0] sub_1973_padded16_global_wrapper_stencil_40_1974_out;
assign add_1245_1341_1372_out = 16'(ashr_1244_1150_1245_out + ashr_1340_1150_1341_out);
assign add_1434_1491_1514_out = 16'(ashr_1433_1150_1434_out + ashr_1490_1150_1491_out);
assign add_1537_1556_1571_out = 16'(ashr_1536_1150_1537_out + ashr_1555_1150_1556_out);
assign add_1615_1652_1671_out = 16'(ashr_1614_1150_1615_out + ashr_1651_1150_1652_out);
assign add_1695_1714_1729_out = 16'(ashr_1694_1150_1695_out + ashr_1713_1150_1714_out);
assign add_1753_1772_1787_out = 16'(ashr_1752_1150_1753_out + ashr_1771_1150_1772_out);
assign add_1829_1868_1887_out = 16'(ashr_1828_1150_1829_out + ashr_1867_1150_1868_out);
assign add_1910_1929_1944_out = 16'(ashr_1909_1150_1910_out + ashr_1928_1150_1929_out);
assign add_1968_1987_2002_out = 16'(ashr_1967_1150_1968_out + ashr_1986_1150_1987_out);
assign ashr_1149_1150_1151_out = ($signed(16'(smax_1146_1147_1148_out * smax_1146_1147_1148_out))) >>> 16'h0006;
assign ashr_1171_1150_1172_out = ($signed(16'(smax_1169_1147_1170_out * smax_1169_1147_1170_out))) >>> 16'h0006;
assign ashr_1182_1150_1183_out = ($signed(16'(smax_1180_1147_1181_out * smax_1180_1147_1181_out))) >>> 16'h0006;
assign ashr_1193_1150_1194_out = ($signed(16'(smax_1191_1147_1192_out * smax_1191_1147_1192_out))) >>> 16'h0006;
assign ashr_1203_1150_1204_out = ($signed(16'(smax_1201_1147_1202_out * smax_1201_1147_1202_out))) >>> 16'h0006;
assign ashr_1214_1150_1215_out = ($signed(16'(smax_1212_1147_1213_out * smax_1212_1147_1213_out))) >>> 16'h0006;
assign ashr_1224_1150_1225_out = ($signed(16'(smax_1222_1147_1223_out * smax_1222_1147_1223_out))) >>> 16'h0006;
assign ashr_1235_1150_1236_out = ($signed(16'(smax_1233_1147_1234_out * smax_1233_1147_1234_out))) >>> 16'h0006;
assign ashr_1244_1150_1245_out = ($signed(16'(ashr_1149_1150_1151_out + (16'((($signed(16'(smax_1159_1147_1160_out * smax_1159_1147_1160_out))) >>> 16'h0006) + (16'(ashr_1171_1150_1172_out + (16'(ashr_1182_1150_1183_out + (16'(ashr_1193_1150_1194_out + (16'(ashr_1203_1150_1204_out + (16'(ashr_1214_1150_1215_out + (16'(ashr_1224_1150_1225_out + ashr_1235_1150_1236_out))))))))))))))))) >>> 16'h0006;
assign ashr_1254_1150_1255_out = ($signed(16'(smax_1252_1147_1253_out * smax_1252_1147_1253_out))) >>> 16'h0006;
assign ashr_1274_1150_1275_out = ($signed(16'(smax_1272_1147_1273_out * smax_1272_1147_1273_out))) >>> 16'h0006;
assign ashr_1283_1150_1284_out = ($signed(16'(smax_1281_1147_1282_out * smax_1281_1147_1282_out))) >>> 16'h0006;
assign ashr_1292_1150_1293_out = ($signed(16'(smax_1290_1147_1291_out * smax_1290_1147_1291_out))) >>> 16'h0006;
assign ashr_1301_1150_1302_out = ($signed(16'(smax_1299_1147_1300_out * smax_1299_1147_1300_out))) >>> 16'h0006;
assign ashr_1311_1150_1312_out = ($signed(16'(smax_1309_1147_1310_out * smax_1309_1147_1310_out))) >>> 16'h0006;
assign ashr_1321_1150_1322_out = ($signed(16'(smax_1319_1147_1320_out * smax_1319_1147_1320_out))) >>> 16'h0006;
assign ashr_1331_1150_1332_out = ($signed(16'(smax_1329_1147_1330_out * smax_1329_1147_1330_out))) >>> 16'h0006;
assign ashr_1340_1150_1341_out = ($signed(16'(ashr_1254_1150_1255_out + (16'((($signed(16'(smax_1262_1147_1263_out * smax_1262_1147_1263_out))) >>> 16'h0006) + (16'(ashr_1274_1150_1275_out + (16'(ashr_1283_1150_1284_out + (16'(ashr_1292_1150_1293_out + (16'(ashr_1301_1150_1302_out + (16'(ashr_1311_1150_1312_out + (16'(ashr_1321_1150_1322_out + ashr_1331_1150_1332_out))))))))))))))))) >>> 16'h0006;
assign ashr_1343_1150_1344_out = ($signed(16'(smax_1146_1147_1148_out * smax_1252_1147_1253_out))) >>> 16'h0006;
assign ashr_1347_1150_1348_out = ($signed(16'(smax_1169_1147_1170_out * smax_1272_1147_1273_out))) >>> 16'h0006;
assign ashr_1349_1150_1350_out = ($signed(16'(smax_1180_1147_1181_out * smax_1281_1147_1282_out))) >>> 16'h0006;
assign ashr_1351_1150_1352_out = ($signed(16'(smax_1191_1147_1192_out * smax_1290_1147_1291_out))) >>> 16'h0006;
assign ashr_1353_1150_1354_out = ($signed(16'(smax_1201_1147_1202_out * smax_1299_1147_1300_out))) >>> 16'h0006;
assign ashr_1355_1150_1356_out = ($signed(16'(smax_1212_1147_1213_out * smax_1309_1147_1310_out))) >>> 16'h0006;
assign ashr_1357_1150_1358_out = ($signed(16'(smax_1222_1147_1223_out * smax_1319_1147_1320_out))) >>> 16'h0006;
assign ashr_1359_1150_1360_out = ($signed(16'(smax_1233_1147_1234_out * smax_1329_1147_1330_out))) >>> 16'h0006;
assign ashr_1368_1150_1369_out = ($signed(16'(ashr_1343_1150_1344_out + (16'((($signed(16'(smax_1159_1147_1160_out * smax_1262_1147_1263_out))) >>> 16'h0006) + (16'(ashr_1347_1150_1348_out + (16'(ashr_1349_1150_1350_out + (16'(ashr_1351_1150_1352_out + (16'(ashr_1353_1150_1354_out + (16'(ashr_1355_1150_1356_out + (16'(ashr_1357_1150_1358_out + ashr_1359_1150_1360_out))))))))))))))))) >>> 16'h0006;
assign ashr_1385_1150_1386_out = ($signed(16'(smax_1383_1147_1384_out * smax_1383_1147_1384_out))) >>> 16'h0006;
assign ashr_1395_1150_1396_out = ($signed(16'(smax_1393_1147_1394_out * smax_1393_1147_1394_out))) >>> 16'h0006;
assign ashr_1404_1150_1405_out = ($signed(16'(smax_1402_1147_1403_out * smax_1402_1147_1403_out))) >>> 16'h0006;
assign ashr_1414_1150_1415_out = ($signed(16'(smax_1412_1147_1413_out * smax_1412_1147_1413_out))) >>> 16'h0006;
assign ashr_1424_1150_1425_out = ($signed(16'(smax_1422_1147_1423_out * smax_1422_1147_1423_out))) >>> 16'h0006;
assign ashr_1433_1150_1434_out = ($signed(16'(ashr_1203_1150_1204_out + (16'(ashr_1193_1150_1194_out + (16'(ashr_1385_1150_1386_out + (16'(ashr_1235_1150_1236_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1395_1150_1396_out + (16'(ashr_1404_1150_1405_out + (16'(ashr_1414_1150_1415_out + ashr_1424_1150_1425_out))))))))))))))))) >>> 16'h0006;
assign ashr_1442_1150_1443_out = ($signed(16'(smax_1440_1147_1441_out * smax_1440_1147_1441_out))) >>> 16'h0006;
assign ashr_1451_1150_1452_out = ($signed(16'(smax_1449_1147_1450_out * smax_1449_1147_1450_out))) >>> 16'h0006;
assign ashr_1461_1150_1462_out = ($signed(16'(smax_1459_1147_1460_out * smax_1459_1147_1460_out))) >>> 16'h0006;
assign ashr_1471_1150_1472_out = ($signed(16'(smax_1469_1147_1470_out * smax_1469_1147_1470_out))) >>> 16'h0006;
assign ashr_1481_1150_1482_out = ($signed(16'(smax_1479_1147_1480_out * smax_1479_1147_1480_out))) >>> 16'h0006;
assign ashr_1490_1150_1491_out = ($signed(16'(ashr_1301_1150_1302_out + (16'(ashr_1292_1150_1293_out + (16'(ashr_1442_1150_1443_out + (16'(ashr_1331_1150_1332_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1451_1150_1452_out + (16'(ashr_1461_1150_1462_out + (16'(ashr_1471_1150_1472_out + ashr_1481_1150_1482_out))))))))))))))))) >>> 16'h0006;
assign ashr_1493_1150_1494_out = ($signed(16'(smax_1383_1147_1384_out * smax_1440_1147_1441_out))) >>> 16'h0006;
assign ashr_1495_1150_1496_out = ($signed(16'(smax_1393_1147_1394_out * smax_1449_1147_1450_out))) >>> 16'h0006;
assign ashr_1497_1150_1498_out = ($signed(16'(smax_1402_1147_1403_out * smax_1459_1147_1460_out))) >>> 16'h0006;
assign ashr_1499_1150_1500_out = ($signed(16'(smax_1412_1147_1413_out * smax_1469_1147_1470_out))) >>> 16'h0006;
assign ashr_1501_1150_1502_out = ($signed(16'(smax_1422_1147_1423_out * smax_1479_1147_1480_out))) >>> 16'h0006;
assign ashr_1510_1150_1511_out = ($signed(16'(ashr_1353_1150_1354_out + (16'(ashr_1351_1150_1352_out + (16'(ashr_1493_1150_1494_out + (16'(ashr_1359_1150_1360_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1495_1150_1496_out + (16'(ashr_1497_1150_1498_out + (16'(ashr_1499_1150_1500_out + ashr_1501_1150_1502_out))))))))))))))))) >>> 16'h0006;
assign ashr_1527_1150_1528_out = ($signed(16'(smax_1525_1147_1526_out * smax_1525_1147_1526_out))) >>> 16'h0006;
assign ashr_1536_1150_1537_out = ($signed(16'(ashr_1171_1150_1172_out + (16'(ashr_1149_1150_1151_out + (16'(ashr_1527_1150_1528_out + (16'(ashr_1193_1150_1194_out + (16'(ashr_1203_1150_1204_out + (16'(ashr_1385_1150_1386_out + (16'(ashr_1235_1150_1236_out + (16'(ashr_1395_1150_1396_out + ashr_1224_1150_1225_out))))))))))))))))) >>> 16'h0006;
assign ashr_1546_1150_1547_out = ($signed(16'(smax_1544_1147_1545_out * smax_1544_1147_1545_out))) >>> 16'h0006;
assign ashr_1555_1150_1556_out = ($signed(16'(ashr_1274_1150_1275_out + (16'(ashr_1254_1150_1255_out + (16'(ashr_1546_1150_1547_out + (16'(ashr_1292_1150_1293_out + (16'(ashr_1301_1150_1302_out + (16'(ashr_1442_1150_1443_out + (16'(ashr_1331_1150_1332_out + (16'(ashr_1451_1150_1452_out + ashr_1321_1150_1322_out))))))))))))))))) >>> 16'h0006;
assign ashr_1558_1150_1559_out = ($signed(16'(smax_1525_1147_1526_out * smax_1544_1147_1545_out))) >>> 16'h0006;
assign ashr_1567_1150_1568_out = ($signed(16'(ashr_1347_1150_1348_out + (16'(ashr_1343_1150_1344_out + (16'(ashr_1558_1150_1559_out + (16'(ashr_1351_1150_1352_out + (16'(ashr_1353_1150_1354_out + (16'(ashr_1493_1150_1494_out + (16'(ashr_1359_1150_1360_out + (16'(ashr_1495_1150_1496_out + ashr_1357_1150_1358_out))))))))))))))))) >>> 16'h0006;
assign ashr_1595_1150_1596_out = ($signed(16'(smax_1593_1147_1594_out * smax_1593_1147_1594_out))) >>> 16'h0006;
assign ashr_1605_1150_1606_out = ($signed(16'(smax_1603_1147_1604_out * smax_1603_1147_1604_out))) >>> 16'h0006;
assign ashr_1614_1150_1615_out = ($signed(16'(ashr_1527_1150_1528_out + (16'(ashr_1171_1150_1172_out + (16'((($signed(16'(smax_1583_1147_1584_out * smax_1583_1147_1584_out))) >>> 16'h0006) + (16'(ashr_1203_1150_1204_out + (16'(ashr_1385_1150_1386_out + (16'(ashr_1595_1150_1596_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1605_1150_1606_out + ashr_1395_1150_1396_out))))))))))))))))) >>> 16'h0006;
assign ashr_1633_1150_1634_out = ($signed(16'(smax_1631_1147_1632_out * smax_1631_1147_1632_out))) >>> 16'h0006;
assign ashr_1642_1150_1643_out = ($signed(16'(smax_1640_1147_1641_out * smax_1640_1147_1641_out))) >>> 16'h0006;
assign ashr_1651_1150_1652_out = ($signed(16'(ashr_1546_1150_1547_out + (16'(ashr_1274_1150_1275_out + (16'((($signed(16'(smax_1622_1147_1623_out * smax_1622_1147_1623_out))) >>> 16'h0006) + (16'(ashr_1301_1150_1302_out + (16'(ashr_1442_1150_1443_out + (16'(ashr_1633_1150_1634_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1642_1150_1643_out + ashr_1451_1150_1452_out))))))))))))))))) >>> 16'h0006;
assign ashr_1656_1150_1657_out = ($signed(16'(smax_1593_1147_1594_out * smax_1631_1147_1632_out))) >>> 16'h0006;
assign ashr_1658_1150_1659_out = ($signed(16'(smax_1603_1147_1604_out * smax_1640_1147_1641_out))) >>> 16'h0006;
assign ashr_1667_1150_1668_out = ($signed(16'(ashr_1558_1150_1559_out + (16'(ashr_1347_1150_1348_out + (16'((($signed(16'(smax_1583_1147_1584_out * smax_1622_1147_1623_out))) >>> 16'h0006) + (16'(ashr_1353_1150_1354_out + (16'(ashr_1493_1150_1494_out + (16'(ashr_1656_1150_1657_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1658_1150_1659_out + ashr_1495_1150_1496_out))))))))))))))))) >>> 16'h0006;
assign ashr_1685_1150_1686_out = ($signed(16'(smax_1683_1147_1684_out * smax_1683_1147_1684_out))) >>> 16'h0006;
assign ashr_1694_1150_1695_out = ($signed(16'(ashr_1193_1150_1194_out + (16'(ashr_1182_1150_1183_out + (16'(ashr_1203_1150_1204_out + (16'(ashr_1214_1150_1215_out + (16'(ashr_1235_1150_1236_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1685_1150_1686_out + (16'(ashr_1424_1150_1425_out + ashr_1404_1150_1405_out))))))))))))))))) >>> 16'h0006;
assign ashr_1704_1150_1705_out = ($signed(16'(smax_1702_1147_1703_out * smax_1702_1147_1703_out))) >>> 16'h0006;
assign ashr_1713_1150_1714_out = ($signed(16'(ashr_1292_1150_1293_out + (16'(ashr_1283_1150_1284_out + (16'(ashr_1301_1150_1302_out + (16'(ashr_1311_1150_1312_out + (16'(ashr_1331_1150_1332_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1704_1150_1705_out + (16'(ashr_1481_1150_1482_out + ashr_1461_1150_1462_out))))))))))))))))) >>> 16'h0006;
assign ashr_1716_1150_1717_out = ($signed(16'(smax_1683_1147_1684_out * smax_1702_1147_1703_out))) >>> 16'h0006;
assign ashr_1725_1150_1726_out = ($signed(16'(ashr_1351_1150_1352_out + (16'(ashr_1349_1150_1350_out + (16'(ashr_1353_1150_1354_out + (16'(ashr_1355_1150_1356_out + (16'(ashr_1359_1150_1360_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1716_1150_1717_out + (16'(ashr_1501_1150_1502_out + ashr_1497_1150_1498_out))))))))))))))))) >>> 16'h0006;
assign ashr_1743_1150_1744_out = ($signed(16'(smax_1741_1147_1742_out * smax_1741_1147_1742_out))) >>> 16'h0006;
assign ashr_1752_1150_1753_out = ($signed(16'(ashr_1385_1150_1386_out + (16'(ashr_1203_1150_1204_out + (16'(ashr_1595_1150_1596_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1395_1150_1396_out + (16'(ashr_1605_1150_1606_out + (16'(ashr_1424_1150_1425_out + (16'(ashr_1743_1150_1744_out + ashr_1414_1150_1415_out))))))))))))))))) >>> 16'h0006;
assign ashr_1762_1150_1763_out = ($signed(16'(smax_1760_1147_1761_out * smax_1760_1147_1761_out))) >>> 16'h0006;
assign ashr_1771_1150_1772_out = ($signed(16'(ashr_1442_1150_1443_out + (16'(ashr_1301_1150_1302_out + (16'(ashr_1633_1150_1634_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1451_1150_1452_out + (16'(ashr_1642_1150_1643_out + (16'(ashr_1481_1150_1482_out + (16'(ashr_1762_1150_1763_out + ashr_1471_1150_1472_out))))))))))))))))) >>> 16'h0006;
assign ashr_1774_1150_1775_out = ($signed(16'(smax_1741_1147_1742_out * smax_1760_1147_1761_out))) >>> 16'h0006;
assign ashr_1783_1150_1784_out = ($signed(16'(ashr_1493_1150_1494_out + (16'(ashr_1353_1150_1354_out + (16'(ashr_1656_1150_1657_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1495_1150_1496_out + (16'(ashr_1658_1150_1659_out + (16'(ashr_1501_1150_1502_out + (16'(ashr_1774_1150_1775_out + ashr_1499_1150_1500_out))))))))))))))))) >>> 16'h0006;
assign ashr_1810_1150_1811_out = ($signed(16'(smax_1808_1147_1809_out * smax_1808_1147_1809_out))) >>> 16'h0006;
assign ashr_1819_1150_1820_out = ($signed(16'(smax_1817_1147_1818_out * smax_1817_1147_1818_out))) >>> 16'h0006;
assign ashr_1828_1150_1829_out = ($signed(16'(ashr_1235_1150_1236_out + (16'(ashr_1214_1150_1215_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1685_1150_1686_out + (16'(ashr_1404_1150_1405_out + (16'(ashr_1424_1150_1425_out + (16'((($signed(16'(smax_1799_1147_1800_out * smax_1799_1147_1800_out))) >>> 16'h0006) + (16'(ashr_1810_1150_1811_out + ashr_1819_1150_1820_out))))))))))))))))) >>> 16'h0006;
assign ashr_1848_1150_1849_out = ($signed(16'(smax_1846_1147_1847_out * smax_1846_1147_1847_out))) >>> 16'h0006;
assign ashr_1858_1150_1859_out = ($signed(16'(smax_1856_1147_1857_out * smax_1856_1147_1857_out))) >>> 16'h0006;
assign ashr_1867_1150_1868_out = ($signed(16'(ashr_1331_1150_1332_out + (16'(ashr_1311_1150_1312_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1704_1150_1705_out + (16'(ashr_1461_1150_1462_out + (16'(ashr_1481_1150_1482_out + (16'((($signed(16'(smax_1836_1147_1837_out * smax_1836_1147_1837_out))) >>> 16'h0006) + (16'(ashr_1848_1150_1849_out + ashr_1858_1150_1859_out))))))))))))))))) >>> 16'h0006;
assign ashr_1872_1150_1873_out = ($signed(16'(smax_1808_1147_1809_out * smax_1846_1147_1847_out))) >>> 16'h0006;
assign ashr_1874_1150_1875_out = ($signed(16'(smax_1817_1147_1818_out * smax_1856_1147_1857_out))) >>> 16'h0006;
assign ashr_1883_1150_1884_out = ($signed(16'(ashr_1359_1150_1360_out + (16'(ashr_1355_1150_1356_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1716_1150_1717_out + (16'(ashr_1497_1150_1498_out + (16'(ashr_1501_1150_1502_out + (16'((($signed(16'(smax_1799_1147_1800_out * smax_1836_1147_1837_out))) >>> 16'h0006) + (16'(ashr_1872_1150_1873_out + ashr_1874_1150_1875_out))))))))))))))))) >>> 16'h0006;
assign ashr_1900_1150_1901_out = ($signed(16'(smax_1898_1147_1899_out * smax_1898_1147_1899_out))) >>> 16'h0006;
assign ashr_1909_1150_1910_out = ($signed(16'(ashr_1224_1150_1225_out + (16'(ashr_1235_1150_1236_out + (16'(ashr_1395_1150_1396_out + (16'(ashr_1404_1150_1405_out + (16'(ashr_1424_1150_1425_out + (16'(ashr_1414_1150_1415_out + (16'(ashr_1819_1150_1820_out + (16'(ashr_1900_1150_1901_out + ashr_1810_1150_1811_out))))))))))))))))) >>> 16'h0006;
assign ashr_1919_1150_1920_out = ($signed(16'(smax_1917_1147_1918_out * smax_1917_1147_1918_out))) >>> 16'h0006;
assign ashr_1928_1150_1929_out = ($signed(16'(ashr_1321_1150_1322_out + (16'(ashr_1331_1150_1332_out + (16'(ashr_1451_1150_1452_out + (16'(ashr_1461_1150_1462_out + (16'(ashr_1481_1150_1482_out + (16'(ashr_1471_1150_1472_out + (16'(ashr_1858_1150_1859_out + (16'(ashr_1919_1150_1920_out + ashr_1848_1150_1849_out))))))))))))))))) >>> 16'h0006;
assign ashr_1931_1150_1932_out = ($signed(16'(smax_1898_1147_1899_out * smax_1917_1147_1918_out))) >>> 16'h0006;
assign ashr_1940_1150_1941_out = ($signed(16'(ashr_1357_1150_1358_out + (16'(ashr_1359_1150_1360_out + (16'(ashr_1495_1150_1496_out + (16'(ashr_1497_1150_1498_out + (16'(ashr_1501_1150_1502_out + (16'(ashr_1499_1150_1500_out + (16'(ashr_1874_1150_1875_out + (16'(ashr_1931_1150_1932_out + ashr_1872_1150_1873_out))))))))))))))))) >>> 16'h0006;
assign ashr_1967_1150_1968_out = ($signed(16'(ashr_1395_1150_1396_out + (16'(ashr_1224_1150_1225_out + (16'(ashr_1605_1150_1606_out + (16'(ashr_1424_1150_1425_out + (16'(ashr_1414_1150_1415_out + (16'(ashr_1743_1150_1744_out + (16'(ashr_1810_1150_1811_out + (16'((($signed(16'(smax_1956_1147_1957_out * smax_1956_1147_1957_out))) >>> 16'h0006) + ashr_1900_1150_1901_out))))))))))))))))) >>> 16'h0006;
assign ashr_1986_1150_1987_out = ($signed(16'(ashr_1451_1150_1452_out + (16'(ashr_1321_1150_1322_out + (16'(ashr_1642_1150_1643_out + (16'(ashr_1481_1150_1482_out + (16'(ashr_1471_1150_1472_out + (16'(ashr_1762_1150_1763_out + (16'(ashr_1848_1150_1849_out + (16'((($signed(16'(smax_1975_1147_1976_out * smax_1975_1147_1976_out))) >>> 16'h0006) + ashr_1919_1150_1920_out))))))))))))))))) >>> 16'h0006;
assign ashr_1998_1150_1999_out = ($signed(16'(ashr_1495_1150_1496_out + (16'(ashr_1357_1150_1358_out + (16'(ashr_1658_1150_1659_out + (16'(ashr_1501_1150_1502_out + (16'(ashr_1499_1150_1500_out + (16'(ashr_1774_1150_1775_out + (16'(ashr_1872_1150_1873_out + (16'((($signed(16'(smax_1956_1147_1957_out * smax_1975_1147_1976_out))) >>> 16'h0006) + ashr_1931_1150_1932_out))))))))))))))))) >>> 16'h0006;
assign mul_padded16_global_wrapper_stencil_14_1137_1195_out = 16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_15_1137_1163_out = 16'(in0_padded16_global_wrapper_stencil[6] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_16_1137_1205_out = 16'(in0_padded16_global_wrapper_stencil[7] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_18_1137_1226_out = 16'(in0_padded16_global_wrapper_stencil[9] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_19_1137_1230_out = 16'(in0_padded16_global_wrapper_stencil[10] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_20_1137_1216_out = 16'(in0_padded16_global_wrapper_stencil[12] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_21_1137_1323_out = 16'(in0_padded16_global_wrapper_stencil[13] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_23_1137_1416_out = 16'(in0_padded16_global_wrapper_stencil[15] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_24_1137_1313_out = 16'(in0_padded16_global_wrapper_stencil[16] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_25_1137_1303_out = 16'(in0_padded16_global_wrapper_stencil[17] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_26_1137_1519_out = 16'(in0_padded16_global_wrapper_stencil[18] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_27_1137_1387_out = 16'(in0_padded16_global_wrapper_stencil[19] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_28_1137_1377_out = 16'(in0_padded16_global_wrapper_stencil[20] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_29_1137_1406_out = 16'(in0_padded16_global_wrapper_stencil[21] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_2_1137_1184_out = 16'(in0_padded16_global_wrapper_stencil[11] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_30_1137_1473_out = 16'(in0_padded16_global_wrapper_stencil[23] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_31_1137_1696_out = 16'(in0_padded16_global_wrapper_stencil[24] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_32_1137_1754_out = 16'(in0_padded16_global_wrapper_stencil[25] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_33_1137_1463_out = 16'(in0_padded16_global_wrapper_stencil[26] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_34_1137_1453_out = 16'(in0_padded16_global_wrapper_stencil[27] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_3_1137_1138_out = 16'(in0_padded16_global_wrapper_stencil[22] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_5_1137_1142_out = 16'(in0_padded16_global_wrapper_stencil[44] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_6_1137_1188_out = 16'(in0_padded16_global_wrapper_stencil[45] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_8_1137_1173_out = 16'(in0_padded16_global_wrapper_stencil[47] * 16'h0002);
assign mul_padded16_global_wrapper_stencil_9_1137_1152_out = 16'(in0_padded16_global_wrapper_stencil[48] * 16'h0002);
commonlib_smax__width16 smax_1146_1147_1148 (
    .in0(smin_1144_1145_1146_out),
    .in1(16'hff4c),
    .out(smax_1146_1147_1148_out)
);
commonlib_smax__width16 smax_1159_1147_1160 (
    .in0(smin_1158_1145_1159_out),
    .in1(16'hff4c),
    .out(smax_1159_1147_1160_out)
);
commonlib_smax__width16 smax_1169_1147_1170 (
    .in0(smin_1168_1145_1169_out),
    .in1(16'hff4c),
    .out(smax_1169_1147_1170_out)
);
commonlib_smax__width16 smax_1180_1147_1181 (
    .in0(smin_1179_1145_1180_out),
    .in1(16'hff4c),
    .out(smax_1180_1147_1181_out)
);
commonlib_smax__width16 smax_1191_1147_1192 (
    .in0(smin_1190_1145_1191_out),
    .in1(16'hff4c),
    .out(smax_1191_1147_1192_out)
);
commonlib_smax__width16 smax_1201_1147_1202 (
    .in0(smin_1200_1145_1201_out),
    .in1(16'hff4c),
    .out(smax_1201_1147_1202_out)
);
commonlib_smax__width16 smax_1212_1147_1213 (
    .in0(smin_1211_1145_1212_out),
    .in1(16'hff4c),
    .out(smax_1212_1147_1213_out)
);
commonlib_smax__width16 smax_1222_1147_1223 (
    .in0(smin_1221_1145_1222_out),
    .in1(16'hff4c),
    .out(smax_1222_1147_1223_out)
);
commonlib_smax__width16 smax_1233_1147_1234 (
    .in0(smin_1232_1145_1233_out),
    .in1(16'hff4c),
    .out(smax_1233_1147_1234_out)
);
commonlib_smax__width16 smax_1252_1147_1253 (
    .in0(smin_1251_1145_1252_out),
    .in1(16'hff4c),
    .out(smax_1252_1147_1253_out)
);
commonlib_smax__width16 smax_1262_1147_1263 (
    .in0(smin_1261_1145_1262_out),
    .in1(16'hff4c),
    .out(smax_1262_1147_1263_out)
);
commonlib_smax__width16 smax_1272_1147_1273 (
    .in0(smin_1271_1145_1272_out),
    .in1(16'hff4c),
    .out(smax_1272_1147_1273_out)
);
commonlib_smax__width16 smax_1281_1147_1282 (
    .in0(smin_1280_1145_1281_out),
    .in1(16'hff4c),
    .out(smax_1281_1147_1282_out)
);
commonlib_smax__width16 smax_1290_1147_1291 (
    .in0(smin_1289_1145_1290_out),
    .in1(16'hff4c),
    .out(smax_1290_1147_1291_out)
);
commonlib_smax__width16 smax_1299_1147_1300 (
    .in0(smin_1298_1145_1299_out),
    .in1(16'hff4c),
    .out(smax_1299_1147_1300_out)
);
commonlib_smax__width16 smax_1309_1147_1310 (
    .in0(smin_1308_1145_1309_out),
    .in1(16'hff4c),
    .out(smax_1309_1147_1310_out)
);
commonlib_smax__width16 smax_1319_1147_1320 (
    .in0(smin_1318_1145_1319_out),
    .in1(16'hff4c),
    .out(smax_1319_1147_1320_out)
);
commonlib_smax__width16 smax_1329_1147_1330 (
    .in0(smin_1328_1145_1329_out),
    .in1(16'hff4c),
    .out(smax_1329_1147_1330_out)
);
commonlib_smax__width16 smax_1383_1147_1384 (
    .in0(smin_1382_1145_1383_out),
    .in1(16'hff4c),
    .out(smax_1383_1147_1384_out)
);
commonlib_smax__width16 smax_1393_1147_1394 (
    .in0(smin_1392_1145_1393_out),
    .in1(16'hff4c),
    .out(smax_1393_1147_1394_out)
);
commonlib_smax__width16 smax_1402_1147_1403 (
    .in0(smin_1401_1145_1402_out),
    .in1(16'hff4c),
    .out(smax_1402_1147_1403_out)
);
commonlib_smax__width16 smax_1412_1147_1413 (
    .in0(smin_1411_1145_1412_out),
    .in1(16'hff4c),
    .out(smax_1412_1147_1413_out)
);
commonlib_smax__width16 smax_1422_1147_1423 (
    .in0(smin_1421_1145_1422_out),
    .in1(16'hff4c),
    .out(smax_1422_1147_1423_out)
);
commonlib_smax__width16 smax_1440_1147_1441 (
    .in0(smin_1439_1145_1440_out),
    .in1(16'hff4c),
    .out(smax_1440_1147_1441_out)
);
commonlib_smax__width16 smax_1449_1147_1450 (
    .in0(smin_1448_1145_1449_out),
    .in1(16'hff4c),
    .out(smax_1449_1147_1450_out)
);
commonlib_smax__width16 smax_1459_1147_1460 (
    .in0(smin_1458_1145_1459_out),
    .in1(16'hff4c),
    .out(smax_1459_1147_1460_out)
);
commonlib_smax__width16 smax_1469_1147_1470 (
    .in0(smin_1468_1145_1469_out),
    .in1(16'hff4c),
    .out(smax_1469_1147_1470_out)
);
commonlib_smax__width16 smax_1479_1147_1480 (
    .in0(smin_1478_1145_1479_out),
    .in1(16'hff4c),
    .out(smax_1479_1147_1480_out)
);
commonlib_smax__width16 smax_1525_1147_1526 (
    .in0(smin_1524_1145_1525_out),
    .in1(16'hff4c),
    .out(smax_1525_1147_1526_out)
);
commonlib_smax__width16 smax_1544_1147_1545 (
    .in0(smin_1543_1145_1544_out),
    .in1(16'hff4c),
    .out(smax_1544_1147_1545_out)
);
commonlib_smax__width16 smax_1583_1147_1584 (
    .in0(smin_1582_1145_1583_out),
    .in1(16'hff4c),
    .out(smax_1583_1147_1584_out)
);
commonlib_smax__width16 smax_1593_1147_1594 (
    .in0(smin_1592_1145_1593_out),
    .in1(16'hff4c),
    .out(smax_1593_1147_1594_out)
);
commonlib_smax__width16 smax_1603_1147_1604 (
    .in0(smin_1602_1145_1603_out),
    .in1(16'hff4c),
    .out(smax_1603_1147_1604_out)
);
commonlib_smax__width16 smax_1622_1147_1623 (
    .in0(smin_1621_1145_1622_out),
    .in1(16'hff4c),
    .out(smax_1622_1147_1623_out)
);
commonlib_smax__width16 smax_1631_1147_1632 (
    .in0(smin_1630_1145_1631_out),
    .in1(16'hff4c),
    .out(smax_1631_1147_1632_out)
);
commonlib_smax__width16 smax_1640_1147_1641 (
    .in0(smin_1639_1145_1640_out),
    .in1(16'hff4c),
    .out(smax_1640_1147_1641_out)
);
commonlib_smax__width16 smax_1683_1147_1684 (
    .in0(smin_1682_1145_1683_out),
    .in1(16'hff4c),
    .out(smax_1683_1147_1684_out)
);
commonlib_smax__width16 smax_1702_1147_1703 (
    .in0(smin_1701_1145_1702_out),
    .in1(16'hff4c),
    .out(smax_1702_1147_1703_out)
);
commonlib_smax__width16 smax_1741_1147_1742 (
    .in0(smin_1740_1145_1741_out),
    .in1(16'hff4c),
    .out(smax_1741_1147_1742_out)
);
commonlib_smax__width16 smax_1760_1147_1761 (
    .in0(smin_1759_1145_1760_out),
    .in1(16'hff4c),
    .out(smax_1760_1147_1761_out)
);
commonlib_smax__width16 smax_1799_1147_1800 (
    .in0(smin_1798_1145_1799_out),
    .in1(16'hff4c),
    .out(smax_1799_1147_1800_out)
);
commonlib_smax__width16 smax_1808_1147_1809 (
    .in0(smin_1807_1145_1808_out),
    .in1(16'hff4c),
    .out(smax_1808_1147_1809_out)
);
commonlib_smax__width16 smax_1817_1147_1818 (
    .in0(smin_1816_1145_1817_out),
    .in1(16'hff4c),
    .out(smax_1817_1147_1818_out)
);
commonlib_smax__width16 smax_1836_1147_1837 (
    .in0(smin_1835_1145_1836_out),
    .in1(16'hff4c),
    .out(smax_1836_1147_1837_out)
);
commonlib_smax__width16 smax_1846_1147_1847 (
    .in0(smin_1845_1145_1846_out),
    .in1(16'hff4c),
    .out(smax_1846_1147_1847_out)
);
commonlib_smax__width16 smax_1856_1147_1857 (
    .in0(smin_1855_1145_1856_out),
    .in1(16'hff4c),
    .out(smax_1856_1147_1857_out)
);
commonlib_smax__width16 smax_1898_1147_1899 (
    .in0(smin_1897_1145_1898_out),
    .in1(16'hff4c),
    .out(smax_1898_1147_1899_out)
);
commonlib_smax__width16 smax_1917_1147_1918 (
    .in0(smin_1916_1145_1917_out),
    .in1(16'hff4c),
    .out(smax_1917_1147_1918_out)
);
commonlib_smax__width16 smax_1956_1147_1957 (
    .in0(smin_1955_1145_1956_out),
    .in1(16'hff4c),
    .out(smax_1956_1147_1957_out)
);
commonlib_smax__width16 smax_1975_1147_1976 (
    .in0(smin_1974_1145_1975_out),
    .in1(16'hff4c),
    .out(smax_1975_1147_1976_out)
);
commonlib_smin__width16 smin_1144_1145_1146 (
    .in0(sub_1143_padded16_global_wrapper_stencil_6_1144_out),
    .in1(16'h00b4),
    .out(smin_1144_1145_1146_out)
);
commonlib_smin__width16 smin_1158_1145_1159 (
    .in0(sub_1157_padded16_global_wrapper_stencil_12_1158_out),
    .in1(16'h00b4),
    .out(smin_1158_1145_1159_out)
);
commonlib_smin__width16 smin_1168_1145_1169 (
    .in0(sub_1167_padded16_global_wrapper_stencil_8_1168_out),
    .in1(16'h00b4),
    .out(smin_1168_1145_1169_out)
);
commonlib_smin__width16 smin_1179_1145_1180 (
    .in0(sub_1178_padded16_global_wrapper_stencil_17_1179_out),
    .in1(16'h00b4),
    .out(smin_1179_1145_1180_out)
);
commonlib_smin__width16 smin_1190_1145_1191 (
    .in0(sub_1189_padded16_global_wrapper_stencil_19_1190_out),
    .in1(16'h00b4),
    .out(smin_1190_1145_1191_out)
);
commonlib_smin__width16 smin_1200_1145_1201 (
    .in0(sub_1199_padded16_global_wrapper_stencil_16_1200_out),
    .in1(16'h00b4),
    .out(smin_1200_1145_1201_out)
);
commonlib_smin__width16 smin_1211_1145_1212 (
    .in0(sub_1210_padded16_global_wrapper_stencil_22_1211_out),
    .in1(16'h00b4),
    .out(smin_1211_1145_1212_out)
);
commonlib_smin__width16 smin_1221_1145_1222 (
    .in0(sub_1220_padded16_global_wrapper_stencil_21_1221_out),
    .in1(16'h00b4),
    .out(smin_1221_1145_1222_out)
);
commonlib_smin__width16 smin_1232_1145_1233 (
    .in0(sub_1231_padded16_global_wrapper_stencil_25_1232_out),
    .in1(16'h00b4),
    .out(smin_1232_1145_1233_out)
);
commonlib_smin__width16 smin_1251_1145_1252 (
    .in0(sub_1250_padded16_global_wrapper_stencil_1_1251_out),
    .in1(16'h00b4),
    .out(smin_1251_1145_1252_out)
);
commonlib_smin__width16 smin_1261_1145_1262 (
    .in0(sub_1260_padded16_global_wrapper_stencil_7_1261_out),
    .in1(16'h00b4),
    .out(smin_1261_1145_1262_out)
);
commonlib_smin__width16 smin_1271_1145_1272 (
    .in0(sub_1270_padded16_global_wrapper_stencil_13_1271_out),
    .in1(16'h00b4),
    .out(smin_1271_1145_1272_out)
);
commonlib_smin__width16 smin_1280_1145_1281 (
    .in0(sub_1279_padded16_global_wrapper_stencil_9_1280_out),
    .in1(16'h00b4),
    .out(smin_1280_1145_1281_out)
);
commonlib_smin__width16 smin_1289_1145_1290 (
    .in0(sub_1288_padded16_global_wrapper_stencil_3_1289_out),
    .in1(16'h00b4),
    .out(smin_1289_1145_1290_out)
);
commonlib_smin__width16 smin_1298_1145_1299 (
    .in0(sub_1297_padded16_global_wrapper_stencil_15_1298_out),
    .in1(16'h00b4),
    .out(smin_1298_1145_1299_out)
);
commonlib_smin__width16 smin_1308_1145_1309 (
    .in0(sub_1307_padded16_global_wrapper_stencil_8_1308_out),
    .in1(16'h00b4),
    .out(smin_1308_1145_1309_out)
);
commonlib_smin__width16 smin_1318_1145_1319 (
    .in0(sub_1317_padded16_global_wrapper_stencil_14_1318_out),
    .in1(16'h00b4),
    .out(smin_1318_1145_1319_out)
);
commonlib_smin__width16 smin_1328_1145_1329 (
    .in0(sub_1327_padded16_global_wrapper_stencil_2_1328_out),
    .in1(16'h00b4),
    .out(smin_1328_1145_1329_out)
);
commonlib_smin__width16 smin_1382_1145_1383 (
    .in0(sub_1381_padded16_global_wrapper_stencil_18_1382_out),
    .in1(16'h00b4),
    .out(smin_1382_1145_1383_out)
);
commonlib_smin__width16 smin_1392_1145_1393 (
    .in0(sub_1391_padded16_global_wrapper_stencil_24_1392_out),
    .in1(16'h00b4),
    .out(smin_1392_1145_1393_out)
);
commonlib_smin__width16 smin_1401_1145_1402 (
    .in0(sub_1400_padded16_global_wrapper_stencil_31_1401_out),
    .in1(16'h00b4),
    .out(smin_1401_1145_1402_out)
);
commonlib_smin__width16 smin_1411_1145_1412 (
    .in0(sub_1410_padded16_global_wrapper_stencil_30_1411_out),
    .in1(16'h00b4),
    .out(smin_1411_1145_1412_out)
);
commonlib_smin__width16 smin_1421_1145_1422 (
    .in0(sub_1420_padded16_global_wrapper_stencil_34_1421_out),
    .in1(16'h00b4),
    .out(smin_1421_1145_1422_out)
);
commonlib_smin__width16 smin_1439_1145_1440 (
    .in0(sub_1438_padded16_global_wrapper_stencil_26_1439_out),
    .in1(16'h00b4),
    .out(smin_1439_1145_1440_out)
);
commonlib_smin__width16 smin_1448_1145_1449 (
    .in0(sub_1447_padded16_global_wrapper_stencil_28_1448_out),
    .in1(16'h00b4),
    .out(smin_1448_1145_1449_out)
);
commonlib_smin__width16 smin_1458_1145_1459 (
    .in0(sub_1457_padded16_global_wrapper_stencil_18_1458_out),
    .in1(16'h00b4),
    .out(smin_1458_1145_1459_out)
);
commonlib_smin__width16 smin_1468_1145_1469 (
    .in0(sub_1467_padded16_global_wrapper_stencil_27_1468_out),
    .in1(16'h00b4),
    .out(smin_1468_1145_1469_out)
);
commonlib_smin__width16 smin_1478_1145_1479 (
    .in0(sub_1477_padded16_global_wrapper_stencil_20_1478_out),
    .in1(16'h00b4),
    .out(smin_1478_1145_1479_out)
);
commonlib_smin__width16 smin_1524_1145_1525 (
    .in0(sub_1523_padded16_global_wrapper_stencil_2_1524_out),
    .in1(16'h00b4),
    .out(smin_1524_1145_1525_out)
);
commonlib_smin__width16 smin_1543_1145_1544 (
    .in0(sub_1542_padded16_global_wrapper_stencil_35_1543_out),
    .in1(16'h00b4),
    .out(smin_1543_1145_1544_out)
);
commonlib_smin__width16 smin_1582_1145_1583 (
    .in0(sub_1581_padded16_global_wrapper_stencil_14_1582_out),
    .in1(16'h00b4),
    .out(smin_1582_1145_1583_out)
);
commonlib_smin__width16 smin_1592_1145_1593 (
    .in0(sub_1591_padded16_global_wrapper_stencil_20_1592_out),
    .in1(16'h00b4),
    .out(smin_1592_1145_1593_out)
);
commonlib_smin__width16 smin_1602_1145_1603 (
    .in0(sub_1601_padded16_global_wrapper_stencil_23_1602_out),
    .in1(16'h00b4),
    .out(smin_1602_1145_1603_out)
);
commonlib_smin__width16 smin_1621_1145_1622 (
    .in0(sub_1620_padded16_global_wrapper_stencil_36_1621_out),
    .in1(16'h00b4),
    .out(smin_1621_1145_1622_out)
);
commonlib_smin__width16 smin_1630_1145_1631 (
    .in0(sub_1629_padded16_global_wrapper_stencil_38_1630_out),
    .in1(16'h00b4),
    .out(smin_1630_1145_1631_out)
);
commonlib_smin__width16 smin_1639_1145_1640 (
    .in0(sub_1638_padded16_global_wrapper_stencil_37_1639_out),
    .in1(16'h00b4),
    .out(smin_1639_1145_1640_out)
);
commonlib_smin__width16 smin_1682_1145_1683 (
    .in0(sub_1681_padded16_global_wrapper_stencil_41_1682_out),
    .in1(16'h00b4),
    .out(smin_1682_1145_1683_out)
);
commonlib_smin__width16 smin_1701_1145_1702 (
    .in0(sub_1700_padded16_global_wrapper_stencil_16_1701_out),
    .in1(16'h00b4),
    .out(smin_1701_1145_1702_out)
);
commonlib_smin__width16 smin_1740_1145_1741 (
    .in0(sub_1739_padded16_global_wrapper_stencil_33_1740_out),
    .in1(16'h00b4),
    .out(smin_1740_1145_1741_out)
);
commonlib_smin__width16 smin_1759_1145_1760 (
    .in0(sub_1758_padded16_global_wrapper_stencil_39_1759_out),
    .in1(16'h00b4),
    .out(smin_1759_1145_1760_out)
);
commonlib_smin__width16 smin_1798_1145_1799 (
    .in0(sub_1797_padded16_global_wrapper_stencil_44_1798_out),
    .in1(16'h00b4),
    .out(smin_1798_1145_1799_out)
);
commonlib_smin__width16 smin_1807_1145_1808 (
    .in0(sub_1806_padded16_global_wrapper_stencil_43_1807_out),
    .in1(16'h00b4),
    .out(smin_1807_1145_1808_out)
);
commonlib_smin__width16 smin_1816_1145_1817 (
    .in0(sub_1815_padded16_global_wrapper_stencil_47_1816_out),
    .in1(16'h00b4),
    .out(smin_1816_1145_1817_out)
);
commonlib_smin__width16 smin_1835_1145_1836 (
    .in0(sub_1834_padded16_global_wrapper_stencil_21_1835_out),
    .in1(16'h00b4),
    .out(smin_1835_1145_1836_out)
);
commonlib_smin__width16 smin_1845_1145_1846 (
    .in0(sub_1844_padded16_global_wrapper_stencil_23_1845_out),
    .in1(16'h00b4),
    .out(smin_1845_1145_1846_out)
);
commonlib_smin__width16 smin_1855_1145_1856 (
    .in0(sub_1854_padded16_global_wrapper_stencil_24_1855_out),
    .in1(16'h00b4),
    .out(smin_1855_1145_1856_out)
);
commonlib_smin__width16 smin_1897_1145_1898 (
    .in0(sub_1896_padded16_global_wrapper_stencil_46_1897_out),
    .in1(16'h00b4),
    .out(smin_1897_1145_1898_out)
);
commonlib_smin__width16 smin_1916_1145_1917 (
    .in0(sub_1915_padded16_global_wrapper_stencil_29_1916_out),
    .in1(16'h00b4),
    .out(smin_1916_1145_1917_out)
);
commonlib_smin__width16 smin_1955_1145_1956 (
    .in0(sub_1954_padded16_global_wrapper_stencil_45_1955_out),
    .in1(16'h00b4),
    .out(smin_1955_1145_1956_out)
);
commonlib_smin__width16 smin_1974_1145_1975 (
    .in0(sub_1973_padded16_global_wrapper_stencil_40_1974_out),
    .in1(16'h00b4),
    .out(smin_1974_1145_1975_out)
);
assign sub_1143_padded16_global_wrapper_stencil_6_1144_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[11] + mul_padded16_global_wrapper_stencil_3_1137_1138_out)))) - in0_padded16_global_wrapper_stencil[33])) - mul_padded16_global_wrapper_stencil_5_1137_1142_out)) - in0_padded16_global_wrapper_stencil[45]);
assign sub_1157_padded16_global_wrapper_stencil_12_1158_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[46] + (16'(in0_padded16_global_wrapper_stencil[47] + mul_padded16_global_wrapper_stencil_9_1137_1152_out)))) - in0_padded16_global_wrapper_stencil[1])) - (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[3]);
assign sub_1167_padded16_global_wrapper_stencil_8_1168_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] + mul_padded16_global_wrapper_stencil_15_1137_1163_out)))) - in0_padded16_global_wrapper_stencil[46])) - mul_padded16_global_wrapper_stencil_9_1137_1152_out)) - in0_padded16_global_wrapper_stencil[47]);
assign sub_1178_padded16_global_wrapper_stencil_17_1179_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[48] + (16'(in0_padded16_global_wrapper_stencil[7] + mul_padded16_global_wrapper_stencil_8_1137_1173_out)))) - in0_padded16_global_wrapper_stencil[2])) - (16'(in0_padded16_global_wrapper_stencil[3] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[8]);
assign sub_1189_padded16_global_wrapper_stencil_19_1190_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[22] + (16'(in0_padded16_global_wrapper_stencil[9] + mul_padded16_global_wrapper_stencil_2_1137_1184_out)))) - in0_padded16_global_wrapper_stencil[44])) - mul_padded16_global_wrapper_stencil_6_1137_1188_out)) - in0_padded16_global_wrapper_stencil[10]);
assign sub_1199_padded16_global_wrapper_stencil_16_1200_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[6] + (16'(in0_padded16_global_wrapper_stencil[12] + mul_padded16_global_wrapper_stencil_14_1137_1195_out)))) - in0_padded16_global_wrapper_stencil[48])) - mul_padded16_global_wrapper_stencil_8_1137_1173_out)) - in0_padded16_global_wrapper_stencil[7]);
assign sub_1210_padded16_global_wrapper_stencil_22_1211_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[47] + (16'(in0_padded16_global_wrapper_stencil[13] + mul_padded16_global_wrapper_stencil_16_1137_1205_out)))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[8] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[14]);
assign sub_1220_padded16_global_wrapper_stencil_21_1221_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[5] + (16'(in0_padded16_global_wrapper_stencil[15] + mul_padded16_global_wrapper_stencil_20_1137_1216_out)))) - in0_padded16_global_wrapper_stencil[47])) - mul_padded16_global_wrapper_stencil_16_1137_1205_out)) - in0_padded16_global_wrapper_stencil[13]);
assign sub_1231_padded16_global_wrapper_stencil_25_1232_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[11] + (16'(in0_padded16_global_wrapper_stencil[16] + mul_padded16_global_wrapper_stencil_18_1137_1226_out)))) - in0_padded16_global_wrapper_stencil[45])) - mul_padded16_global_wrapper_stencil_19_1137_1230_out)) - in0_padded16_global_wrapper_stencil[17]);
assign sub_1250_padded16_global_wrapper_stencil_1_1251_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[45] + (16'(in0_padded16_global_wrapper_stencil[11] + mul_padded16_global_wrapper_stencil_8_1137_1173_out)))) - in0_padded16_global_wrapper_stencil[33])) - (16'(in0_padded16_global_wrapper_stencil[46] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[0]);
assign sub_1260_padded16_global_wrapper_stencil_7_1261_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[47] + mul_padded16_global_wrapper_stencil_6_1137_1188_out)))) - in0_padded16_global_wrapper_stencil[1])) - (16'(in0_padded16_global_wrapper_stencil[33] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[46]);
assign sub_1270_padded16_global_wrapper_stencil_13_1271_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[47] + (16'(in0_padded16_global_wrapper_stencil[5] + mul_padded16_global_wrapper_stencil_2_1137_1184_out)))) - in0_padded16_global_wrapper_stencil[46])) - (16'(in0_padded16_global_wrapper_stencil[0] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[4]);
assign sub_1279_padded16_global_wrapper_stencil_9_1280_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[8] + (16'(in0_padded16_global_wrapper_stencil[7] + mul_padded16_global_wrapper_stencil_19_1137_1230_out)))) - in0_padded16_global_wrapper_stencil[2])) - mul_padded16_global_wrapper_stencil_5_1137_1142_out)) - in0_padded16_global_wrapper_stencil[48]);
assign sub_1288_padded16_global_wrapper_stencil_3_1289_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[10] + (16'(in0_padded16_global_wrapper_stencil[9] + mul_padded16_global_wrapper_stencil_16_1137_1205_out)))) - in0_padded16_global_wrapper_stencil[44])) - mul_padded16_global_wrapper_stencil_9_1137_1152_out)) - in0_padded16_global_wrapper_stencil[22]);
assign sub_1297_padded16_global_wrapper_stencil_15_1298_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[7] + (16'(in0_padded16_global_wrapper_stencil[12] + mul_padded16_global_wrapper_stencil_18_1137_1226_out)))) - in0_padded16_global_wrapper_stencil[48])) - mul_padded16_global_wrapper_stencil_3_1137_1138_out)) - in0_padded16_global_wrapper_stencil[6]);
assign sub_1307_padded16_global_wrapper_stencil_8_1308_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[14] + (16'(in0_padded16_global_wrapper_stencil[13] + mul_padded16_global_wrapper_stencil_25_1137_1303_out)))) - in0_padded16_global_wrapper_stencil[3])) - mul_padded16_global_wrapper_stencil_6_1137_1188_out)) - in0_padded16_global_wrapper_stencil[47]);
assign sub_1317_padded16_global_wrapper_stencil_14_1318_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[13] + (16'(in0_padded16_global_wrapper_stencil[15] + mul_padded16_global_wrapper_stencil_24_1137_1313_out)))) - in0_padded16_global_wrapper_stencil[47])) - mul_padded16_global_wrapper_stencil_2_1137_1184_out)) - in0_padded16_global_wrapper_stencil[5]);
assign sub_1327_padded16_global_wrapper_stencil_2_1328_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[17] + (16'(in0_padded16_global_wrapper_stencil[16] + mul_padded16_global_wrapper_stencil_21_1137_1323_out)))) - in0_padded16_global_wrapper_stencil[45])) - mul_padded16_global_wrapper_stencil_8_1137_1173_out)) - in0_padded16_global_wrapper_stencil[11]);
assign sub_1381_padded16_global_wrapper_stencil_18_1382_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[18] + (16'(in0_padded16_global_wrapper_stencil[19] + mul_padded16_global_wrapper_stencil_28_1137_1377_out)))) - in0_padded16_global_wrapper_stencil[22])) - mul_padded16_global_wrapper_stencil_2_1137_1184_out)) - in0_padded16_global_wrapper_stencil[9]);
assign sub_1391_padded16_global_wrapper_stencil_24_1392_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[20] + (16'(in0_padded16_global_wrapper_stencil[21] + mul_padded16_global_wrapper_stencil_27_1137_1387_out)))) - in0_padded16_global_wrapper_stencil[11])) - mul_padded16_global_wrapper_stencil_18_1137_1226_out)) - in0_padded16_global_wrapper_stencil[16]);
assign sub_1400_padded16_global_wrapper_stencil_31_1401_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[9] + (16'(in0_padded16_global_wrapper_stencil[23] + mul_padded16_global_wrapper_stencil_24_1137_1313_out)))) - in0_padded16_global_wrapper_stencil[10])) - mul_padded16_global_wrapper_stencil_25_1137_1303_out)) - in0_padded16_global_wrapper_stencil[24]);
assign sub_1410_padded16_global_wrapper_stencil_30_1411_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[19] + (16'(in0_padded16_global_wrapper_stencil[25] + mul_padded16_global_wrapper_stencil_29_1137_1406_out)))) - in0_padded16_global_wrapper_stencil[9])) - mul_padded16_global_wrapper_stencil_24_1137_1313_out)) - in0_padded16_global_wrapper_stencil[23]);
assign sub_1420_padded16_global_wrapper_stencil_34_1421_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[12] + (16'(in0_padded16_global_wrapper_stencil[26] + mul_padded16_global_wrapper_stencil_23_1137_1416_out)))) - in0_padded16_global_wrapper_stencil[7])) - mul_padded16_global_wrapper_stencil_21_1137_1323_out)) - in0_padded16_global_wrapper_stencil[27]);
assign sub_1438_padded16_global_wrapper_stencil_26_1439_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[9] + (16'(in0_padded16_global_wrapper_stencil[19] + mul_padded16_global_wrapper_stencil_20_1137_1216_out)))) - in0_padded16_global_wrapper_stencil[22])) - mul_padded16_global_wrapper_stencil_15_1137_1163_out)) - in0_padded16_global_wrapper_stencil[18]);
assign sub_1447_padded16_global_wrapper_stencil_28_1448_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[16] + (16'(in0_padded16_global_wrapper_stencil[21] + mul_padded16_global_wrapper_stencil_23_1137_1416_out)))) - in0_padded16_global_wrapper_stencil[11])) - mul_padded16_global_wrapper_stencil_14_1137_1195_out)) - in0_padded16_global_wrapper_stencil[20]);
assign sub_1457_padded16_global_wrapper_stencil_18_1458_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[24] + (16'(in0_padded16_global_wrapper_stencil[23] + mul_padded16_global_wrapper_stencil_34_1137_1453_out)))) - in0_padded16_global_wrapper_stencil[10])) - mul_padded16_global_wrapper_stencil_16_1137_1205_out)) - in0_padded16_global_wrapper_stencil[9]);
assign sub_1467_padded16_global_wrapper_stencil_27_1468_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[23] + (16'(in0_padded16_global_wrapper_stencil[25] + mul_padded16_global_wrapper_stencil_33_1137_1463_out)))) - in0_padded16_global_wrapper_stencil[9])) - mul_padded16_global_wrapper_stencil_20_1137_1216_out)) - in0_padded16_global_wrapper_stencil[19]);
assign sub_1477_padded16_global_wrapper_stencil_20_1478_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[27] + (16'(in0_padded16_global_wrapper_stencil[26] + mul_padded16_global_wrapper_stencil_30_1137_1473_out)))) - in0_padded16_global_wrapper_stencil[7])) - mul_padded16_global_wrapper_stencil_18_1137_1226_out)) - in0_padded16_global_wrapper_stencil[12]);
assign sub_1513_1516_1517_out = 16'((16'((16'(ashr_1433_1150_1434_out * ashr_1490_1150_1491_out)) - (16'(ashr_1510_1150_1511_out * ashr_1510_1150_1511_out)))) - (($signed(16'(add_1434_1491_1514_out * add_1434_1491_1514_out))) >>> 16'h0004));
assign sub_1523_padded16_global_wrapper_stencil_2_1524_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[28] + (16'(in0_padded16_global_wrapper_stencil[20] + mul_padded16_global_wrapper_stencil_26_1137_1519_out)))) - in0_padded16_global_wrapper_stencil[0])) - mul_padded16_global_wrapper_stencil_3_1137_1138_out)) - in0_padded16_global_wrapper_stencil[11]);
assign sub_1542_padded16_global_wrapper_stencil_35_1543_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[11] + (16'(in0_padded16_global_wrapper_stencil[20] + mul_padded16_global_wrapper_stencil_14_1137_1195_out)))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[28]);
assign sub_1581_padded16_global_wrapper_stencil_14_1582_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[29] + (16'(in0_padded16_global_wrapper_stencil[30] + (16'(in0_padded16_global_wrapper_stencil[31] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[4])) - mul_padded16_global_wrapper_stencil_15_1137_1163_out)) - in0_padded16_global_wrapper_stencil[5]);
assign sub_1591_padded16_global_wrapper_stencil_20_1592_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[31] + (16'(in0_padded16_global_wrapper_stencil[32] + (16'(in0_padded16_global_wrapper_stencil[30] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[6])) - mul_padded16_global_wrapper_stencil_14_1137_1195_out)) - in0_padded16_global_wrapper_stencil[12]);
assign sub_1601_padded16_global_wrapper_stencil_23_1602_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[30] + (16'(in0_padded16_global_wrapper_stencil[34] + (16'(in0_padded16_global_wrapper_stencil[32] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[5])) - mul_padded16_global_wrapper_stencil_20_1137_1216_out)) - in0_padded16_global_wrapper_stencil[15]);
assign sub_1620_padded16_global_wrapper_stencil_36_1621_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[5] + (16'(in0_padded16_global_wrapper_stencil[30] + mul_padded16_global_wrapper_stencil_28_1137_1377_out)))) - in0_padded16_global_wrapper_stencil[4])) - (16'(in0_padded16_global_wrapper_stencil[28] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[29]);
assign sub_1629_padded16_global_wrapper_stencil_38_1630_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[12] + (16'(in0_padded16_global_wrapper_stencil[32] + mul_padded16_global_wrapper_stencil_27_1137_1387_out)))) - in0_padded16_global_wrapper_stencil[6])) - mul_padded16_global_wrapper_stencil_26_1137_1519_out)) - in0_padded16_global_wrapper_stencil[31]);
assign sub_1638_padded16_global_wrapper_stencil_37_1639_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[15] + (16'(in0_padded16_global_wrapper_stencil[34] + mul_padded16_global_wrapper_stencil_29_1137_1406_out)))) - in0_padded16_global_wrapper_stencil[5])) - mul_padded16_global_wrapper_stencil_28_1137_1377_out)) - in0_padded16_global_wrapper_stencil[30]);
assign sub_1681_padded16_global_wrapper_stencil_41_1682_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[7] + (16'(in0_padded16_global_wrapper_stencil[27] + mul_padded16_global_wrapper_stencil_21_1137_1323_out)))) - in0_padded16_global_wrapper_stencil[8])) - (16'(in0_padded16_global_wrapper_stencil[14] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[35]);
assign sub_1700_padded16_global_wrapper_stencil_16_1701_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[35] + (16'(in0_padded16_global_wrapper_stencil[27] + mul_padded16_global_wrapper_stencil_31_1137_1696_out)))) - in0_padded16_global_wrapper_stencil[8])) - mul_padded16_global_wrapper_stencil_19_1137_1230_out)) - in0_padded16_global_wrapper_stencil[7]);
assign sub_1739_padded16_global_wrapper_stencil_33_1740_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[32] + (16'(in0_padded16_global_wrapper_stencil[36] + (16'(in0_padded16_global_wrapper_stencil[34] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[12])) - mul_padded16_global_wrapper_stencil_23_1137_1416_out)) - in0_padded16_global_wrapper_stencil[26]);
assign sub_1758_padded16_global_wrapper_stencil_39_1759_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[26] + (16'(in0_padded16_global_wrapper_stencil[36] + mul_padded16_global_wrapper_stencil_32_1137_1754_out)))) - in0_padded16_global_wrapper_stencil[12])) - mul_padded16_global_wrapper_stencil_27_1137_1387_out)) - in0_padded16_global_wrapper_stencil[32]);
assign sub_1797_padded16_global_wrapper_stencil_44_1798_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[13] + (16'(in0_padded16_global_wrapper_stencil[37] + mul_padded16_global_wrapper_stencil_34_1137_1453_out)))) - in0_padded16_global_wrapper_stencil[14])) - (16'(in0_padded16_global_wrapper_stencil[35] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[38]);
assign sub_1806_padded16_global_wrapper_stencil_43_1807_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[15] + (16'(in0_padded16_global_wrapper_stencil[39] + mul_padded16_global_wrapper_stencil_33_1137_1463_out)))) - in0_padded16_global_wrapper_stencil[13])) - mul_padded16_global_wrapper_stencil_34_1137_1453_out)) - in0_padded16_global_wrapper_stencil[37]);
assign sub_1815_padded16_global_wrapper_stencil_47_1816_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[16] + (16'(in0_padded16_global_wrapper_stencil[40] + mul_padded16_global_wrapper_stencil_30_1137_1473_out)))) - in0_padded16_global_wrapper_stencil[17])) - mul_padded16_global_wrapper_stencil_31_1137_1696_out)) - in0_padded16_global_wrapper_stencil[41]);
assign sub_1834_padded16_global_wrapper_stencil_21_1835_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[38] + (16'(in0_padded16_global_wrapper_stencil[37] + (16'(in0_padded16_global_wrapper_stencil[41] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[14])) - mul_padded16_global_wrapper_stencil_25_1137_1303_out)) - in0_padded16_global_wrapper_stencil[13]);
assign sub_1844_padded16_global_wrapper_stencil_23_1845_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[37] + (16'(in0_padded16_global_wrapper_stencil[39] + (16'(in0_padded16_global_wrapper_stencil[40] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[13])) - mul_padded16_global_wrapper_stencil_24_1137_1313_out)) - in0_padded16_global_wrapper_stencil[15]);
assign sub_1854_padded16_global_wrapper_stencil_24_1855_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[41] + (16'(in0_padded16_global_wrapper_stencil[40] + (16'(in0_padded16_global_wrapper_stencil[37] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[17])) - mul_padded16_global_wrapper_stencil_21_1137_1323_out)) - in0_padded16_global_wrapper_stencil[16]);
assign sub_1896_padded16_global_wrapper_stencil_46_1897_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[21] + (16'(in0_padded16_global_wrapper_stencil[42] + mul_padded16_global_wrapper_stencil_32_1137_1754_out)))) - in0_padded16_global_wrapper_stencil[16])) - mul_padded16_global_wrapper_stencil_30_1137_1473_out)) - in0_padded16_global_wrapper_stencil[40]);
assign sub_1915_padded16_global_wrapper_stencil_29_1916_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[40] + (16'(in0_padded16_global_wrapper_stencil[42] + (16'(in0_padded16_global_wrapper_stencil[39] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[16])) - mul_padded16_global_wrapper_stencil_23_1137_1416_out)) - in0_padded16_global_wrapper_stencil[21]);
assign sub_1954_padded16_global_wrapper_stencil_45_1955_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[34] + (16'(in0_padded16_global_wrapper_stencil[43] + (16'(in0_padded16_global_wrapper_stencil[36] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[15])) - mul_padded16_global_wrapper_stencil_33_1137_1463_out)) - in0_padded16_global_wrapper_stencil[39]);
assign sub_1973_padded16_global_wrapper_stencil_40_1974_out = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[39] + (16'(in0_padded16_global_wrapper_stencil[43] + (16'(in0_padded16_global_wrapper_stencil[42] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[15])) - mul_padded16_global_wrapper_stencil_29_1137_1406_out)) - in0_padded16_global_wrapper_stencil[34]);
assign out_hw_output_stencil = ((((((((($signed(16'((16'((16'(ashr_1244_1150_1245_out * ashr_1340_1150_1341_out)) - (16'(ashr_1368_1150_1369_out * ashr_1368_1150_1369_out)))) - (($signed(16'(add_1245_1341_1372_out * add_1245_1341_1372_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out))) & (($signed(16'((16'((16'(ashr_1536_1150_1537_out * ashr_1555_1150_1556_out)) - (16'(ashr_1567_1150_1568_out * ashr_1567_1150_1568_out)))) - (($signed(16'(add_1537_1556_1571_out * add_1537_1556_1571_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1614_1150_1615_out * ashr_1651_1150_1652_out)) - (16'(ashr_1667_1150_1668_out * ashr_1667_1150_1668_out)))) - (($signed(16'(add_1615_1652_1671_out * add_1615_1652_1671_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1694_1150_1695_out * ashr_1713_1150_1714_out)) - (16'(ashr_1725_1150_1726_out * ashr_1725_1150_1726_out)))) - (($signed(16'(add_1695_1714_1729_out * add_1695_1714_1729_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1752_1150_1753_out * ashr_1771_1150_1772_out)) - (16'(ashr_1783_1150_1784_out * ashr_1783_1150_1784_out)))) - (($signed(16'(add_1753_1772_1787_out * add_1753_1772_1787_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1828_1150_1829_out * ashr_1867_1150_1868_out)) - (16'(ashr_1883_1150_1884_out * ashr_1883_1150_1884_out)))) - (($signed(16'(add_1829_1868_1887_out * add_1829_1868_1887_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1909_1150_1910_out * ashr_1928_1150_1929_out)) - (16'(ashr_1940_1150_1941_out * ashr_1940_1150_1941_out)))) - (($signed(16'(add_1910_1929_1944_out * add_1910_1929_1944_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'((16'((16'(ashr_1967_1150_1968_out * ashr_1986_1150_1987_out)) - (16'(ashr_1998_1150_1999_out * ashr_1998_1150_1999_out)))) - (($signed(16'(add_1968_1987_2002_out * add_1968_1987_2002_out))) >>> 16'h0004)))) < ($signed(sub_1513_1516_1517_out)))) & (($signed(16'h0001)) <= ($signed(sub_1513_1516_1517_out))) ? 16'h00ff : 16'h0000;
endmodule

