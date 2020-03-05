############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 5-1         #
# Done By: bitxer          #
############################
import sys

def double(x):
    return x * 2

def square(x):
    return x ** 2

def cube(x):
    return x ** 3

def doTwice(func, x):
    return func(func(x))

def main():
    try:
        num = int(sys.argv[1])
        choice = sys.argv[2]
        ops = {'1':double,'2':square,'3':cube}
        print(doTwice(ops[choice], num))
    except:
        print('It cannot be supported!')

if __name__ == '__main__':
    main()