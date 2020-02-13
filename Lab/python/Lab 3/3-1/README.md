# 3-1: Developing Your Own Math Module
## Task Description
Develop your own math module (myMath) including the following eight basic functions.

1.  add(x, y) → return the summation of x and y
2.  subtraction(x, y) → return the subtraction between x and y
3.  evenNum(x) → return the number of even numbers in the given list
4.  maximum(x) → return the maximum value from the given list x
5.  minimum(x) → return the minimum value from the given list x
6.  absolute(x) → return the absolute value of one number x
7.  sumTotal(x) → return the summation of all the elements for a given list x
8.  clear(x) → this sets all the elements into 0 for a given list x

## Requirements
Write one program to import the module you have created to implement the following functions.
1.  **Input** Allows users to input multiple numbers. For simplicity, you can assume all the input numbers are integers.
2.  Store all the numbers into one list
3.  Do the following:
    1.  calculate and print out the difference between the biggest and the smallest number in the list
    2.  calculate and print out the summation between the biggest and the smallest numbers in the list
    3.  calculate and print out the summation of all the input numbers in the list
    4.  calculate and print out the number of even numbers in the list
    5.  If the smallest number in the list is smaller than 5, set all the value to 0. Otherwise, remain the same. Print all the values in the list in the end.

## Hint
In order to split one string, split() function can be used. For instance, str='1,2,3,4,10', list1=str.split(',') would split the string and store the numbers in the list. Please keep in mind that each element in the list is a string type now. You have to figure out one way to convert all of them into integer.
Some of codes read as follows. Please print your results according to this format.
```
print "The difference is:%d" % (myMath.subtraction(maxNum,minNum)),
print "The summation is:%d" % (myMath.add(maxNum,minNum)),
```

## Example
```
$ python2 main.py 12,10,11,23,25,2
The difference is:23 The summation is:27 The summation of all input is:83 The number of even numbers is:3 The values in the list are.[0, 0, 0, 0, 0, 0]
```