# 5-1: DoTwice Game
## Task Description
In this task, you need to design one program of performing a do_twice game. The intuitive idea is that when user wants to do one operation, your program helps him to do twice.

## Requirements
1. Design one function double(x) to calculate the double (2*x) of one number x.
2. Design one function square(x) to calculate the square of one number x.
3. Design one function cube(x) to calculate the cube (x3) of one number x.
4. Design one program to ask user to input one number and another operation number (1 for Double, 2 for Square, 3 for Cube). Once user inputs these information, your program needs to perform the operation twice to user. For example, if user inputs option 1 to double the number x, your program should output double(double(x)) (e.g. 4x) for user. If the user inputs 2 to square x, your program should output square(square(x)) (e.g. x4)). If the user inputs 3 to cube the x, your program should output cube(cube(x)) (e.g. x9). Hint: you need to write one higher order function doTwice(func, x) to perform the function func twice for given number x.
> Note that Option: 1 - double, 2 - square, 3 – cube

## Example
> Your output should be in ONE line
```
$ python2 DoTwice.py 4 1
16

$ python2 DoTwice.py 4 2
256

$ python2 DoTwice.py 4 4
It cannot be supported!
```