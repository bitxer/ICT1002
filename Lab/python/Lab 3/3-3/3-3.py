############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 3-3         #
# Done By: bitxer          #
############################

def main():
    import sys
    can = sys.argv[1]
    seq = sys.argv[2]
    char = [can[x:x + len(seq)] for x in range(0, len(can))]
    count = char.count(seq)
    print('Pattern appears {} time!'.format(count))


if __name__ == '__main__':
    main()