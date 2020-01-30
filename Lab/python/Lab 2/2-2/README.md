# 2-2: Even Odd Calculator
## Task Description
You are assigned to develop one program to help users calculate different information based a series of user provided numbers (integers).

## Requirements
1.  **Input**: A series of numbers
2.  **Output**: (Your output should be in one line)
3.  The summation of the even numbers and summation of the odd numbers in the input list
4.  The difference between the biggest and smallest numbers in the input list
5.  The count of even numbers and odd numbers in the input list
6.  The “cantered” average of the list of integers. The centred average can be calculated as the mean average of the values, after removing the largest and smallest values in the array. If there are multiple copies of the smallest value, ignore just one copy, and likewise for the largest value. For instance, [12,2,8,7,100] → 9; [2,2,8,11,100] → 7

To have a better understanding of the loops, please try to implement two programs: one uses for and another uses while loop.

## Example
```
$ python2 EvenOddCalculator.py 12,2,8,7,100
The sum of all even numbers is 122, the sum of all odd numbers is 7, the difference between the biggest and smallest number is 98, the total number of even numbers is 4, the total number of odd numbers is 1, the centered average is 9.
$ python2 EvenOddCalculator.py 1,2,abcd,8,11,200,301
Please enter valid integers.
```