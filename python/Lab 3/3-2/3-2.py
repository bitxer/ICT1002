############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 3-2         #
# Done By: bitxer          #
############################

def letter_count(x):
    char = set(x)
    count = {}
    for c in char:
        count[c] = x.count(c)
    return count

def double_count(x, y):
    return various_count(x, y)

def various_count(*x):
    return letter_count(''.join(c for c in x))

def main():
    import sys
    args = sys.argv[1]
    args = args.split(',')
    count = various_count(*args)
    for c in sorted(count, reverse=True):
        print '%s:%d' % (c, count[c]), 

if __name__ == '__main__':
    main()