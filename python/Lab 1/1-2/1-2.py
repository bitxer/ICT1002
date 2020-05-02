############################
# Module: ICT1002          #
# Language: Python2        #
# Lab Exercise 1-2         #
# Done By: bitxer          #
############################

def main():
    import sys
    try:
        unit = sys.argv[1]
        height = sys.argv[2]
        weight = sys.argv[3]
        if unit == 'imperial':
            bmi = (703 * weight) / height**2
        elif unit == 'metric':
            bmi =  weight / height**2
        else:
            raise Exception
        
        print('%0.2f\t' % bmi),
        if bmi < 16:
            print('Severe Thinness')
        elif bmi > 16 and bmi < 17:
            print('Moderate Thinness')
        elif bmi > 17 and bmi < 18.5:
            print('Mild Thinness')
        elif bmi > 18.5 and bmi < 25:
            print('Normal')
        elif bmi > 25 and bmi < 30:
            print('Overweight')
        elif bmi > 30 and bmi < 35:
            print('Obese Class I')
        elif bmi > 35 and bmi < 40:
            print('Obese Class II')
        else:
            print('Obese Class III')
    except:
        print('Your input is invalid!')

if __name__ == '__main__':
    main()