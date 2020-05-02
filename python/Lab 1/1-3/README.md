# 1-3: Employee Weekly Payment Calculator
## Task Description
Develop one employee weekly payment calculation program as we have discussed in Lecture 2

## Requirements
1.  Allow users to run your program with three input arguments by passing three values to the program: the number of working hours, input normal rate and input the overtime rate.
2.  Your program will read the three arguments and calculate the users salary using the following two formulas
    1.  _Payment of the normal hours = normal rate * normal hours_
    2.  _Payment of the overtime hours = overtime rate * overtime hours_
3. After user inputs all the numbers, if the input numbers are invalid, you need to present an error message “Your input is invalid!”. Otherwise, you need to print out the employee’s payment of normal hours, his payment of overtime hours and total payment. The output payment requires to have 2 precisions. For instance, if payment is 2300.456, it should print 2300.45. If payment is 2300, it should print 2300.00.
### NOTE
1.  The working hours within 40 belong to normal hours and those beyond 40 hours are considered as overtime hours.
2.  You have to strictly follow the input and output format.

## Example
```
$ python2 weeklyPaymentCalculator.py 20 30 100
Normal Salary:600.00, Extra Salary:0.00, Total Salary:600.00
$ python2 weeklyPaymentCalculator.py 60 30 200
Normal Salary:1200.00, Extra Salary:4000.00, Total Salary:5200.00
$ python2 weeklyPaymentCalculator.py 10000 10 200
Your input is invalid!
```