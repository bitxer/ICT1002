# 4-2: Digits
## Task Description
In this task, we need to design one recursive function digit(x) to calculate how many digits a positive number has. For instance, 10 has two digits, and 122 has three digits, and 5679 has four digits.

## Requirements
1. Write one recursive function digit(x) to calculate how many digits a positive number has
2. Write another function digit_iterative(x) to achieve the same functionality to calculate the number of the digits of x, but uses while loop. Write one main program to allow users to input one number and call these two functions to evaluate the output.
> Your output should be in ONE line

## Hint
The number of digits can be calculated by repeatedly dividing by 10 (without keeping the remainder) until the number is less than 10.

## Example
```
$ python2 Digit.py 789
The number of digit(s) calculated by recursive is 3 and by iterative is 3.
```