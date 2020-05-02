############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 1-1         #
# Done By: bitxer          #
############################

def main():
    import sys
    if len(sys.argv) != 4:
        print('Your input is invalid!')
        exit(1)

    args = [
        sys.argv[1],
        sys.argv[2],
        sys.argv[3]
    ]

    try:
        sum = int(args[0]) + int(args[1]) + int(args[2])
        avg = sum/3.0
        print('Average: %-4.2f' % avg)
    except:
        print('Your input is invalid!')

if __name__ == '__main__':
    main()
