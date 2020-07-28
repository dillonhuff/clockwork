import csv

def parse(csv_file_name, data_in_width, data_out_width):
    with open(csv_file_name[:-4] + '_parse.csv', 'w') as parsefile:
        filewriter = csv.writer(parsefile, delimiter=',',
                            quotechar='|', quoting=csv.QUOTE_MINIMAL)
        filewriter.writerow(['cycle num', 'data_in', 'data_out'])
        csv_file = open(csv_file_name, "r")
        reader = csv.reader(csv_file, delimiter=',')
        data_in0 = '['
        for i in range(data_in_width):
            data_in0 += '0 '
        data_in0 = data_in0[0:-1] + ']'

        data_out0 = '['
        for i in range(data_out_width):
            data_out0 += '0 '
        data_out0 = data_out0[0:-1] + ']'

        data = []
        for row in reader:
            # there is a read and write on this cycle
            if len(data) - 1 == int(row[0][3:]):
                if row[0][0:2] == "rd":
                    data[int(row[0][3:])][2] = row[1][5:]
                else:
                    data[int(row[0][3:])][1] = row[1][5:]
            else:
                if row[0][0:2] == "rd":
                    data.append([row[0][3:], data_in0, row[1][5:]])
                #filewriter.writerow([row[0][3:], data_in0, row[1][5:]])
                else:
                    data.append([row[0][3:], row[1][5:], data_out0])
#                filewriter.writerow([row[0][3:], row[1][5:], data_out0])

        for dat in data:
            filewriter.writerow(dat)

parse('buf_agg_SMT.csv', 1, 4)
parse('buf_sram_SMT.csv', 4, 4)
parse('buf_tb_SMT.csv', 4, 1)

