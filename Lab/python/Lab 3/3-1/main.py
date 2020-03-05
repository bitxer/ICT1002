############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 3-1         #
# Done By: bitxer          #
############################
import myMath as m

def main():
    import sys
    nums = sys.argv[1]
    nums = map(int, nums.split(','))
    maxNum = m.maximum(nums)
    minNum = m.minimum(nums)
    print "The difference is:%d " % (m.subtraction(maxNum, minNum)),
    print "The summation is:%d " % (m.add(maxNum, minNum)),
    print "The summation of all input is:%d " % (m.sumTotal(nums)),
    print "The number of even numbers is:%d " % (len(m.evenNum(nums))),
    if minNum < 5:
        nums = m.clear(nums)
    print "The values in the list are: %s " % (str(nums)),

if __name__ == '__main__':
    main()