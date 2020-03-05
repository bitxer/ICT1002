############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 4-1         #
# Done By: bitxer          #
############################
import sys

def sum_recusive(x):
    return x + sum_recusive(x-1) if x > 0 else 0

def sum_iterative(x):
    sum = 0
    for i in range(0,x+1):
        sum += i
    return sum

def main():
    args = int(sys.argv[1])
    print("The SUM value calculated by recursive is {} and by iterative is {}.".format(sum_recusive(args), sum_iterative(args)))

if __name__ == '__main__':
    main()