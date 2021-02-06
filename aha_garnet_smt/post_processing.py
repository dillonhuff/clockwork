import csv, sys

args = sys.argv
if len(args) != 2:
    print("python post_processing.py path_to_buffer_stream_folder")
    assert False
dir_name = args[1]
print (f"read file from {dir_name}")

def csv2dict(dir_name, buf_name):
    agg_smt = {}
    key_list = []
    with open(dir_name + buf_name + '_SMT.csv') as agg_stream:
        agg_stream_reader = csv.reader(agg_stream, delimiter=',')
        for row_cnt, row in enumerate(agg_stream_reader):
            if row_cnt == 0:
                # print(f'Column names are {", ".join(row)}')
                for key in row:
                    agg_smt[key.strip()] = []
                    key_list.append(key.strip())
            else:
                # print(f'cycle {row_cnt} data is : {", ".join(row)}.')
                for i, data in enumerate(row):
                    agg_smt[key_list[i]].append(data)
    return agg_smt

def dict2csv(dir_name, buf_name, smt_dict):
    with open(dir_name + buf_name + "_post.csv", 'w') as stream_csv:
        stream_len = 999999
        for key in smt_dict.keys():
            stream_len = min(len(smt_dict[key.strip()]), stream_len)
        csvwriter = csv.writer(stream_csv, delimiter=',', quoting=csv.QUOTE_MINIMAL)
        csvwriter.writerow(smt_dict.keys())
        for cycle in range(stream_len):
            row = []
            for key in smt_dict.keys():
                row.append(smt_dict[key.strip()][cycle])
            csvwriter.writerow(row)


agg_smt = csv2dict(dir_name, "agg")
sram_smt = csv2dict(dir_name, "sram")
tb_smt = csv2dict(dir_name, "tb")

sram_smt["data_in"] = agg_smt['data_out']
sram_smt["valid_in"] = agg_smt["valid_out"]
# shift sram down by 1 row (data appears one cycle after ren)
sram_adjust = sram_smt["data_out"][0:-1]
sram_adjust.insert(0, sram_smt["data_out"][0])
# add X's till first valid data for sram data out for solver
for i in range(len(sram_smt["valid_out"])):
    sram_adjust[i] = ' [X X X X]'
    valid = sram_smt["valid_out"][i]
    if valid == ' 1':
        break
sram_smt["data_out"] = sram_adjust
tb_smt["data_in"] = sram_smt["data_out"]

dict2csv(dir_name, "agg", agg_smt)
dict2csv(dir_name, "sram", sram_smt)
dict2csv(dir_name, "tb", tb_smt)

# convert conv33 2 output ports to just 1 output port for testing
"""orig = csv2dict(dir_name, "tb")
for i in range(len(orig["valid_out"])):
    if orig["valid_out"][i] == '3':
        orig["data_out"][i] = '  ' + orig["data_out"][i].split(" ")[1] + ' 0]'
        orig["valid_out"][i] = '1'

dict2csv(dir_name, "tb", orig)"""



