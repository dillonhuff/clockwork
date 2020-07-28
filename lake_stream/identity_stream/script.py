# this file parses outputs from Clockwork for the
# specified input format for the SMT solver

import csv


def zero_arr(width):
    data0 = '['
    for i in range(width):
        data0 += '0 '
    data0 = data0[0:-1] + ']'
    return data0


def format_comma_bracket(string):
    l = list(string)
    newl = list(string)
    ni = 0
    for i in range(len(l)):
        char = l[i]
        if i == 1:
            ni = 1
        try:
            if isinstance(int(char), int):
                try:
                    if isinstance(int(l[i-1]), int):
                        assert True
                except:
                    newl.insert(ni, '[')
                    if l[i + 1] == ']':
                        newl.insert(ni + 2, ']')
                        ni += 2
                    else:
                        newl.insert(ni + 2, '],')
                        ni += 2
        except ValueError:
            assert True

        ni += 1
    new_string = ""
    for item in newl:
        new_string += item
    return new_string


def parse(csv_file_name, data_in_width, data_out_width):
    with open(csv_file_name[:-4] + '_parse.csv', 'w') as parsefile:
        filewriter = csv.writer(parsefile, delimiter=',',
                                quotechar='|', quoting=csv.QUOTE_MINIMAL)
        # file headings
        filewriter.writerow(['cycle num', 'data_in', 'data_out'])
        # input file
        csv_file = open(csv_file_name, "r")
        reader = csv.reader(csv_file, delimiter=',')

        # zeros for input / output data when there is no write / read
        data_in0 = format_comma_bracket(zero_arr(data_in_width))
        data_out0 = format_comma_bracket(zero_arr(data_out_width))

        # TODO clean this up -> issues with initializing array?
        data = []
        for row in reader:
            # there is a read and write on this cycle
            format_row = format_comma_bracket(row[1][5:])
            if len(data) > 0 and \
                    (int(data[len(data) - 1][0]) == int(row[0][3:])):
                if row[0][0:2] == "rd":
                    data[len(data) - 1][2] = format_row
                else:
                    data[len(data) - 1][1] = format_row
            else:
                if row[0][0:2] == "rd":
                    data.append([row[0][3:], data_in0, format_row])
                else:
                    data.append([row[0][3:], format_row, data_out0])

        # add rows with no ops that do not have a cycle count
        i = 0
        prev_dat = -1
        while i < len(data):
            dat = data[i]
            if int(dat[0]) == prev_dat + 1:
                filewriter.writerow(dat)
                # break condition
                i += 1
                prev_dat = int(dat[0])
            else:
                prev_dat += 1
                filewriter.writerow([str(prev_dat), data_in0, data_out0])


if __name__ == "__main__":
    parse('buf_agg_SMT.csv', 1, 4)
    #parse('buf_sram_SMT.csv', 4, 4)
    #parse('buf_tb_SMT.csv', 4, 1)
