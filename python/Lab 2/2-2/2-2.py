############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 2-2         #
# Done By: bitxer          #
############################

def main(args):
    try:
        args  = args.split(',')
        args = [int(x.strip()) for x in args]
        even = []
        odd = []
        for i in args:
            i = int(i)
            if i % 2 == 0:
                even.append(i)
            else:
                odd.append(i)
        centered = (sum(args) - max(args) - min(args))/(len(args) - 2)
        print('The sum of all even numbers is {}, the sum of all odd numbers is {}, the difference between the biggest and smallest number is {}, the total number of even numbers is {}, the total number of odd numbers is {}, the centered average is {}.'.format(sum(even), sum(odd), max(args) - min(args), len(even), len(odd), centered))
    except:
        print('Please enter valid integers.')

if __name__ == '__main__':
    import sys
    if len(sys.argv) != 2:
        print('error')
    else:
        main(sys.argv[1])