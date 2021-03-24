#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "cp9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_cache {
  // Reader addrs...
    // { load_to_demosaic_to_gp_303_sm108_0161[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1921 }
    // { load_to_demosaic_to_gp_6811_sm110_0165[root = 0, demosaic_ld10, demosaic_ld9] -> demosaic[demosaic_ld9, demosaic_ld10] : 0 <= demosaic_ld10 <= 1079 and 0 <= demosaic_ld9 <= 1919 }
  // # of banks: 2
  demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_cache demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_303_sm108_0161_21;
  demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_cache demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19;
};



inline void demosaic_demosaic_update_0_sm93_0131_84_write(hw_uint<16>& demosaic_demosaic_update_0_sm93_0131_84, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_303_sm108_0161_21.push(demosaic_demosaic_update_0_sm93_0131_84);
  demosaic.demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19.push(demosaic_demosaic_update_0_sm93_0131_84);
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_select(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_303_sm108_0161_21 read pattern: { load_to_demosaic_to_gp_303_sm108_0161[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1921 }
  // Read schedule : { load_to_demosaic_to_gp_303_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { demosaic_update_0_sm93_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm93_0131_84 = demosaic.demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_303_sm108_0161_21.peek(/* one reader or all rams */ 0);
  return value_demosaic_demosaic_update_0_sm93_0131_84;
  return 0;
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_select(demosaic_cache& demosaic, int root, int demosaic_ld10, int demosaic_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19 read pattern: { load_to_demosaic_to_gp_6811_sm110_0165[root = 0, demosaic_ld10, demosaic_ld9] -> demosaic[demosaic_ld9, demosaic_ld10] : 0 <= demosaic_ld10 <= 1079 and 0 <= demosaic_ld9 <= 1919 }
  // Read schedule : { load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm93_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm93_0131_84 = demosaic.demosaic_demosaic_update_0_sm93_0131_84_to_demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19.peek(/* one reader or all rams */ 0);
  return value_demosaic_demosaic_update_0_sm93_0131_84;
  return 0;
}

// # of bundles = 3
// demosaic_update_0_sm93_0131_write
//	demosaic_demosaic_update_0_sm93_0131_84
inline void demosaic_demosaic_update_0_sm93_0131_write_bundle_write(hw_uint<16>& demosaic_update_0_sm93_0131_write, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_sm93_0131_84_res = demosaic_update_0_sm93_0131_write.extract<0, 15>();
	demosaic_demosaic_update_0_sm93_0131_84_write(demosaic_demosaic_update_0_sm93_0131_84_res, demosaic, root, demosaic_0, demosaic_1, dynamic_address);
}

// load_to_demosaic_to_gp_303_sm108_0161_read
//	demosaic_load_to_demosaic_to_gp_303_sm108_0161_21
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm108_0161_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_303_sm108_0161_21

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_res = demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_select(demosaic, root, demosaic_ld2, demosaic_ld1, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_303_sm108_0161_21_res);
	return result;
}

// load_to_demosaic_to_gp_6811_sm110_0165_read
//	demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld10, int demosaic_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_res = demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_select(demosaic, root, demosaic_ld10, demosaic_ld9, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_res);
	return result;
}

struct demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 3841
	// # of read delays: 3841
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186, 2187, 2188, 2189, 2190, 2191, 2192, 2193, 2194, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2213, 2214, 2215, 2216, 2217, 2218, 2219, 2220, 2221, 2222, 2223, 2224, 2225, 2226, 2227, 2228, 2229, 2230, 2231, 2232, 2233, 2234, 2235, 2236, 2237, 2238, 2239, 2240, 2241, 2242, 2243, 2244, 2245, 2246, 2247, 2248, 2249, 2250, 2251, 2252, 2253, 2254, 2255, 2256, 2257, 2258, 2259, 2260, 2261, 2262, 2263, 2264, 2265, 2266, 2267, 2268, 2269, 2270, 2271, 2272, 2273, 2274, 2275, 2276, 2277, 2278, 2279, 2280, 2281, 2282, 2283, 2284, 2285, 2286, 2287, 2288, 2289, 2290, 2291, 2292, 2293, 2294, 2295, 2296, 2297, 2298, 2299, 2300, 2301, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2313, 2314, 2315, 2316, 2317, 2318, 2319, 2320, 2321, 2322, 2323, 2324, 2325, 2326, 2327, 2328, 2329, 2330, 2331, 2332, 2333, 2334, 2335, 2336, 2337, 2338, 2339, 2340, 2341, 2342, 2343, 2344, 2345, 2346, 2347, 2348, 2349, 2350, 2351, 2352, 2353, 2354, 2355, 2356, 2357, 2358, 2359, 2360, 2361, 2362, 2363, 2364, 2365, 2366, 2367, 2368, 2369, 2370, 2371, 2372, 2373, 2374, 2375, 2376, 2377, 2378, 2379, 2380, 2381, 2382, 2383, 2384, 2385, 2386, 2387, 2388, 2389, 2390, 2391, 2392, 2393, 2394, 2395, 2396, 2397, 2398, 2399, 2400, 2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410, 2411, 2412, 2413, 2414, 2415, 2416, 2417, 2418, 2419, 2420, 2421, 2422, 2423, 2424, 2425, 2426, 2427, 2428, 2429, 2430, 2431, 2432, 2433, 2434, 2435, 2436, 2437, 2438, 2439, 2440, 2441, 2442, 2443, 2444, 2445, 2446, 2447, 2448, 2449, 2450, 2451, 2452, 2453, 2454, 2455, 2456, 2457, 2458, 2459, 2460, 2461, 2462, 2463, 2464, 2465, 2466, 2467, 2468, 2469, 2470, 2471, 2472, 2473, 2474, 2475, 2476, 2477, 2478, 2479, 2480, 2481, 2482, 2483, 2484, 2485, 2486, 2487, 2488, 2489, 2490, 2491, 2492, 2493, 2494, 2495, 2496, 2497, 2498, 2499, 2500, 2501, 2502, 2503, 2504, 2505, 2506, 2507, 2508, 2509, 2510, 2511, 2512, 2513, 2514, 2515, 2516, 2517, 2518, 2519, 2520, 2521, 2522, 2523, 2524, 2525, 2526, 2527, 2528, 2529, 2530, 2531, 2532, 2533, 2534, 2535, 2536, 2537, 2538, 2539, 2540, 2541, 2542, 2543, 2544, 2545, 2546, 2547, 2548, 2549, 2550, 2551, 2552, 2553, 2554, 2555, 2556, 2557, 2558, 2559, 2560, 2561, 2562, 2563, 2564, 2565, 2566, 2567, 2568, 2569, 2570, 2571, 2572, 2573, 2574, 2575, 2576, 2577, 2578, 2579, 2580, 2581, 2582, 2583, 2584, 2585, 2586, 2587, 2588, 2589, 2590, 2591, 2592, 2593, 2594, 2595, 2596, 2597, 2598, 2599, 2600, 2601, 2602, 2603, 2604, 2605, 2606, 2607, 2608, 2609, 2610, 2611, 2612, 2613, 2614, 2615, 2616, 2617, 2618, 2619, 2620, 2621, 2622, 2623, 2624, 2625, 2626, 2627, 2628, 2629, 2630, 2631, 2632, 2633, 2634, 2635, 2636, 2637, 2638, 2639, 2640, 2641, 2642, 2643, 2644, 2645, 2646, 2647, 2648, 2649, 2650, 2651, 2652, 2653, 2654, 2655, 2656, 2657, 2658, 2659, 2660, 2661, 2662, 2663, 2664, 2665, 2666, 2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676, 2677, 2678, 2679, 2680, 2681, 2682, 2683, 2684, 2685, 2686, 2687, 2688, 2689, 2690, 2691, 2692, 2693, 2694, 2695, 2696, 2697, 2698, 2699, 2700, 2701, 2702, 2703, 2704, 2705, 2706, 2707, 2708, 2709, 2710, 2711, 2712, 2713, 2714, 2715, 2716, 2717, 2718, 2719, 2720, 2721, 2722, 2723, 2724, 2725, 2726, 2727, 2728, 2729, 2730, 2731, 2732, 2733, 2734, 2735, 2736, 2737, 2738, 2739, 2740, 2741, 2742, 2743, 2744, 2745, 2746, 2747, 2748, 2749, 2750, 2751, 2752, 2753, 2754, 2755, 2756, 2757, 2758, 2759, 2760, 2761, 2762, 2763, 2764, 2765, 2766, 2767, 2768, 2769, 2770, 2771, 2772, 2773, 2774, 2775, 2776, 2777, 2778, 2779, 2780, 2781, 2782, 2783, 2784, 2785, 2786, 2787, 2788, 2789, 2790, 2791, 2792, 2793, 2794, 2795, 2796, 2797, 2798, 2799, 2800, 2801, 2802, 2803, 2804, 2805, 2806, 2807, 2808, 2809, 2810, 2811, 2812, 2813, 2814, 2815, 2816, 2817, 2818, 2819, 2820, 2821, 2822, 2823, 2824, 2825, 2826, 2827, 2828, 2829, 2830, 2831, 2832, 2833, 2834, 2835, 2836, 2837, 2838, 2839, 2840, 2841, 2842, 2843, 2844, 2845, 2846, 2847, 2848, 2849, 2850, 2851, 2852, 2853, 2854, 2855, 2856, 2857, 2858, 2859, 2860, 2861, 2862, 2863, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871, 2872, 2873, 2874, 2875, 2876, 2877, 2878, 2879, 2880, 2881, 2882, 2883, 2884, 2885, 2886, 2887, 2888, 2889, 2890, 2891, 2892, 2893, 2894, 2895, 2896, 2897, 2898, 2899, 2900, 2901, 2902, 2903, 2904, 2905, 2906, 2907, 2908, 2909, 2910, 2911, 2912, 2913, 2914, 2915, 2916, 2917, 2918, 2919, 2920, 2921, 2922, 2923, 2924, 2925, 2926, 2927, 2928, 2929, 2930, 2931, 2932, 2933, 2934, 2935, 2936, 2937, 2938, 2939, 2940, 2941, 2942, 2943, 2944, 2945, 2946, 2947, 2948, 2949, 2950, 2951, 2952, 2953, 2954, 2955, 2956, 2957, 2958, 2959, 2960, 2961, 2962, 2963, 2964, 2965, 2966, 2967, 2968, 2969, 2970, 2971, 2972, 2973, 2974, 2975, 2976, 2977, 2978, 2979, 2980, 2981, 2982, 2983, 2984, 2985, 2986, 2987, 2988, 2989, 2990, 2991, 2992, 2993, 2994, 2995, 2996, 2997, 2998, 2999, 3000, 3001, 3002, 3003, 3004, 3005, 3006, 3007, 3008, 3009, 3010, 3011, 3012, 3013, 3014, 3015, 3016, 3017, 3018, 3019, 3020, 3021, 3022, 3023, 3024, 3025, 3026, 3027, 3028, 3029, 3030, 3031, 3032, 3033, 3034, 3035, 3036, 3037, 3038, 3039, 3040, 3041, 3042, 3043, 3044, 3045, 3046, 3047, 3048, 3049, 3050, 3051, 3052, 3053, 3054, 3055, 3056, 3057, 3058, 3059, 3060, 3061, 3062, 3063, 3064, 3065, 3066, 3067, 3068, 3069, 3070, 3071, 3072, 3073, 3074, 3075, 3076, 3077, 3078, 3079, 3080, 3081, 3082, 3083, 3084, 3085, 3086, 3087, 3088, 3089, 3090, 3091, 3092, 3093, 3094, 3095, 3096, 3097, 3098, 3099, 3100, 3101, 3102, 3103, 3104, 3105, 3106, 3107, 3108, 3109, 3110, 3111, 3112, 3113, 3114, 3115, 3116, 3117, 3118, 3119, 3120, 3121, 3122, 3123, 3124, 3125, 3126, 3127, 3128, 3129, 3130, 3131, 3132, 3133, 3134, 3135, 3136, 3137, 3138, 3139, 3140, 3141, 3142, 3143, 3144, 3145, 3146, 3147, 3148, 3149, 3150, 3151, 3152, 3153, 3154, 3155, 3156, 3157, 3158, 3159, 3160, 3161, 3162, 3163, 3164, 3165, 3166, 3167, 3168, 3169, 3170, 3171, 3172, 3173, 3174, 3175, 3176, 3177, 3178, 3179, 3180, 3181, 3182, 3183, 3184, 3185, 3186, 3187, 3188, 3189, 3190, 3191, 3192, 3193, 3194, 3195, 3196, 3197, 3198, 3199, 3200, 3201, 3202, 3203, 3204, 3205, 3206, 3207, 3208, 3209, 3210, 3211, 3212, 3213, 3214, 3215, 3216, 3217, 3218, 3219, 3220, 3221, 3222, 3223, 3224, 3225, 3226, 3227, 3228, 3229, 3230, 3231, 3232, 3233, 3234, 3235, 3236, 3237, 3238, 3239, 3240, 3241, 3242, 3243, 3244, 3245, 3246, 3247, 3248, 3249, 3250, 3251, 3252, 3253, 3254, 3255, 3256, 3257, 3258, 3259, 3260, 3261, 3262, 3263, 3264, 3265, 3266, 3267, 3268, 3269, 3270, 3271, 3272, 3273, 3274, 3275, 3276, 3277, 3278, 3279, 3280, 3281, 3282, 3283, 3284, 3285, 3286, 3287, 3288, 3289, 3290, 3291, 3292, 3293, 3294, 3295, 3296, 3297, 3298, 3299, 3300, 3301, 3302, 3303, 3304, 3305, 3306, 3307, 3308, 3309, 3310, 3311, 3312, 3313, 3314, 3315, 3316, 3317, 3318, 3319, 3320, 3321, 3322, 3323, 3324, 3325, 3326, 3327, 3328, 3329, 3330, 3331, 3332, 3333, 3334, 3335, 3336, 3337, 3338, 3339, 3340, 3341, 3342, 3343, 3344, 3345, 3346, 3347, 3348, 3349, 3350, 3351, 3352, 3353, 3354, 3355, 3356, 3357, 3358, 3359, 3360, 3361, 3362, 3363, 3364, 3365, 3366, 3367, 3368, 3369, 3370, 3371, 3372, 3373, 3374, 3375, 3376, 3377, 3378, 3379, 3380, 3381, 3382, 3383, 3384, 3385, 3386, 3387, 3388, 3389, 3390, 3391, 3392, 3393, 3394, 3395, 3396, 3397, 3398, 3399, 3400, 3401, 3402, 3403, 3404, 3405, 3406, 3407, 3408, 3409, 3410, 3411, 3412, 3413, 3414, 3415, 3416, 3417, 3418, 3419, 3420, 3421, 3422, 3423, 3424, 3425, 3426, 3427, 3428, 3429, 3430, 3431, 3432, 3433, 3434, 3435, 3436, 3437, 3438, 3439, 3440, 3441, 3442, 3443, 3444, 3445, 3446, 3447, 3448, 3449, 3450, 3451, 3452, 3453, 3454, 3455, 3456, 3457, 3458, 3459, 3460, 3461, 3462, 3463, 3464, 3465, 3466, 3467, 3468, 3469, 3470, 3471, 3472, 3473, 3474, 3475, 3476, 3477, 3478, 3479, 3480, 3481, 3482, 3483, 3484, 3485, 3486, 3487, 3488, 3489, 3490, 3491, 3492, 3493, 3494, 3495, 3496, 3497, 3498, 3499, 3500, 3501, 3502, 3503, 3504, 3505, 3506, 3507, 3508, 3509, 3510, 3511, 3512, 3513, 3514, 3515, 3516, 3517, 3518, 3519, 3520, 3521, 3522, 3523, 3524, 3525, 3526, 3527, 3528, 3529, 3530, 3531, 3532, 3533, 3534, 3535, 3536, 3537, 3538, 3539, 3540, 3541, 3542, 3543, 3544, 3545, 3546, 3547, 3548, 3549, 3550, 3551, 3552, 3553, 3554, 3555, 3556, 3557, 3558, 3559, 3560, 3561, 3562, 3563, 3564, 3565, 3566, 3567, 3568, 3569, 3570, 3571, 3572, 3573, 3574, 3575, 3576, 3577, 3578, 3579, 3580, 3581, 3582, 3583, 3584, 3585, 3586, 3587, 3588, 3589, 3590, 3591, 3592, 3593, 3594, 3595, 3596, 3597, 3598, 3599, 3600, 3601, 3602, 3603, 3604, 3605, 3606, 3607, 3608, 3609, 3610, 3611, 3612, 3613, 3614, 3615, 3616, 3617, 3618, 3619, 3620, 3621, 3622, 3623, 3624, 3625, 3626, 3627, 3628, 3629, 3630, 3631, 3632, 3633, 3634, 3635, 3636, 3637, 3638, 3639, 3640, 3641, 3642, 3643, 3644, 3645, 3646, 3647, 3648, 3649, 3650, 3651, 3652, 3653, 3654, 3655, 3656, 3657, 3658, 3659, 3660, 3661, 3662, 3663, 3664, 3665, 3666, 3667, 3668, 3669, 3670, 3671, 3672, 3673, 3674, 3675, 3676, 3677, 3678, 3679, 3680, 3681, 3682, 3683, 3684, 3685, 3686, 3687, 3688, 3689, 3690, 3691, 3692, 3693, 3694, 3695, 3696, 3697, 3698, 3699, 3700, 3701, 3702, 3703, 3704, 3705, 3706, 3707, 3708, 3709, 3710, 3711, 3712, 3713, 3714, 3715, 3716, 3717, 3718, 3719, 3720, 3721, 3722, 3723, 3724, 3725, 3726, 3727, 3728, 3729, 3730, 3731, 3732, 3733, 3734, 3735, 3736, 3737, 3738, 3739, 3740, 3741, 3742, 3743, 3744, 3745, 3746, 3747, 3748, 3749, 3750, 3751, 3752, 3753, 3754, 3755, 3756, 3757, 3758, 3759, 3760, 3761, 3762, 3763, 3764, 3765, 3766, 3767, 3768, 3769, 3770, 3771, 3772, 3773, 3774, 3775, 3776, 3777, 3778, 3779, 3780, 3781, 3782, 3783, 3784, 3785, 3786, 3787, 3788, 3789, 3790, 3791, 3792, 3793, 3794, 3795, 3796, 3797, 3798, 3799, 3800, 3801, 3802, 3803, 3804, 3805, 3806, 3807, 3808, 3809, 3810, 3811, 3812, 3813, 3814, 3815, 3816, 3817, 3818, 3819, 3820, 3821, 3822, 3823, 3824, 3825, 3826, 3827, 3828, 3829, 3830, 3831, 3832, 3833, 3834, 3835, 3836, 3837, 3838, 3839, 3840
	fifo<hw_uint<16>, 3841> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3840 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf12_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm98_0141[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf12[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_cache demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87;
};



inline void demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_write(hw_uint<16>& demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_to_gp_68_ld14, int demosaic_to_gp_68_ld13, int dynamic_address) {
  demosaic_FIFO_buf12.demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87.push(demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44);
}

inline hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_select(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87 read pattern: { demosaic_diff_update_0_sm98_0141[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf12[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf1215_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44 = demosaic_FIFO_buf12.demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87.peek(/* one reader or all rams */ (-1919 + demosaic_diff_1 == 0 && -1078 + demosaic_diff_0 == 0) ? (1920) : (1918 - demosaic_diff_1 >= 0 && 1077 - demosaic_diff_0 >= 0) ? (3840) : (-1079 + demosaic_diff_0 == 0 && 1918 - demosaic_diff_1 >= 0) ? ((1919 - demosaic_diff_1)) : (-1919 + demosaic_diff_1 == 0 && 1077 - demosaic_diff_0 >= 0) ? (3840) : (-1078 + demosaic_diff_0 == 0 && 1918 - demosaic_diff_1 >= 0) ? ((3839 - demosaic_diff_1)) : 0);
  return value_demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm98_0141_read
//	demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87
inline hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_read_bundle_read(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87

	hw_uint<16> result;
	hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_res = demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_select(demosaic_FIFO_buf12, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_87_res);
	return result;
}

// load_to_demosaic_FIFO_buf1215_sm111_0167_write
//	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44
inline void demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf1215_sm111_0167_write, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_to_gp_68_ld14, int demosaic_to_gp_68_ld13, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_res = load_to_demosaic_FIFO_buf1215_sm111_0167_write.extract<0, 15>();
	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_write(demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_44_res, demosaic_FIFO_buf12, root, demosaic_to_gp_68_ld14, demosaic_to_gp_68_ld13, dynamic_address);
}

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_cache {
	// RAM Box: {[1, 1920], [0, 1081]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_cache {
	// RAM Box: {[2, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf4_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // # of banks: 3
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96;
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97;
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98;
};



inline void demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_write(hw_uint<16>& demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_to_gp_30_ld6, int demosaic_to_gp_30_ld5, int dynamic_address) {
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42);
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42);
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42);
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96 read pattern: { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm109_0163[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96.peek(/* one reader or all rams */ 2);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97 read pattern: { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm109_0163[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97.peek(/* one reader or all rams */ 1);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98 read pattern: { demosaic_bxb_update_0_sm94_0133[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm109_0163[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98.peek(/* one reader or all rams */ 0);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm94_0133_read
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98
inline hw_uint<48> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_read_bundle_read(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98

	hw_uint<48> result;
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_96_res);
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_97_res);
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_98_res);
	return result;
}

// load_to_demosaic_FIFO_buf47_sm109_0163_write
//	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42
inline void demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf47_sm109_0163_write, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_to_gp_30_ld6, int demosaic_to_gp_30_ld5, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_res = load_to_demosaic_FIFO_buf47_sm109_0163_write.extract<0, 15>();
	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_write(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_42_res, demosaic_FIFO_buf4, root, demosaic_to_gp_30_ld6, demosaic_to_gp_30_ld5, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_sm95_0135_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bx_cache {
  // Reader addrs...
    // { load_to_demosaic_bx_to_gp_51619_sm112_0169[root = 0, demosaic_bx_ld18, demosaic_bx_ld17] -> demosaic_bx[demosaic_bx_ld17, demosaic_bx_ld18] : 0 <= demosaic_bx_ld18 <= 1081 and 0 <= demosaic_bx_ld17 <= 1919 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_sm95_0135_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_cache demosaic_bx_demosaic_bx_update_0_sm95_0135_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39;
};



inline void demosaic_bx_demosaic_bx_update_0_sm95_0135_99_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_sm95_0135_99, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm95_0135_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39.push(demosaic_bx_demosaic_bx_update_0_sm95_0135_99);
}

inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld18, int demosaic_bx_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39 read pattern: { load_to_demosaic_bx_to_gp_51619_sm112_0169[root = 0, demosaic_bx_ld18, demosaic_bx_ld17] -> demosaic_bx[demosaic_bx_ld17, demosaic_bx_ld18] : 0 <= demosaic_bx_ld18 <= 1081 and 0 <= demosaic_bx_ld17 <= 1919 }
  // Read schedule : { load_to_demosaic_bx_to_gp_51619_sm112_0169[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bx_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm95_0135_99 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm95_0135_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39.peek(/* one reader or all rams */ 0);
  return value_demosaic_bx_demosaic_bx_update_0_sm95_0135_99;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm95_0135_write
//	demosaic_bx_demosaic_bx_update_0_sm95_0135_99
inline void demosaic_bx_demosaic_bx_update_0_sm95_0135_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_sm95_0135_write, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_sm95_0135_99_res = demosaic_bx_update_0_sm95_0135_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_sm95_0135_99_write(demosaic_bx_demosaic_bx_update_0_sm95_0135_99_res, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
}

// load_to_demosaic_bx_to_gp_51619_sm112_0169_read
//	demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39
inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_read_bundle_read(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld18, int demosaic_bx_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39

	hw_uint<16> result;
	hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_res = demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_select(demosaic_bx, root, demosaic_bx_ld18, demosaic_bx_ld17, dynamic_address);
	set_at<0, 16>(result, demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_39_res);
	return result;
}

struct demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 3841
	// # of read delays: 3
  // 0, 1920, 3840
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1919> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1919> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1919() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1920() {
		return f2;
	}

	inline hw_uint<16> peek_3839() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_3840() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_FIFO_buf20_cache {
  // Reader addrs...
    // { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // # of banks: 1
  demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3_cache demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3;
};



inline void demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_write(hw_uint<16>& demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_bx_to_gp_516_ld22, int demosaic_bx_to_gp_516_ld21, int dynamic_address) {
  demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3.push(demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40);
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90 read pattern: { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm101_0147[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3.peek_3840();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91 read pattern: { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm101_0147[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3.peek_1920();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92 read pattern: { demosaic_byb_update_0_sm96_0137[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm101_0147[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_merged_banks_3.peek_0();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm96_0137_read
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92
inline hw_uint<48> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_read_bundle_read(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_90_res);
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_91_res);
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_92_res);
	return result;
}

// load_to_demosaic_bx_FIFO_buf2023_sm101_0147_write
//	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40
inline void demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_write_bundle_write(hw_uint<16>& load_to_demosaic_bx_FIFO_buf2023_sm101_0147_write, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_bx_to_gp_516_ld22, int demosaic_bx_to_gp_516_ld21, int dynamic_address) {
	hw_uint<16> demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_res = load_to_demosaic_bx_FIFO_buf2023_sm101_0147_write.extract<0, 15>();
	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_write(demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_40_res, demosaic_bx_FIFO_buf20, root, demosaic_bx_to_gp_516_ld22, demosaic_bx_to_gp_516_ld21, dynamic_address);
}

struct demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bxb_cache {
  // Reader addrs...
    // { load_to_demosaic_bxb_to_gp_22427_sm113_0171[root = 0, demosaic_bxb_ld26, demosaic_bxb_ld25] -> demosaic_bxb[demosaic_bxb_ld25, demosaic_bxb_ld26] : 0 <= demosaic_bxb_ld26 <= 1081 and 0 <= demosaic_bxb_ld25 <= 1919 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_cache demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35;
};



inline void demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35.push(demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95);
}

inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_select(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld26, int demosaic_bxb_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35 read pattern: { load_to_demosaic_bxb_to_gp_22427_sm113_0171[root = 0, demosaic_bxb_ld26, demosaic_bxb_ld25] -> demosaic_bxb[demosaic_bxb_ld25, demosaic_bxb_ld26] : 0 <= demosaic_bxb_ld26 <= 1081 and 0 <= demosaic_bxb_ld25 <= 1919 }
  // Read schedule : { load_to_demosaic_bxb_to_gp_22427_sm113_0171[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm94_0133_write
//	demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95
inline void demosaic_bxb_demosaic_bxb_update_0_sm94_0133_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_sm94_0133_write, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_res = demosaic_bxb_update_0_sm94_0133_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_write(demosaic_bxb_demosaic_bxb_update_0_sm94_0133_95_res, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
}

// load_to_demosaic_bxb_to_gp_22427_sm113_0171_read
//	demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35
inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld26, int demosaic_bxb_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_res = demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_select(demosaic_bxb, root, demosaic_bxb_ld26, demosaic_bxb_ld25, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_35_res);
	return result;
}

struct demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bxb_FIFO_buf28_cache {
  // Reader addrs...
    // { demosaic_bx_update_0_sm95_0135[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf28[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // # of banks: 1
  demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_cache demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100;
};



inline void demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_write(hw_uint<16>& demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bxb_to_gp_224_ld30, int demosaic_bxb_to_gp_224_ld29, int dynamic_address) {
  demosaic_bxb_FIFO_buf28.demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100.push(demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36);
}

inline hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_select(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100 read pattern: { demosaic_bx_update_0_sm95_0135[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf28[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // Read schedule : { demosaic_bx_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bxb_FIFO_buf2831_sm114_0173[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36 = demosaic_bxb_FIFO_buf28.demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm95_0135_read
//	demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100
inline hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_read_bundle_read(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_res = demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_select(demosaic_bxb_FIFO_buf28, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_100_res);
	return result;
}

// load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_write
//	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36
inline void demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_write_bundle_write(hw_uint<16>& load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_write, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bxb_to_gp_224_ld30, int demosaic_bxb_to_gp_224_ld29, int dynamic_address) {
	hw_uint<16> demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_res = load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_write.extract<0, 15>();
	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_write(demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_36_res, demosaic_bxb_FIFO_buf28, root, demosaic_bxb_to_gp_224_ld30, demosaic_bxb_to_gp_224_ld29, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_sm97_0139_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_by_cache {
  // Reader addrs...
    // { load_to_demosaic_by_to_gp_63235_sm115_0175[root = 0, demosaic_by_ld34, demosaic_by_ld33] -> demosaic_by[demosaic_by_ld33, demosaic_by_ld34] : 0 <= demosaic_by_ld34 <= 1079 and 0 <= demosaic_by_ld33 <= 1919 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_sm97_0139_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_cache demosaic_by_demosaic_by_update_0_sm97_0139_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31;
};



inline void demosaic_by_demosaic_by_update_0_sm97_0139_93_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_sm97_0139_93, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_sm97_0139_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31.push(demosaic_by_demosaic_by_update_0_sm97_0139_93);
}

inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_select(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld34, int demosaic_by_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31 read pattern: { load_to_demosaic_by_to_gp_63235_sm115_0175[root = 0, demosaic_by_ld34, demosaic_by_ld33] -> demosaic_by[demosaic_by_ld33, demosaic_by_ld34] : 0 <= demosaic_by_ld34 <= 1079 and 0 <= demosaic_by_ld33 <= 1919 }
  // Read schedule : { load_to_demosaic_by_to_gp_63235_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_by_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_by_demosaic_by_update_0_sm97_0139_93 = demosaic_by.demosaic_by_demosaic_by_update_0_sm97_0139_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_sm97_0139_93;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm97_0139_write
//	demosaic_by_demosaic_by_update_0_sm97_0139_93
inline void demosaic_by_demosaic_by_update_0_sm97_0139_write_bundle_write(hw_uint<16>& demosaic_by_update_0_sm97_0139_write, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_sm97_0139_93_res = demosaic_by_update_0_sm97_0139_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_sm97_0139_93_write(demosaic_by_demosaic_by_update_0_sm97_0139_93_res, demosaic_by, root, demosaic_by_0, demosaic_by_1, dynamic_address);
}

// load_to_demosaic_by_to_gp_63235_sm115_0175_read
//	demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31
inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_read_bundle_read(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld34, int demosaic_by_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31

	hw_uint<16> result;
	hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_res = demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_select(demosaic_by, root, demosaic_by_ld34, demosaic_by_ld33, dynamic_address);
	set_at<0, 16>(result, demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_31_res);
	return result;
}

struct demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_by_FIFO_buf36_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm98_0141[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf36[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_cache demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88;
};



inline void demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_write(hw_uint<16>& demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_by_to_gp_632_ld38, int demosaic_by_to_gp_632_ld37, int dynamic_address) {
  demosaic_by_FIFO_buf36.demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88.push(demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32);
}

inline hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_select(demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88 read pattern: { demosaic_diff_update_0_sm98_0141[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf36[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_by_FIFO_buf3639_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32 = demosaic_by_FIFO_buf36.demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm98_0141_read
//	demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88
inline hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_read_bundle_read(demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88

	hw_uint<16> result;
	hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_res = demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_select(demosaic_by_FIFO_buf36, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_88_res);
	return result;
}

// load_to_demosaic_by_FIFO_buf3639_sm116_0177_write
//	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32
inline void demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_write_bundle_write(hw_uint<16>& load_to_demosaic_by_FIFO_buf3639_sm116_0177_write, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_by_to_gp_632_ld38, int demosaic_by_to_gp_632_ld37, int dynamic_address) {
	hw_uint<16> demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_res = load_to_demosaic_by_FIFO_buf3639_sm116_0177_write.extract<0, 15>();
	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_write(demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_32_res, demosaic_by_FIFO_buf36, root, demosaic_by_to_gp_632_ld38, demosaic_by_to_gp_632_ld37, dynamic_address);
}

struct demosaic_byb_demosaic_byb_update_0_sm96_0137_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_byb_cache {
  // Reader addrs...
    // { load_to_demosaic_byb_to_gp_44043_sm117_0179[root = 0, demosaic_byb_ld42, demosaic_byb_ld41] -> demosaic_byb[demosaic_byb_ld41, demosaic_byb_ld42] : 0 <= demosaic_byb_ld42 <= 1079 and 0 <= demosaic_byb_ld41 <= 1919 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_sm96_0137_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_cache demosaic_byb_demosaic_byb_update_0_sm96_0137_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27;
};



inline void demosaic_byb_demosaic_byb_update_0_sm96_0137_89_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_sm96_0137_89, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm96_0137_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27.push(demosaic_byb_demosaic_byb_update_0_sm96_0137_89);
}

inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_select(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld42, int demosaic_byb_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27 read pattern: { load_to_demosaic_byb_to_gp_44043_sm117_0179[root = 0, demosaic_byb_ld42, demosaic_byb_ld41] -> demosaic_byb[demosaic_byb_ld41, demosaic_byb_ld42] : 0 <= demosaic_byb_ld42 <= 1079 and 0 <= demosaic_byb_ld41 <= 1919 }
  // Read schedule : { load_to_demosaic_byb_to_gp_44043_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_byb_demosaic_byb_update_0_sm96_0137_89 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm96_0137_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_sm96_0137_89;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm96_0137_write
//	demosaic_byb_demosaic_byb_update_0_sm96_0137_89
inline void demosaic_byb_demosaic_byb_update_0_sm96_0137_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_sm96_0137_write, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_sm96_0137_89_res = demosaic_byb_update_0_sm96_0137_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_sm96_0137_89_write(demosaic_byb_demosaic_byb_update_0_sm96_0137_89_res, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
}

// load_to_demosaic_byb_to_gp_44043_sm117_0179_read
//	demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27
inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_read_bundle_read(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld42, int demosaic_byb_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_res = demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_select(demosaic_byb, root, demosaic_byb_ld42, demosaic_byb_ld41, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_27_res);
	return result;
}

struct demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_byb_FIFO_buf44_cache {
  // Reader addrs...
    // { demosaic_by_update_0_sm97_0139[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf44[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // # of banks: 1
  demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_cache demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94;
};



inline void demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_write(hw_uint<16>& demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_byb_to_gp_440_ld46, int demosaic_byb_to_gp_440_ld45, int dynamic_address) {
  demosaic_byb_FIFO_buf44.demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94.push(demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28);
}

inline hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_select(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94 read pattern: { demosaic_by_update_0_sm97_0139[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf44[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // Read schedule : { demosaic_by_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_byb_FIFO_buf4447_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28 = demosaic_byb_FIFO_buf44.demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm97_0139_read
//	demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94
inline hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_read_bundle_read(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_res = demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_select(demosaic_byb_FIFO_buf44, root, demosaic_by_0, demosaic_by_1, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_94_res);
	return result;
}

// load_to_demosaic_byb_FIFO_buf4447_sm102_0149_write
//	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28
inline void demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_write_bundle_write(hw_uint<16>& load_to_demosaic_byb_FIFO_buf4447_sm102_0149_write, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_byb_to_gp_440_ld46, int demosaic_byb_to_gp_440_ld45, int dynamic_address) {
	hw_uint<16> demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_res = load_to_demosaic_byb_FIFO_buf4447_sm102_0149_write.extract<0, 15>();
	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_write(demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_28_res, demosaic_byb_FIFO_buf44, root, demosaic_byb_to_gp_440_ld46, demosaic_byb_to_gp_440_ld45, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_sm98_0141_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_diff_cache {
  // Reader addrs...
    // { load_to_demosaic_diff_to_gp_04851_sm105_0155[root = 0, demosaic_diff_ld50, demosaic_diff_ld49] -> demosaic_diff[demosaic_diff_ld49, demosaic_diff_ld50] : 0 <= demosaic_diff_ld50 <= 1079 and 0 <= demosaic_diff_ld49 <= 1919 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_sm98_0141_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_cache demosaic_diff_demosaic_diff_update_0_sm98_0141_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23;
};



inline void demosaic_diff_demosaic_diff_update_0_sm98_0141_86_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_sm98_0141_86, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm98_0141_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23.push(demosaic_diff_demosaic_diff_update_0_sm98_0141_86);
}

inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_select(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld50, int demosaic_diff_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23 read pattern: { load_to_demosaic_diff_to_gp_04851_sm105_0155[root = 0, demosaic_diff_ld50, demosaic_diff_ld49] -> demosaic_diff[demosaic_diff_ld49, demosaic_diff_ld50] : 0 <= demosaic_diff_ld50 <= 1079 and 0 <= demosaic_diff_ld49 <= 1919 }
  // Read schedule : { load_to_demosaic_diff_to_gp_04851_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_diff_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_diff_demosaic_diff_update_0_sm98_0141_86 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm98_0141_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_sm98_0141_86;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm98_0141_write
//	demosaic_diff_demosaic_diff_update_0_sm98_0141_86
inline void demosaic_diff_demosaic_diff_update_0_sm98_0141_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_sm98_0141_write, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_sm98_0141_86_res = demosaic_diff_update_0_sm98_0141_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_sm98_0141_86_write(demosaic_diff_demosaic_diff_update_0_sm98_0141_86_res, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
}

// load_to_demosaic_diff_to_gp_04851_sm105_0155_read
//	demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23
inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_read_bundle_read(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld50, int demosaic_diff_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_res = demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_select(demosaic_diff, root, demosaic_diff_ld50, demosaic_diff_ld49, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_23_res);
	return result;
}

struct demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_diff_FIFO_buf52_cache {
  // Reader addrs...
    // { cp9_1_update_0_sm99_0143[root = 0, cp9_1_0, cp9_1_1] -> demosaic_diff_FIFO_buf52[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
  // # of banks: 1
  demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_cache demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102;
};



inline void demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_write(hw_uint<16>& demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int demosaic_diff_to_gp_048_ld54, int demosaic_diff_to_gp_048_ld53, int dynamic_address) {
  demosaic_diff_FIFO_buf52.demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102.push(demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24);
}

inline hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_select(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int cp9_1_0, int cp9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102 read pattern: { cp9_1_update_0_sm99_0143[root = 0, cp9_1_0, cp9_1_1] -> demosaic_diff_FIFO_buf52[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
  // Read schedule : { cp9_1_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_diff_FIFO_buf5255_sm103_0151[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24 = demosaic_diff_FIFO_buf52.demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24;
  return 0;
}

// # of bundles = 2
// cp9_1_update_0_sm99_0143_read
//	demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102
inline hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_read_bundle_read(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int cp9_1_0, int cp9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_res = demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_select(demosaic_diff_FIFO_buf52, root, cp9_1_0, cp9_1_1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_102_res);
	return result;
}

// load_to_demosaic_diff_FIFO_buf5255_sm103_0151_write
//	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24
inline void demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_write_bundle_write(hw_uint<16>& load_to_demosaic_diff_FIFO_buf5255_sm103_0151_write, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int demosaic_diff_to_gp_048_ld54, int demosaic_diff_to_gp_048_ld53, int dynamic_address) {
	hw_uint<16> demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_res = load_to_demosaic_diff_FIFO_buf5255_sm103_0151_write.extract<0, 15>();
	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_write(demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_24_res, demosaic_diff_FIFO_buf52, root, demosaic_diff_to_gp_048_ld54, demosaic_diff_to_gp_048_ld53, dynamic_address);
}

struct demosaicb_demosaicb_update_0_sm92_0129_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaicb_cache {
  // Reader addrs...
    // { load_to_demosaicb_to_gp_15659_sm104_0153[root = 0, demosaicb_ld58, demosaicb_ld57] -> demosaicb[demosaicb_ld57, demosaicb_ld58] : 0 <= demosaicb_ld58 <= 1081 and 0 <= demosaicb_ld57 <= 1921 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_sm92_0129_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_cache demosaicb_demosaicb_update_0_sm92_0129_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15;
};



inline void demosaicb_demosaicb_update_0_sm92_0129_74_write(hw_uint<16>& demosaicb_demosaicb_update_0_sm92_0129_74, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_sm92_0129_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15.push(demosaicb_demosaicb_update_0_sm92_0129_74);
}

inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_select(demosaicb_cache& demosaicb, int root, int demosaicb_ld58, int demosaicb_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15 read pattern: { load_to_demosaicb_to_gp_15659_sm104_0153[root = 0, demosaicb_ld58, demosaicb_ld57] -> demosaicb[demosaicb_ld57, demosaicb_ld58] : 0 <= demosaicb_ld58 <= 1081 and 0 <= demosaicb_ld57 <= 1921 }
  // Read schedule : { load_to_demosaicb_to_gp_15659_sm104_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaicb_demosaicb_update_0_sm92_0129_74 = demosaicb.demosaicb_demosaicb_update_0_sm92_0129_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_sm92_0129_74;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm92_0129_write
//	demosaicb_demosaicb_update_0_sm92_0129_74
inline void demosaicb_demosaicb_update_0_sm92_0129_write_bundle_write(hw_uint<16>& demosaicb_update_0_sm92_0129_write, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_sm92_0129_74_res = demosaicb_update_0_sm92_0129_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_sm92_0129_74_write(demosaicb_demosaicb_update_0_sm92_0129_74_res, demosaicb, root, demosaicb_0, demosaicb_1, dynamic_address);
}

// load_to_demosaicb_to_gp_15659_sm104_0153_read
//	demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15
inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_read_bundle_read(demosaicb_cache& demosaicb, int root, int demosaicb_ld58, int demosaicb_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15

	hw_uint<16> result;
	hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_res = demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_select(demosaicb, root, demosaicb_ld58, demosaicb_ld57, dynamic_address);
	set_at<0, 16>(result, demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_15_res);
	return result;
}

struct demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaicb_FIFO_buf60_cache {
  // Reader addrs...
    // { demosaic_update_0_sm93_0131[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf60[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // # of banks: 1
  demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_cache demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85;
};



inline void demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_write(hw_uint<16>& demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaicb_to_gp_156_ld62, int demosaicb_to_gp_156_ld61, int dynamic_address) {
  demosaicb_FIFO_buf60.demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85.push(demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16);
}

inline hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_select(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85 read pattern: { demosaic_update_0_sm93_0131[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf60[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // Read schedule : { demosaic_update_0_sm93_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_demosaicb_FIFO_buf6063_sm100_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16 = demosaicb_FIFO_buf60.demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85.peek(/* one reader or all rams */ 0);
  return value_demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_sm93_0131_read
//	demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85
inline hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_read_bundle_read(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85

	hw_uint<16> result;
	hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_res = demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_select(demosaicb_FIFO_buf60, root, demosaic_0, demosaic_1, dynamic_address);
	set_at<0, 16>(result, demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_85_res);
	return result;
}

// load_to_demosaicb_FIFO_buf6063_sm100_0145_write
//	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16
inline void demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_write_bundle_write(hw_uint<16>& load_to_demosaicb_FIFO_buf6063_sm100_0145_write, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaicb_to_gp_156_ld62, int demosaicb_to_gp_156_ld61, int dynamic_address) {
	hw_uint<16> demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_res = load_to_demosaicb_FIFO_buf6063_sm100_0145_write.extract<0, 15>();
	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_write(demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_16_res, demosaicb_FIFO_buf60, root, demosaicb_to_gp_156_ld62, demosaicb_to_gp_156_ld61, dynamic_address);
}

struct denoise_denoise_update_0_sm91_0127_72_to_denoise_load_to_denoise_to_gp_76467_sm106_0157_11_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoise_cache {
  // Reader addrs...
    // { load_to_denoise_to_gp_76467_sm106_0157[root = 0, denoise_ld66, denoise_ld65] -> denoise[denoise_ld65, denoise_ld66] : 0 <= denoise_ld66 <= 1083 and 0 <= denoise_ld65 <= 1923 }
  // # of banks: 1
  denoise_denoise_update_0_sm91_0127_72_to_denoise_load_to_denoise_to_gp_76467_sm106_0157_11_cache denoise_denoise_update_0_sm91_0127_72_to_denoise_load_to_denoise_to_gp_76467_sm106_0157_11;
};



inline void denoise_denoise_update_0_sm91_0127_72_write(hw_uint<16>& denoise_denoise_update_0_sm91_0127_72, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
  denoise.denoise_denoise_update_0_sm91_0127_72_to_denoise_load_to_denoise_to_gp_76467_sm106_0157_11.push(denoise_denoise_update_0_sm91_0127_72);
}

inline hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm106_0157_11_select(denoise_cache& denoise, int root, int denoise_ld66, int denoise_ld65, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_load_to_denoise_to_gp_76467_sm106_0157_11 read pattern: { load_to_denoise_to_gp_76467_sm106_0157[root = 0, denoise_ld66, denoise_ld65] -> denoise[denoise_ld65, denoise_ld66] : 0 <= denoise_ld66 <= 1083 and 0 <= denoise_ld65 <= 1923 }
  // Read schedule : { load_to_denoise_to_gp_76467_sm106_0157[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { denoise_update_0_sm91_0127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm91_0127_72 = denoise.denoise_denoise_update_0_sm91_0127_72_to_denoise_load_to_denoise_to_gp_76467_sm106_0157_11.peek(/* one reader or all rams */ 0);
  return value_denoise_denoise_update_0_sm91_0127_72;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm91_0127_write
//	denoise_denoise_update_0_sm91_0127_72
inline void denoise_denoise_update_0_sm91_0127_write_bundle_write(hw_uint<16>& denoise_update_0_sm91_0127_write, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_sm91_0127_72_res = denoise_update_0_sm91_0127_write.extract<0, 15>();
	denoise_denoise_update_0_sm91_0127_72_write(denoise_denoise_update_0_sm91_0127_72_res, denoise, root, denoise_0, denoise_1, dynamic_address);
}

// load_to_denoise_to_gp_76467_sm106_0157_read
//	denoise_load_to_denoise_to_gp_76467_sm106_0157_11
inline hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm106_0157_read_bundle_read(denoise_cache& denoise, int root, int denoise_ld66, int denoise_ld65, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise_load_to_denoise_to_gp_76467_sm106_0157_11

	hw_uint<16> result;
	hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm106_0157_11_res = denoise_load_to_denoise_to_gp_76467_sm106_0157_11_select(denoise, root, denoise_ld66, denoise_ld65, dynamic_address);
	set_at<0, 16>(result, denoise_load_to_denoise_to_gp_76467_sm106_0157_11_res);
	return result;
}

struct denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
	// Capacity: 3851
	// # of read delays: 9
  // 0, 1, 2, 1924, 1925, 1926, 3848, 3849, 3850
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1921> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1921> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1924() {
		return f6;
	}

	inline hw_uint<16> peek_1925() {
		return f8;
	}

	inline hw_uint<16> peek_1926() {
		return f10;
	}

	inline hw_uint<16> peek_3847() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3848() {
		return f12;
	}

	inline hw_uint<16> peek_3849() {
		return f14;
	}

	inline hw_uint<16> peek_3850() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_FIFO_buf68_cache {
  // Reader addrs...
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // # of banks: 1
  denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9_cache denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9;
};



inline void denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_write(hw_uint<16>& denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int denoise_to_gp_764_ld70, int denoise_to_gp_764_ld69, int dynamic_address) {
  denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.push(denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12);
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_3850();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_1926();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_2();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_3849();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_1925();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_1();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_3848();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_1924();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83 read pattern: { demosaicb_update_0_sm92_0129[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_merged_banks_9.peek_0();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm92_0129_read
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82
//	denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83
inline hw_uint<144> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_read_bundle_read(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  // # of ports in bundle: 9
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82
    // denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83

	hw_uint<144> result;
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<0, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_75_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<16, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_76_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<32, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_77_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<48, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_78_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<64, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_79_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<80, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_80_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<96, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_81_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<112, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_82_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83_res = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<128, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_83_res);
	return result;
}

// load_to_denoise_FIFO_buf6871_sm107_0159_write
//	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12
inline void denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_write_bundle_write(hw_uint<16>& load_to_denoise_FIFO_buf6871_sm107_0159_write, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int denoise_to_gp_764_ld70, int denoise_to_gp_764_ld69, int dynamic_address) {
	hw_uint<16> denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_res = load_to_denoise_FIFO_buf6871_sm107_0159_write.extract<0, 15>();
	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_write(denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_12_res, denoise_FIFO_buf68, root, denoise_to_gp_764_ld70, denoise_to_gp_764_ld69, dynamic_address);
}

struct denoiseb_denoiseb_update_0_sm90_0125_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoiseb_cache {
  // Reader addrs...
    // { load_to_denoiseb_to_gp_87275_sm119_0183[root = 0, denoiseb_ld74, denoiseb_ld73] -> denoiseb[denoiseb_ld73, denoiseb_ld74] : 0 <= denoiseb_ld74 <= 1083 and 0 <= denoiseb_ld73 <= 1923 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_sm90_0125_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_cache denoiseb_denoiseb_update_0_sm90_0125_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7;
};



inline void denoiseb_denoiseb_update_0_sm90_0125_46_write(hw_uint<16>& denoiseb_denoiseb_update_0_sm90_0125_46, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_sm90_0125_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7.push(denoiseb_denoiseb_update_0_sm90_0125_46);
}

inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_select(denoiseb_cache& denoiseb, int root, int denoiseb_ld74, int denoiseb_ld73, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7 read pattern: { load_to_denoiseb_to_gp_87275_sm119_0183[root = 0, denoiseb_ld74, denoiseb_ld73] -> denoiseb[denoiseb_ld73, denoiseb_ld74] : 0 <= denoiseb_ld74 <= 1083 and 0 <= denoiseb_ld73 <= 1923 }
  // Read schedule : { load_to_denoiseb_to_gp_87275_sm119_0183[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoiseb_denoiseb_update_0_sm90_0125_46 = denoiseb.denoiseb_denoiseb_update_0_sm90_0125_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_sm90_0125_46;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm90_0125_write
//	denoiseb_denoiseb_update_0_sm90_0125_46
inline void denoiseb_denoiseb_update_0_sm90_0125_write_bundle_write(hw_uint<16>& denoiseb_update_0_sm90_0125_write, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_sm90_0125_46_res = denoiseb_update_0_sm90_0125_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_sm90_0125_46_write(denoiseb_denoiseb_update_0_sm90_0125_46_res, denoiseb, root, denoiseb_0, denoiseb_1, dynamic_address);
}

// load_to_denoiseb_to_gp_87275_sm119_0183_read
//	denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7
inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_read_bundle_read(denoiseb_cache& denoiseb, int root, int denoiseb_ld74, int denoiseb_ld73, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7

	hw_uint<16> result;
	hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_res = denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_select(denoiseb, root, denoiseb_ld74, denoiseb_ld73, dynamic_address);
	set_at<0, 16>(result, denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_7_res);
	return result;
}

struct denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoiseb_FIFO_buf76_cache {
  // Reader addrs...
    // { denoise_update_0_sm91_0127[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf76[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // # of banks: 1
  denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_cache denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73;
};



inline void denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_write(hw_uint<16>& denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoiseb_to_gp_872_ld78, int denoiseb_to_gp_872_ld77, int dynamic_address) {
  denoiseb_FIFO_buf76.denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73.push(denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8);
}

inline hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_select(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoise_0, int denoise_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73 read pattern: { denoise_update_0_sm91_0127[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf76[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // Read schedule : { denoise_update_0_sm91_0127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_denoiseb_FIFO_buf7679_sm120_0185[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8 = denoiseb_FIFO_buf76.denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73.peek(/* one reader or all rams */ 0);
  return value_denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm91_0127_read
//	denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73
inline hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_read_bundle_read(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoise_0, int denoise_1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73

	hw_uint<16> result;
	hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_res = denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_select(denoiseb_FIFO_buf76, root, denoise_0, denoise_1, dynamic_address);
	set_at<0, 16>(result, denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_73_res);
	return result;
}

// load_to_denoiseb_FIFO_buf7679_sm120_0185_write
//	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8
inline void denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_write_bundle_write(hw_uint<16>& load_to_denoiseb_FIFO_buf7679_sm120_0185_write, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoiseb_to_gp_872_ld78, int denoiseb_to_gp_872_ld77, int dynamic_address) {
	hw_uint<16> denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_res = load_to_denoiseb_FIFO_buf7679_sm120_0185_write.extract<0, 15>();
	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_write(denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_8_res, denoiseb_FIFO_buf76, root, denoiseb_to_gp_872_ld78, denoiseb_to_gp_872_ld77, dynamic_address);
}

struct raw_raw_update_0_sm89_0123_0_to_raw_load_to_raw_to_gp_98083_sm88_0121_3_cache {
	// RAM Box: {[0, 1927], [0, 1087]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct raw_cache {
  // Reader addrs...
    // { load_to_raw_to_gp_98083_sm88_0121[root = 0, raw_ld82, raw_ld81] -> raw[raw_ld81, raw_ld82] : 0 <= raw_ld82 <= 1087 and 0 <= raw_ld81 <= 1927 }
  // # of banks: 1
  raw_raw_update_0_sm89_0123_0_to_raw_load_to_raw_to_gp_98083_sm88_0121_3_cache raw_raw_update_0_sm89_0123_0_to_raw_load_to_raw_to_gp_98083_sm88_0121_3;
};



inline void raw_raw_update_0_sm89_0123_0_write(hw_uint<16>& raw_raw_update_0_sm89_0123_0, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
  raw.raw_raw_update_0_sm89_0123_0_to_raw_load_to_raw_to_gp_98083_sm88_0121_3.push(raw_raw_update_0_sm89_0123_0);
}

inline hw_uint<16> raw_load_to_raw_to_gp_98083_sm88_0121_3_select(raw_cache& raw, int root, int raw_ld82, int raw_ld81, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_load_to_raw_to_gp_98083_sm88_0121_3 read pattern: { load_to_raw_to_gp_98083_sm88_0121[root = 0, raw_ld82, raw_ld81] -> raw[raw_ld81, raw_ld82] : 0 <= raw_ld82 <= 1087 and 0 <= raw_ld81 <= 1927 }
  // Read schedule : { load_to_raw_to_gp_98083_sm88_0121[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  // Write schedule: { raw_update_0_sm89_0123[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm89_0123_0 = raw.raw_raw_update_0_sm89_0123_0_to_raw_load_to_raw_to_gp_98083_sm88_0121_3.peek(/* one reader or all rams */ 0);
  return value_raw_raw_update_0_sm89_0123_0;
  return 0;
}

// # of bundles = 2
// load_to_raw_to_gp_98083_sm88_0121_read
//	raw_load_to_raw_to_gp_98083_sm88_0121_3
inline hw_uint<16> raw_load_to_raw_to_gp_98083_sm88_0121_read_bundle_read(raw_cache& raw, int root, int raw_ld82, int raw_ld81, int dynamic_address) {
  // # of ports in bundle: 1
    // raw_load_to_raw_to_gp_98083_sm88_0121_3

	hw_uint<16> result;
	hw_uint<16> raw_load_to_raw_to_gp_98083_sm88_0121_3_res = raw_load_to_raw_to_gp_98083_sm88_0121_3_select(raw, root, raw_ld82, raw_ld81, dynamic_address);
	set_at<0, 16>(result, raw_load_to_raw_to_gp_98083_sm88_0121_3_res);
	return result;
}

// raw_update_0_sm89_0123_write
//	raw_raw_update_0_sm89_0123_0
inline void raw_raw_update_0_sm89_0123_write_bundle_write(hw_uint<16>& raw_update_0_sm89_0123_write, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_sm89_0123_0_res = raw_update_0_sm89_0123_write.extract<0, 15>();
	raw_raw_update_0_sm89_0123_0_write(raw_raw_update_0_sm89_0123_0_res, raw, root, raw_0, raw_1, dynamic_address);
}

struct raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25_cache {
	// RAM Box: {[0, 1927], [0, 1087]}
	// Capacity: 7717
	// # of read delays: 25
  // 0, 1, 2, 3, 4, 1928, 1929, 1930, 1931, 1932, 3856, 3857, 3858, 3859, 3860, 5784, 5785, 5786, 5787, 5788, 7712, 7713, 7714, 7715, 7716
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1923> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 1923> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 1923> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 1923> f39;
	hw_uint<16> f40;
	hw_uint<16> f42;
	hw_uint<16> f44;
	hw_uint<16> f46;
	hw_uint<16> f48;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1928() {
		return f10;
	}

	inline hw_uint<16> peek_1929() {
		return f12;
	}

	inline hw_uint<16> peek_1930() {
		return f14;
	}

	inline hw_uint<16> peek_1931() {
		return f16;
	}

	inline hw_uint<16> peek_1932() {
		return f18;
	}

	inline hw_uint<16> peek_3855() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_3856() {
		return f20;
	}

	inline hw_uint<16> peek_3857() {
		return f22;
	}

	inline hw_uint<16> peek_3858() {
		return f24;
	}

	inline hw_uint<16> peek_3859() {
		return f26;
	}

	inline hw_uint<16> peek_3860() {
		return f28;
	}

	inline hw_uint<16> peek_5783() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_5784() {
		return f30;
	}

	inline hw_uint<16> peek_5785() {
		return f32;
	}

	inline hw_uint<16> peek_5786() {
		return f34;
	}

	inline hw_uint<16> peek_5787() {
		return f36;
	}

	inline hw_uint<16> peek_5788() {
		return f38;
	}

	inline hw_uint<16> peek_7711() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_7712() {
		return f40;
	}

	inline hw_uint<16> peek_7713() {
		return f42;
	}

	inline hw_uint<16> peek_7714() {
		return f44;
	}

	inline hw_uint<16> peek_7715() {
		return f46;
	}

	inline hw_uint<16> peek_7716() {
		return f48;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f48 = f46;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f42 = f40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1923
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
    f39.push(f38);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1923
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
    f29.push(f28);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1923
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
    f19.push(f18);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1923
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_FIFO_buf84_cache {
  // Reader addrs...
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // # of banks: 1
  raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25_cache raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25;
};



inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_write(hw_uint<16>& raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_980_ld86, int raw_to_gp_980_ld85, int dynamic_address) {
  raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.push(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4);
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_7716();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_5788();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3860();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1932();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_4();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_7715();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_5787();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3859();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1931();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_7714();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_5786();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3858();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1930();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_2();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_7713();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_5785();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3857();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1929();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_7712();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_5784();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_3856();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_1928();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71 read pattern: { denoiseb_update_0_sm90_0125[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_merged_banks_25.peek_0();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm90_0125_read
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70
//	raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71
inline hw_uint<400> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_read_bundle_read(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  // # of ports in bundle: 25
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70
    // raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71

	hw_uint<400> result;
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<0, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_47_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<16, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_48_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<32, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_49_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<48, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_50_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<64, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_51_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<80, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_52_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<96, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_53_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<112, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_54_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<128, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_55_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<144, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_56_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<160, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_57_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<176, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_58_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<192, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_59_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<208, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_60_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<224, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_61_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<240, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_62_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<256, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_63_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<272, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_64_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<288, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_65_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<304, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_66_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<320, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_67_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<336, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_68_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<352, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_69_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<368, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_70_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71_res = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<384, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm90_0125_71_res);
	return result;
}

// load_to_raw_FIFO_buf8487_sm118_0181_write
//	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4
inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_write_bundle_write(hw_uint<16>& load_to_raw_FIFO_buf8487_sm118_0181_write, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_980_ld86, int raw_to_gp_980_ld85, int dynamic_address) {
	hw_uint<16> raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_res = load_to_raw_FIFO_buf8487_sm118_0181_write.extract<0, 15>();
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_write(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_4_res, raw_FIFO_buf84, root, raw_to_gp_980_ld86, raw_to_gp_980_ld85, dynamic_address);
}

// Total re-use buffer capacity: 307984 bits
// Operation logic
inline void load_to_demosaic_diff_FIFO_buf5255_sm103_0151(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_048, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_to_gp_048
	auto demosaic_diff_to_gp_048__lp_1_m_demosaic_diff_to_gp_048_ld53__p__0_rp__c____demosaic_diff_to_gp_048_ld54_value = demosaic_diff_to_gp_048.read();
	// Produce: demosaic_diff_FIFO_buf52
	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm103_0151_write_bundle_write(/* arg names */demosaic_diff_to_gp_048__lp_1_m_demosaic_diff_to_gp_048_ld53__p__0_rp__c____demosaic_diff_to_gp_048_ld54_value, demosaic_diff_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void cp9_1_update_0_sm99_0143(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp9_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_FIFO_buf52
	auto demosaic_diff_FIFO_buf52_1_m__lp_1_m_cp9_1_1__p__0_rp___p__0_p_0_c_____1_m_cp9_1_0__p__0_p_0_value = demosaic_diff_FIFO_buf52_cp9_1_update_0_sm99_0143_read_bundle_read(demosaic_diff_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp9_1_generated_compute_unrolled_1(demosaic_diff_FIFO_buf52_1_m__lp_1_m_cp9_1_1__p__0_rp___p__0_p_0_c_____1_m_cp9_1_0__p__0_p_0_value);
	// Produce: cp9_1
	cp9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_048, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_diff_FIFO_buf52_cache demosaic_diff_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { cp9_1_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_diff_FIFO_buf5255_sm103_0151[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { cp9_1_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for cp9_1_update_0_sm99_0143(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_FIFO_buf5255_sm103_0151[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_diff_FIFO_buf5255_sm103_0151(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 31 <= i3 <= 32 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_diff_FIFO_buf5255_sm103_0151(demosaic_diff_to_gp_048 /* buf name */, demosaic_diff_FIFO_buf52, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          cp9_1_update_0_sm99_0143(demosaic_diff_FIFO_buf52 /* buf name */, cp9_1, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaicb_FIFO_buf6063_sm100_0145(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_156, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_to_gp_156
	auto demosaicb_to_gp_156__lp_1_m_demosaicb_to_gp_156_ld61__p__0_rp__c____demosaicb_to_gp_156_ld62_value = demosaicb_to_gp_156.read();
	// Produce: demosaicb_FIFO_buf60
	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm100_0145_write_bundle_write(/* arg names */demosaicb_to_gp_156__lp_1_m_demosaicb_to_gp_156_ld61__p__0_rp__c____demosaicb_to_gp_156_ld62_value, demosaicb_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0_sm93_0131(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, demosaic_cache& demosaic, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_FIFO_buf60
	auto demosaicb_FIFO_buf60_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value = demosaicb_FIFO_buf60_demosaic_update_0_sm93_0131_read_bundle_read(demosaicb_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf60_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_sm93_0131_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_6811_sm110_0165(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld9__p__0_rp__c____demosaic_ld10_value = demosaic_load_to_demosaic_to_gp_6811_sm110_0165_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_68
	demosaic_to_gp_68.write(demosaic__lp_1_m_demosaic_ld9__p__0_rp__c____demosaic_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_303_sm108_0161(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value = demosaic_load_to_demosaic_to_gp_303_sm108_0161_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_30
	demosaic_to_gp_30.write(demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_156, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_68) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_FIFO_buf60_cache demosaicb_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_to_gp_303_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_update_0_sm93_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_demosaicb_FIFO_buf6063_sm100_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { load_to_demosaic_to_gp_303_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaic_to_gp_303_sm108_0161(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_to_gp_6811_sm110_0165(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1085 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1925 + -1*i2)) >= 0)))
//   { demosaic_update_0_sm93_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaic_update_0_sm93_0131(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaicb_FIFO_buf6063_sm100_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaicb_FIFO_buf6063_sm100_0145(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 and 11 <= i3 <= 12; [0, i1, i2, 14] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927; [0, i1, i2, 13] : 6 <= i1 <= 1085 and 6 <= i2 <= 1925 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaicb_FIFO_buf6063_sm100_0145(demosaicb_to_gp_156 /* buf name */, demosaicb_FIFO_buf60, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_update_0_sm93_0131(demosaicb_FIFO_buf60 /* buf name */, demosaic, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 <= 1925 }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 <= 1925 }
	          // { [i0, i1, i2] : 1085 - i1 >= 0 }
	          // { [i0, i1, i2] : 1925 - i2 >= 0 }
	        if ((((((1085 + -1*i1)) >= 0) && (((1925 + -1*i2)) >= 0)))) {
	          load_to_demosaic_to_gp_6811_sm110_0165(demosaic /* buf name */, demosaic_to_gp_68, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_to_gp_303_sm108_0161(demosaic /* buf name */, demosaic_to_gp_30, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void raw_update_0_sm89_0123(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value);
	// Produce: raw
	raw_raw_update_0_sm89_0123_write_bundle_write(/* arg names */compute_result, raw, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_raw_to_gp_98083_sm88_0121(raw_cache& raw, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_980, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw
	auto raw__lp_1_m_raw_ld81__p__0_rp__c____raw_ld82_value = raw_load_to_raw_to_gp_98083_sm88_0121_read_bundle_read(raw/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: raw_to_gp_980
	raw_to_gp_980.write(raw__lp_1_m_raw_ld81__p__0_rp__c____raw_ld82_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_raw_0_raw_ld82_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_980) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_raw_0_raw_ld82__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_raw_to_gp_98083_sm88_0121[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927; raw_update_0_sm89_0123[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
//   { load_to_raw_to_gp_98083_sm88_0121[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for load_to_raw_to_gp_98083_sm88_0121(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { raw_update_0_sm89_0123[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for raw_update_0_sm89_0123(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1087 and 0 <= i2 <= 1927 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          raw_update_0_sm89_0123(raw_oc /* buf name */, raw, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_to_gp_98083_sm88_0121(raw /* buf name */, raw_to_gp_980, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bxb_FIFO_buf2831_sm114_0173(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_224, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_to_gp_224
	auto demosaic_bxb_to_gp_224__lp_1_m_demosaic_bxb_to_gp_224_ld29__p__0_rp__c____demosaic_bxb_to_gp_224_ld30_value = demosaic_bxb_to_gp_224.read();
	// Produce: demosaic_bxb_FIFO_buf28
	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm114_0173_write_bundle_write(/* arg names */demosaic_bxb_to_gp_224__lp_1_m_demosaic_bxb_to_gp_224_ld29__p__0_rp__c____demosaic_bxb_to_gp_224_ld30_value, demosaic_bxb_FIFO_buf28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0_sm95_0135(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, demosaic_bx_cache& demosaic_bx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_FIFO_buf28
	auto demosaic_bxb_FIFO_buf28_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value = demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm95_0135_read_bundle_read(demosaic_bxb_FIFO_buf28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf28_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_sm95_0135_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bx_to_gp_51619_sm112_0169(demosaic_bx_cache& demosaic_bx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx__lp_1_m_demosaic_bx_ld17__p__0_rp__c____demosaic_bx_ld18_value = demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm112_0169_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bx_to_gp_516
	demosaic_bx_to_gp_516.write(demosaic_bx__lp_1_m_demosaic_bx_ld17__p__0_rp__c____demosaic_bx_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_224, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_516) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_FIFO_buf28_cache demosaic_bxb_FIFO_buf28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_bxb_FIFO_buf2831_sm114_0173[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; demosaic_bx_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_bx_to_gp_51619_sm112_0169[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_bxb_FIFO_buf2831_sm114_0173[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bxb_FIFO_buf2831_sm114_0173(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_bx_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bx_update_0_sm95_0135(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_bx_to_gp_51619_sm112_0169[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bx_to_gp_51619_sm112_0169(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 and 19 <= i3 <= 21 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bxb_FIFO_buf2831_sm114_0173(demosaic_bxb_to_gp_224 /* buf name */, demosaic_bxb_FIFO_buf28, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_bx_update_0_sm95_0135(demosaic_bxb_FIFO_buf28 /* buf name */, demosaic_bx, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_to_gp_51619_sm112_0169(demosaic_bx /* buf name */, demosaic_bx_to_gp_516, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf47_sm109_0163(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_30
	auto demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld5__p__0_rp__c____demosaic_to_gp_30_ld6_value = demosaic_to_gp_30.read();
	// Produce: demosaic_FIFO_buf4
	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm109_0163_write_bundle_write(/* arg names */demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld5__p__0_rp__c____demosaic_to_gp_30_ld6_value, demosaic_FIFO_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0_sm94_0133(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf4
	auto demosaic_FIFO_buf4_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm94_0133_read_bundle_read(demosaic_FIFO_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf4_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_sm94_0133_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bxb_to_gp_22427_sm113_0171(demosaic_bxb_cache& demosaic_bxb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_224, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb__lp_1_m_demosaic_bxb_ld25__p__0_rp__c____demosaic_bxb_ld26_value = demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm113_0171_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bxb_to_gp_224
	demosaic_bxb_to_gp_224.write(demosaic_bxb__lp_1_m_demosaic_bxb_ld25__p__0_rp__c____demosaic_bxb_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_224) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf4_cache demosaic_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_FIFO_buf47_sm109_0163[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_bxb_to_gp_22427_sm113_0171[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_FIFO_buf47_sm109_0163[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaic_FIFO_buf47_sm109_0163(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_bxb_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bxb_update_0_sm94_0133(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_bxb_to_gp_22427_sm113_0171[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bxb_to_gp_22427_sm113_0171(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 and 17 <= i3 <= 18; [0, i1, i2, 16] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_FIFO_buf47_sm109_0163(demosaic_to_gp_30 /* buf name */, demosaic_FIFO_buf4, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          demosaic_bxb_update_0_sm94_0133(demosaic_FIFO_buf4 /* buf name */, demosaic_bxb, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_bxb_to_gp_22427_sm113_0171(demosaic_bxb /* buf name */, demosaic_bxb_to_gp_224, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_byb_FIFO_buf4447_sm102_0149(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_440, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_to_gp_440
	auto demosaic_byb_to_gp_440__lp_1_m_demosaic_byb_to_gp_440_ld45__p__0_rp__c____demosaic_byb_to_gp_440_ld46_value = demosaic_byb_to_gp_440.read();
	// Produce: demosaic_byb_FIFO_buf44
	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm102_0149_write_bundle_write(/* arg names */demosaic_byb_to_gp_440__lp_1_m_demosaic_byb_to_gp_440_ld45__p__0_rp__c____demosaic_byb_to_gp_440_ld46_value, demosaic_byb_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0_sm97_0139(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, demosaic_by_cache& demosaic_by, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_FIFO_buf44
	auto demosaic_byb_FIFO_buf44_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value = demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm97_0139_read_bundle_read(demosaic_byb_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf44_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_sm97_0139_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_to_gp_63235_sm115_0175(demosaic_by_cache& demosaic_by, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_632, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by
	auto demosaic_by__lp_1_m_demosaic_by_ld33__p__0_rp__c____demosaic_by_ld34_value = demosaic_by_load_to_demosaic_by_to_gp_63235_sm115_0175_read_bundle_read(demosaic_by/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_by_to_gp_632
	demosaic_by_to_gp_632.write(demosaic_by__lp_1_m_demosaic_by_ld33__p__0_rp__c____demosaic_by_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_440, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_632) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_FIFO_buf44_cache demosaic_byb_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_byb_FIFO_buf4447_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_by_to_gp_63235_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_by_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_byb_FIFO_buf4447_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_byb_FIFO_buf4447_sm102_0149(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_to_gp_63235_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_by_to_gp_63235_sm115_0175(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_by_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_by_update_0_sm97_0139(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 25 <= i3 <= 27 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_byb_FIFO_buf4447_sm102_0149(demosaic_byb_to_gp_440 /* buf name */, demosaic_byb_FIFO_buf44, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_by_update_0_sm97_0139(demosaic_byb_FIFO_buf44 /* buf name */, demosaic_by, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_by_to_gp_63235_sm115_0175(demosaic_by /* buf name */, demosaic_by_to_gp_632, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bx_FIFO_buf2023_sm101_0147(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_516, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_to_gp_516
	auto demosaic_bx_to_gp_516__lp_1_m_demosaic_bx_to_gp_516_ld21__p__0_rp__c____demosaic_bx_to_gp_516_ld22_value = demosaic_bx_to_gp_516.read();
	// Produce: demosaic_bx_FIFO_buf20
	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm101_0147_write_bundle_write(/* arg names */demosaic_bx_to_gp_516__lp_1_m_demosaic_bx_to_gp_516_ld21__p__0_rp__c____demosaic_bx_to_gp_516_ld22_value, demosaic_bx_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0_sm96_0137(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, demosaic_byb_cache& demosaic_byb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_FIFO_buf20
	auto demosaic_bx_FIFO_buf20_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm96_0137_read_bundle_read(demosaic_bx_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf20_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_sm96_0137_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_byb_to_gp_44043_sm117_0179(demosaic_byb_cache& demosaic_byb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_440, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb__lp_1_m_demosaic_byb_ld41__p__0_rp__c____demosaic_byb_ld42_value = demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm117_0179_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_byb_to_gp_440
	demosaic_byb_to_gp_440.write(demosaic_byb__lp_1_m_demosaic_byb_ld41__p__0_rp__c____demosaic_byb_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_516, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_440) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_FIFO_buf20_cache demosaic_bx_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_bx_FIFO_buf2023_sm101_0147[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_byb_to_gp_44043_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_bx_FIFO_buf2023_sm101_0147[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bx_FIFO_buf2023_sm101_0147(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_byb_to_gp_44043_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_byb_to_gp_44043_sm117_0179(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_byb_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_byb_update_0_sm96_0137(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 23 <= i3 <= 24; [0, i1, i2, 22] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_FIFO_buf2023_sm101_0147(demosaic_bx_to_gp_516 /* buf name */, demosaic_bx_FIFO_buf20, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_byb_update_0_sm96_0137(demosaic_bx_FIFO_buf20 /* buf name */, demosaic_byb, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_byb_to_gp_44043_sm117_0179(demosaic_byb /* buf name */, demosaic_byb_to_gp_440, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf1215_sm111_0167(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_68, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_68
	auto demosaic_to_gp_68__lp_1_m_demosaic_to_gp_68_ld13__p__0_rp__c____demosaic_to_gp_68_ld14_value = demosaic_to_gp_68.read();
	// Produce: demosaic_FIFO_buf12
	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm111_0167_write_bundle_write(/* arg names */demosaic_to_gp_68__lp_1_m_demosaic_to_gp_68_ld13__p__0_rp__c____demosaic_to_gp_68_ld14_value, demosaic_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_FIFO_buf3639_sm116_0177(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_632, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by_to_gp_632
	auto demosaic_by_to_gp_632__lp_1_m_demosaic_by_to_gp_632_ld37__p__0_rp__c____demosaic_by_to_gp_632_ld38_value = demosaic_by_to_gp_632.read();
	// Produce: demosaic_by_FIFO_buf36
	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm116_0177_write_bundle_write(/* arg names */demosaic_by_to_gp_632__lp_1_m_demosaic_by_to_gp_632_ld37__p__0_rp__c____demosaic_by_to_gp_632_ld38_value, demosaic_by_FIFO_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0_sm98_0141(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, demosaic_diff_cache& demosaic_diff, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf12
	auto demosaic_FIFO_buf12_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_FIFO_buf12_demosaic_diff_update_0_sm98_0141_read_bundle_read(demosaic_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by_FIFO_buf36
	auto demosaic_by_FIFO_buf36_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm98_0141_read_bundle_read(demosaic_by_FIFO_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf12_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value, demosaic_by_FIFO_buf36_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_sm98_0141_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_to_gp_04851_sm105_0155(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_048, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff__lp_1_m_demosaic_diff_ld49__p__0_rp__c____demosaic_diff_ld50_value = demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm105_0155_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_diff_to_gp_048
	demosaic_diff_to_gp_048.write(demosaic_diff__lp_1_m_demosaic_diff_ld49__p__0_rp__c____demosaic_diff_ld50_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_632, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_68, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_048) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf12_cache demosaic_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_FIFO_buf36_cache demosaic_by_FIFO_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_FIFO_buf1215_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_diff_to_gp_04851_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_diff_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_by_FIFO_buf3639_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_FIFO_buf1215_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_FIFO_buf1215_sm111_0167(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1085 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_to_gp_04851_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_diff_to_gp_04851_sm105_0155(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_diff_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_diff_update_0_sm98_0141(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_FIFO_buf3639_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_by_FIFO_buf3639_sm116_0177(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 28 <= i3 <= 30; [0, i1, i2, 15] : 6 <= i1 <= 1085 and 8 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 1085 }
	        // { [i0, i1, i2] : i1 <= 1085 }
	          // { [i0, i1, i2] : 1085 - i1 >= 0 }
	        if ((((((1085 + -1*i1)) >= 0)))) {
	          load_to_demosaic_FIFO_buf1215_sm111_0167(demosaic_to_gp_68 /* buf name */, demosaic_FIFO_buf12, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_by_FIFO_buf3639_sm116_0177(demosaic_by_to_gp_632 /* buf name */, demosaic_by_FIFO_buf36, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_diff_update_0_sm98_0141(demosaic_FIFO_buf12 /* buf name */, demosaic_by_FIFO_buf36 /* buf name */, demosaic_diff, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_diff_to_gp_04851_sm105_0155(demosaic_diff /* buf name */, demosaic_diff_to_gp_048, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoise_FIFO_buf6871_sm107_0159(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_764, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_to_gp_764
	auto denoise_to_gp_764__lp_1_m_denoise_to_gp_764_ld69__p__0_rp__c____denoise_to_gp_764_ld70_value = denoise_to_gp_764.read();
	// Produce: denoise_FIFO_buf68
	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm107_0159_write_bundle_write(/* arg names */denoise_to_gp_764__lp_1_m_denoise_to_gp_764_ld69__p__0_rp__c____denoise_to_gp_764_ld70_value, denoise_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0_sm92_0129(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, demosaicb_cache& demosaicb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_FIFO_buf68
	auto denoise_FIFO_buf68_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value = denoise_FIFO_buf68_demosaicb_update_0_sm92_0129_read_bundle_read(denoise_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf68_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_sm92_0129_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_to_gp_15659_sm104_0153(demosaicb_cache& demosaicb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_156, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb__lp_1_m_demosaicb_ld57__p__0_rp__c____demosaicb_ld58_value = demosaicb_load_to_demosaicb_to_gp_15659_sm104_0153_read_bundle_read(demosaicb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaicb_to_gp_156
	demosaicb_to_gp_156.write(demosaicb__lp_1_m_demosaicb_ld57__p__0_rp__c____demosaicb_ld58_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_764, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_156) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_FIFO_buf68_cache denoise_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_demosaicb_to_gp_15659_sm104_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { load_to_denoise_FIFO_buf6871_sm107_0159[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoise_FIFO_buf6871_sm107_0159(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaicb_to_gp_15659_sm104_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaicb_to_gp_15659_sm104_0153(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaicb_update_0_sm92_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaicb_update_0_sm92_0129(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_FIFO_buf6871_sm107_0159(denoise_to_gp_764 /* buf name */, denoise_FIFO_buf68, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaicb_update_0_sm92_0129(denoise_FIFO_buf68 /* buf name */, demosaicb, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_demosaicb_to_gp_15659_sm104_0153(demosaicb /* buf name */, demosaicb_to_gp_156, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoiseb_FIFO_buf7679_sm120_0185(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_872, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_to_gp_872
	auto denoiseb_to_gp_872__lp_1_m_denoiseb_to_gp_872_ld77__p__0_rp__c____denoiseb_to_gp_872_ld78_value = denoiseb_to_gp_872.read();
	// Produce: denoiseb_FIFO_buf76
	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm120_0185_write_bundle_write(/* arg names */denoiseb_to_gp_872__lp_1_m_denoiseb_to_gp_872_ld77__p__0_rp__c____denoiseb_to_gp_872_ld78_value, denoiseb_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0_sm91_0127(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, denoise_cache& denoise, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_FIFO_buf76
	auto denoiseb_FIFO_buf76_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value = denoiseb_FIFO_buf76_denoise_update_0_sm91_0127_read_bundle_read(denoiseb_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf76_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value);
	// Produce: denoise
	denoise_denoise_update_0_sm91_0127_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoise_to_gp_76467_sm106_0157(denoise_cache& denoise, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_764, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise__lp_1_m_denoise_ld65__p__0_rp__c____denoise_ld66_value = denoise_load_to_denoise_to_gp_76467_sm106_0157_read_bundle_read(denoise/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoise_to_gp_764
	denoise_to_gp_764.write(denoise__lp_1_m_denoise_ld65__p__0_rp__c____denoise_ld66_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_872, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_764) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_FIFO_buf76_cache denoiseb_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_denoiseb_FIFO_buf7679_sm120_0185[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_denoise_to_gp_76467_sm106_0157[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; denoise_update_0_sm91_0127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
//   { load_to_denoiseb_FIFO_buf7679_sm120_0185[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoiseb_FIFO_buf7679_sm120_0185(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_denoise_to_gp_76467_sm106_0157[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoise_to_gp_76467_sm106_0157(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { denoise_update_0_sm91_0127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoise_update_0_sm91_0127(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 and 5 <= i3 <= 7 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoiseb_FIFO_buf7679_sm120_0185(denoiseb_to_gp_872 /* buf name */, denoiseb_FIFO_buf76, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          denoise_update_0_sm91_0127(denoiseb_FIFO_buf76 /* buf name */, denoise, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_to_gp_76467_sm106_0157(denoise /* buf name */, denoise_to_gp_764, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_raw_FIFO_buf8487_sm118_0181(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_980, raw_FIFO_buf84_cache& raw_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_to_gp_980
	auto raw_to_gp_980__lp_1_m_raw_to_gp_980_ld85__p__0_rp__c____raw_to_gp_980_ld86_value = raw_to_gp_980.read();
	// Produce: raw_FIFO_buf84
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm118_0181_write_bundle_write(/* arg names */raw_to_gp_980__lp_1_m_raw_to_gp_980_ld85__p__0_rp__c____raw_to_gp_980_ld86_value, raw_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0_sm90_0125(raw_FIFO_buf84_cache& raw_FIFO_buf84, denoiseb_cache& denoiseb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_FIFO_buf84
	auto raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value = raw_FIFO_buf84_denoiseb_update_0_sm90_0125_read_bundle_read(raw_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_sm90_0125_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoiseb_to_gp_87275_sm119_0183(denoiseb_cache& denoiseb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_872, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb__lp_1_m_denoiseb_ld73__p__0_rp__c____denoiseb_ld74_value = denoiseb_load_to_denoiseb_to_gp_87275_sm119_0183_read_bundle_read(denoiseb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoiseb_to_gp_872
	denoiseb_to_gp_872.write(denoiseb__lp_1_m_denoiseb_ld73__p__0_rp__c____denoiseb_ld74_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_980, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_872) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoiseb_cache denoiseb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_FIFO_buf84_cache raw_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_denoiseb_to_gp_87275_sm119_0183[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
//   { load_to_denoiseb_to_gp_87275_sm119_0183[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoiseb_to_gp_87275_sm119_0183(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { denoiseb_update_0_sm90_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoiseb_update_0_sm90_0125(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_raw_FIFO_buf8487_sm118_0181[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for load_to_raw_FIFO_buf8487_sm118_0181(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1087 and 0 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_FIFO_buf8487_sm118_0181(raw_to_gp_980 /* buf name */, raw_FIFO_buf84, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoiseb_update_0_sm90_0125(raw_FIFO_buf84 /* buf name */, denoiseb, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_denoiseb_to_gp_87275_sm119_0183(denoiseb /* buf name */, denoiseb_to_gp_872, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void cp9_1_opt_dis(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp9_1_opt_dis_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 16
  // dag size     : 12
// Bits to slack match demosaic_bx_to_gp_516 = 192
// Bits to slack match demosaic_bx_to_gp_516 = 192
  // channel width: 1
  // port width   : 16
  // dag size     : 10
// Bits to slack match demosaic_bxb_to_gp_224 = 160
// Bits to slack match demosaic_bxb_to_gp_224 = 160
  // channel width: 1
  // port width   : 16
  // dag size     : 16
// Bits to slack match demosaic_by_to_gp_632 = 256
// Bits to slack match demosaic_by_to_gp_632 = 256
  // channel width: 1
  // port width   : 16
  // dag size     : 14
// Bits to slack match demosaic_byb_to_gp_440 = 224
// Bits to slack match demosaic_byb_to_gp_440 = 224
  // channel width: 1
  // port width   : 16
  // dag size     : 18
// Bits to slack match demosaic_diff_to_gp_048 = 288
// Bits to slack match demosaic_diff_to_gp_048 = 288
  // channel width: 1
  // port width   : 16
  // dag size     : 8
// Bits to slack match demosaic_to_gp_30 = 128
// Bits to slack match demosaic_to_gp_30 = 128
  // channel width: 1
  // port width   : 16
  // dag size     : 16
// Bits to slack match demosaic_to_gp_68 = 256
// Bits to slack match demosaic_to_gp_68 = 256
  // channel width: 1
  // port width   : 16
  // dag size     : 6
// Bits to slack match demosaicb_to_gp_156 = 96
// Bits to slack match demosaicb_to_gp_156 = 96
  // channel width: 1
  // port width   : 16
  // dag size     : 4
// Bits to slack match denoise_to_gp_764 = 64
// Bits to slack match denoise_to_gp_764 = 64
  // channel width: 1
  // port width   : 16
  // dag size     : 2
// Bits to slack match denoiseb_to_gp_872 = 32
// Bits to slack match denoiseb_to_gp_872 = 32
  // channel width: 1
  // port width   : 16
  // dag size     : 2
// Bits to slack match raw_to_gp_980 = 32
// Bits to slack match raw_to_gp_980 = 32
// Bits in internal re-use buffers               : 307984 bits
// Bits in channels needed to guarantee causality: 32
// Bits in channels needed to match slack        : 1728
  HWStream< hw_uint<16> > demosaic_diff_to_gp_048;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_diff_to_gp_048.values depth=18
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaicb_to_gp_156;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaicb_to_gp_156.values depth=6
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_30;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_30.values depth=8
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_68;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_68.values depth=18
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > raw_to_gp_980;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=raw_to_gp_980.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bxb_to_gp_224;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bxb_to_gp_224.values depth=10
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bx_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bx_to_gp_516.values depth=12
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_byb_to_gp_440;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_byb_to_gp_440.values depth=14
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_by_to_gp_632;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_by_to_gp_632.values depth=16
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoise_to_gp_764;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoise_to_gp_764.values depth=4
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoiseb_to_gp_872;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoiseb_to_gp_872.values depth=2
#endif //__VIVADO_SYNTH__


  Extracted_raw_0_raw_ld82_(raw_oc, raw_to_gp_980);
  Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86_(raw_to_gp_980, denoiseb_to_gp_872);
  Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78_(denoiseb_to_gp_872, denoise_to_gp_764);
  Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70_(denoise_to_gp_764, demosaicb_to_gp_156);
  Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62_(demosaicb_to_gp_156, demosaic_to_gp_30, demosaic_to_gp_68);
  Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6_(demosaic_to_gp_30, demosaic_bxb_to_gp_224);
  Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30_(demosaic_bxb_to_gp_224, demosaic_bx_to_gp_516);
  Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42_(demosaic_bx_to_gp_516, demosaic_byb_to_gp_440);
  Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46_(demosaic_byb_to_gp_440, demosaic_by_to_gp_632);
  Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14_(demosaic_by_to_gp_632, demosaic_to_gp_68, demosaic_diff_to_gp_048);
  Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54_(demosaic_diff_to_gp_048, cp9_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp9_1_opt_dis_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp9_1_opt_dis(raw_oc, cp9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp9_1_update_0_sm99_0143[root = 0, cp9_1_0, cp9_1_1] -> cp9_1[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
const int cp9_1_update_0_sm99_0143_write_pipe0_num_transfers = 2073600;
  // { raw_update_0_sm89_0123[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1927 }
const int raw_update_0_sm89_0123_read_pipe0_num_transfers = 2097664;


extern "C" {

void cp9_1_opt_dis_accel(hw_uint<16>* raw_update_0_sm89_0123_read_pipe0, hw_uint<16>* cp9_1_update_0_sm99_0143_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_sm89_0123_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp9_1_update_0_sm99_0143_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_sm89_0123_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp9_1_update_0_sm99_0143_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_sm89_0123_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp9_1_update_0_sm99_0143_write_pipe0_channel;

  burst_read<16>(raw_update_0_sm89_0123_read_pipe0, raw_update_0_sm89_0123_read_pipe0_channel, raw_update_0_sm89_0123_read_pipe0_num_transfers*size);

  cp9_1_opt_dis_wrapper(raw_update_0_sm89_0123_read_pipe0_channel, cp9_1_update_0_sm99_0143_write_pipe0_channel, size);

  burst_write<16>(cp9_1_update_0_sm99_0143_write_pipe0, cp9_1_update_0_sm99_0143_write_pipe0_channel, cp9_1_update_0_sm99_0143_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cp9_1_opt_dis_rdai(HWStream<hw_uint<16> >& raw_update_0_sm89_0123_read_pipe0, HWStream<hw_uint<16> >&  cp9_1_update_0_sm99_0143_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_sm89_0123_read_pipe0
#pragma HLS INTERFACE axis register port = cp9_1_update_0_sm99_0143_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp9_1_opt_dis(raw_update_0_sm89_0123_read_pipe0, cp9_1_update_0_sm99_0143_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

