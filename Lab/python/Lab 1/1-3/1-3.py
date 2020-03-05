############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 1-3         #
# Done By: bitxer          #
############################

def main():
    import sys
    try:
        hours = float(sys.argv[1])
        if hours > 24*7:
            raise Exception
        normrate = float(sys.argv[2])
        otrate = float(sys.argv[3])
        othour = hours - 40 if hours > 40 else 0
        
        exsal = othour * otrate
        normsal = normrate * (hours - othour)
        tsal = exsal + normsal

        print('Normal Salary:{:.2f}, Extra Salary: {:.2f}, Total Salary: {:.2f}'.format(normsal, exsal, tsal))
    except:
        print('Your input is invalid!')

if __name__ == '__main__':
    main()
