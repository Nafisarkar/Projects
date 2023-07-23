import csv

with open('data/data.csv') as csv_file:
    csv_reader = csv.reader(csv_file,delimiter=',')
    line_count = 0
    for row in csv_reader:
        if line_count == 0:
            print(f'Column name are {",".join(row)}')
            line_count += 1
        elif line_count == 10:
            break
        else:
            for x in row:
                print(x, end=" ")
            print()
            line_count += 1
print("Line Count ", line_count)
