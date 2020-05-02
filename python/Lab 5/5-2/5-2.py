############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 5-2         #
# Done By: bitxer          #
############################
import sys

def scale(l, s):
    return map(lambda x : x*s, l)

def sort(l):
    return sorted(l, key=lambda x : x % 10)

def goodSales(l):
    return filter(lambda x:x > sum(l)/len(l), l)

def main():
    seq = ''
    sca = ''
    ex = False
    try:
        seq = sys.argv[1]
        sca = sys.argv[2]
    except:
        ex = True
        seq = raw_input('Enter a sequence of sales number:')
        sca = raw_input('Enter the scale factor: ')
    
    seq = [int(x) for x in seq.split(',')]
    sca = int(sca)
    if ex:
        print 'The scaled number is:', scale(seq, sca)
        print 'The sorted sales numbers are:', sort(seq)
        print 'The good sales numbers are:', goodSales(seq)
    else:
        print 'The scaled number is:', scale(seq, sca),
        print 'The sorted sales numbers are:', sort(seq),
        print 'The good sales numbers are:', goodSales(seq),


if __name__ == '__main__':
    main()