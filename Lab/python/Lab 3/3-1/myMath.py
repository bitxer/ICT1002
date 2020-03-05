############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 2-3         #
# Done By: bitxer          #
############################

def add(x,y):
    return x + y

def subtraction(x, y):
    return x - y

def evenNum(x):
    return [i for i in x if i % 2 == 0]

def maximum(x):
    return max(x)

def minimum(x):
    return min(x)

def absolute(x):
    return x if x < 0 else x * -1

def sumTotal(x):
    return sum(x)

def clear(x):
    return [0 for i in range(len(x))]