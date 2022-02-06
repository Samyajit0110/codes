import csv
with open('something.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)
