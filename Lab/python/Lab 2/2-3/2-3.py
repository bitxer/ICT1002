############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 2-3         #
# Done By: bitxer          #
############################

def main(start, end):
    try:
        start = int(start)
        end = int(end)

        mod100 = start % 100 
        mod400 = start % 400

        start += 4 - (start % 4)
        if mod100 == 0 and mod400 != 0:
            start += 4

        leaps = [x for x in range(start, end + 1, 4)]
        leapyears = ', '.join(str(x) for x in leaps)

        
        print('The number of Leap Years is {}, the Leap Years are {}'.format(len(leaps), leapyears))
    except:
        print('Your input is invalid!')


if __name__ == '__main__':
    import sys
    if len(sys.argv) == 3:
        main(sys.argv[1], sys.argv[2])
    else:
        print('error')