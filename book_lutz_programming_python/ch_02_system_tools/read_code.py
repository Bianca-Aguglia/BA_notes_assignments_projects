import sys

if len(sys.argv) > 1:
    target_file = sys.argv[1]
    with open(target_file, 'r') as infile:
        for line in infile.readlines():
            print(line, end='')
else:
    print('nothing to read')