// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHCOMPUTE_HW_OUTPUT_STENCIL_H_
#define _VHCOMPUTE_HW_OUTPUT_STENCIL_H_  // guard

#include "verilated.h"

//==========

class Vhcompute_hw_output_stencil__Syms;

//----------

VL_MODULE(Vhcompute_hw_output_stencil) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_OUT16(out_hw_output_stencil,15,0);
    VL_IN16(in0_padded16_global_wrapper_stencil[49],15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1247_1343_1374_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1436_1493_1516_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1539_1558_1573_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1617_1654_1673_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1697_1716_1731_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1755_1774_1789_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1831_1870_1889_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1912_1931_1946_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__add_1970_1989_2004_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1150_1151_1152_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1172_1151_1173_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1183_1151_1184_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1194_1151_1195_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1204_1151_1205_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1215_1151_1216_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1225_1151_1226_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1236_1151_1237_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1245_1246_1247_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1256_1151_1257_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1276_1151_1277_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1285_1151_1286_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1294_1151_1295_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1303_1151_1304_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1313_1151_1314_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1323_1151_1324_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1333_1151_1334_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1342_1246_1343_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1345_1151_1346_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1349_1151_1350_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1351_1151_1352_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1353_1151_1354_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1355_1151_1356_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1357_1151_1358_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1359_1151_1360_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1361_1151_1362_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1370_1246_1371_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1387_1151_1388_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1397_1151_1398_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1406_1151_1407_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1416_1151_1417_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1426_1151_1427_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1435_1246_1436_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1444_1151_1445_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1453_1151_1454_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1463_1151_1464_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1473_1151_1474_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1483_1151_1484_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1492_1246_1493_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1495_1151_1496_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1497_1151_1498_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1499_1151_1500_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1501_1151_1502_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1503_1151_1504_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1512_1246_1513_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1529_1151_1530_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1538_1246_1539_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1548_1151_1549_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1557_1246_1558_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1560_1151_1561_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1569_1246_1570_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1597_1151_1598_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1607_1151_1608_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1616_1246_1617_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1635_1151_1636_out;
    };
    struct {
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1644_1151_1645_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1653_1246_1654_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1658_1151_1659_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1660_1151_1661_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1669_1246_1670_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1687_1151_1688_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1696_1246_1697_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1706_1151_1707_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1715_1246_1716_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1718_1151_1719_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1727_1246_1728_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1745_1151_1746_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1754_1246_1755_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1764_1151_1765_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1773_1246_1774_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1776_1151_1777_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1785_1246_1786_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1812_1151_1813_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1821_1151_1822_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1830_1246_1831_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1850_1151_1851_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1860_1151_1861_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1869_1246_1870_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1874_1151_1875_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1876_1151_1877_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1885_1246_1886_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1902_1151_1903_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1911_1246_1912_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1921_1151_1922_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1930_1246_1931_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1933_1151_1934_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1942_1246_1943_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1969_1246_1970_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_1988_1246_1989_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__ashr_2000_1246_2001_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1147_1148_1149_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1160_1148_1161_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1170_1148_1171_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1181_1148_1182_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1192_1148_1193_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1202_1148_1203_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1213_1148_1214_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1223_1148_1224_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1234_1148_1235_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1254_1148_1255_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1264_1148_1265_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1274_1148_1275_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1283_1148_1284_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1292_1148_1293_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1301_1148_1302_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1311_1148_1312_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1321_1148_1322_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1331_1148_1332_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1385_1148_1386_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1395_1148_1396_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1404_1148_1405_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1414_1148_1415_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1424_1148_1425_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1442_1148_1443_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1451_1148_1452_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1461_1148_1462_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1471_1148_1472_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1481_1148_1482_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1527_1148_1528_out;
    };
    struct {
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1546_1148_1547_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1585_1148_1586_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1595_1148_1596_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1605_1148_1606_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1624_1148_1625_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1633_1148_1634_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1642_1148_1643_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1685_1148_1686_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1704_1148_1705_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1743_1148_1744_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1762_1148_1763_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1801_1148_1802_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1810_1148_1811_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1819_1148_1820_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1838_1148_1839_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1848_1148_1849_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1858_1148_1859_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1900_1148_1901_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1919_1148_1920_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1958_1148_1959_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smax_1977_1148_1978_out;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1145_1146_1147_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1159_1146_1160_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1169_1146_1170_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1180_1146_1181_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1191_1146_1192_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1201_1146_1202_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1212_1146_1213_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1222_1146_1223_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1233_1146_1234_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1253_1146_1254_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1263_1146_1264_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1273_1146_1274_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1282_1146_1283_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1291_1146_1292_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1300_1146_1301_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1310_1146_1311_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1320_1146_1321_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1330_1146_1331_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1384_1146_1385_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1394_1146_1395_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1403_1146_1404_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1413_1146_1414_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1423_1146_1424_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1441_1146_1442_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1450_1146_1451_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1460_1146_1461_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1470_1146_1471_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1480_1146_1481_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1526_1146_1527_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1545_1146_1546_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1584_1146_1585_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1594_1146_1595_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1604_1146_1605_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1623_1146_1624_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1632_1146_1633_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1641_1146_1642_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1684_1146_1685_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1703_1146_1704_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1742_1146_1743_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1761_1146_1762_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1800_1146_1801_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1809_1146_1810_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1818_1146_1819_in0;
    };
    struct {
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1837_1146_1838_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1847_1146_1848_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1857_1146_1858_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1899_1146_1900_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1918_1146_1919_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1957_1146_1958_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__smin_1976_1146_1977_in0;
        SData/*15:0*/ hcompute_hw_output_stencil__DOT__sub_1515_1518_1519_out;
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vhcompute_hw_output_stencil__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhcompute_hw_output_stencil);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vhcompute_hw_output_stencil(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vhcompute_hw_output_stencil();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vhcompute_hw_output_stencil__Syms* symsp, bool first);
  private:
    static QData _change_request(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vhcompute_hw_output_stencil__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
